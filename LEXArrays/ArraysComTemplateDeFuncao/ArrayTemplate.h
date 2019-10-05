#ifndef ARRAY_TEMPLATE_H
#define ARRAY_TEMPLATE_H
#include <algorithm>
#include <iostream>

template <typename T>
int searchInArray(const T vetor[], T elemento, size_t sizeArray) {
	for (size_t i = 0; i < sizeArray; i++)
		if (vetor[i] == elemento)
			return i;
	return -1;
}

template <typename T>
void ascendSortArray(T vetor[], size_t sizeArray) {
	//sort(vetor, vetor+sizeArray);
}

template <typename T>
void descendSortArray(T vetor[], size_t sizeArray) {
	ascendSortArray(vetor, sizeArray);
	reverseArray(vetor, sizeArray);
}

template <typename T>
void reverseArray(T vetor[], size_t sizeArray) {
	T elemento;
	for (size_t inicio = 0, fim = sizeArray-1; inicio < sizeArray; inicio++, fim--) {
		elemento = vetor[fim];
		vetor[fim] = vetor[inicio];
		vetor[inicio] = elemento;
		std::cout << vetor[inicio];
	}
}

template <typename T>
void printArray(const T vetor[], size_t sizeArray) {
	std::cout << "[ ";
	for (size_t i = 0; i < sizeArray; i++)
		std::cout << vetor[i] << " ";
	std::cout << "]";
}

#endif // !ARRAY_TEMPLATE_H
