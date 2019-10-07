#ifndef PRODUTO_H
#define PRODUTO_H
#include <string>
using namespace std;

class Produto {

public:
	Produto();
	Produto(string nome, int quantidade, double preco);
	void setNome(string nome);
	void setQuantidade(int quantidade);
	void setPreco(double preco);
	string getNome();
	int getQuantidade();
	double getPreco();
	string toString();

private:
	string nome; // Nome do produto.
	int quantidade; // Quantidade do produto armazenada em estoque.
	double preco; // Preço unitário do produto.
};

#endif