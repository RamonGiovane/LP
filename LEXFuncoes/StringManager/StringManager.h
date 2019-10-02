#ifndef STRING_MANAGER_H
#define STRING_MANAGER_H
#include <string>
using namespace std;

class StringManager
{
public:
	StringManager();
	string inverteString(string str);
	bool insere(char str[], char caractere, int posicao);
	bool insere(char str[], int sizeString, char caractere, int posicao);
	bool pesquisarString(const string& str, const string& subStr);
	bool pesquisarString(const char str[], int sizeStr, const char subStr[], int sizeSubStr);
	int replace(char str[], char atual, char novo);
	int replace(char str[], int sizeString, char atual, char novo);
private:

};



#endif // !STRING_MANAGER_H
