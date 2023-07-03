// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

struct SampleConstants
{
	/** The product id for the running application, found on the dev portal */
	static constexpr char ProductId[] = "b497b175330445f2a3e22406b0c2db1c";

	/** The sandbox id for the running application, found on the dev portal */
	static constexpr char SandboxId[] = "9da644c89986480bb372c371c8ff4641";

	/** The deployment id for the running application, found on the dev portal */
	static constexpr char DeploymentId[] = "e8ed47f3b597470285e17c369123b83e";

	/** Client id of the service permissions entry, found on the dev portal */
	static constexpr char ClientCredentialsId[] = "xyza7891jFjQFE0WVCzsbENGankKy9Gr";

	/** Client secret for accessing the set of permissions, found on the dev portal */
	static constexpr char ClientCredentialsSecret[] = "uHeHGFY7I7vYalXWDnGt+Yszl6y+qv51hZjNW78tank";

	/** Game name */
	static constexpr char GameName[] = "Shadow Strike";

	/** Encryption key. Not used by this sample. */
	static constexpr char EncryptionKey[] = "1111111111111111111111111111111111111111111111111111111111111111";
};