#include "ListaDeProdutos.h"

ListaDeProdutos::ListaDeProdutos(){ }

void ListaDeProdutos::inserirNoInicio(const Produto & produto) {
	produtos.insert(produtos.begin(), produto);
}

void ListaDeProdutos::inserirNoFim(const Produto & produto) {
	produtos.push_back(produto);
}

bool ListaDeProdutos::removerDoInicio(Produto & produto) {
	if (vazia()) return false;

	produto = produtos.at(0);
	produtos.erase(produtos.begin());
	
	return true;
}

bool ListaDeProdutos::removerDoFim(Produto & produto) {
	if (vazia()) return false;
	
	produto = produtos.at(produtos.size() - 1);
	produtos.erase(produtos.end());
	
	return true;
}

Produto & ListaDeProdutos::pesquisar(string nome) {
	static Produto p;
	for (int i = 0; i<tamanho(); i++)
		if (produtos[i].getNome() == nome)
			return produtos[i];
	
	return p;
}

bool ListaDeProdutos::vazia() {
	return tamanho() == 0 ? true : false;
}

bool ListaDeProdutos::exibir() {
	if (vazia()) return false;
	for (Produto produto : produtos)
		cout << produto.toString() << endl;
	return true;
}

int ListaDeProdutos::tamanho() {
	return produtos.size();
}

