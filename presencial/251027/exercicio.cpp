#include <iostream>
#include <fstream>

using namespace std;

int main(){
	int num;
	
	cout << "Digite o numero de linhas: " << endl;
	cin >> num;
	
	ofstream Arquivo("hello.txt");
	for (int i = 0; i < num; i++) {
		Arquivo << "Hello World!" << "\n";
	}
	Arquivo.close();
	
		
}
