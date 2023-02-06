
#ifndef L09_BUSQUEDAYORDENAMIENTO_H
#define L09_BUSQUEDAYORDENAMIENTO_H

#include <iostream>
#include <vector>
#include "string"

using namespace std;

void mostrarVector(string &s);

/* Ejercicio 1 */

int encontrarMinPosicion(string &palabra, int desde, int hasta);
void intercambiar(string &palabra, int indice, int minimo);
void selectionSort(string &palabra);
bool sonIguales(string &palabra1, string &palabra2);
bool anagramas(string &palabra1, string &palabra2);

/* Ejercicio 2 */

/* Ejercicio 3 */

void mostrarVectorEnteros(vector<int> &v);
void intercambiarEnteros(vector<int> &v, int ind1, int ind2);
void insert(vector<int> &v, int i);
void insertionSort(vector<int> &v);

/* Ejercicio 3.a */

vector<int> concatenar(vector<int> &v1, vector<int> &v2);
float medianaConcatenando(vector<int> &v1, vector<int> &v2);







#endif //L09_BUSQUEDAYORDENAMIENTO_H


