/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.c
 * Author: John
 *
 * Created on 08 March 2019, 12:24
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stddef.h>

#include "defineAssignment2.h"
#include "stackFunctions.h"
#include "gameInput.h"
#include "gameInitialisation.h"
#include "gamePrint.h"
#include "gamePlay.h"


int main(void){
  player players[6];
  square board[NUM_ROWS][NUM_COLUMNS];

  unsigned int numPlayers = gameInput(players);
  initializeBoard(board);

  printBoard(board);


  return 0;
}
