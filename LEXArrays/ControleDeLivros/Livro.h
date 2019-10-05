#ifndef LIVRO_H
#define LIVRO_H
#include <string>
using namespace std;
class Livro {
public:
	Livro();
	Livro(string titulo, string nomeAutor, string nomeEditora);

	string getTitulo();
	string getNomeAutor();
	string getNomeEditora();
	int getCodigo();

	void setTitulo(string titulo);
	void setNomeAutor(string nomeAutor);
	void setNomeEditora(string nomeEditora);
	
	string toString();

private:
	string titulo, nomeAutor, nomeEditora;
	int codigo;
};


#endif // !LIVRO_H


