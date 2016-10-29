// Jack Lishman
// M & S Simulation Project

#include <iostream>
#include <string>
#include "checkerVars.h"
using namespace std;

int main() {

	while (gameWin = '0') {

		drawBoard();
		movementCtrl();


	}
}

// Creates The Game Board
void drawBoard() {

	system("title Checkers");
	system("CLS");

	for (int i = 0; i < 9; i++) {
		cout << "[" << labelRow[i] << "]";
	}
	cout << endl;

	for (int i = 0; i < 8; i++) {
		switch (i) {

		case 0:
			for (int j = 0; j < 9; j++) {
				cout << "[" << rowA[j] << "]";
			}
			cout << endl;
			break;
		case 1:
			for (int j = 0; j < 9; j++) {
				cout << "[" << rowB[j] << "]";
			}
			cout << endl;
			break;
		case 2:
			for (int j = 0; j < 9; j++) {
				cout << "[" << rowC[j] << "]";
			}
			cout << endl;
			break;
		case 3:
			for (int j = 0; j < 9; j++) {
				cout << "[" << rowD[j] << "]";
			}
			cout << endl;
			break;
		case 4:
			for (int j = 0; j < 9; j++) {
				cout << "[" << rowE[j] << "]";
			}
			cout << endl;
			break;
		case 5:
			for (int j = 0; j < 9; j++) {
				cout << "[" << rowF[j] << "]";
			}
			cout << endl;
			break;
		case 6:
			for (int j = 0; j < 9; j++) {
				cout << "[" << rowG[j] << "]";
			}
			cout << endl;
			break;
		case 7:
			for (int j = 0; j < 9; j++) {
				cout << "[" << rowH[j] << "]";
			}
			cout << endl << endl;
			break;

		}
	}

}

// Movement Input & Validation
void movementCtrl(){

	cout << "Which piece do you want to move: ";
	cin >> SELECT.input;
	SELECT.row = toupper(SELECT.input[0]);
	SELECT.col = SELECT.input[1] - 48;

	switch (SELECT.row) {

	case 'A':
		if (rowA[SELECT.col] == currentPlayer) {
 			cout << "Which square do you want to move to: ";
			cin >> MOVE.input;
			MOVE.row = toupper(MOVE.input[0]);
			MOVE.col = MOVE.input[1] - 48;

			// Is that square empty?
			if (rowB[MOVE.col] == '+') {
				
				// Is it diagonally to the left or right?
				if (((SELECT.col - MOVE.col) == 1) || ((SELECT.col - MOVE.col) == -1)) {
					rowB[MOVE.col] = currentPlayer;
					rowA[SELECT.col] = defaultRowA[SELECT.col];
				}
				
			}
			
		}
	}
}


































