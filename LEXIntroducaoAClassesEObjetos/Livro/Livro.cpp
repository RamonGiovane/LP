#include "Livro.h"
#include <iostream>

Livro::Livro() {
	codigo = 0;
	titulo = "";
	autor = "";
	editora = "";
}

Livro::Livro(int codigo, string titulo, string autor, string editora) {
	this->codigo = codigo;
	this->titulo = titulo;
	this->autor = autor;
	this->editora = editora;
}

int Livro::getCodigo(){
	return codigo;
}

string Livro::getTitulo(){
	return titulo;
}

string Livro::getAutor()
{
	return autor;
}

string Livro::getEditora()
{
	return editora;
}

string Livro::toString(){
	char str[256];
	sprintf_s(str, 256, "Código: %d\nTítulo: %s\nAutor: %s\nEditora: %s", codigo, titulo.c_str(), autor.c_str(), editora.c_str());
	return str;
}

