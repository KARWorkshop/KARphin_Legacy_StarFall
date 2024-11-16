#pragma once

// defines various game IDs for the support KAR ROMs

#include <string>

namespace KAR
{
namespace Data
{
namespace GameID
{
// gets the ID of a NA ROM
static inline std::string GetKARROMID_NA()
{
	return "GKYE01";
}
// gets the ID of a PAL ROM
static inline std::string GetKARROMID_PAL()
{
	return "GKYP01";
}
// gets the ID of a JP ROM
static inline std::string GetKARROMID_JP()
{
	return "GKYJ01";
}
// gets the ID of a KOR ROM
static inline std::string GetKARROMID_KOR()
{
	return GetKARROMID_NA();
}

// gets the ID of the Hack Pack 1.0.1
static inline std::string GetKARROMID_HackPack_101()
{
	return "KHPE01";
}

// gets the ID of Backside 2
static inline std::string GetKARROMID_Backside_2()
{
	return "KBSE01";
}
// gets the ID of Backside 3
static inline std::string GetKARROMID_Backside_3()
{
	return "KBSE01";
}

// gets the ID of Ignition 1
static inline std::string GetKARROMID_Ignition_1()
{
	return "SLAV01";
}

// gets the ID of Constellation
static inline std::string GetKARROMID_Constellation_1()
{
	return "STAR01";
}
} // namespace GameID
} // namespace Data
} // namespace KAR