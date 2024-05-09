#include <iostream>
#include <map>

using namespace std;


int main(){
    //Motivacao: Permitir o mapeamento de um valor (Key) em outro valor (Mapped)
    map<int,string>prod;
    //muito pareceido com dic do python
    map<int,string>::iterator itmap;

    prod.insert(pair<int,string>(0,"Mouse"));
    prod.insert(pair<int,string>(1,"Teclado"));
    prod.insert(pair<int,string>(2,"Monitor"));
    prod.insert(pair<int,string>(3,"Caixa de som"));
    prod.insert(pair<int,string>(4,"Noteobook"));
    prod.insert(pair<int,string>(5,"Tablet"));

    prod.erase(prod.find(1), prod.find(3));
    itmap = prod.find(3);

    if(itmap == prod.end()){
        cout << "Produto nao encontrado" << endl;
    }else{
        cout <<  "Produto encontrado" << endl;
        cout << "Codigo: " << itmap->first << " - " << "Produto: "<< itmap->second << endl;
        cout << endl;
    }

    for(auto it:prod){
        cout << it.first<< " - " <<it.second << endl;
    }


}
