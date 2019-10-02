#include "StringManager.h"
#include <iostream>
#include <conio.h>
#include "TestarInverteString.h"

using namespace std;

void localizacao() {
	setlocale(LC_ALL, "pt-br");
}

void prompt() { 
	cout << "\n\n-Press any key-\n" << endl;
	_getch();
}

void testeReplace(StringManager manager, char str[], char atual, char novo, int limite = 0) {
	int manipulacoes = 
		limite == 0 ? manager.replace(str, atual, novo) : manager.replace(str, limite, atual, novo);
	
	cout << "Manipulações: " << manipulacoes << "\tResultado: " << str;

}

void testarPesquisa(StringManager manager, char abacate[], char avocado[], char abacateInvocado[]) {
	cout << "\n\n==Pesquisa String 1: Abacate em Abacate Invocado(char[])==" << endl;
	cout << "R: " << manager.pesquisarString(abacateInvocado, strlen(abacateInvocado), abacate, strlen(abacate));

	cout << "\n\n==Pesquisa String 2: Avocado em Abacate Invocado (char[])==" << endl;
	cout << "R: " << manager.pesquisarString(abacateInvocado, strlen(abacateInvocado), avocado, strlen(avocado));

	string preco("Preço"), preco2("preço"), stringInteira("Preço Curto.. Prazo Longo");

	cout << "\n\n==Pesquisa String 3: Preço em " << stringInteira << " (string)==" << endl;
	cout << "R: " << manager.pesquisarString(stringInteira, preco);

	cout << "\n\n==Pesquisa String 4: preço em " << stringInteira << " (string)==" << endl;
	cout << "R: " << manager.pesquisarString(stringInteira, preco2);
}

int main() {
	localizacao();

	StringManager manager;
	cout << "\n\n==Inverte string JOAO==\n";
	cout << manager.inverteString("JOAO") << endl;
	
	char abacate[] = "Abacate", avocado[] = "Avocado", abacateInvocado[] = "Abacate Invocado";

	testarPesquisa(manager, abacate, avocado, abacateInvocado);

	cout << "\n\n==String replace==\nOriginal: Abacate\tTrocando 'a's por 'i's" << endl;
	testeReplace(manager, abacate, 'a', 'i');

	cout << "\n\n==String replace com limite de 7 letras ==\nOriginal: Avocado\tTrocando 'o's por 'a's" << endl;
	testeReplace(manager, avocado, 'o', 'a', strlen(avocado));

	cout << "\n\n==String replace com limite de 7 letras ==\nOriginal: Abacate Invocado\tTrocando 'a's por 'i's" << endl;
	testeReplace(manager, abacateInvocado, 'a', 'i', 7);
	
	prompt();
}

