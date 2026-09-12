#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>

class Grid {

private:
	
	char grid[4][4];


public:

	Grid() {
		
		grid[0][0] = ' ';

		for (int row = 1; row < 4; row++) {
			for (int col = 1; col < 4; col++) {
				
				grid[row][col] = ' ';
			}
		}

		for (int row = 1; row < 4; row++) {

			grid[row][0] = '0' + row;
		}

		for (int col = 1; col < 4; col++) {

			grid[0][col] = '0' + col;
		}

	}

	void print() {

		for (int row = 0; row < 4; row++) {
			for (int col = 0; col < 4; col++) {

				if (row == 0 && col == 0) {

					std::cout << grid[0][0];
				}

				else if (row == 0) {

					std::cout << ' ' << grid[0][col] << ' ';
				}

				else if (col == 0) {

					std::cout << grid[row][0];
				}

				else {

					std::cout << '[' << grid[row][col] << ']';
				}
			}

			std::cout << '\n';
		}
	}
	
	void placeTick(int row, int col, char tick) {

		if (row < 1 || row > 3) {

			throw std::invalid_argument("That is not a valid placement!");
		}

		if (col < 1 || col > 3) {

			throw std::invalid_argument("That is not a valid placement!");
		}

		if (grid[row][col] == ' ') {

			grid[row][col] = tick;

		}

		else {

			throw std::invalid_argument("That tile is occupied!");
		}
	}

	bool winCheck() {

		if (grid[1][1] != ' ' && grid[1][1] == grid[1][2] && grid[1][2] == grid[1][3]) {
			
			return true;
		}

		if (grid[2][1] != ' ' && grid[2][1] == grid[2][2] && grid[2][2] == grid[2][3]) {

			return true;
		}

		if (grid[3][1] != ' ' && grid[3][1] == grid[3][2] && grid[3][2] == grid[3][3]) {

			return true;
		}

		if (grid[1][1] != ' ' && grid[1][1] == grid[2][1] && grid[2][1] == grid[3][1]) {

			return true;
		}

		if (grid[1][2] != ' ' && grid[1][2] == grid[2][2] && grid[2][2] == grid[3][2]) {

			return true;
		}

		if (grid[1][3] != ' ' && grid[1][3] == grid[2][3] && grid[2][3] == grid[3][3]) {

			return true;
		}

		if (grid[1][1] != ' ' && grid[1][1] == grid[2][2] && grid[2][2] == grid[3][3]) {

			return true;
		}

		if (grid[1][3] != ' ' && grid[1][3] == grid[2][2] && grid[2][2] == grid[3][1]) {
		
			return true;
		}

		return false;
	}

	bool isFull() {

		for (int row = 1; row < 4; row++) {
			for (int col = 1; col < 4; col++) {

				if (grid[row][col] == ' ') {

					return false;
				}
			}
		}

		return true;
	}
};

int main() {

	int row;
	int col;
	char currentPlayer = 'X';
	char response;

	std::cout << "Hello and welcome to Tic-Tac-Toe! To win, the player must place three X or O marks in a row. Either diagonally or in a straight line. Good luck!" << '\n';

	while (true) {

		Grid grid;
		grid.print();
	

		while (true) {

			std::cout << currentPlayer << ", select which row you want to place your tick in:" << '\n';
			std::cin >> row;
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

			std::cout << currentPlayer << ", now select which column you want to place your tick in:" << '\n';
			std::cin >> col;
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

			try {
				grid.placeTick(row, col, currentPlayer);
				std::cout << "Placed " << currentPlayer << " tick succesfully!" << '\n';

			}

			catch (const std::invalid_argument& ex) {

				std::cout << ex.what() << '\n';
				continue;
			}

			grid.print();

			if (grid.winCheck() == true) {

				std::cout << "Congratulations to the winner! " << currentPlayer << '\n';
				break;
			}

			if (grid.isFull()) {

				std::cout << "No winner this time, it's a tie!" << '\n';
				break;
				
			}

			if (currentPlayer == 'X') {

				currentPlayer = 'O';
			}

			else {

				currentPlayer = 'X';
			}
		}

		std::cout << "Would you like to play again? Reply with y for yes an n for no." << '\n';
		std::cin >> response;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		if (response == 'n') {

			break;
		}
		
	}

	return 0;
}

