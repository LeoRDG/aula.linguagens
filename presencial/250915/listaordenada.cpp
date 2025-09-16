#include <iostream>

using namespace std;

struct Node {
	int info;
	Node* prox;
}; 

struct ListaOrdenada{
	Node* inicio = nullptr;
	
	void insere(int info) {
		Node *novo = new Node {info, inicio};
		novo->info = info;
		
		// Verifica se a lista está vazia
		if (inicio == nullptr) {
			inicio = novo;
			inicio->prox = nullptr;
		} else {
			Node * atual = inicio;
			// O novo elemento é o menor de todos. Deve ser inserido no inicio
			if (atual-> info > novo-> info) {
				novo->prox = atual;
				inicio = novo;
			} else {
				while (atual->prox != nullptr && atual->prox->info < novo->info ) {
					atual = atual->prox;
				}
				novo->prox = atual->prox;
				atual->prox = novo;
			}
		}
		
		
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
	ListaOrdenada lista;
	
	lista.insere(12);
	lista.insere(56);
	lista.insereFim(99);
	lista.mostra();
	lista.removeInicio();
	lista.mostra();
	
	return 0;
}
