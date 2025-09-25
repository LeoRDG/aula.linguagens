#include <iostream>

using namespace std;

struct Node {
	int info;
	Node* prox;
}; 

struct Stack{
	Node* topo = nullptr;
	
	void push(int info) {
		// Cria um novo nó (aloca a memória como "new") e 
		// atualiza os dados com info e o ponteiro com o inicio
		Node *novo = new Node {info, topo};
		topo = novo;
	}
	
	int pop(){
		if (topo != nullptr) {
			Node* temp = topo;
			topo = topo->prox;
			int info = temp->info;
			delete temp;
			return info;
		}
	}
	
	int peek() {
		if (topo != nullptr) {
			return topo->info;
		}
	}
	
	void mostra(){
		if (topo == nullptr) {
			cout << "Lista vazia" << endl;
		} else {
			Node * elemento = topo;
			while (elemento != nullptr) {
				cout << elemento->info << endl;
				elemento = elemento->prox;
			}
		}
	}
};

int main() {
	Stack pilha;
	
	pilha.push(12);
	pilha.push(56);
	pilha.push(99);
	
	cout << pilha.pop() << endl;
	cout << pilha.pop() << endl;
	cout << pilha.pop() << endl;
	
	return 0;
}
