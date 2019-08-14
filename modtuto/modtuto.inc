#if defined _modtuto_included // Check if module/header is already included.
	#endinput // Exit.
#endif
#define _modtuto_included // Declare that the module/header is included.

#pragma reqlib modtuto // Require the module.
#if !defined AMXMODX_NOAUTOLOAD // Check if current AMXX (version/build) does not automatically load modules.
	#pragma loadlib modtuto // Manually load the module.
#endif

native ModTuto_PrintMsg(const szMessage[], any:...);