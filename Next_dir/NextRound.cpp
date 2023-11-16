#include <iostream>
using namespace std;

int main(){
	long long passa = 0, competidores = 0, res = 0, atual = 0, empate = 0;
	cin >> competidores >> passa;
	for(int i = 1; i <=passa; i++){
		cin >> atual;
		if(atual > 0){
			res++;
		}
	}
	for(int i = 1; i <= competidores - passa;i++ ){
		cin >> empate;
		if(atual == empate && atual != 0){
			res++;
		}
		else{ break;}
	}
	cout << res;
}
