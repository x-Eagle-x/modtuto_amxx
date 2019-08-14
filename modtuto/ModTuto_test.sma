#include <amxmodx>
#include <modtuto>

public plugin_init()
{
	register_clcmd("say /modtuto", "cmdSay_modtuto");
}

public cmdSay_modtuto(id)
{
	ModTuto_PrintMsg("Hello, this tutorial was created in %s %i :)", "August", 2019);
}