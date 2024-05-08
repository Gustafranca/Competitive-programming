#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
#include <array>
using namespace std;

int main(){


    array<int,10>vt = {1,2,3,4,5,6,7,8,9,10};
    
    cout << "FUNLÇÕES IDENTIFICADORAS" << endl;

    cout << "Tamanho do array  vt.size() : " << vt.size() << endl;
    cout << "Tamanho maximo do array vt.max_size() : " << vt.max_size() << endl;
    cout << "Retorna bool para vetor vazio vt.empty() : " <<  vt.empty() << endl; 
    cout << "Valor do vetor na posicao vt.at(4): "<< vt.at(4) << endl ;
    cout << "Primeiro elemento vt.front() : " << vt.front() << endl ;
    cout << "Ultimo elemento vt.back() : "<<  vt.back() << endl;

    cout << "FUNCOES MANIPULADORAS" << endl;
    array<int,10>vt2;
    vt2.fill(0);
    cout << "Penche o array de valores vt2.fill(0): [";
    for(auto x:vt2){
        cout << vt2[x] << ",";
    }
    cout << "]" << endl;

    cout <<  "Troca os elementos de 2 array vt2.swap(vt2)" << endl;










    return 0;
}