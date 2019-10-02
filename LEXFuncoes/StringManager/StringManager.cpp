#include "StringManager.h"
#include <string>
#include <iostream>

using namespace std;

StringManager::StringManager(){}

string StringManager::inverteString(const string str) {
	
	string newStr;
	for (int i = str.length() -1; i > -1; i--) {
		newStr.push_back(str.at(i));
	}

	return newStr;
}

bool StringManager::insere(char str[], char caractere, int posicao){
	return insere(str, strlen(str), caractere, posicao);
}

bool StringManager::insere(char str[], int sizeString, char caractere, int posicao){
	if (posicao < 0 || posicao > sizeString-1) return false;
	str[posicao] = caractere;
	return true;
}


bool StringManager::pesquisarString(const string & str, const string & subStr){
	return str.find(subStr) == string::npos ? false : true;
}

bool StringManager::pesquisarString(const char str[], int sizeStr, const char subStr[], int sizeSubStr){
	string s(str, sizeStr), sub(subStr, sizeSubStr);
	return pesquisarString(s, sub);
}

int StringManager::replace(char str[], char atual, char novo){
	char c = ' ';
	int i = 0, changes = 0;
	for (; str[i] != '\0'; i++) {
		if (str[i] == atual) {
			str[i] = novo;
			changes++;
		}
	}

	return changes;
}

int StringManager::replace(char str[], int sizeString, char atual, char novo) {
	int count = 0;
	for (int i = 0; i < sizeString; i++) {
		if (str[i] == atual) {
			str[i] = novo;
			count++;
		}
	}

	return count;
}
