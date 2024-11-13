#pragma once

//defines the settings for a Lobby

namespace KAR
{
	namespace Netplay
	{
		namespace Lobby
		{
			//what's the public setting of this lobby
			enum class PublicStatus
			{
				Public_Everyone = 0,
				Public_Direct,

				Public_FriendsOnly,

				LAN,

				Count
			};

			//defines a lobby
			struct Lobby
			{
	            //the host code associated with the lobby
	            //the port of the host
				//is the lobby open to everyone online, LAN, direct connect, or friends only

				//the name of the lobby

				//is the lobby private
				//the lobby password

				//are spectators allowed

				//max players allowed

				//the host of the lobby
				//the host's region

				//what events are enabled
				//what stadiums are enabled

				//the game ID of what is being played

				//what gecko codes are enabled

				//what mods are enabled

				//saves the lobby into a shareable JSON invite file

				//loads a lobby data from a shareable JSON invite file
			};
		}
	}
}