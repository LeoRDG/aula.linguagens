// Dada uma string contendo um nome completo
// Ex: Jose Silveira Alcantara, realize as seguintes operacoes
// a) Imprima o primeiro nome
// b) Imprima o ultimo nome
// c) Imprima o nome invertido

#include <iostream>
#include <string>
#include <regex>

using namespace std;

int main(){
    string nome = "Jose Silveira Alcantara";

    string p_nome = nome.substr(0, nome.find(' '));
    string u_nome = nome.substr(nome.rfind(' '), nome.size() - nome.rfind(' '));
    cout << "Nome: " << nome << endl;
    cout << "Primeiro Nome: " << p_nome << endl;
    cout << "Segundo Nome: " << u_nome << endl;

    string reverso = "";
    while (nome.size() > 0) {
        reverso.push_back(nome.back());
        nome.pop_back();
    };
    cout << "Nome Reverso: " << reverso << endl;


    


    

    return 0;
}