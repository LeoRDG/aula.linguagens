#include <iostream>

using namespace std;

struct Node {
	int info;
	Node* prox;
}; 

struct nodeList{
	Node* inicio = nullptr;
	
	void insere(int info) {
		// Cria um novo nó (aloca a memória como "new") e 
		// atualiza os dados com info e o ponteiro com o inicio
		Node *novo = new Node {info, inicio};
		inicio = novo;
	}
	
	void insereFim(int info) {
		// Apenas alocacao de memoria
		Node *novo = new Node;
		novo->info = info;
		if (inicio == nullptr){
			novo->prox = inicio;
			inicio = novo;
			return;
		}
		Node* ultimo = inicio;
		
		while (ultimo->prox != nullptr) {
			ultimo = ultimo->prox;
		}
		novo->prox = ultimo->prox;
		ultimo->prox = novo;
	}
	
	void removeInicio(){
		if (inicio != nullptr) {
			Node* temp = inicio;
			inicio = inicio->prox;
			delete temp;
		}
	}
	
	void mostra(){
		if (inicio == nullptr) {
			cout << "Lista vazia" << endl;
		} else {
			Node * elemento = inicio;
			while (elemento != nullptr) {
				cout << elemento->info << endl;
				elemento = elemento->prox;
			}
		}
	}
};

int main() {
	nodeList lista;
	
	lista.insere(12);
	lista.insere(56);
	lista.insereFim(99);
	lista.mostra();
	lista.removeInicio();
	lista.mostra();
	
	return 0;
}
