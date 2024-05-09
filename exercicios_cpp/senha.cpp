#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
#include <array>
using namespace std;

int main(){

//arquivo dedicado a resuloção de problemas, para armazenar os 
//problemas deve criar um arquivo com nome intuitivo ao respectivo exercicio 
    


    int senha=0;


    while(1){
        cin >> senha;
        if(senha == 2002){
            cout << "Acesso Permitido" << endl;
            break;
        }else{
            cout << "Senha Invalida" << endl;
        }
    }










    return 0;
}