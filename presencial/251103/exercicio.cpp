#include <filesystem>
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;
namespace fs = filesystem;

fs::path criar_arquivo(){
    string nome;
    
    cout << "Digite o nome do arquivo\n";
    getline(cin, nome);

    ofstream arquivo(nome);
    fs::path p(nome);
    return p;
}


vector<fs::path> carregar_arquivos_pasta(){
    string pasta;
    vector<fs::path> vetor;
    cout << "Digite o nome do pasta\n";
    getline(cin, pasta);


    fs::path p(pasta);
    if (fs::exists(p) && fs::is_directory(p)){
        for (auto f : fs::directory_iterator(p)) {
            fs::path pp(f);
            if (!fs::is_directory(pp))
            cout << fs::absolute(pp) << endl;
        }
    } else {
        cout << "Pasta nao existe " << endl;
    }
    return vetor;
}


int main(){
    auto path = criar_arquivo();
    cout << "Nome: " << path.filename() << endl 
    << "Extensao: " << path.extension() << endl
    << "Tamanho: " << filesystem::file_size(path) << endl
    << "Caminho: " << filesystem::absolute(path) << endl;

    carregar_arquivos_pasta();
}