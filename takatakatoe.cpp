#include <iostream>

using namespace std;

//intialize functions






int main(){

  char board[3][3];
  int X_WINS = 0;
  int O_WINS = 0;
  char player = 'X';
  bool stillPlaying  = true;
  char row;
  char col;

  //while (stillPlaying){
    
    cout << "Player " << player << ", enter your row (1, 2, 3): ";
    cin >> row;

    cout << "Player " << player << ", enter your column (a, b, c): ";
    cin >> col;
    
    
    //}

  return 0;

}
