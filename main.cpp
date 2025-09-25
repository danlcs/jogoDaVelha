#include "Tabuleiro.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
	char input;
	bool pronto = false;

	while (!pronto) {
		Tabuleiro tabuleiro1;
		tabuleiro1.jogar();

		cout << "Deseja jogar novamente? (S ou N):" << endl;
		cin >> input;
		if (input == 'N' || input == 'n') {
			pronto = true;
		}
	}

	return 0;
}