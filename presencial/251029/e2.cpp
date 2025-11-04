#include <fstream>
#include <string>
#include <iostream>
#include <sstream>
#include <iomanip>
#include <vector>

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

vector<Tarefa> tarefas;
int resposta;

vector<Tarefa> carregar(){
    string linha;
    ifstream File("tarefas.csv");
    vector<Tarefa> tarefas;

    if (!File.is_open()){
        cout << "Nao foi possivel carregar o arquivo";
        return tarefas;
    }

    int num = 0;
    while(getline(File, linha)) {
        Tarefa t = Tarefa{};
        stringstream linhastream;
        linhastream << linha;
        getline(linhastream, t.descricao, ',');
        getline(linhastream, t.categoria, ',');
        linhastream >> t.prioridade;
        tarefas.push_back(t);
    }

    File.close();
    return tarefas;
}

void salvar(){
    for (auto t : tarefas){
        ofstream File("tarefas.csv");

        File << t.descricao << ","
        << t.categoria << ","
        << t.prioridade;
        

        
        File.close();
    }
}

void mostrar_menu(){
    system("cls");

    cout << "1 - Carregar Toda Lista\n"
    << "2 - Adicionar Tarefa\n"
    << "3 - Mostrar Tarefa\n"
    << "4 - Criar Tarefa\n";

    cout << "\nDigite um numero\n";
    cin >> resposta;

    switch (resposta) {
        case 1:
            tarefas = carregar();
            break;
        case 2:
            break;
        case 3:
            cout << "\nDigite um numero\n";
            cin >> resposta;
            if (resposta < tarefas.size() && resposta >= 0)
            tarefas[resposta].show();
            cout << "\n";
            break;
        default:
            break;
    }
    system("pause");
}

void mostrar_todas(){

}

int main(){
    while (true) {
        mostrar_menu();
    }

    return (0);
}
