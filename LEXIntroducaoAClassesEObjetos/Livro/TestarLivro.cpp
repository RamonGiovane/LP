#include "Livro.h"
#include <iostream>
#include <conio.h>
#include "TestarLivro.h"
using namespace std;

void codificacao() {
	setlocale(LC_ALL, "pt-br");
}
int iniciar() {
	codificacao();
	Livro livro1 = Livro();
	Livro livro2 = Livro(1, "Livro 1", "João Silva", "Editora X");
	cout << livro1.toString() << endl;
	cout << "\n";
	cout << livro2.toString() << endl;
	cout << "\nPress any key\n";
	_getch();
	return 0;
}
int main() {
	return iniciar();
}