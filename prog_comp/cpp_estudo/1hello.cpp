#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
#include <array>
using namespace std;

int main(){

//arquivo dedicado a resuloção de problemas, para armazenar os 
//problemas deve criar um arquivo com nome intuitivo ao respectivo exercicio 
    
    vector<int>vt(1000);

    int j = 0,num;
    cin >> num;


    for(int i =0; i < vt.size(); i++){

        vt[i] = j;
        j++;
        if(j % num == 0){
            j=0;
        }
        cout << "N[" << i << "]" << " = " << vt[i] << endl;
    }


    return 0;





    return 0;
}