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
	
	//Váriavel que receberá os pedaços da string quebrada
	string token;

	/*A cada chamada do getline, token receberá um pedaço da string separada pelo delimitador. Vamos iterar até que a função retorne 0, 
	quando não restam mais pedaços*/
	while (getline(stream, token, delimitador))
		//Printando os pedaços
		cout << token << endl;
}

int iniciar() {
	codificacao();
	Livro livro1;
	Livro livro2(1, "Livro 1", "João Silva", "Editora X");
	cout << livro1.toString() << endl;
	cout << "\n";
	cout << livro2.toString() << endl;

	
	prompt();

	cout << "\nIniciando teste de quebra de string.\nString:João Silva\tDelimitador: barra de espaço\n";

	quebra_string_exemplo(livro2.getAutor(), ' ');
	
	prompt();

	return 0;
}
int main() {
	
	return iniciar();
}