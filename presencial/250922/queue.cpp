#include <queue>
#include <iostream>

using namespace std;

int main() {
	queue<string> frutas;
	frutas.push("uva");
	frutas.push("banana");
	frutas.push("figo");
	frutas.push("abacate");
	
	cout << frutas.front() << endl;
	cout << frutas.back() << endl;
	
	frutas.pop();
	
	cout << frutas.front() << endl;
	cout << frutas.back() << endl;
	
	cout << "tamanho: " << frutas.size() << endl;
	cout << "Vazia? " << frutas.empty() << endl;
	
	return 0;
}