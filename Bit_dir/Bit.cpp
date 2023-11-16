#include <iostream>
using namespace std;
int main(){
	long num = 0, res = 0, x = 0;
	char operacao; 
	cin >> num;
	for(int i = 1;i <= num; i++){
		cin >> operacao;
		if(operacao == 'X'){
			cin >> operacao;
			if(operacao = '-'){

				x--;
			}
			else{
			x++;
			}
		}
		else if(operacao == '-'){
			x--;
		}
		else{
			x++;
		}
	}
	cout << x;
}
