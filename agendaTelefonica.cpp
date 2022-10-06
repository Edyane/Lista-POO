#include <iostream>

using namespace std;

class Contato {
    private:
    string nome;
    int telefone;
    
    
    public:
    
    //Setter
    void setNome(string n){
        nome = n;
    }
    
    //Getter
    string getNome(){
        return nome;
    }
    
    //Setter
    void setTelefone(int t){
        telefone = t;
    }
    
    //Getter
    int getTelefone(){
        return telefone;
    }
    
};

int main()
{
    
    Contato c1;
    
    c1.setNome("Eugenio");
    cout << "Nome: " << c1.getNome() << endl;
    
    c1.setTelefone(40028922);
    cout << "Telefone: " << c1.getTelefone() << endl;
    
    cout << "- - - - - - - - - - - " << endl;
    
    Contato c2;
    
    c2.setNome("Ruth");
    cout << "Nome: " << c2.getNome() << endl;
    
    c2.setTelefone(33213030);
    cout << "Telefone: " << c2.getTelefone() << endl;
    
    cout << "- - - - - - - - - - - " << endl;

    return 0;
}
