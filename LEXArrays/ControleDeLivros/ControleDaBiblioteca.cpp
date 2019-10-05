#include "ControleDaBiblioteca.h"
#include "EntradaESaida.h"
#include <iostream>
#include <string>

using namespace std;

ControleDaBiblioteca::ControleDaBiblioteca() {
	biblioteca = Biblioteca();
}


bool ControleDaBiblioteca::cadastrarLivro() {
	string titulo = EntradaESaida::lerString("Título do Livro:");
	string nomeDaEditora = EntradaESaida::lerString("Nome da Editora:");
	string nomeDoAutor = EntradaESaida::lerString("Nome do Autor:");
	
	if (!biblioteca.adicionarLivro(Livro(titulo, nomeDoAutor, nomeDaEditora))) {
		cout << "\nLimite de livros atingido.";
		return false;
	}

	cout << "\nLivro cadastrado.";
	return true;
}

void ControleDaBiblioteca::imprimirLivros(vector<Livro> livros) {
	for (Livro livro : livros)
		imprimirLivro(livro);
}

void ControleDaBiblioteca::imprimirLivro(Livro livro) {
	cout << livro.toString() << endl;
}

bool ControleDaBiblioteca::consultarEditora() {
	
	vector<Livro> livros = biblioteca.obterLivrosPorEditora(EntradaESaida::lerString("Nome da Editora:"));
	if (livros.empty()) {
		cout << "Nenhum livro desta editora";
		return false;
	}
	imprimirLivros(livros);
	return true;
}


bool ControleDaBiblioteca::consultarAutor() {
	vector<Livro> livros = biblioteca.obterLivrosPorAutor(EntradaESaida::lerString("Nome do Autor:"));
	if (livros.empty()) {
		cout << "Nenhum livro deste autor";
		return false;
	}
	imprimirLivros(livros);
	return true;

}
bool ControleDaBiblioteca::consultarLivro() {
	Livro livro = biblioteca.obterLivro(EntradaESaida::lerString("Título:"));
	if (livro.getCodigo() == 0) {
		cout << "\nLivro não encotrado";
		return false;
	}

	cout << livro.toString();
	return true;
}

int iniciar() {
	ControleDaBiblioteca controle;
	string str = "\tControle de Biblioteca\n1.Adicionar livro\n2.Consultar livro\n3.Consultar livros por editora";
	str += "\n4.Consultar livros por autor";
	int opcao;
	while (true) {
		cout << str;
		
		opcao = atoi(EntradaESaida::lerString("\nEscolha:\n").c_str());

		switch (opcao) {
		case 1:
			controle.cadastrarLivro(); break;
		case 2:
			controle.consultarLivro(); break;
		case 3:
			controle.consultarEditora(); break;
		case 4:
			controle.consultarAutor(); break;
		default:
			break;
		}

	} // while

	return 1;
}

int main() {
	EntradaESaida::localizacao();
	return iniciar();
}
