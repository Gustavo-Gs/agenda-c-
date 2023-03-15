#include <string>
#include <vector>
#include <iostream>


using namespace std;

struct Contato {
    string nome;
    string numero;
};

int main() {
    vector<Contato> agenda;
    Contato primeiro, segundo;

    primeiro.nome = "Fulanim da Silva";
    primeiro.numero = "99999999";

    segundo.nome = "Sicranim dos Santos";
    segundo.numero = "88888888";

    agenda.push_back(primeiro);
    agenda.push_back(segundo);
//printf -> cout , scanf -> cin
    cout << agenda[0].nome << "\n" << agenda[0].numero << "\n";
    cout << agenda[1].nome << "\n" << agenda[1].numero << "\n";

    agenda.pop_back();

    for(int i = 0; i < agenda.size(); i++){
        if(agenda[i].nome == "Fulanim da Silva"){
            cout << "Encontramos\n";
        }
    }
    



    return 0;
}