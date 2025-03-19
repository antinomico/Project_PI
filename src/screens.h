#ifndef SCREENS_H
#define SCREENS_H

//----------------------------------------------------------------------------------
// Types and Structures Definition
//----------------------------------------------------------------------------------
typedef enum GameScreen {
	UNKNOWN = -1,
	LOGO_RL = 0,
	LOGO_CIN = 1,
	TITLE = 2,
	OPTIONS = 3,
	GAMEPLAY = 4,
	ENDING = 5
}	GameScreen;

//----------------------------------------------------------------------------------
// Global Variables Declaration (shared by several modules)
//-----------------------------------------------8-----------------------------------
extern GameScreen currentScreen;
extern Font font;
extern Music music;
extern Sound fxCoin;

#ifdef __cplusplus
extern "C" {            // Prevents name mangling of functions
#endif

//----------------------------------------------------------------------------------
// Logo Raylib Screen Functions Declaration
//----------------------------------------------------------------------------------
void InitLogoRLScreen(void);
void UpdateLogoRLScreen(void);
void DrawLogoRLScreen(void);
void UnloadLogoRLScreen(void);
int FinishLogoRLScreen(void);

//----------------------------------------------------------------------------------
// Logo CIn Screen Functions Declaration
//----------------------------------------------------------------------------------
void InitLogoCINScreen(void);
void UpdateLogoCINScreen(void);
void DrawLogoCINScreen(void);
void UnloadLogoCINScreen(void);
int FinishLogoCINScreen(void);

//----------------------------------------------------------------------------------
// Title Screen Functions Declaration
//----------------------------------------------------------------------------------
void InitTitleScreen(void);
void UpdateTitleScreen(void);
void DrawTitleScreen(void);
void UnloadTitleScreen(void);
int FinishTitleScreen(void);

//----------------------------------------------------------------------------------
// Options Screen Functions Declaration
//----------------------------------------------------------------------------------
void InitOptionsScreen(void);
void UpdateOptionsScreen(void);
void DrawOptionsScreen(void);
void UnloadOptionsScreen(void);
int FinishOptionsScreen(void);

//----------------------------------------------------------------------------------
// Gameplay Screen Functions Declaration
//----------------------------------------------------------------------------------
void InitGameplayScreen(void);
void UpdateGameplayScreen(void);
void DrawGameplayScreen(void);
void UnloadGameplayScreen(void);
int FinishGameplayScreen(void);

//----------------------------------------------------------------------------------
// Ending Screen Functions Declaration
//----------------------------------------------------------------------------------
void InitEndingScreen(void);
void UpdateEndingScreen(void);
void DrawEndingScreen(void);
void UnloadEndingScreen(void);
int FinishEndingScreen(void);

#ifdef __cplusplus
}
#endif

#endif // SCREENS_H