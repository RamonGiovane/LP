#include "Estoque.h"

Estoque::Estoque() {
	estoque = vector<Produto>();
}

Estoque::Estoque(int tamanho) {
	estoque = vector<Produto>(tamanho);
}

void Estoque::adicionarProduto(Produto p) {
	estoque.push_back(p);
	quantidadeProdutos++;
}

Produto & Estoque::obterProduto(int posicao){
	static Produto p;
	if (posicao < 0 || posicao >= (int)estoque.size())
		return p;
	return estoque.at(posicao);
}

int Estoque::pesquisarProduto(string nome) {
	for (int i = 0; i < (int) estoque.size(); i++)
		if (estoque[i].getNome() == nome)
			return i;
	return -1;
}

bool Estoque::removerProduto(int posicao) {
	Produto produto = obterProduto(posicao);
	if (produto.getNome() == "")
		return false;
	estoque.erase(estoque.begin() + posicao);
	return true;
}
