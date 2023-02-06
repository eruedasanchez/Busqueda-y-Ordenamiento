#include "solucion.h"

void mostrarVector(string &s){
    cout << "{";
    for(int i = 0; i < s.size(); i++){
        if(i != s.size()-1){
            cout << s[i] << ",";
        } else {
            cout << s[i] << "}";
        }
    }
}

/* Ejercicio 1 */

int encontrarMinPosicion(string &palabra, int desde, int hasta){
    int min = desde;
    for(int i = desde+1; i < hasta; i++){
        if(int(palabra[i]) < int(palabra[min])){
            min = i;
        }
    }
    return min;
}

void intercambiar(string &palabra, int indice, int minimo){
    char tmp = palabra[indice];
    palabra[indice] = palabra[minimo];
    palabra[minimo] = tmp;
}

void selectionSort(string &palabra){
    for(int i = 0; i < palabra.size(); i++){
        int minPos = encontrarMinPosicion(palabra, i, palabra.size());
        intercambiar(palabra, i, minPos);
    }
}

bool sonIguales(string &palabra1, string &palabra2){
    bool iguales = true;

    if(palabra1.size() != palabra2.size()){
        iguales = false;
    } else {
        for(int i = 0; i < palabra1.size(); i++){
            if(int(palabra1[i]) != int(palabra2[i])){
                iguales = false;
                break;
            }
        }
    }
    return iguales;
}

bool anagramas(string &palabra1, string &palabra2){
    bool sonAnagramas = false;

    selectionSort(palabra1);
    selectionSort(palabra2);

    if(sonIguales(palabra1,palabra2)){
            sonAnagramas = true;
    }
    return sonAnagramas;
}

/* Ejercicio 2 */

/* Ejercicio 3 */

void mostrarVectorEnteros(vector<int> &v){
    cout << "{";
    for(int i = 0; i < v.size(); i++){
        if(i != v.size()-1){
            cout << v[i] << ",";
        } else {
            cout << v[i] << "}";
        }
    }
}

void intercambiarEnteros(vector<int> &v, int ind1, int ind2){
    char tmp = v[ind1];
    v[ind1] = v[ind2];
    v[ind2] = tmp;
}

void insert(vector<int> &v, int i){
    for(int j = i; j > 0 && v[j] < v[j-1]; j--){
        intercambiarEnteros(v,j,j-1);
    }
}

void insertionSort(vector<int> &v){
    for(int i = 0; i < v.size(); i++){
        insert(v,i);
    }
}

/* Ejercicio 3.a */

vector<int> concatenar(vector<int> &v1, vector<int> &v2){
    vector<int> concatenados;
    for(int i = 0; i < v1.size(); i++){
        concatenados.push_back(v1[i]);
    }
    for(int j = 0; j < v2.size(); j++){
        concatenados.push_back(v2[j]);
    }
    return concatenados;
}

float medianaConcatenando(vector<int> &v1, vector<int> &v2){
    // PRE: Estan ordenadas v1 y v2
    vector<int> concatenados = concatenar(v1, v2);
    insertionSort(concatenados);
    float mediana;
    if(concatenados.size() % 2 == 1){
        /* Mediana en el caso impar */
        mediana = concatenados[(concatenados.size() / 2) + 1];
    } else {
        /* Mediana en el caso par */
        mediana = (concatenados[(concatenados.size() / 2)] + concatenados[(concatenados.size() / 2) + 1]) / 2;
    }
    return mediana;
}





