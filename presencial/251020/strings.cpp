#include <string>
#include <iostream>

using namespace std;

int main(){
    string text= "Nome da pessoa";
    cout << text << "\n";
    text += " nao esta no nosso catalogo";
    cout << text << "\n";

    string txt= "pipoca";
    string valor= "pipoca";

    cout << (txt==valor) << "\n";

    //string padrao = "Nome: {} Idade: {}";
    //string final = format(padrao, "Zezinho", 22);
        
    return 0;
}

