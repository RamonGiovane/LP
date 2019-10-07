#include "ListaDeProdutos.h"
#include <iostream>
#include "TestarListarProdutos.h"
int testarListaProdutos() {
	ListaDeProdutos lista;
	lista.inserirNoInicio(Produto("P1", 2, 2.5));
	lista.inserirNoFim(Produto("P2", 5, 5.5));
	lista.inserirNoInicio(Produto("P0", 12, 0.5));
	
	std::cout << lista.pesquisar("P1").toString() << endl;

	lista.exibir();
	return 0;
}

//int main() {
//	return iniciar();
//}