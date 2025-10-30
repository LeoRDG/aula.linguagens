#include <fstream>
#include <string>
#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;

struct Tarefa{
    string descricao, categoria;
    int prioridade;

    void show(){
        cout << setw(30) << left << descricao << "\t"
        << setw(15) << categoria << "\t"
        << prioridade << "\n";
    }
};

int main(){
    string linha;
    ifstream File("tarefas.csv");
    Tarefa t = Tarefa{};

    if (!File.is_open()){
        cout << "Nao foi possivel carregar o arquivo";
        return(1);
    }

    int num = 0;
    while(getline(File, linha)) {
        stringstream linhastream;
        linhastream << linha;
        getline(linhastream, t.descricao, ',');
        getline(linhastream, t.categoria, ',');
        linhastream >> t.prioridade;
        cout << setw(3) << left << ++num;
        t.show();
    }

    File.close();

    return (0);
}