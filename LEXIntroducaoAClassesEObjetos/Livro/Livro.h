#ifndef LIVRO_H
#define LIVRO_H
#include <string>
using namespace std;

class Livro
{
public:
	Livro();
	Livro(int codigo, string titulo, string autor, string editora);
	int getCodigo();
	string getTitulo();
	string getAutor();
	string getEditora();
	string toString();

private:
	int codigo;
	string titulo;
	string autor, editora;

};

#endif // !LIVRO_H

