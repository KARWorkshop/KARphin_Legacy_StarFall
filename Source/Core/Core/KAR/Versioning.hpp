#pragma once

//defines versioning data for this build

#include <Core/KAR/json.hpp>

#include <Common/FileUtil.h>

namespace KAR
{
	namespace Core
	{
		//stores the legacy version string for KARphin Legacy and R10
#define LEGACY_R10_VERSION_STRING "50f504eb710d1b1e74356e75f8fbef310b811951"

		//client data
#define KAR_VERSION_MAJOR "1"
#define KAR_VERSION_MINOR "0"
#define KAR_VERSION_HOT_FIX "0"
#define KAR_VERSION_BUILD "Stable"

		//we store extra OS data here so we can tell the diff on platforms

		//writes the version data to a file
		static inline void WriteBuildVersionDataToFile()
		{
	        nlohmann::json j;
	        j["ver_major"] = KAR_VERSION_MAJOR;
	        j["ver_minor"] = KAR_VERSION_MINOR;
	        j["ver_hotfix"] = KAR_VERSION_HOT_FIX;
	        j["build"] = KAR_VERSION_BUILD;

			File::CreateEmptyFile("build.stt");
	        File::WriteStringToFile(j.dump(), "build.stt");
		}

		//loads the version data from a file

		//checks the build's version against the latest build, and updates if it's out of date
	}
}