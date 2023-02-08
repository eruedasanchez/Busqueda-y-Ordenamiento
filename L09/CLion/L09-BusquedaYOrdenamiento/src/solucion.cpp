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

void mostrarVectorString(vector<string> &vs){
    cout << "{";
    for(int i = 0; i < vs.size(); i++){
        if(i != vs.size()-1){
            mostrarVector(vs[i]);
            cout << ",";
        } else {
            mostrarVector(vs[i]);
            cout << "}";
        }
    }
}

void mostrarVectorVectorString(vector<vector<string>> &vvs){
    cout << "{";
    for(int i = 0; i < vvs.size(); i++){
        if(i != vvs.size()-1){
            mostrarVectorString(vvs[i]);
            cout << ",";
        } else {
            mostrarVectorString(vvs[i]);
            cout << "}";
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

/*
vector<string> ordenarPorFrec(vector<string> &palabras){
    vector<string> palabrasOrdenadas;
    vector<vector<string>> palabrasSegunTamanio;

    // Recorro el vector palabras y coloco a cada una de ellas en el vector correspondiente de acuerdo a su longitud
    for(int i = 0; i < palabras.size(); i++){
        int longPalabraActual = palabras[i].size();
        for(int j = 0; j <= 40; j++){
            if(longPalabraActual == j){
                palabrasSegunTamanio[longPalabraActual].push_back(palabras[i]);
            }
        }
    }

    // Ahora que las palabras estan todas agrupadas segun la longitud, las colocamos a todas en el vector palabrasOrdenadas
    for(int k = 0; k <= 40; k++){
        vector<string> secuPalabrasLongActual = palabrasSegunTamanio[k];
        for(int r = 0; r < secuPalabrasLongActual.size(); r++){
            palabrasOrdenadas.push_back(secuPalabrasLongActual[r]);
        }
    }
    return palabrasOrdenadas;
}
*/

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

/* Ejercicio 3.b */

vector<int> merge(vector<int> &v1, vector<int> &v2){
    vector<int> vecOrdenado;
    int i = 0;
    int j = 0;
    while(i < v1.size() || j < v2.size()){
        if(v1[i] < v2[j]){
            vecOrdenado.push_back(v1[i]);
            i++;
        } else {
            vecOrdenado.push_back(v2[j]);
            j++;
        }
    }
    /* Termino de insertar los elementos que faltan */
    if(i == v1.size()){
        /* Insertar los elementos restantes de v2 */
        while(j < v2.size()){
            vecOrdenado.push_back(v2[j]);
            j++;
        }
    }
    if(j == v2.size()){
        /* Insertar los elementos restantes de v1 */
        while(i < v1.size()){
            vecOrdenado.push_back(v1[i]);
            i++;
        }
    }
    return vecOrdenado;
}

float medianaMerge(vector<int> &v1, vector<int> &v2){
    // PRE: Estan ordenadas v1 y v2
    vector<int> ordenados = merge(v1, v2);
    float mediana;
    if(ordenados.size() % 2 == 1){
        /* Mediana en el caso impar */
        mediana = ordenados[(ordenados.size() / 2) + 1];
    } else {
        /* Mediana en el caso par */
        mediana = (ordenados[(ordenados.size() / 2)] + ordenados[(ordenados.size() / 2) + 1]) / 2;
    }
    return mediana;
}

/* Ejercicio 4 */

/* Ejercicio 4.a */

bool esMenorSegunOrdenNatural(string &palabra1, string &palabra2){
    bool esMenor = false;

    /* Defino primero si es menor utilizando el criterio por palabras */
    int indexPal1 = 0;
    int indexPal2 = 0;

    while((indexPal1 < palabra1.size()) && (indexPal2 < palabra2.size()) && (int(palabra1[indexPal1]) == int(palabra2[indexPal2]))){
        indexPal1++;
        indexPal2++;
    }

    if((indexPal1 == palabra1.size()) && (indexPal2 < palabra2.size())){
        /* Caso 1. La palabra 1 es prefijo de la palabra 2. Por lo tanto, es menor */
        esMenor = true;
    } else if(int(palabra1[indexPal1]) != int(palabra2[indexPal2])){
       /* Caso donde no hay coincidencia de caracteres */
       if(((int(palabra1[indexPal1]) > 47 && int(palabra1[indexPal1]) < 58) && !(int(palabra2[indexPal2]) > 47 && int(palabra2[indexPal2]) < 58)) || (!(int(palabra1[indexPal1]) > 47 && int(palabra1[indexPal1]) < 58) && !(int(palabra2[indexPal2]) > 47 && int(palabra2[indexPal2]) < 58) && (int(palabra1[indexPal1]) < int(palabra2[indexPal2])))){
           /* Caso donde palabra 1 tiene un numero en el caracter no coincidente y palabra 2 tiene una letra o la letra de palabra 1 tiene un ascii menor al de palabra 2*/
            esMenor = true;
       } else if((int(palabra1[indexPal1]) > 47 && int(palabra1[indexPal1]) < 58) && (int(palabra2[indexPal2]) > 47 && int(palabra2[indexPal2]) < 58)){
           /* Caso donde no coinciden los caracteres y son numeros */
           if(int(palabra1[indexPal1]) < int(palabra2[indexPal2])){
               esMenor = true;
           }
       }
    }
    return esMenor;
}

/* Ejercicio 4.b */

void intercambiarPalabras(vector<string> &vpalabra, int indice, int minimo){
    string tmp = vpalabra[indice];
    vpalabra[indice] = vpalabra[minimo];
    vpalabra[minimo] = tmp;
}

void natSorted(vector<string> &vs){
    int min = 0;
    for(int i = 0; i < vs.size(); i++){
        for(int j = i+1; j < vs.size(); j++){
            if(esMenorSegunOrdenNatural(vs[j], vs[min])){
                min = j;
            }
        }
        intercambiarPalabras(vs,i,min);
    }
}







