#include "InverteString.h"
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


