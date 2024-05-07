#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){

    int n=0, num=0, cobaias=0, coelho=0, rato=0, sapo=0;
    char tipo;
    cin >> n;
    while (n!=0)
    {
        cin >> num >> tipo;
        cobaias += num;
        switch (tipo)
        {
        case 'C':
            coelho += num;
            break;
        case 'R':
            rato += num;
            break;
        case 'S':
            sapo += num;
        default:
            break;
        }
        n--;
    }
    
    cout << "Total: " << cobaias << " cobaias" << endl;
    cout << "Total de coelhos: " << coelho << endl;
    cout << "Total de ratos: " << rato << endl;
    cout << "Total de sapos: " << sapo << endl;
    

    cout << "Percentual de coelhos: " << fixed << setprecision(2) << (float)(coelho * 100) / cobaias << " %" << endl; 
    cout << "Percentual de ratos: " << fixed << setprecision(2) <<(float)(rato * 100) / cobaias << " %" << endl;
    cout << "Percentual de sapos: "  << fixed << setprecision(2) << (float)(sapo * 100) / cobaias << " %" << endl;







    return 0;
}