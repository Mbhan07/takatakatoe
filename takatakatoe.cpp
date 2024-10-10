#include <iostream>
#include <cstring>

using namespace std;


void printBoard(char board[3][3]);

void clearBoard(char (&board[3][3]);

bool checkWin(char board[3][3], char player);

bool checkTie(char board[3][3]);


int main(){


  char board[3][3] = {{-, -, -}, {-, -, -}, {-, -, -}};
  int x_wins = 0;
  int o_wins = 0;
  int ties = 0;
  char x_move = 'X';
  char o_move = "O";
  bool x_turn = false;
  bool stillPlaying = true;
  bool gameEnd = false;

  //while stillplaying
  cout << "Welcome to TicTacToe!" << endl;
  x_turn = true;
  
  

  return 0;

}

		void printBoard(
