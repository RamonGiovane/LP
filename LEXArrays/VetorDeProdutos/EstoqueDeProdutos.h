#ifndef ESTOQUE_DE_PRODUTOS_H
#define ESTOQUE_DE_PRODUTOS_H
#include <iostream>
using namespace std;

class EstoqueDeProdutos{

public:
	EstoqueDeProdutos();
	const static int NUMERO_PRODUTOS = 10, NUMERO_ARMAZENS = 5;

	bool adicionarProduto(string nome, int quantidade, int numeroEstoque, double preco);
	string relatorioDoEstoque();

private:
	
	string nomesProdutos[NUMERO_PRODUTOS];
	int quantidadesEmEstoque[NUMERO_ARMAZENS][NUMERO_PRODUTOS];
	double precosProdutos[NUMERO_PRODUTOS];
	int produtosAdicionados;
};




#endif // !ESTOQUE_DE_PRODUTOS_H
