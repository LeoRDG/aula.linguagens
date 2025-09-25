#include <iostream>

using namespace std;

struct Node {
	int info;
	Node* prox;
}; 

struct Fila{
	Node* cabeca = nullptr;
	Node* cauda = nullptr;
	
	
	void enfileira(int info) {
		Node *novo = new Node;
		novo->info = info;
		novo->prox = nullptr;
		
		// Se a fila estiver vazia
		if (cabeca == nullptr){
			cabeca = novo;
			cauda = novo;
			return;
		}
		
		// Se a Fila não está vazia
		cauda->prox = novo;
		cauda = cauda->prox;
	}
	
	int desenfileira() {
		// Se são iguais, só tem 1 elemento
		
		Node* temp = cabeca;
		
		if (cabeca == cauda) {
			cabeca = nullptr;
			cauda = nullptr;
		} else {
			cabeca = cabeca->prox;
		}
		
		
		int info = temp->info;
		delete temp;
		return info;
	}
	
	int peek(){
		if (cabeca != nullptr) {
			return cabeca->info;
		}
	}
	
};

int main() {
	Fila fila;
	
	fila.enfileira(12);
	fila.enfileira(56);
	fila.enfileira(99);
	
	cout << fila.desenfileira() << endl;
	cout << fila.desenfileira() << endl;
	cout << fila.desenfileira() << endl;
	
	return 0;
}
