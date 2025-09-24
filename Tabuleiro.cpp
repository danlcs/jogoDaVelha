#include "Tabuleiro.h"
#include <iostream>
#include <string>

using namespace std;

Tabuleiro::Tabuleiro() {
	limparTabuleiro();
}

void Tabuleiro::limparTabuleiro() {
	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 3; x++) {
			tab[y][x] = ' ';
		}
	}
}

void Tabuleiro::printTabuleiro() {
	cout << endl;
	cout << "   | 1 | 2 | 3 |" << endl;
	for (int i = 0; i < 3; i++) {
		cout << "----------------" << endl;
		cout << " " << (i + 1) << " | " << tab[i][0] << " | " << tab[i][1] << " | " << tab[i][2] << " |" << endl;
	}
}

void Tabuleiro::jogar() {
	char player1 = 'X';
	char player2 = 'O';

	int x, y;

	char jogadorAtual = 'X';
	bool pronto = false;

	while (!pronto) {
		printTabuleiro();
		cout << "Vez do jogador " << jogadorAtual << endl;
		x = getCoordX();
		y = getCoordY();

		if (!colocarJogada(x, y, jogadorAtual)) {
			cout << "Esse lugar ja esta ocupado, por favor, tente novamente." << endl;
		}
		else {
			if (jogadorAtual == player1) {
				jogadorAtual = player2;
			}
			else {
				jogadorAtual = player1;
			}
		}
	}

}

int Tabuleiro::getCoordX() {
	bool inputInvalido = true;
	int coordX;

	while (inputInvalido) {
		cout << "Digite a coordenada X da sua jogada: ";
		cin >> coordX;

		if (coordX < 1 || coordX > 3) {
			cout << "Entrada invalida, por favor, tente novamente." << endl;
		}
		else {
			inputInvalido = false;
		}
	}

	return coordX - 1;
}

int Tabuleiro::getCoordY() {
	bool inputInvalido = true;
	int coordY;
	
	while (inputInvalido) {
		cout << "Digite a coordenada Y da sua jogada: ";
		cin >> coordY;

		if (coordY < 1 || coordY > 3) {
			cout << "Entrada invalida, por favor, tente novamente." << endl;
		}
		else {
			inputInvalido = false;
		}
	}

	

	return coordY - 1;
}

bool Tabuleiro::colocarJogada(int x, int y, char jogadorAtual) {
	if (tab[y][x] != ' ') {
		return false;
	}

	tab[y][x] = jogadorAtual;
	return true;
}

bool Tabuleiro::checkVitoria() {

}