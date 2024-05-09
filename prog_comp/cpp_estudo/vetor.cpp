#include <vector>
#include <iostream>
using namespace std;



int main(){

    //Motivação: Facilitar a manipulação dinâmica de memória em vetores
    vector<int>vt = {1,2,3,4,5,6,7,8,9,10};

    
    cout << "Tamanho de um vetor size(): " << vt.size() << endl;
    cout <<"Tamanho maximo de um vetor max_size(): " << vt.max_size() << endl;
    
    vt.resize(5);

    cout << "Vetor re dimensionado resize(): "<< vt.size() << ": "; 
    for(auto x:vt){
        cout << x;
    }
    cout << endl;
    cout << "Capacidade capacity(): "<< vt.capacity() << endl;
    vt.shrink_to_fit();
    cout << "Redimensiona a capacidade pro numero de elementos shrink_to_fit(): " << vt.capacity() << endl;
    cout << "Retorna bool para vazio empty(): " << vt.empty() << endl;


    vector<int>vt2 = {1,2,3,4,5,6,7,8,9,10};

    cout << "Novo Vetor : "<<endl;
    for(auto x:vt2){
        cout << " " << x ;
    }
    cout << endl;


    cout << "Posicao do vetor at(4): " << vt2.at(4) << endl;
    cout << "Primeiro elemento front(): " << vt2.front() << endl;
    cout << "Ultimo elemento back(): " << vt2.back() << endl; 

    vector<int>vt3;

    cout << "Criando um novo vetor: "<< endl;
    vt3.assign(10,0);
    cout << "Assing assing(10, 0) : ";
    for(auto x:vt3){
        cout << " " << x;
    }
    cout << endl;

    vt3.assign(vt.begin(),vt.end());
    cout << "Assing de outros vetores assing(vt1.begin(),vt1.end()) : ";
    for(auto x:vt3){
        cout <<" "<< x; 
    }
    cout <<endl;

    cout << "Adcionadndo valor ao final do vetor push_back(0): ";
    vt3.push_back(0);
    for(auto x:vt3){
        cout << " " << x;
    }
    cout << endl;
    cout << "Modifica a size: " << vt3.size() << endl;
    cout << "Tira o ultimi valor pop_back(): ";
    vt3.pop_back();
    for(auto x:vt){
        cout << x;
    }
    cout << endl;
    vector<int>::iterator it;
    it = vt3.begin();
    vt3.insert(it, 5);
    cout << "Inserir valor no vetor, necessario criar um iterator .inser(it,5): ";
    for(auto x:vt3){
        cout << x;
    }
    cout << endl;
    cout << "se quiser adicionar ao final usar itararo pro end it = vt3.end(): ";
    it = vt3.end();
    vt3.insert(it,5);
        for(auto x:vt3){
        cout << x;
    }
    cout << endl;
    cout << "Adcionar em qualquer lugar acionar ao beguin+: ";
    it = vt3.begin() + 2;
    vt3.insert(it,5);
        vt3.insert(it,0);
        for(auto x:vt3){
        cout << x;
    }
    cout << endl;

    cout << "Adcionando varios numeros ao final ou no meio ou no inicio : ";
    it = vt3.end();
    vt3.insert(it,5,9);
    for(auto x:vt3){
        cout << x;
    }
    cout << endl;
    cout << "Recomevendo elementos do vetor (vale para qualquer lugar do vetor).erase: ";
    it = vt3.end()-1;
    vt3.erase(it);
    for(auto x:vt3){
        cout << x;
    }
    cout << endl;    
    cout << "Removendo mais de um elemento do elemento 6 ate o final vt3.erase(vt3.begin()+6,vt3.end()): ";
    vt3.erase(vt3.begin()+6,vt3.end());
    for(auto x:vt3){
        cout << x;
    }
    cout << endl;    
    cout << "Limpa o vetor: ";
    vt3.clear();
    for(auto x:vt3){
        cout << x;
    }
    cout << endl;    

    vector<int>vt4={1,2,3,4,5,6,7,8,9,10};
    cout << "Coloca um elemento na posicao .emplacev(t4.emplace(vt4.begin()+2,9)) ";
    vt4.emplace(vt4.begin()+2,9);
    for(auto x:vt4){
        cout << " " << x;
    }
    cout << endl; 
    vt4.emplace_back(9);
    cout << "Coloca um elemento no final do vetor emplace_back(9): ";
    for(auto x:vt4){
        cout << " " << x;
    }
    cout << endl; 














    return 0;
}