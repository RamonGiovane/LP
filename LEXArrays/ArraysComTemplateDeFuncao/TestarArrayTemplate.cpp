#include "ArrayTemplate.h"
#include <string>
int main() {
	int arrayInt[] = { 0, 4, 3, 2, 1 };
	std::string arrayString[] = { "emilio", "bola", "carioca", "alba", "rabim" };

	ascendSortArray(arrayInt, 5);
	printArray(arrayInt, 5);

	descendSortArray(arrayString, 5);
	printArray(arrayString, 5);
 }