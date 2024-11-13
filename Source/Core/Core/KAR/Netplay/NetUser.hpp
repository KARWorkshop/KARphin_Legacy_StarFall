#pragma once

//defines the account details and user info for Netplay

#include <string>

namespace KAR
{
	namespace Netplay
	{
		namespace User
		{
			//defines a region
			enum class Region
			{
				NA = 0,
				SA,
				EU,
				Aus,
				Asia,

				Count
			};

			//defines a rank given based on Open Skill for the Warp Relay leaderboard
			enum class OpenSkillWarpRelayRank
			{
				StarDust = 0,
				Starling,

				WhiteDwarf,
				OrangeDwarf,
				RedDwarf,
				BlueDwarf,

				SuperNova,
				BlackHole,

				Count
			};

			//defines a user in the instance
			struct UserData
			{
				//this user's ELO on the discord leaderboard
				
				OpenSkillWarpRelayRank warpRelayMonthlyLeaderboardRank = OpenSkillWarpRelayRank::StarDust; // this user's place on the Warp Relay monthly leaderboard
				//this is the user's value on the Warp Relay monthly leaderboard based on Open Skill

				Region region = Region::NA; // the user's region

	            std::string displayName = "Kirby", // the display name this user has for when they are in a netplay room
	                warpRelayUniqueHash = ""; //the unique hash used for this user on the Warp Relay system

					//the data associated with their Discord

				//writes public info to a file

				//loads public info from a file
			};

			//generates a private hash the Warp Relay uses
		}
	}
}