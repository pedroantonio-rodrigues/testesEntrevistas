#include <iostream>
using namespace std;

int main(){
	int a = 0;
	int x = 0;
	int i = 0;
	for (i = 0; i < 10; i++){
		while (x < 5){
			x = x + 1;
			a = a + 1; 
		}
		x = 0;
	}
	cout << a;
	return 0; 
}
// resposta = 50
