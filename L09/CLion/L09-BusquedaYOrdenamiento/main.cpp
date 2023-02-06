#include "lib/gtest.h"
#include "src/solucion.h"
#include <string>


int main(int argc, char **argv) {
        /*
        //DESCOMENTAR CUANDO USEN TESTS
        ::testing::InitGoogleTest(&argc, argv);
        return RUN_ALL_TESTS();
        */

        /*
        string pal1 = {'d', 'e', 'l', 'i', 'r', 'a'};
        string pal2 = {'d', 'e', 'l', 'i', 'c', 'a'};

        cout << "Las palabras ";
        mostrarVector(pal1);
        cout << " y ";
        mostrarVector(pal2);

        string res = (anagramas(pal1, pal2)) ? " son anagramas" : " no son anagramas";
        cout << res << endl;
         */

        /* Ejercicio 3.a */

        vector<int> vec1 = {1, 5, 3, 2, 9};
        vector<int> vec2 = {1, 3, 4, 12};

        cout << "El primer vector pasado por parametro es ";
        mostrarVectorEnteros(vec1);

        cout << " " << endl;
        cout << "El segundo vector pasado por parametro es ";
        mostrarVectorEnteros(vec2);

        cout << " " << endl;
        cout << "Luego, el vector concatenado es ";
        vector<int> res = concatenar(vec1, vec2);
        mostrarVectorEnteros(res);

        cout << " " << endl;
        cout << "Ahora, el vector ordenado es ";
        insertionSort(res);
        mostrarVectorEnteros(res);

        float med = medianaConcatenando(vec1,vec2);
        cout << " " << endl;
        cout << "Finalmente, la mediana del vector ordenado es " << med << endl;

        return 0;
}
