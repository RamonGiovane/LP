#ifndef INVERTE_STRING_H
#define INVERTE_STRING_H
#include <string>
using namespace std;

class StringManager
{
public:
	StringManager();
	string inverteString(string str);
	int replace(char str[], char atual, char novo);
	int replace(char str[], int sizeString, char atual, char novo);
private:

};



#endif // !INVERTE_STRING_H
