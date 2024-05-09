#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
#include <array>
using namespace std;

int main(){

//arquivo dedicado a resuloção de problemas, para armazenar os 
//problemas deve criar um arquivo com nome intuitivo ao respectivo exercicio 
    


    vector<float>A(5); 
    
    for(int i = 0; i < A.size();i++){
        cin >> A[i];
        if(A[i]  <= 10){
        cout << "A[" << i << "]" << " = " <<fixed << setprecision(1) << A[i] << endl;
        }
    }








    return 0;
}