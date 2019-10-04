#include "EstoqueDeProdutos.h"

EstoqueDeProdutos::EstoqueDeProdutos(){ }

bool EstoqueDeProdutos::adicionarProduto(string nome, int quantidade, int numeroEstoque, double preco) {
	if(produtosAdicionados == NUMERO_PRODUTOS) return false;

	nomesProdutos[produtosAdicionados] = nome;
	quantidadesEmEstoque[numeroEstoque][produtosAdicionados] = quantidade;
	precosProdutos[produtosAdicionados] = quantidade;

	return true;
}

string EstoqueDeProdutos::relatorioDoEstoque(){
	string relatorio = "===== Relatório =====\n";
	
	int estoqueIndex = 0, produtoIndex = 0;
	char strRelatorio[500];
	int totalProdutos[NUMERO_PRODUTOS], precosProdutos[NUMERO_PRODUTOS];
	int quantidade;
	for (; produtoIndex < produtosAdicionados; produtoIndex++) {
		relatorio += "\tQuantidade de Produtos em Estoque";
		for (; estoqueIndex < NUMERO_ARMAZENS; estoqueIndex++) {
			quantidade = quantidadesEmEstoque[estoqueIndex][produtoIndex];
			sprintf("\nEstoque %d: %d - Valor: R$ 1.2f", strRelatorio, 500, estoqueIndex, 
				quantidade, precosProdutos[produtoIndex] * quantidade);
			relatorio += strRelatorio;
			totalProdutos[produtoIndex] += quantidade;
		}
	}


}
