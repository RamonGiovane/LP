#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H
#include "Livro.h"
#include <vector>
using namespace std;
class Biblioteca {

public:
	Biblioteca();
	bool adicionarLivro(Livro livro);
	Livro obterLivro(string titulo);
	vector<Livro> obterLivrosPorEditora(string nomeEditora);
	vector<Livro> obterLivrosPorAutor(string nomeAutor);
	int quantidadeLivros();

private:
	int quantidadeDeLivros;
	static const int CAPACIDADE_LIVROS = 500;
	Livro livros[CAPACIDADE_LIVROS];
	
	Livro obterLivro(int posicao);
	int procurarLivro(string titulo);
};


#endif // !BIBLIOTECA_H


