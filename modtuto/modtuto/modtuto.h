#include "sdk\amxxmodule.h"
#include <stdio.h>

namespace ModTuto_Natives
{
	//					 native ModTuto_PrintMsg(const Message[], any:...);
	static cell AMX_NATIVE_CALL ModTuto_PrintMsg(AMX* amx, cell* params);
	// This is the way of declaring a function inside of namespace, "(AMX* amx, cell* params)" is necessary since this is how {natives get called, arguments are passed}.
	// Adding a Pawn-native declarement is a good way to keep track of WHAT you ARE coding.

	AMX_NATIVE_INFO ModTuto_NativesInfo[] =
	{
		// { "Name", Function }

		{ "ModTuto_PrintMsg", ModTuto_PrintMsg },

		{ NULL, NULL } // Add this in the end.
	};
};