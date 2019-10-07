#ifndef LISTA_DE_PRODUTOS_H
#define LISTA_DE_PRODUTOS_H
#include <vector>
#include <iostream>
#include "Produto.h"

using namespace std;
class ListaDeProdutos {

public:
	ListaDeProdutos();

	// Insere um produto no in�cio da lista.
	void inserirNoInicio(const Produto &produto);
	
	// Insere um produto no fim da lista.
	void inserirNoFim(const Produto &produto);
	
	/* Remove um produto do in�cio da lista e armazena no par�metro formal produto. Retorna false se foi
	feito uma tentativa de remover o produto de uma lista vazia e true se a remo��o for bem sucedida.
	*/
	bool removerDoInicio(Produto &produto);
	
	/* Remove um produto do fim da lista e armazena no par�metro formal produto. Retorna false se foi
	feito uma tentativa de remover o produto de uma lista vazia e true se a remo��o for bem sucedida.
	*/
	bool removerDoFim(Produto &produto);
	
	/* Pesquisa pelo nome de um produto na lista. Se o produto for localizado retorna uma c�pia do produto,
	caso contr�rio retorna um produto com valores nulos.
	*/
	Produto& pesquisar(string nome);
	
	// Retorna true se a lista estiver vazia, caso contr�rio retorna false.
	bool vazia();
	
	// Exibe os dados dos produtos da lista e retorna true. Se a lista estiver vazia retorna false.
	bool exibir();
	
	// Obt�m o n�mero de produtos da lista.
	int tamanho();

private:
	vector<Produto> produtos;

};

#endif // !LISTA_DE_PRODUTOS_H
