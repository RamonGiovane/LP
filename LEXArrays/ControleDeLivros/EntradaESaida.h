#ifndef ENTRADA_E_SAIDA_H
#define ENTRADA_E_SAIDA_H
#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

class EntradaESaida{
public:
	static string lerString(string prompt);
	
	static inline void prompt() {
		cout << "\nPressione qualquer tecla para continuar...";
		_getch();
	}

	static void localizacao() {
		setlocale(LC_ALL, "pt-BR");
	}
};

#endif // !ENTRADA_E_SAIDA_H
