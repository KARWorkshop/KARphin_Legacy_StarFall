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

			//defines the account info of this user
			struct UserAccountData
			{
				//this user's ELO on the discord leaderboard
				
				OpenSkillWarpRelayRank warpRelayMonthlyLeaderboardRank = OpenSkillWarpRelayRank::StarDust; // this user's place on the Warp Relay monthly leaderboard
				//this is the user's value on the Warp Relay monthly leaderboard based on Open Skill

				Region region = Region::NA; // the user's region

	            std::string displayName = "Kirby", // the display name this user has for when they are in a netplay room
	                warpRelayUniqueHash = ""; //the unique hash used for this user on the Warp Relay system

					//the data associated with their Discord

					//the URL to their custom profile icon

				//writes public info to a file

				//loads public info from a file
			};
            static UserAccountData currentUserLoggedIn;

			//generates a private hash the Warp Relay uses

			//defines if they're a real player or a spectator
			enum class LobbyMemberState
			{
				Player = 0, //players are those who will actually send input packets

				Spectator, //spectators will just watch the game, not actually partake in it

				Count
			};

			//defines a slimmed down version of the player used in Lobby and netplay match data
			struct UserData
			{
	            LobbyMemberState state = LobbyMemberState::Spectator;
	            Region region = Region::NA;
	            std::string displayName = "Kirby";
			};
		}
	}
}