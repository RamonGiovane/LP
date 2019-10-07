#ifndef ESTOQUE_H
#define ESTOQUE_H
#include <vector>
#include "Produto.h"

class Estoque {
public:
	// Cria um estoque de produtos com tamanho inicial igual a zero.
	Estoque();
	
	// Cria um estoque de produtos com tamanho inicial definido pelo par�metro tamanho.
	Estoque(int tamanho);
	
	// Acrescenta um produto no estoque.
	void adicionarProduto(Produto p);
	
	/* Obt�m a refer�ncia do objeto Produto armazenado no array de objetos na posi��o indicada.
	Se a posi��o for inv�lida retorna um objeto Produto com atributos vazios. ATEN��O: o compilador ir�
	emitir uma advert�ncia se uma refer�ncia para uma vari�vel tempor�ria for retornada. */
	Produto& obterProduto(int posicao);
	
	/* Pesquisa por um nome de produto no estoque.
	Retorna a posi��o do produto no estoque, se o produto n�o estiver cadastrado retorna -1. */
	int pesquisarProduto(string nome);
	
	/* Exclui um produto do estoque na posi��o indicada. Retorna true se o produto foi exclu�do, caso
	contr�rio retorna false. */
	bool removerProduto(int posicao);

private:
	// Rela��o de produtos do estoque.
	vector<Produto> estoque;
	
	// Quantidade de produtos cadastrados no estoque.
	int quantidadeProdutos;
};

#endif