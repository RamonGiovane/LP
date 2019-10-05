#include "Livro.h"

Livro::Livro() {
	titulo = nomeAutor = nomeEditora = "";
	codigo = 0;
}

Livro::Livro(string titulo, string nomeAutor, string nomeEditora){
	static int numeroDeLivros = 0;
	codigo = ++numeroDeLivros;
	setTitulo(titulo);
	setNomeAutor(nomeAutor);
	setNomeEditora(nomeEditora);
}

string Livro::getTitulo(){
	return titulo;
}

string Livro::getNomeAutor(){
	return nomeAutor;
}

string Livro::getNomeEditora(){
	return nomeEditora;
}

int Livro::getCodigo(){
	return codigo;
}

void Livro::setTitulo(string titulo){
	this->titulo = titulo;
}

void Livro::setNomeAutor(string nomeAutor){
	this->nomeAutor = nomeAutor;
}

void Livro::setNomeEditora(string nomeEditora){
	this->nomeEditora = nomeEditora;
}
 
string Livro::toString() {
	char str[500];
	sprintf_s(str, 500, "Código do Livro: %d\tTítulo: %s\nAutor: %s\tEditora: %s", codigo, titulo.c_str(),
		nomeAutor.c_str(), nomeEditora.c_str());
	
	return str;
}
