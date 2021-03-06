// DiabloUI.cpp : Defines the entry point for the DLL application.
//

#include "stdafx.h"
#include "DiabloUI.h"

BOOL APIENTRY DllMain( HANDLE hModule, 
                       DWORD  ul_reason_for_call, 
                       LPVOID lpReserved
					 )
{
    switch (ul_reason_for_call)
	{
		case DLL_PROCESS_ATTACH:
		case DLL_THREAD_ATTACH:
		case DLL_THREAD_DETACH:
		case DLL_PROCESS_DETACH:
			break;
    }
    return TRUE;
}


// This is an example of an exported variable
DIABLOUI_API int nDiabloUI=0;

// This is an example of an exported function.
DIABLOUI_API int fnDiabloUI(void)
{
	return 42;
}

// This is the constructor of a class that has been exported.
// see DiabloUI.h for the class definition
CDiabloUI::CDiabloUI()
{ 
	return; 
}

struct _SNETPROGRAMDATA {
	int a1;
};
struct _SNETPLAYERDATA {
	int a1;
};
struct _SNETUIDATA {
	int a1;
};
struct _SNETVERSIONDATA {
	int a1;
};
struct _uiheroinfo {
	int a1;
};
void __cdecl UiDestroy() { return; }
void __cdecl UiTitleDialog(int a1) { return; }
void __cdecl UiInitialize() { return; }
void __stdcall UiCopyProtError(int a1) { return; }
void __stdcall UiAppActivate(int a1) { return; }
int __stdcall UiValidPlayerName(char *a1) { return 0; }
int __stdcall UiSelHeroMultDialog(void *fninfo, void *fncreate, void *fnremove, void *fnstats, int *a5, int *a6, char *name) { return 0; }
int __stdcall UiSelHeroSingDialog(void *fninfo, void *fncreate, void *fnremove, void *fnstats, int *a5, char *name, int *difficulty) { return 0; }
void __stdcall UiCreditsDialog(int a1) { return; }
int __stdcall UiMainMenuDialog(char *name, int *a2, void *fnSound, int a4) { return 0; }
int __stdcall UiProgressDialog(HWND window, char *msg, int a3, void *fnfunc, int a5) { return 0; }
void __cdecl UiProfileGetString() { return; }
void __cdecl UiProfileCallback() { return; }
void __cdecl UiProfileDraw() { return; }
void __cdecl UiCategoryCallback() { return; }
void __cdecl UiGetDataCallback() { return; }
void __cdecl UiAuthCallback() { return; }
void __cdecl UiSoundCallback() { return; }
void __cdecl UiMessageBoxCallback() { return; }
void __cdecl UiDrawDescCallback() { return; }
void __cdecl UiCreateGameCallback() { return; }
void __cdecl UiArtCallback() { return; }
int __stdcall UiSelectGame(int a1, _SNETPROGRAMDATA *client_info, _SNETPLAYERDATA *user_info, _SNETUIDATA *ui_info, _SNETVERSIONDATA *file_info, int *a6) { return 0; }
int __stdcall UiSelectProvider(int a1, _SNETPROGRAMDATA *client_info, _SNETPLAYERDATA *user_info, _SNETUIDATA *ui_info, _SNETVERSIONDATA *file_info, int *type) { return 0; }
int __stdcall UiCreatePlayerDescription(_uiheroinfo *info, int mode, char *desc) { return 0; }
int __stdcall UiSetupPlayerInfo(char *str, _uiheroinfo *info, int mode) { return 0; }
