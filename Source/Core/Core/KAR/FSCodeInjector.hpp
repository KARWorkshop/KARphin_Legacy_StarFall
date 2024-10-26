#pragma once

//handles injecting the correct FS code based on the given port

#include <string>

#include "Common/CommonTypes.h"

namespace KAR
{
namespace Gecko
{
namespace FS
{
	//array of FS code names
static const char *FS_GECKO_NAMES[4] = {"FS1", "FS2", "FS3", "FS4"};

	//takes a port index and sets the proper FS code
	inline bool SetGeckoCodeIfItFSCode(const uint8_t index, const char* geckoName)
	{
		switch (index)
		{
	    case 0:
		    if (!strcmp(FS_GECKO_NAMES[1], geckoName) || !strcmp(FS_GECKO_NAMES[2], geckoName) ||
		        !strcmp(FS_GECKO_NAMES[3], geckoName))
			    return false;
		    break;

		case 1:
		    if (!strcmp(FS_GECKO_NAMES[0], geckoName) || !strcmp(FS_GECKO_NAMES[2], geckoName) ||
		        !strcmp(FS_GECKO_NAMES[3], geckoName))
			    return false;
		    break;

		case 2:
		    if (!strcmp(FS_GECKO_NAMES[0], geckoName) || !strcmp(FS_GECKO_NAMES[1], geckoName) ||
		        !strcmp(FS_GECKO_NAMES[3], geckoName))
			    return false;
		    break;
		
		case 3:
		    if (!strcmp(FS_GECKO_NAMES[1], geckoName) || !strcmp(FS_GECKO_NAMES[2], geckoName) ||
		        !strcmp(FS_GECKO_NAMES[0], geckoName))
			    return false;
		    break;
		}

		return true;
	}

}
} // namespace Gecko
} // namespace KAR