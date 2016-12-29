#include <pspkernel.h>
#include <pspdebug.h>
#include <pspdisplay.h>
#include <pspctrl.h>

#include "common/callback.h"

#define VERS	1
#define	REVS	0

PSP_MODULE_INFO("Project Name", PSP_MODULE_USER, VERS, REVS);
PSP_MODULE_THREAD_ATTR(PSP_THREAD_ATTR_USER);
PSP_HEAP_SIZE_MAX();

#define printf pspDebugScreenPrintf

int main(){
	pspDebugScreenInit();
	setupExitCallback();

	while(isRunning()){
			pspDebugScreenSetXY(0, 0);
			printf("New Project...\n new line");

			sceDisplayWaitVblankStart();
		}

		sceKernelExitGame();
		return 0;
	}
