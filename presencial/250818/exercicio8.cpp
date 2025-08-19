// Exiba na tela a tabuada do 7

#include <iostream>

using namespace std;

int main () {
	for (int j = 2; j <= 9; j ++){
		for (int i = 1; i <= 10; i++){
			cout << i * j << endl;
		}
		cout << "____________________________________" << endl; 
	}
	
	return 0;
}
