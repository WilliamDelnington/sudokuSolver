#include <iostream>
#include <string>
#include <tuple>

using namespace std;

// define 2d arrays to keep track whether each row/col/region needs number
bool rows[9][9];
bool cols[9][9];
bool regions[9][9];

void solve_sudoku(int[][] grid) {
	int i;
	int j;
	
	for (i = 0; i < 9; i++) {
		for (j = 0; j < 9; j++) {
			rows[i][j] = true;
			cols[i][j] = true;
			regions[i][j] = true;
		}
	}
	
	for (i = 0; i < 9; i++) {
		for (j = 0; j < 9; j++) {
			
		}
	}
}


