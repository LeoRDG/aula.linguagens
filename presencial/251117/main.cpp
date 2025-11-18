#include <chrono>
#include <vector>
//#include <cstdlib>
#include <iostream>
#include <ctime>
#include <bits/stdc++.h>

using namespace std;

void swap (int * a, int * b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

vector<int> gerar_vetor(int n){
    vector<int> r;
    for(int i = 0; i < n; i++){
        r.push_back(rand());
    }
    return r;
}

int elementos = 30000;
auto original = gerar_vetor(elementos);
auto bubble = original;
auto selection = original;
auto insertion = original;
auto quicksort = original;


void bubble_sort() {
    for (int i = 0; i < bubble.size() - 1; i++) {
        bool trocou = false;

        for (int j = 0; j < bubble.size() - i - 1; j++) {
            if (bubble[j] > bubble[j + 1]) {
                trocou = true;
                swap(bubble[j], bubble[j+1]);
            }
        }

        if (!trocou) break;
    }
}


void selection_sort() {
    for (int i = 0; i < selection.size()-1; i++) {
        int i_min = i;
        
        for (int j = i+1; j < selection.size(); j++) {
            if (selection[j] < selection[i_min]) i_min = j;
        }

        swap(selection[i_min], selection[i]);
    }
}


void insertion_sort() {
    for (int i = 1; i < insertion.size(); i++) {
        int valor = insertion[i];

        int j = i -1;

        while ( j >= 0 && insertion[j] > valor) {
            insertion[j+1] = insertion[j];
            j--;
        }
        insertion[j+1] = valor;
    }
}


int particao(vector<int> vetor, int inicio, int fim) {
    int pivo = vetor[inicio];
    int m = inicio;

    for (int i = m+1; i <= fim; i++) {
        if (vetor[i] < pivo) {
            swap( vetor[i], vetor[++m] );
        }
    }
    swap( vetor[inicio], vetor[m] );

    return m;
}


void quick_sort(vector<int> vetor, int inicio, int fim) {
    if ( inicio < fim ) {
        int m = particao(vetor, inicio, fim);
        quick_sort(vetor, inicio, m-1);
        quick_sort(vetor, m+1, fim);
    }
}


void quickSort(){
    quick_sort(quicksort, 0, quicksort.size()-1);
}


void merge_sort(vector<int> vetor, int inicio, int fim){

}



void time_it(void (*func)()){
    auto t1 = chrono::high_resolution_clock::now();
    func();
    auto t2 = chrono::high_resolution_clock::now();
    chrono::duration<double> segundos{t2 - t1};
    cout << segundos.count();
}


int main () {
    cout << elementos << " Elementos: " << endl;
    time_it(bubble_sort); 
    cout << ": bubble_sort\n";
    time_it(insertion_sort); 
    cout << ": insertion_sort\n";
    time_it(selection_sort); 
    cout << ": selection_sort\n";
    time_it(quickSort); 
    cout << ": quickSort\n";

    return 0;
}

