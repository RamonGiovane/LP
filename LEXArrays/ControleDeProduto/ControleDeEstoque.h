#include "Estoque.h"

class ControleDeEstoque {

public:
	bool cadastrarProduto();
	void valorTotalEstoques();

	void quantidadeDeProdutos();
	bool procurarProduto();
	void relatorio();

	int iniciar();
	
private:
	Estoque estoqueAlimenticio, estoqueLimpeza, estoqueHigiene;
	string lerString(string mensagem);
	int lerInteiro(string mensagem);
	double lerDouble(string mensagem);
	bool printProduto(Produto produto, string nomeDoEstoque);
	bool printProduto(Estoque estoque, string nomeProduto);
	int quantidadeDeProdutos(Estoque estoque);
	double valorTotalEstoques(Estoque estoque);
	
};

int main();