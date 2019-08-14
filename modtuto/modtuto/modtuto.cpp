#include "modtuto.h"

void OnAmxxAttach()
{
	MF_AddNatives(ModTuto_Natives::ModTuto_NativesInfo);
	// Add the natives, referred in "modtuto.h".
}

void OnAmxxDetach()
{
	// This function is necessary. Even if you have nothing to declare here.
	// This can be useful for clearing/destroying a handling system.
}

// There is no need to declare the function as static member.
// Just add the namespace and its certain function.
cell AMX_NATIVE_CALL ModTuto_Natives::ModTuto_PrintMsg(AMX* amx, cell* params)
{
	char* pFullMsg = MF_FormatAmxString(amx, params, 1, 0);
	// We declared a constant char pointer, and gave it a value.
	// The value is, a formatted string returned from "MF_FormatAmxString", a function similar to "sprintf".
	
	sprintf(pFullMsg, "%s\n", pFullMsg);
	// This will push '\n' (newline ANSI character) into "pFullMsg".

	MF_PrintSrvConsole(pFullMsg);
	// This will print "pFullMsg" to server console.

	return 0;
	// It does not matter what we return, but we should return something.
}
