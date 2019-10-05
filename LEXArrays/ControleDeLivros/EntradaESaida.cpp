#include "EntradaESaida.h"
using namespace std;
string EntradaESaida::lerString(string prompt) {
	cout << endl << prompt << endl;
	string str;
	getline(cin, str);
	return str;
}

