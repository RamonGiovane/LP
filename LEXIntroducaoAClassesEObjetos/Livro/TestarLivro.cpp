#include "Livro.h"
#include <iostream>
#include <conio.h>
#include "TestarLivro.h"
#include <sstream>
using namespace std;

void prompt() {
	cout << "\nPress any key\n";
	_getch();
}

void codificacao() {
	setlocale(LC_ALL, "pt-br");
}

void quebra_string_exemplo(string str, char delimitador ) {
	//Inicia o objeto string stream
	stringstream stream(str);
	
	//V�riavel que receber� os peda�os da string quebrada
	string token;

	/*A cada chamada do getline, token receber� um peda�o da string separada pelo delimitador. Vamos iterar at� que a fun��o retorne 0, 
	quando n�o restam mais peda�os*/
	while (getline(stream, token, delimitador))
		//Printando os peda�os
		cout << token << endl;
}

int iniciar() {
	codificacao();
	Livro livro1;
	Livro livro2(1, "Livro 1", "Jo�o Silva", "Editora X");
	cout << livro1.toString() << endl;
	cout << "\n";
	cout << livro2.toString() << endl;

	
	prompt();

	cout << "\nIniciando teste de quebra de string.\nString:Jo�o Silva\tDelimitador: barra de espa�o\n";

	quebra_string_exemplo(livro2.getAutor(), ' ');
	
	prompt();

	return 0;
}
int main() {
	
	return iniciar();
}