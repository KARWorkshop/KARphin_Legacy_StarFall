#pragma once

//defines a connect packet storing all the nessary info

#include "Core/KAR/Versioning.hpp"
#include "Core/KAR/Netplay/NetUser.hpp"

namespace KAR
{
	namespace Netplay
	{
		namespace Packet
		{
			//defines a connection packet
			struct ConnectPacket
			{
				//the major version of the build
				//the minor version of the build
				//the hot-fix of the build

				//the user data

				//constructs a packet for sending

				//parses a packet into this struct
			};
		}
	}
}