#ifndef _GAME_H
#define _GAME_H

enum GAME_STATE
{
    STATE_TITLE = 0,
    STATE_IN_GAME,
    STATE_GAME_OVER,
    STATE_GAME_CLEAR,
};


void run_game();
void InitGame(int screen_width, int screen_height);
void ProcessLogic(int mouse_posx);
char CheckGameEnd();
void DrawWorld();
void UpdateBall() ;


extern void RenderTile(int x, int y, int x_count, int y_count, int tileNum);
extern void EraseTile(int x, int y, int x_count, int y_count, int tileNum);

#endif