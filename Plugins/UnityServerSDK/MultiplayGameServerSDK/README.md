![Unity Logo](./Docs/Images/Icon128.png)
# Multiplay Game Server SDK
## Overview
[Game Server Hosting](https://unity.com/products/game-server-hosting) is Unity's scalable server hosting platform.

The Multiplay Game Server SDK is an Unreal Engine plugin which contains all of the functionality necessary to integrate your game server with Game Server Hosting.

For additional information, please refer to the [Game Server Hosting documentation](https://docs.unity.com/game-server-hosting).
## Table of Contents
* [Prerequisites](#prerequisites)
    * [Supported Engine Versions](#supported-engine-versions)
    * [Supported Operating Systems](#supported-operating-systems)
* [Installing Unreal Engine](#installing-unreal-engine)
    * [Building the Engine from Source](#building-the-engine-from-source)
    * [Install the Engine Using the Epic Games Launcher](#install-the-engine-using-the-epic-games-launcher)
        * [Windows](#windows)
        * [macOS](#macos)
        * [Linux](#linux)
* [Installing the Plugin](#installing-the-plugin)
* [Server.json](#serverjson)
    * [Game Server Hosting (Multiplay)](#game-server-hosting-multiplay)
    * [Game Server Hosting (Clanforge)](#game-server-hosting-clanforge)
* [Game Server Lifecycle](#game-server-lifecycle)
    * [1. *Server Start*](#1-server-start)
    * [2. *Server Allocation*](#2-server-allocation)
    * [3. *Ready For Players*](#3-ready-for-players)
    * [4. *Unready For Players*](#4-unready-for-players)
    * [5. *Server Deallocation*](#5-server-deallocation)
* [Server Query Protocol (SQP)](#server-query-protocol-sqp)
* [Integrating the SDK](#integrating-the-sdk)
    * [Using C++](#using-c)
        * [UMultiplayServerConfigSubsystem](#umultiplayserverconfigsubsystem)
        * [UMultiplayGameServerSubsystem](#umultiplaygameserversubsystem)
        * [UMultiplayServerQueryHandlerSubsystem](#umultiplayserverqueryhandlersubsystem)
    * [Using Blueprint](#using-blueprint)
        * [Multiplay Server Config Subsystem](#multiplay-server-config-subsystem)
        * [Multiplay Game Server Subsystem](#multiplay-game-server-subsystem)
        * [Multiplay Server Query Handler Subsystem](#multiplay-server-query-handler-subsystem)
* [Uploading a Build](#uploading-a-build)
    * [Game Server Hosting (Multiplay)](#game-server-hosting-multiplay-1)
        * [Building a Dedicated Server](#building-a-dedicated-server)
        * [Creating a Build](#creating-a-build)
        * [Creating a Build Configuration](#creating-a-build-configuration)
        * [Creating a Fleet](#creating-a-fleet)
        * [Creating a Test Allocation](#creating-a-test-allocation)
    * [Game Server Hosting (Clanforge)](#game-server-hosting-clanforge-1)
## Prerequisites
### Supported Engine Versions
This plugin supports the following versions of Unreal Engine:
* 4.22
* 4.23
* 4.24
* 4.25
* 4.26
* 4.27
* 5.0

### Supported Operating Systems
Game Server Hosting currently supports Linux (Ubuntu 20.04).

Game Server Hosting will support Windows in a future release.

See [Integration requirements](https://docs.unity.com/game-server-hosting/concepts/integration-requirements.html#Operatin) for additional details.
## Installing Unreal Engine
If you already have a compatible version of Unreal Engine then you can skip ahead to the [plugin installation instructions](#install-the-plugin).

If you do not already have a compatible version of Unreal Engine, please read the following instructions on how to obtain Unreal Engine.

There are two methods of obtaining Unreal Engine, [building the engine from source](#building-the-engine-from-source) or installing a pre-built binary using the Epic Games launcher.

Since we will be [building a dedicated server](https://docs.unrealengine.com/4.27/en-US/InteractiveExperiences/Networking/HowTo/DedicatedServers/), it is necessary to build the engine from source.

### Building the Engine from Source
Please perform the following steps in order to build the engine from source:
1. [Create an Epic Games account](https://www.epicgames.com/id/register).
2. [Create a Github account](https://github.com/join).
3. [Link your Epic Games account to Github account](https://www.epicgames.com/account/connected).
4. Clone the [Unreal Engine source code](https://github.com/EpicGames/UnrealEngine) using GIT.
5. Checkout a branch corresponding to one of the supported engine versions specified above, i.e. `4.27`.
6. Follow the `Getting up and running` instructions in the `README.md` file for the version of the engine that you have checked out.

At this point you should have an Unreal Engine binary that can be used to create a project and [install the plugin](#installing-the-plugin).

## Installing the Plugin
1. Download the Multiplay Game Server SDK plugin.
2. Create a `Plugins` directory in the root directory of your project.
3. Copy the *Multiplay Game Server SDK* into the `Plugins` directory.
4. Launch your `.uproject`.
5. Navigate to `Edit > Plugins > Project > Other` and verify that the *Multiplay Game Server SDK* plugin is enabled.

![Image showing the Multiplay SDK properly installed and enabled.](./Docs/Images/InstalledPlugin.png)
## Server.json
### Game Server Hosting (Multiplay)
If you are using [Game Server Hosting (Multiplay)](https://docs.unity.com/game-server-hosting), skip ahead to the [Game Server Lifecycle](#multiplay-game-server-lifecycle) section.

### Game Server Hosting (Clanforge)
If you are using [Game Server Hosting (Clanforge)](https://docs.unity.com/game-server-hosting/legacy/welcome-to-multiplay.html), your `server.json` file must be configured to work properly with the *Multiplay Game Server SDK*.

The `server.json` file is a configuration file that is populated by Multiplay. 

The `server.json` file contains information about the game server instance, such as its IP address, port, and server ID.

The *Multiplay Game Server SDK* expects the following variables to be present in the `server.json` file:
* The `allocatedUUID` variable which defines the allocation ID.
* The `port` variable which defines the connection port for the session.
* The `queryPort` variable which defines the Server Query Protocol Port.
* The `serverID` variable which defines the server ID.
* The `serverLogDir` variable which defines the directory logs will be written to.

The `server.json` file is configured on [Clanforge](https://clanforge.multiplay.com).

Perform the following steps to configure the `server.json` file:
1. Navigate to the `Manage Profiles` page.
2. Select your desired profile.
3. Press the `Edit` button.
4. Navigate to the `Configs` tab.
5. Select the `server.json` file from the list.
6. Modify the `server.json` file to look like the following:
    ```json
    {
        "allocatedUUID": "$$allocated_uuid$$",
        "port": "$$port$$",
        "queryPort": "$$query_port$$",
        "serverID": "$$serverid$$",
        "serverLogDir": "$$log_dir$$"
    }
    ```
7. Press the `Save` button.

See [server.json](https://docs.unity.com/game-server-hosting/legacy/server-json-file.html) and [configuration variables](https://docs.unity.com/game-server-hosting/legacy/configuration-variables.html) for additional documentation.
## Game Server Lifecycle 
A game server hosted on Multiplay goes through the following stages:
### 1. *Server Start*
An instance of a game server binary is started.
### 2. *Server Allocation*
After an allocation request is sent from a matchmaker, Multiplay's API does arithmetic to determine which server to allocate for the match. 
If a server is determined to be the right fit for the request, it will be allocated.
The *Multiplay Game Server SDK* notifies a game server instance that it has been allocated using the `UMultiplayGameServerSubsystem::OnAllocate` multi-cast delegate.
See [Allocation Flow](https://docs.unity.com/multiplay/shared/allocation-flow.html) for additional information. 
### 3. *Ready For Players*
When the server is ready to start accepting connections, the server can be marked as "Ready for Players" and clients can begin to connect to the game server. 
A game server instance can indicate that it's ready for players by invoking the `UMultiplayGameServerSubsystem::ReadyServerForPlayers()` method.
### 4. *Unready For Players*
When the server is no longer ready for oncoming connections, the server can be marked as "Unready for Players" and clients can no longer join the game server.
A game server instance can indicate that it's unready for players by invoking the `UMultiplayGameServerSubsystem::UnreadyServer()` method.
### 5. *Server Deallocation*
When the matchmaker has determined that the game server is ready to be reused, the matchmaker sends a deallocation request to Multiplay.
The game server will be returned to the pool of available servers.
The *Multiplay Game Server SDK* notifies a game server instance that it has been deallocated using the `UMultiplayGameServerSubsystem::OnDeallocate` multi-cast delegate.
See [Deallocation Flow](https://docs.unity.com/multiplay/shared/deallocation-flow.html) for additional information. 

See [Allocations](https://docs.unity.com/multiplay/customer-onboarding-topics/allocations.html) for additional documentation.
## Server Query Protocol (SQP)
[Server Query Protocol (SQP)](https://docs.unity.com/multiplay/customer-onboarding-topics/game-server-query-protocols.html) is a protocol that facilitates querying information from a game server instance.

Game Server Hosting (Multiplay) uses the information supplied by the game server query protocol to detect unresponsive game servers and to create live dashboards of analytic data.

The *Multiplay Game Server SDK* contains a complete SQP implementation.

Users of the *Multiplay Game Server SDK* are responsible for populating the data transmitted using SQP.

Users are responsible for populating the following values:
- `BuildId` - The version number or build ID of the server.
- `CurrentPlayers` - The number of players on the server.
- `GameType` - The type of game on the server.
- `Map` - The map the server currently has loaded.
- `MaxPlayers` - The maximum number of players the server supports.
- `Port` - The game port the server has exposed.
- `ServerName` - The name of the server.

## Integrating the SDK
### Using C++
*Make sure the Multiplay Game Server SDK plugin is properly installed before proceeding.*

Add `MultiplayGameServerSDK` as a dependency of your module.
```cpp
PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "MultiplayGameServerSDK" });
```
Include the plugin header files you wish to access in your own classes. 
```cpp
#include "MultiplayServerConfigSubsystem.h"
#include "MultiplayGameServerSubsystem.h"
#include "MultiplayServerQueryHandlerSubsystem.h"
```
#### UMultiplayServerConfigSubsystem
This subsystem is responsible for retrieving the server configuration for the current session.

This subsystem reads the `server.json` file and exposes its values via the `FMultiplayServerConfig` struct.

`FMultiplayServerConfig` contains the following values:
* The server ID.
* The allocation ID.
* The Server Query Protocol Port.
* The connection port for the session.
* The directory logs will be written to.

`UMultiplayServerConfigSubsystem` automatically reads the `server.json` file on subsystem initialization.

##### How to Access `UMultiplayServerConfigSubsystem`
First we must obtain a reference to the subsystem, `UMultiplayServerConfigSubsystem` is a `UGameInstanceSubsystem` and can be retrieved from `UGameInstance`.
```cpp
UWorld* GameWorld = GetWorld();
UGameInstance* GameInstance = GameWorld->GetGameInstance();
UMultiplayServerConfigSubsystem* ServerConfigSubsystem = GameInstance->GetSubsystem<UMultiplayServerConfigSubsystem>();
```

##### GetServerConfig
After we have obtained a reference to the subsystem, `FMultiplayServerConfig` can be retrieved using `UMultiplayServerConfigSubsystem::GetServerConfig()`.

For example:
```cpp
const FMultiplayServerConfig& ServerConfig = ServerConfigSubsystem->GetServerConfig();
UE_LOG(YourLogCategory, Log, TEXT("Server ID: %lld Allocation ID: %s Server Query Port: %u Port: %u Server Log Directory: %s"), ServerConfig.ServerId, *ServerConfig.AllocationId, ServerConfig.QueryPort, ServerConfig.Port, *ServerConfig.ServerLogDirectory)
```

#### UMultiplayGameServerSubsystem

##### How to Access `UMultiplayGameServerSubsystem`
First we must obtain a reference to the subsystem, `UMultiplayGameServerSubsystem` is a `UGameInstanceSubsystem` and can be retrieved from `UGameInstance`.
```cpp
UWorld* GameWorld = GetWorld();
UGameInstance* GameInstance = GameWorld->GetGameInstance();
UMultiplayGameServerSubsystem* GameServerSubsystem = GameInstance->GetSubsystem<UMultiplayGameServerSubsystem>();
```

##### SubscribeToServerEvents
Once we obtain a reference to the subsystem, we must establish a connection between the game server instance and the SDK daemon.

`UMultiplayGameServerSubsystem::SubscribeToServerEvents()` is the method that is used to establish a connection between the game server instance and the SDK daemon.

The SDK daemon transmits events to the game server indicating when the game server has been allocated and when the game server has been deallocated.
```cpp
GameServerSubsystem->SubscribeToServerEvents();
```

##### OnAllocate
The game server instance must wait for a notification from the SDK daemon indicating that the server has been allocated.

This notification is transmitted using the `UMultiplayGameServerSubsystem::OnAllocate` dynamic multi-cast delegate.

Any setup logic should be executed within the `UMultiplayGameServerSubsystem::OnAllocate` callback. 

The `UMultiplayGameServerSubsystem::OnAllocate` delegate will return an instance of `FMultiplayAllocation`. 

`FMultiplayAllocation` contains the following data:
* The event ID for the allocation.
* The server ID for the allocation.
* The ID for the allocation.

How to add the callback:
```cpp
GameServerSubsystem->OnAllocate.AddDynamic(this, &UMyClass::OnAllocate);
```

How to remove the callback:
```cpp
GameServerSubsystem->OnAllocate.RemoveDynamic(this, &UMyClass::OnAllocate);
```

Example callback:
```cpp
void UMyClass::OnAllocate(FMultiplayAllocation Allocation)
{
    // Here is where you handle the allocation.
    // This is highly dependent on your game, however this would typically be some sort of setup process.
    // Whereby, you spawn NPCs, setup the map, log to a file, or otherwise prepare for players.
    // Once you the allocation has been handled, you can then call ReadyServerForPlayers()!

    UE_LOG(YourLogCategory, Log, TEXT("Event ID: %s Server ID: %lld Allocation ID: %s"), *Allocation.EventId, Allocation.ServerId, *Allocation.AllocationId);
}
```

**NOTE**: `UMyClass::OnAllocate` must be a `UFUNCTION`.

##### ReadyServerForPlayers
After the game server has been allocated, the game server should use `UMultiplayGameServerSubsystem::ReadyServerForPlayers()` to indicate that it's ready to accept players. Readiness is the server's way of saying it is ready for players to join the server.
You must wait until you have been allocated before you can call `UMultiplayGameServerSubsystem::ReadyServerForPlayers()`.

```cpp
void UMyClass::OnAllocate(FMultiplayAllocation Allocation)
{
    // Perform setup logic.

    FReadyServerSuccessDelegate OnSuccess;
    FReadyServerFailureDelegate OnFailure;

    OnSuccess.BindDynamic(this, &UMyClass::OnReadyServerSuccess);
    OnFailure.BindDynamic(this, &UMyClass::OnReadyServerFailure);
    
    GameServerSubsystem->ReadyServerForPlayers(OnSuccess, OnFailure);
}
```

##### GetPayloadAllocation

If the game server was allocated with an accompanying [payload](https://docs.unity.com/multiplay/shared/allocations-payload.html) then the `UMultiplayGameServerSubsystem::GetPayloadAllocation()` API can be used to retrieve the payload.

The allocation payload can be used to store up 10 KB of data that should be associated with this gameplay session.

If you are using [Unity Matchmaker](https://unity.com/products/matchmaker) then the allocation payload should be fetched in order to obtain [`MatchProperties` and the initial backfill ticket ID](https://docs.unity.com/matchmaker/integrations-and-tools.html#Allocati).

```cpp
void UMyClass::OnAllocate(FMultiplayAllocation Allocation)
{
    // Perform setup logic.

    FPayloadAllocationSuccessDelegate OnSuccess;
    FPayloadAllocationFailureDelegate OnFailure;

    OnSuccess.BindDynamic(this, &UMyClass::OnPayloadAllocationSuccess);
    OnFailure.BindDynamic(this, &UMyClass::OnPayloadAllocationFailure);
    
    GameServerSubsystem->GetPayloadAllocation(OnSuccess, OnFailure);
}
```

##### GetPayloadToken

The `UMultiplayGameServerSubsystem::GetPayloadToken()` API can be used to retrieves the JWT token associated to a specific allocation's fleet

```cpp
void UMyClass::OnAllocate(FMultiplayAllocation Allocation)
{
    // Perform setup logic.

    FPayloadTokenSuccessDelegate OnSuccess;
    FPayloadTokenFailureDelegate OnFailure;

    OnSuccess.BindDynamic(this, &UMyClass::OnPayloadTokenSuccess);
    OnFailure.BindDynamic(this, &UMyClass::OnPayloadTokenFailure);
    
    GameServerSubsystem->GetPayloadToken(OnSuccess, OnFailure);
}
```

##### UnreadyServer
Unready the server. 
This is to indicate that the server is in some condition which means it cannot accept players.
For example, after a game has ended and you need to reset the server to prepare for a new match.

We can use the `UMultiplayGameServerSubsystem::UnreadyServer()` method to communicate this to Multiplay.

```cpp
FUnreadyServerSuccessDelegate OnSuccess;
FUnreadyServerFailureDelegate OnFailure;

OnSuccess.BindDynamic(this, &UMyClass::OnUnreadyServerSuccess);
OnFailure.BindDynamic(this, &UMyClass::OnUnreadyServerFailure);

GameServerSubsystem->UnreadyServer(OnSuccess, OnFailure);
```

##### OnDeallocate
When a running sever is shutting down, Multiplay may deallocate the server. 

If there is any last minute cleanup or bookkeeping needed we can subscribe to the `UMultiplayGameServerSubsystem::OnDeallocate` dynamic multi-cast delegate in order to perform last minute operations.

The `UMultiplayGameServerSubsystem::OnDeallocate` delegate will return an instance of `FMultiplayDeallocation`. 

`FMultiplayDeallocation` contains the following data:
* The event ID for the deallocation.
* The server ID for the deallocation.
* The ID for the deallocation.

How to add the callback:
```cpp
GameServerSubsystem->OnDeallocate.AddDynamic(this, &UMyClass::OnDeallocate);
```

How to remove the callback:
```cpp
GameServerSubsystem->OnDeallocate.RemoveDynamic(this, &UMyClass::OnDeallocate);
```

Example callback:
```cpp
void UMyClass::OnDeallocate(FMultiplayDeallocation Deallocation)
{
    // Here is where you handle the deallocation.
    // This is highly dependent on your game, however this would typically be some sort of teardown process.
    // You might want to deactivate unnecessary NPCs, log to a file, or perform any other cleanup actions.

    UE_LOG(YourLogCategory, Log, TEXT("Event ID: %s Server ID: %lld Allocation ID: %s"), *Deallocation.EventId, Deallocation.EventId, *Deallocation.AllocationId);
}
```

**NOTE**: `UMyClass::OnDeallocate` must be a `UFUNCTION`.

##### UnsubscribeToServerEvents
`UMultiplayGameServerSubsystem::UnsubscribeToServerEvents()` is the method that is used to cleanup the connection between the game server instance and the SDK daemon.

```cpp
GameServerSubsystem->UnsubscribeToServerEvents();
```

#### UMultiplayServerQueryHandlerSubsystem
The `UMultiplayServerQueryHandlerSubsystem` is used to provide the relevant information for the servers SQP protocol.
To use the `UMultiplayServerQueryHandlerSubsystem` we must first retrieve it using the following.

##### Retrieving UMultiplayServerQueryHandlerSubsystem
```cpp
UWorld* GameWorld = GetWorld();
UGameInstance* GameInstance = GameWorld->GetGameInstance();
UMultiplayServerQueryHandlerSubsystem* ServerQueryHandlerSubsystem = GameInstance->GetSubsystem<UMultiplayServerQueryHandlerSubsystem>();
```
After retrieving the subsystem we must first ensure all our values are configured using the calls below.

##### IncrementCurrentPlayers
This API provides a means of atomically increasing the current number of players whenever a player joins the match:
```cpp
ServerQueryHandlerSubsystem->IncrementCurrentPlayers();
```
##### DecrementCurrentPlayers
This API provides a means of atomically decreasing the current number of players whenever a player leaves the match:
```cpp
ServerQueryHandlerSubsystem->DecrementCurrentPlayers();
```
##### SetCurrentPlayers
This API provides a means of setting the current number of players:
```cpp
UWorld* GameWorld = GetWorld();
AGameStateBase* GameState = GameWorld->GetGameState();
int32 NumCurrentPlayers = GameState->PlayerArray.Num();
ServerQueryHandlerSubsystem->SetCurrentPlayers(NumCurrentPlayers);
```
##### SetMaxPlayers
```cpp
ServerQueryHandlerSubsystem->SetMaxPlayers(64);
```
##### SetServerName
```cpp
ServerQueryHandlerSubsystem->SetServerName(TEXT("AwesomeServer"));
```
##### SetGameType
```cpp
ServerQueryHandlerSubsystem->SetGameType(TEXT("SearchAndDestroy"));
```
##### SetBuildId
```cpp
ServerQueryHandlerSubsystem->SetBuildId(TEXT("NewBuildId.123.0.1"));
```
##### SetMap
```cpp
ServerQueryHandlerSubsystem->SetMap(TEXT("MAP_TD_Dusthill"));
```
##### SetPort
```cpp
ServerQueryHandlerSubsystem->SetPort(8080);
```
Make sure to continuously update these values as they are bound to change for the duration of the game. 
This will ensure Multiplay collects and displays accurate data while the server is running.
Once all the values are set, we can make a call to `Connect()`.

##### Connect
```cpp
ServerQueryHandlerSubsystem->Connect();
```
If at any point we want to access the values we set we can use the accessor calls below.

##### GetCurrentPlayers
```cpp
int32 CurrentPlayers = ServerQueryHandlerSubsystem->GetCurrentPlayers();
```
##### GetMaxPlayers
```cpp
int32 MaxPlayers = ServerQueryHandlerSubsystem->GetMaxPlayers();
```
##### GetServerName
```cpp
FString ServerName = ServerQueryHandlerSubsystem->GetServerName();
```
##### GetGameType
```cpp
FString GameType = ServerQueryHandlerSubsystem->GetGameType();
```
##### GetBuildId
```cpp
FString BuildId = ServerQueryHandlerSubsystem->GetBuildId();
```
##### GetMap
```cpp
FString Map = ServerQueryHandlerSubsystem->GetMap();
```
##### GetPort
```cpp
int32 Port = ServerQueryHandlerSubsystem->GetPort();
```
##### Disconnect
Before server shutdown, ensure to run the `Disconnect()` function.
```cpp
ServerQueryHandlerSubsystem->Disconnect();
```
### Using Blueprint
*Make sure the Multiplay Game Server SDK plugin is properly installed before proceeding.*

#### Multiplay Server Config Subsystem
This subsystem contains the server configuration for the current session.

This subsystem retrieves this information from the `server.json` file on subsystem initialization.

The server configuration can be retrieved by placing a `UMultiplayServerConfigSubsystem` node and then accessing the `Server Config` variable.

`Server Config` contains the following values:
* The server ID.
* The allocation ID.
* The Server Query Protocol Port.
* The connection port for the session.
* The directory logs will be written to.

![GetServerConfig Blueprint example](./Docs/Images/BP_GetServerConfig.png)

#### Multiplay Game Server Subsystem
This subsystem is responsible for notifying the game server when allocation and deallocation occur.

The game server uses this subsystem to communicate when it's ready to accept players and when it is no longer ready to accept players.

##### OnAllocate
The game server is notified of an allocation by binding an event to the `OnAllocate` delegate.

Any game specific setup logic should occur after the event bound to `OnAllocate` is triggered.

The `OnAllocate` delegate returns an `FMultiplayAllocation` instance.

The `FMultiplayAllocation` instance contains the following values:
* The event ID for the allocation.
* The server ID for the allocation.
* The ID for the allocation.

![OnAllocate Blueprint example](./Docs/Images/BP_OnAllocate.png)

##### OnDeallocate
The game server is notified of a deallocation by binding an event to the `OnDeallocate` delegate.

The game server should use the `OnDeallocate` delegate to perform any game specific teardown logic.

The `OnDeallocate` delegate returns an `FMultiplayDeallocation` instance.

The `FMultiplayDeallocation` instance contains the following values:
* The event ID for the deallocation.
* The server ID for the deallocation.
* The ID for the deallocation.

![OnDeallocate Blueprint example](./Docs/Images/BP_OnDeallocate.png)

##### SubscribeToServerEvents
After binding both the `OnAllocate` delegate and `OnDeallocate` delegate, the game server should invoke `SubscribeToServerEvents` to begin receiving allocation and deallocation notifications from the Multiplay SDK daemon.

![SubscribeToServerEvents Blueprint example](./Docs/Images/BP_SubscribeToServerEvents.png)

##### ReadyServerForPlayers
After receiving an allocation notification, and optionally performing any game specific setup logic, the game server can now indicate that it's ready to accept players by invoking `ReadyServerForPlayers`.

![ReadyServerForPlayers Blueprint example](./Docs/Images/BP_ReadyServerForPlayers.png)

##### GetPayloadAllocation
If the game server was allocated with an accompanying [payload](https://docs.unity.com/multiplay/shared/allocations-payload.html) then the `GetPayloadAllocation` node can be used to retrieve the payload.

The allocation payload can be used to store up 10 KB of data that should be associated with this gameplay session.

If you are using [Unity Matchmaker](https://unity.com/products/matchmaker) then the allocation payload should be fetched in order to obtain [`MatchProperties` and the initial backfill ticket ID](https://docs.unity.com/matchmaker/integrations-and-tools.html#Allocati).

![GetPayloadAllocation Blueprint example](./Docs/Images/BP_GetPayloadAllocation.png)

##### GetPayloadToken
The `GetPayloadToken` node can be used to retrieves the JWT token associated to a specific allocation's fleet

![GetPayloadToken Blueprint example](./Docs/Images/BP_GetPayloadToken.png)

##### UnreadyServer
If at any point the state of the match changes to where we don't want to accept new players (Match nearing end, match ended and switching maps, etc.) Then we can use the `UnreadyServer` Blueprint to communicate this to Multiplay.

![UnreadyServer Blueprint example](./Docs/Images/BP_UnreadyServer.png)

##### UnsubscribeToServerEvents
`UnsubscribeToServerEvents` is the node that is used to cleanup the connection between the game server instance and the SDK daemon.

![UnsubscribeToServerEvents Blueprint example](./Docs/Images/BP_UnsubscribeToServerEvents.png)
#### Multiplay Server Query Handler Subsystem
`UMultiplayServerQueryHandlerSubsystem` is used to provide the information communicated over SQP.

To use the subsystem we must first configure all our values for the server using the Blueprints below.
##### IncrementCurrentPlayers
This API provides a means of atomically increasing the current number of players whenever a player joins the match:
![IncrementCurrentPlayers Blueprint example](./Docs/Images/BP_IncrementCurrentPlayers.png)
##### DecrementCurrentPlayers
This API provides a means of atomically decreasing the current number of players whenever a player leaves the match:
![DecrementCurrentPlayers Blueprint example](./Docs/Images/BP_DecrementCurrentPlayers.png)
##### SetCurrentPlayers
![SetCurrentPlayers Blueprint example](./Docs/Images/BP_SetCurrentPlayers.png)
##### SetMaxPlayers
![SetMaxPlayers Blueprint example](./Docs/Images/BP_SetMaxPlayers.png)
##### SetServerName
![SetServerName Blueprint example](./Docs/Images/BP_SetServerName.png)
##### SetGameType
![SetGameType Blueprint example](./Docs/Images/BP_SetGameType.png)
##### SetBuildId
![SetBuildId Blueprint example](./Docs/Images/BP_SetBuildId.png)
##### SetMap
![SetMap Blueprint example](./Docs/Images/BP_SetMap.png)
##### SetPort
![SetPort Blueprint example](./Docs/Images/BP_SetPort.png)

Make sure to continuously update these values as they are bound to change for the duration of the game. 
This will ensure Multiplay collects and displays accurate data while the server is running.
Once all the values are set, we can add in the `Connect` Blueprint.
##### Connect
![Connect Blueprint example](./Docs/Images/BP_Connect.png)

If at any point we want to access the values we set we can use the accessor Blueprints below.
##### GetCurrentPlayers
![GetCurrentPlayers Blueprint example](./Docs/Images/BP_GetCurrentPlayers.png)
##### GetMaxPlayers
![GetMaxPlayers Blueprint example](./Docs/Images/BP_GetMaxPlayers.png)
##### GetServerName
![GetServerName Blueprint example](./Docs/Images/BP_GetServerName.png)
##### GetGameType
![GetGameType Blueprint example](./Docs/Images/BP_GetGameType.png)
##### GetBuildId
![GetBuildId Blueprint example](./Docs/Images/BP_GetBuildId.png)
##### GetMap
![GetMap Blueprint example](./Docs/Images/BP_GetMap.png)
##### GetPort
![GetPort Blueprint example](./Docs/Images/BP_GetPort.png)
##### Disconnect
Before server shutdown, ensure to run the `Disconnect` Blueprint.
![Disconnect Blueprint example](./Docs/Images/BP_Disconnect.png)

## Uploading a Build
### Game Server Hosting (Multiplay)
Perform the following steps to upload a build to Multiplay.
#### Building a Dedicated Server
1. If your project doesn't have a dedicated server [build target](https://docs.unrealengine.com/4.27/en-US/ProductionPipelines/BuildTools/UnrealBuildTool/TargetFiles/), create one now.
    * **NOTE:** You must compile the engine from source in order to make a dedicated server build. Instructions for building the engine from source can be found [above](#building-the-engine-from-source). Please refer to [Setting up Dedicated Servers](https://docs.unrealengine.com/4.27/en-US/InteractiveExperiences/Networking/HowTo/DedicatedServers/) for instructions on how to build a dedicated server using Unreal Engine.
2. Launch your project in `Unreal Engine`.
3. Select the dedicated server build target from `File > Package Project > Build Target`.
4. Select your operating system:
    * For Windows, select `File > Package Project > Windows (64-bit)`.
    * For Linux, select `File > Package Project > Linux > Linux (AArch64)`. 
5. Select the output directory for the build.
#### Creating a Build
1. Once the build has completed successfully, navigate to `Multiplayer > Game Server Hosting > Builds` on the [Unity Dashboard](https://dashboard.unity3d.com).
2. Press the `Create build` button.
3. Enter a name for your build in the `Build name` field.
4. Select the `Operating system` corresponding to your build.
5. Select `Direct file upload` as the `Upload method`. 
    * See [Container builds](https://docs.unity.com/game-server-hosting/concepts/container-builds.html) for instructions on uploading a container build.
6. Press the `Next` button.
7. Drag the folder containing your build onto the dialog.
    * If you are uploading a Linux build, you should see the following files:
        * `<your_dedicated_server_target>.sh`
        * `Engine/`
        * `<your_project_name>/`
    * If you are uploading a Windows build, you should see the following files:
        * `<your_dedicated_server_target>.exe`
        * `Engine/`
        * `<your_project_name>/`
8. Press the `Upload ## Files` button.
9. Once the files have been uploaded successfully, press the `Next` button.
10. Press the `Finish` button.

See [Builds](https://docs.unity.com/game-server-hosting/concepts/builds.html) for additional details.
#### Creating a Build Configuration
1. Navigate to `Multiplayer > Game Server Hosting > Build Configurations`.
2. Press the `Create build configuration` button.
3. Enter a name for your build configuration in the `Build configuration name` field.
4. Select the build created in the previous step from the `Build` dropdown.
5. Select your executable from the `Game server executable` dropdown.
    * For a Linux build, you should select `<your_dedicated_server_target>.sh` as your executable.
    * For a Windows build, you should select **TODO**: Insert filename as your executable.
6. Ensure that `Query type` is to set `SQP`.
7. Configure the launch parameters for your build configuration.
    * See [Redirect log output for games using Unreal](https://docs.unity.com/game-server-hosting/guides/redirect-logs-for-unreal-games.html) for instructions on how to configure the Unreal Engine `-LOG` argument.
8. Press the `Next` button.
9. Add additional configuration variables if desired.
10. Press the `Next` button.
11. Configure custom CPU speed and memory if desired.
12. Press the `Finish` button.

See [Build configurations](https://docs.unity.com/game-server-hosting/concepts/build-configurations.html) for additional details.
#### Creating a Fleet
1. Navigate to `Multiplayer > Game Server Hosting > Fleets`.
2. Enter a name for your fleet into the `Fleet name` field.
3. Select the `Operating system` corresponding to the build created in the previous step.
4. Select the build configuration created in the previous step from the `Build configuration(s)` dropdown.
5. Press the `Next` button.
6. Select a region for your fleet from the `Region` dropdown.
7. Configure the `Min available servers` desired for your fleet.
    * **NOTE:** Your fleet must contain at least one server to perform an allocation.
8. Configure the `Max available servers` desired for your fleet.
9. Press the `Finish` button.

See [Fleets](https://docs.unity.com/game-server-hosting/concepts/fleets.html) for additional details.
#### Creating a Test Allocation
1. Navigate to `Multiplayer > Game Server Hosting > Test Allocations`.
2. Press the `Create test allocation` button.
3. Select the fleet that was created previously from the `Fleet` dropdown.
4. Select the region that was chosen previously from the `Region` dropdown.
5. Select the build configuration that was created previously from the `Build configuration` dropdown.
6. Press the `Next` button.
7. Press the `Run test` button.
8. Press the `Finish` button.

At this point you should see an active allocation under the `Test allocations` header.

This allocation will be cleaned up automatically after sixty minutes.

You can cleanup the allocation sooner by pressing the `Deallocate` button.

See [Allocations](https://docs.unity.com/game-server-hosting/concepts/allocations.html) for additional details.
### Game Server Hosting (Clanforge)
See [Update your game](https://docs.unity.com/game-server-hosting/legacy/learn-how-to-update-your-game.html) for instructions on uploading a build to Clanforge.
