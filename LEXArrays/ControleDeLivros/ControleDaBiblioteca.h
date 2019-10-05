#ifndef CONTROLE_DA_BIBLIOTECA_H
#define CONTROLE_DA_BIBLIOTECA_H
#include "Biblioteca.h"

class ControleDaBiblioteca {
public:
	ControleDaBiblioteca();
	bool cadastrarLivro();
	bool consultarEditora();
	bool consultarAutor();
	bool consultarLivro();

private:
	Biblioteca biblioteca;
	void imprimirLivros(vector<Livro> livros);
	void imprimirLivro(Livro livro);
};


#endif // !CONTROLE_DA_BIBLIOTECA_H

int main();
