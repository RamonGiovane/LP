#ifndef ESTOQUE_H
#define ESTOQUE_H
#include <vector>
#include "Produto.h"

class Estoque {
public:
	// Cria um estoque de produtos com tamanho inicial igual a zero.
	Estoque();
	
	// Cria um estoque de produtos com tamanho inicial definido pelo parâmetro tamanho.
	Estoque(int tamanho);
	
	// Acrescenta um produto no estoque.
	void adicionarProduto(Produto p);
	
	/* Obtém a referência do objeto Produto armazenado no array de objetos na posição indicada.
	Se a posição for inválida retorna um objeto Produto com atributos vazios. ATENÇÃO: o compilador irá
	emitir uma advertência se uma referência para uma variável temporária for retornada. */
	Produto& obterProduto(int posicao);
	
	/* Pesquisa por um nome de produto no estoque.
	Retorna a posição do produto no estoque, se o produto não estiver cadastrado retorna -1. */
	int pesquisarProduto(string nome);
	
	/* Exclui um produto do estoque na posição indicada. Retorna true se o produto foi excluído, caso
	contrário retorna false. */
	bool removerProduto(int posicao);

private:
	// Relação de produtos do estoque.
	vector<Produto> estoque;
	
	// Quantidade de produtos cadastrados no estoque.
	int quantidadeProdutos;
};

#endif