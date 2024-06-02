
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;


int main() {

	int n; cin >> n;
	int div = 2;
	int eprimo = 1;

	while(div <= sqrt(n) && eprimo){
		if(n % div == 0){
			eprimo = 0;
			break;
		}
		div++;
	}


	if(eprimo){
		cout << n <<"sim" << endl;
	}else{
		cout << n <<"nao" << endl;
	}

}
