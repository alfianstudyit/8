#include <iostream>

using namespace std;

int main() {
	// papan permainan terdiri dari 3 baris dan 3 kolom
// direpresentasikan dalam array 2D
// diinisialisasi dengan spasi kosong
	char board[3][3] = {
	{' ', ' ', ' '},
	{' ', ' ', ' '},
	{' ', ' ', ' '}
	};

	// simbol pemain: 'X' dan 'O'
	// disimpan dalam array satu dimensi
	char players[2] = { 'X', 'O' };

	int loop = 0; // untuk melacak giliran pemain
	bool playing = true; // status permainan

	// loop utama permainan
	while (playing)
	{
		system("cls");
		cout << " Tic Tac Toe" << endl << endl;
		cout << " |---|---|---|" << endl;
		// menampilkan papan permainan
		for (int rows = 0; rows < 3; rows++)
		{
			for (int cols = 0; cols < 3; cols++)
			{
				cout << " | " << board[rows][cols];
			}
			cout << " |" << endl;
			cout << " |---|---|---|" << endl;
		}

		cout << endl;
		int row, col;

		// menentukan pemain saat ini berdasarkan giliran
		// jika loop genap, pemain 0 (X), jika ganjil, pemain 1 (O)
		int currentPlayer = loop % 2;

		// meminta input baris dan kolom dari pemain saat ini
		cout << " Player " << players[currentPlayer] << ": ";
		cin >> row >> col;

		// memperbarui papan permainan dengan simbol pemain saat ini
		board[row][col] = players[currentPlayer];
		loop++;
	}

}