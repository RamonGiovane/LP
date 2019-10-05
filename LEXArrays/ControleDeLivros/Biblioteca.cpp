#include "Biblioteca.h"

Biblioteca::Biblioteca() {
	quantidadeDeLivros = 0;
}

bool Biblioteca::adicionarLivro(Livro livro){
	if (quantidadeDeLivros == CAPACIDADE_LIVROS)
		return false;
	
	livros[quantidadeDeLivros++] = livro;
	return true;
}

Livro Biblioteca::obterLivro(string titulo) {
	int posicao = procurarLivro(titulo);
	if (posicao == -1)
		return Livro();

	return livros[posicao];
}

vector<Livro> Biblioteca::obterLivrosPorEditora(string nomeEditora) {
	vector<Livro> livros;
	for (Livro livro : this->livros)
		if (livro.getNomeEditora() == nomeEditora)
			livros.push_back(livro);
	return livros;
}

vector<Livro> Biblioteca::obterLivrosPorAutor(string nomeAutor) {
	vector<Livro> livros;
	for (Livro livro : this->livros)
		if (livro.getNomeAutor() == nomeAutor)
			livros.push_back(livro);
	return livros;
}

int Biblioteca::quantidadeLivros() {
	return quantidadeDeLivros;
}

Livro Biblioteca::obterLivro(int posicao) {
	return livros[posicao];
}

int Biblioteca::procurarLivro(string titulo){
	for (int i = 0; i < quantidadeDeLivros; i++)
		if (livros[i].getTitulo() == titulo)
			return i;
	return -1;
} 

