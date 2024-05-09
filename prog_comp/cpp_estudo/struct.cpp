#include <iostream>

using namespace std;

struct Carro{
    string nome;
    string cor;
    int pot;
    int velMax;
    int vel;

    void insere(string stnome, string stcor, int stpot, int stvel,int stvelmax){

        nome = stnome;
        cor = stcor;
        pot = stpot;
        vel = stvel;
        velMax = stvelmax;


    }

    void mostra(){
        cout <<nome<<endl;
        cout <<cor<<endl;
        cout <<pot<<endl;
        cout << vel << endl;
        cout <<velMax<<endl;
        cout << endl;
    }

    int mudaVel(int mv){

        vel = mv;
        if(vel > velMax){
            vel=velMax;
        }

        if(vel < 0){
            vel = 0;
        }

        return vel;
    }


};



int main(){


    Carro *carros = new Carro[5];
    
    Carro car1, car2, car3, car4, car5;

    carros[0] = car1;
    carros[1] = car2;
    carros[2] = car3;
    carros[3] = car4;
    carros[4] = car5;


    carros[0].insere("Tornado", "Vermelho", 250, 400, 500);
    carros[1].insere("Luxo", "Branco", 312,513,912);
    carros[2].insere("Bao", "Azul", 645,654,2344);
    carros[3].insere("Familia", "Verde", 431,351,612);
    carros[4].insere("Top","Preto", 412,568,423);


    for(int i = 0; i < 5;i++){
        carros[i].mostra();
    }


    return 0;
}