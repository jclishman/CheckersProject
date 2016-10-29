// Jack Lishman
// M & S Simulation Project

#include <string>

// Variables & Functions
void drawBoard();
void movementCtrl();

char currentPlayer = 'B';
char gameWin = '0';

// Active Game Board
char labelRow[9] = { '-', '1', '2', '3', '4', '5', '6', '7', '8' };
char rowA[9] = { 'A', ' ', 'B', ' ', 'B', ' ', 'B', ' ', 'B' };
char rowB[9] = { 'B', '+', ' ', '+', ' ', '+', ' ', '+', ' ' };
char rowC[9] = { 'C', ' ', '+', ' ', '+', ' ', '+', ' ', '+' };
char rowD[9] = { 'D', '+', ' ', '+', ' ', '+', ' ', '+', ' ' };
char rowE[9] = { 'E', ' ', '+', ' ', '+', ' ', '+', ' ', '+' };
char rowF[9] = { 'F', '+', ' ', '+', ' ', '+', ' ', '+', ' ' };
char rowG[9] = { 'G', ' ', '+', ' ', '+', ' ', '+', ' ', '+' };
char rowH[9] = { 'H', 'W', ' ', 'W', ' ', 'W', ' ', 'W', ' ' };

// Default Game Board
char defaultLabelRow[9] = { '-', '1', '2', '3', '4', '5', '6', '7', '8' };
char defaultRowA[9] = { 'A', ' ', '+', ' ', '+', ' ', '+', ' ', '+' };
char defaultRowB[9] = { 'B', '+', ' ', '+', ' ', '+', ' ', '+', ' ' };
char defaultRowC[9] = { 'C', ' ', '+', ' ', '+', ' ', '+', ' ', '+' };
char defaultRowD[9] = { 'D', '+', ' ', '+', ' ', '+', ' ', '+', ' ' };
char defaultRowE[9] = { 'E', ' ', '+', ' ', '+', ' ', '+', ' ', '+' };
char defaultRowF[9] = { 'F', '+', ' ', '+', ' ', '+', ' ', '+', ' ' };
char defaultRowG[9] = { 'G', ' ', '+', ' ', '+', ' ', '+', ' ', '+' };
char defaultRowH[9] = { 'H', '+', ' ', '+', ' ', '+', ' ', '+', ' ' };

// Game Pieces
struct CHKR_LOC {
	int row[12];
	int col[12];
};

CHKR_LOC W;
CHKR_LOC B;

// Piece / Movement Selection
struct CHKR_INFO {
	char input[2];
	char row;
	int col;
};

CHKR_INFO SELECT;
CHKR_INFO MOVE;

