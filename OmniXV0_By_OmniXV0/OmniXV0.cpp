#include <iostream>
#include "Omni.h"

int main()
{
#if defined(PLATFORM_WEB)
#include <emscripten/emscripten.h>
	emscripten_set_main_loop(UpdateDrawFrame, 100, 1);
#else

	//Game engine
	Omni omni;

	//Game loop
	while (omni.running() && !omni.getEndGame())
	{
		//Update
		omni.update();

		//Render
		omni.render();
	}

	//End of application
#endif
	return 0;
}