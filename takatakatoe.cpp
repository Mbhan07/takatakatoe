#include <iostream>

using namespace std;

//intialize functions

void printBoard(int board[3][3]);

/*void printBoard(char board[3][3]){
  cout << "a \t b \t c";
  for (int i = 0; i < 3; i++){
    for (int j = 0; j < 3; j++){
      board[i][j] = ' - ';
   

  }

  }*/





int main(){

  char board[3][3];
  int X_WINS = 0;
  int O_WINS = 0;
  char player = 'X';
  bool stillPlaying  = true;
  char row;
  char col;
    
    cout << "Player " << player << ", enter your row (1, 2, 3): ";
    cin >> row;


    cout << "Player " << player << ", enter your column (a, b, c): ";
    cin >> col;
    if (col = 'a'){
      col = 1;
    }else if (col = 'b'){
      col = 2;
    }else if (col = 'c'){
      col = 3;
    }else{
      cout << "Please enter a valid character for column (a, b or c)";
	cin >> col;
    }

  return 0;

}


void printBoard(int board[3][3]){
  cout << "a \t b \t c";
  for (int i = 0; i < 3; i++){
    for (int j = 0; j < 3; j++){
      //      board[i][j] = '  ';
    }

  }

}
