#include <iostream>
#include "container.h"
#include "tour.h"
#include <cmath>

using namespace std;

// DO NOT CHANGE THE MAIN FUNCTION
int main() {
  cout << "======== Assignment4: Knight's Tour =========" << endl;
  Movement knightMove[8] = { 	{  2,  1 }, 
				{  1,  2 },
				{ -1,  2 },	
				{ -2,  1 },	
				{ -2, -1 },	
				{ -1, -2 },	
				{  1, -2 },	
				{  2, -1 } };
  
  Coordinate src(0, 0);
  Coordinate dest(6, 7);

  int path[BOARD_SIZE][BOARD_SIZE] = {0, };

  int distance;
  distance = shortestDistance(src, dest, path, 8, knightMove);

  cout << src << " -> " << dest << endl;;
  cout << "Path :" << endl;
  printBoard(path);
  
  cout << "The minimum number of steps required is " << distance << endl;

  cout << "=================== Done ====================" << endl;

  return 0;
}
