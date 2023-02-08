
#ifndef L09_BUSQUEDAYORDENAMIENTO_H
#define L09_BUSQUEDAYORDENAMIENTO_H

#include <iostream>
#include <vector>
#include "string"
#include <string.h>

using namespace std;

void mostrarVector(string &s);
void mostrarVectorString(vector<string> &vs);
void mostrarVectorVectorString(vector<vector<string>> &vvs);

/* Ejercicio 1 */

int encontrarMinPosicion(string &palabra, int desde, int hasta);
void intercambiar(string &palabra, int indice, int minimo);
void selectionSort(string &palabra);
bool sonIguales(string &palabra1, string &palabra2);
bool anagramas(string &palabra1, string &palabra2);

/* Ejercicio 2 */

vector<string> ordenarPorFrec(vector<string> &palabras);

/* Ejercicio 3 */

void mostrarVectorEnteros(vector<int> &v);
void intercambiarEnteros(vector<int> &v, int ind1, int ind2);
void insert(vector<int> &v, int i);
void insertionSort(vector<int> &v);

/* Ejercicio 3.a */

vector<int> concatenar(vector<int> &v1, vector<int> &v2);
float medianaConcatenando(vector<int> &v1, vector<int> &v2);

/* Ejercicio 3.b */

vector<int> merge(vector<int> &v1, vector<int> &v2);
float medianaMerge(vector<int> &v1, vector<int> &v2);

/* Ejercicio 4.a */
bool esMenorSegunOrdenNatural(string &palabra1, string &palabra2);

/* Ejercicio 4.b */

void intercambiarPalabras(vector<string> &vpalabra, int indice, int minimo);
void natSorted(vector<string> &vs);






#endif //L09_BUSQUEDAYORDENAMIENTO_H


