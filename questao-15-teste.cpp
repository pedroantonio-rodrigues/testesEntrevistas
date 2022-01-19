#include <iostream>
using namespace std;

int calcula(int x = 5, int a = 0){
	if (x > 1){
		a = x - 1;
		return x * calcula(a);
	}else {
		return 1; 
	}
}

int main(){
	
cout << calcula(); 
}
// resposta 120 
