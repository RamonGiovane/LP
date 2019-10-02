#include "InverteString.h"
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

int main() {
	localizacao();

	StringManager manager;
	cout << manager.inverteString("JOAO") << endl;
	
	char abacate[] = "Abacate", avocado[] = "Avocado", abacateInvocado[] = "Abacate Invocado";

	cout << "\n\n==String replace==\nOriginal: Abacate\tTrocando 'a's por 'i's" << endl;
	testeReplace(manager, abacate, 'a', 'i');

	cout << "\n\n==String replace com limite de 7 letras ==\nOriginal: Avocado\tTrocando 'o's por 'a's" << endl;
	testeReplace(manager, avocado, 'o', 'a', strlen(avocado));
	
	cout << "\n\n==String replace com limite de 7 letras ==\nOriginal: Abacate Invocado\tTrocando 'a's por 'i's" << endl;
	testeReplace(manager, abacateInvocado, 'a', 'i', 7);
	
	prompt();
}





