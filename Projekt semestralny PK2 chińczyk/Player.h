#pragma once
#include "Structures.h"

#ifndef _PLAYER_H
#define _PLAYER_H

void init_players(_player*,int);

int endgame(_player*, int*,int);

void place_for_last_player(_player*,int);

void show_score(_player*, HANDLE,int);

int ask_for_players(HANDLE);

void ask_for_AI_players(_player*, HANDLE,int);

int ask_for_auto_dice(HANDLE);

#endif
