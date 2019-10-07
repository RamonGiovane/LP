#include "ControleDeEstoque.h"
#include <iostream>
#include <iomanip>

using namespace std;

bool ControleDeEstoque::cadastrarProduto() {
	string nome = lerString("Nome do Produto: ");
	int quantidade = lerInteiro("Quantidade de Produtos: ");
	double preco = lerDouble("Preço Unitário: ");
	
	Produto produto(nome, quantidade, preco);
	
	int tipoProduto = lerInteiro("Tipo do Produto:\n1-Alimentício 2-Higiene 3-Limpeza");
	switch (tipoProduto) {
	case 1:
		estoqueAlimenticio.adicionarProduto(produto); break;
	case 2:
		estoqueHigiene.adicionarProduto(produto); break;
	case 3:
		estoqueLimpeza.adicionarProduto(produto); break;
	default:
		cout << "\nOpção inválida."; return false;
	}
	
	return true;

}

void ControleDeEstoque::valorTotalEstoques() {
	cout.precision(2);
	cout << "\nValor total dos produtos:\n";
	cout << "\tAlimentício: R$ " << fixed << valorTotalEstoques(estoqueAlimenticio) << endl;
	cout << "\tHigiene: R$ " << fixed << valorTotalEstoques(estoqueHigiene) << endl;
	cout << "\tLimpeza: R$ " << fixed << valorTotalEstoques(estoqueLimpeza) << endl;
}

double ControleDeEstoque::valorTotalEstoques(Estoque estoque) {
	double precoTotal = 0.0;
	int posicao = 0;
	Produto produto;
	while (true) {
		produto = estoque.obterProduto(posicao);
		if (produto.getNome() == "" && produto.getPreco() == 0.0 && produto.getQuantidade() == 0)
			break;

		precoTotal += produto.getPreco() * produto.getQuantidade();
		posicao++;
	}
	return precoTotal;
}

void ControleDeEstoque::quantidadeDeProdutos() {
	cout << "\nQuantidade de produtos em estoque:\n";
	cout << "\tAlimentício: " <<  quantidadeDeProdutos(estoqueAlimenticio) << endl;
	cout << "\tHigiene: " << quantidadeDeProdutos(estoqueHigiene) << endl;
	cout << "\tLimpeza: " << quantidadeDeProdutos(estoqueLimpeza) << endl;

}

int ControleDeEstoque::quantidadeDeProdutos(Estoque estoque) {
	int posicao = 0, quantidade = 0;
	Produto produto;
	while(true) {
		produto = estoque.obterProduto(posicao);
		if (produto.getNome() == "" && produto.getPreco() == 0.0 && produto.getQuantidade() == 0)
			break;

		quantidade += produto.getQuantidade();
		posicao++;
	}
	return quantidade;
}

bool ControleDeEstoque::procurarProduto() {
	string nome = lerString("Nome do Produto");
	
	//Se o produto existir, printa o nome de seu estoque e sua descrição
	printProduto(estoqueAlimenticio, nome);
	printProduto(estoqueHigiene, nome);
	printProduto(estoqueLimpeza, nome);
	
	return true;
}

bool ControleDeEstoque::printProduto(Estoque estoque, string nomeProduto) {
	return printProduto(estoque.obterProduto(estoque.pesquisarProduto(nomeProduto)), nomeProduto);
}

int ControleDeEstoque::iniciar() {
	int opcao;
	while (true) {
		opcao = lerInteiro("\n1-Cadastrar Produto\n2-Procurar um Produto\n3-Valor Total dos Estoques\n4-Quantidade de Produtos nos Estoques");
		switch (opcao) {
		case 1:
			cadastrarProduto();
			break;
		case 2:
			procurarProduto();
			break;
		case 3:
			valorTotalEstoques();
			break;
		case 4:
			quantidadeDeProdutos();
			break;
		default:
			return 0;
		}
	}
	return 1;
}

string ControleDeEstoque::lerString(string mensagem) {
	string str;
	cout << mensagem << endl;
	getline(cin, str);

	return str;
}

int ControleDeEstoque::lerInteiro(string mensagem) {
	return stoi(lerString(mensagem));
}

double ControleDeEstoque::lerDouble(string mensagem) {
	return stod(lerString(mensagem));
}

bool ControleDeEstoque::printProduto(Produto produto, string nomeDoEstoque = "") {
	if (produto.getNome() == "" && produto.getPreco() == 0.0 && produto.getQuantidade() == 0)
		return false;
	if (nomeDoEstoque != "")
		cout << "Tipo do Estoque: " << nomeDoEstoque << endl;

	cout << produto.toString();
	return true;
}

int main() {
	setlocale(LC_ALL, "pt-BR");
	ControleDeEstoque controleEstoque;
	return controleEstoque.iniciar();
}