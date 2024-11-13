#pragma once

//defines the settings for a Lobby

#include "Common/FileUtil.h"

#include "Core/KAR/Versioning.hpp"
#include "Core/KAR/json.hpp"


#include <string>

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
	            std::string IP_HostCode = "127.0.0.1",    // the host code/IP associated with the lobby
	            host_connect_port = "2626"; // the port of the host
	            PublicStatus publicStatus = PublicStatus::Public_Everyone; // is the lobby open to everyone online, LAN,
	                                                                       // direct connect, or friends only

				//the name of the lobby

				//is the lobby private
				//the lobby password

				//are spectators allowed

				//max players allowed

				//the host of the lobby
				//the host's region

				//what events are enabled
				//what stadiums are enabled

				std::string gameID = ""; // the game ID of what is being played
	            std::string gameName = "HP_101"; // the file name of the game being played

				//what gecko codes are enabled

				//what mods are enabled

				//saves the lobby into a shareable JSON invite file
				inline void GenerateLobbyInviteFile()
				{ 
					//builds json
		            nlohmann::json data;
		            
					//version, so we can parse incompatable ones
					data["buildVer-major"] = KAR_TOURNY_EDITION_VER_MAJOR;
		            data["buildVer-min"] = KAR_TOURNY_EDITION_VER_MINOR;
		            data["buildVer-hot-fix"] = KAR_TOURNY_EDITION_VER_HOT_FIX;

					//data for connection
		            data["hostMode"] = "Traversal";
		            data["ip_connect_code"] = IP_HostCode;
		            data["port"] = host_connect_port;
		            
					//public status
					data["publicStatus"] = publicStatus;
		            data["maxPlayerCount"] = 4;

					//host
					data["host_displayName"] = "Jas";
		            data["host_region"] = "NA";

					//events
		            data["events"]["1"] = false;
		            data["events"]["2"] = false;
		            data["events"]["3"] = false;
		            data["events"]["4"] = false;
		            data["events"]["5"] = false;
		            data["events"]["6"] = false;
		            data["events"]["7"] = false;
		            data["events"]["8"] = false;
		            data["events"]["9"] = false;
		            data["events"]["10"] = false;
		            data["events"]["11"] = false;
		            data["events"]["12"] = false;
		            data["events"]["13"] = false;
		            data["events"]["14"] = false;
		            data["events"]["15"] = false;
		            data["events"]["16"] = false;
					
					//stadiums
		            data["stadiums"]["1"] = false;
		            data["stadiums"]["2"] = false;
		            data["stadiums"]["3"] = false;
		            data["stadiums"]["4"] = false;
		            data["stadiums"]["5"] = false;
		            data["stadiums"]["6"] = false;
		            data["stadiums"]["7"] = false;
		            data["stadiums"]["8"] = false;
		            data["stadiums"]["9"] = false;
		            data["stadiums"]["10"] = false;
		            data["stadiums"]["12"] = false;
		            data["stadiums"]["13"] = false;
		            data["stadiums"]["14"] = false;
		            data["stadiums"]["15"] = false;
		            data["stadiums"]["16"] = false;

					//writes to file
					std::string inviteFP = File::GetExeDirectory() + "/" + "matchInvite.kar";
		            File::CreateEmptyFile(inviteFP);
		            File::WriteStringToFile(data.dump(), inviteFP);
				}

				//loads a lobby data from a shareable JSON invite file
			};
            Lobby currentLobbyInstance;
		}
	}
}