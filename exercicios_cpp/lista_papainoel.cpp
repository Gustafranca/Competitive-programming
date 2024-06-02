#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
#include <array>
#include <algorithm>
using namespace std;

int main(){

//arquivo dedicado a resuloção de problemas, para armazenar os 
//problemas deve criar um arquivo com nome intuitivo ao respectivo exercicio 
    

    int num=0,count_sinal_mais=0,count_sinal_menos=0;
    char sinal;
    vector<string>nomes;

    cin >> num;

    for(int i = 0; i < num; i++){
        string nome;
        cin >> sinal;
        cin >> nome;
        nomes.push_back(nome);
        if(sinal == '-'){
            count_sinal_menos++;
        }else{
            count_sinal_mais++;
        }
    }

    sort(nomes.begin(), nomes.end());

    for(auto nome: nomes){
        cout << nome << endl;
    }
    cout << "Se comportaram: " << count_sinal_mais << " | ";
    cout << "Nao se comportaram: " <<count_sinal_menos << endl;


    return 0;
}