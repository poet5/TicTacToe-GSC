#include <bits/stdc++.h>


// If someone is reading this if you call me batshit for using namespace for the 30th time I WILL DEAD SLIDE YOU.
using namespace std;



int main() {

  

  cout << "\t Google CodeJam TicTacToe Tomek:\n \n"; 

  cout << "\t Type in the results of a TictacToe game in input:\n \n"; 

  int h = 1;

  
  while (h==1)
  {
    
    char matrix[3][3];
  int matsize = sizeof(matrix);
  int x, y, i = 0;
  std::string sub;
  bool horizontal = false;
  bool vertical = false;
  bool diagnal = false;
  bool won = false;
  char winner;
  cin >> sub;
  if (sub == "=========")
  {
    break;
  }
  for (x = 0; x < 3; x++ ) {
    for (y = 0; y < 3; y++) {
        matrix[x][y] = sub[i];
        
        ++i;
    }
    
  }

// Horizontal Checker.

  for (x = 0; x < 3; x++ ) {
    for (y = 0; y < 3; y++) {
    
        if (y==2) {
          
          if (matrix[x][y ] == matrix[x][y -1] && matrix[x][y] == matrix[x][y-2]) {
             
              horizontal = true;
              winner = matrix[x][y];
              won = true;
              matrix[x][y] = '$';
              matrix[x][y-1] = '$';
              matrix[x][y-2] = '$';
          }
        
    }
  }
  }
  if (horizontal == false)
  {
// Vertical Checker.
  for (x = 0; x < 3; x++ ) {
    for (y = 0; y < 3; y++) {
    
        if (x==2) {
        if (matrix[x][y ] == matrix[x -1 ][y] && matrix[x][y] == matrix[x-2][y]) {
              vertical = true;
              winner = matrix[x][y];
              won = true;
              matrix[x][y] = '$';
              matrix[x-1][y] = '$';
              matrix[x-2][y] = '$';
          }
        
    }
  }
  }
  }
  if (horizontal == false && vertical == false)
  {
// Diagnal Checker.
  for (x = 0; x < 3; x++ ) {
    for (y = 0; y < 3; y++) {
        if (x == 2 && y == 2) {
          if (matrix[x][y] == matrix[x -1 ][y -1] && matrix[x][y] == matrix[x-2][y-2]) {
              diagnal = true;
              winner = matrix[x][y];    
              won = true;
              matrix[x][y] = '$';
              matrix[x-1][y-1] = '$';
              matrix[x-2][y-2] = '$';  
          }
        }
        
    }
  }

//  Opp Diagnal Checker.
  for (x = 0; x < 3; x++ ) {
    for (y = 0; y < 3; y++) {
        if (x == 2 && y == 0) {
          if (matrix[x][y] == matrix[x -2][y +1] && matrix[x][y] == matrix[x-2][y+2]) {
              diagnal = true;
              winner = matrix[x][y]; 
              won = true;
              matrix[x-2][y+1] = '$';
              matrix[x-2][y+2] = '$';
              matrix[x][y] = '$';   
          }
        }
        
    }
  }
  }

  if (won == true)
  {
    cout << "Player " << winner << " won" << endl;
    
     for (x = 0; x < 3; x++ ) {
    for (y = 0; y < 3; y++) {
        
        cout << matrix[x][y];
        
    }
    cout << endl;
  }

  }
  else{
    cout << "There was a tie" << endl;
    for (x = 0; x < 3; x++ ) {
    for (y = 0; y < 3; y++) {
        
        cout << matrix[x][y];
        
    }
    cout << endl;
  }

  }
  }
}