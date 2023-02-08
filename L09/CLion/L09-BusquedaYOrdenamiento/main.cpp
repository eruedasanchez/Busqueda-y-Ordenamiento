#include "lib/gtest.h"
#include "src/solucion.h"

int main(int argc, char **argv) {
        /*
        //DESCOMENTAR CUANDO USEN TESTS
        ::testing::InitGoogleTest(&argc, argv);
        return RUN_ALL_TESTS();
        */

        /* Ejercicio 1
        string pal1 = {'d', 'e', 'l', 'i', 'r', 'a'};
        string pal2 = {'d', 'e', 'l', 'i', 'c', 'a'};

        cout << "Las palabras ";
        mostrarVector(pal1);
        cout << " y ";
        mostrarVector(pal2);

        string res = (anagramas(pal1, pal2)) ? " son anagramas" : " no son anagramas";
        cout << res << endl;
         */

        /* Ejercicio 2
        string pal1 = {'d', 'e', 'l', 'i', 'r', 'a'};
        string pal2 = {'h', 'o', 'l', 'a'};

        string pal3 = {'d', 'e', 'l', 'i', 'r'};
        string pal4 = {'h', 'o'};

        vector<string> res1;
        res1.push_back(pal1);
        res1.push_back(pal2);

        vector<string> res2;
        res2.push_back(pal3);
        res2.push_back(pal4);

         */

        // vector<vector<string>> res = { {"hola","bueno"}, {"rico","delira"} };
        // res.push_back(res1);
        // res.push_back(res2);

       // mostrarVectorVectorString(res);

       char letra = 'e';
       int res = int(letra);
       cout << res << endl;

        //vector<string> pal1 = {"hola", "esto", "prueba", "una", "prueba"};


        //vector<string> res = ordenarPorFrec(pal1);

        //mostrarVectorString(res);


        /* Ejercicio 3.a */

        /*
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
         */

        /* vector<int> vec1 = {1, 5, 7, 9};
        vector<int> vec2 = {1, 2, 3, 4};

        vector<int> res = merge(vec1, vec2);

        mostrarVectorEnteros(res); */

        return 0;
}
