#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){

  vector<char> vertical, horizontal;
  char currentPoint;
  std::string ignoreLine, verticalLine, horizontalLine;

  int rows = 0;
  int columns = 0;
  int steps = 0;

  //Number of Rows
  //Number of Columns
  cin >> rows >> columns >> steps;
  cout << "Num Rows " << rows << endl;
  cout << "Num Columns " << columns << endl;
  cout << "Num Steps " << steps << endl;

  // Init Board
  vector<vector<char>> board(columns, vector<char>(rows));


  getline(cin, verticalLine, ' ');
  for (auto i : verticalLine)
  {
    cout << i << endl;
  }

  // Get World
  /*for (int i = 0; i<rows; i++)
  {
    for(int j = 0; j<columns; j++)
    {
      //input each point in row
      //Use getline
      cin >> currentPoint;
      board[i][j] = currentPoint;
    }
  }*/

  cout << "Board Size: " << verticalLine.size();

  return 0;

  //Implement double buffer
};