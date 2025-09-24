#pragma once
class Tabuleiro {
public:

	Tabuleiro();

	void jogar();

private:

	bool colocarJogada(int x, int y, char jogadorAtual);
	bool checkVitoria();

	void printTabuleiro();
	void limparTabuleiro();

	int getCoordX();
	int getCoordY();

	char tab[3][3];
};

