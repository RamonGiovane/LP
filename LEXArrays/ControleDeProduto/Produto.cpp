#include "Produto.h"

Produto::Produto() { }

Produto::Produto(string nome, int quantidade, double preco) {
	setNome(nome);
	setQuantidade(quantidade);
	setPreco(preco);
}

void Produto::setNome(string nome) {
	this->nome = nome;
}

void Produto::setQuantidade(int quantidade) {
	this->quantidade = quantidade;
}

void Produto::setPreco(double preco) {
	this->preco = preco;
}

string Produto::getNome() {
	return nome;
}

int Produto::getQuantidade() {
	return quantidade;
}

double Produto::getPreco() {
	return preco;
}

string Produto::toString() {
	char str[500];
	sprintf_s(str, 500, "Nome do Produto: %s\nPreço Unitário: 1.2%f - Quantiade: %d", nome.c_str(), preco, quantidade);
	return str;
}

