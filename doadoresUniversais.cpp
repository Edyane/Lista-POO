#include <iostream>

using namespace std;

class Pessoas {
    private:
    string nome;
    int telefone;
    string tipo;
    int idade;
    
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
    
    //Setter
    void setTipo(string p){
        tipo = p;
    }
    
    //Getter
    string getTipo(){
        return tipo;
    }
    
    //Setter
    void setIdade(int i){
        idade = i;
    }
    
    //Getter
    int getIdade(){
        return idade;
    }
};

int main()
{
    
    Pessoas p1;
    
    p1.setNome("Ana");
    cout << "Nome: " << p1.getNome() << endl;
    
    p1.setTelefone(30304444);
    cout << "Telefone: " << p1.getTelefone() << endl;
    
    p1.setTipo("O-");
    cout << "Tipo sanguíneo: " << p1.getTipo() << endl;
    
    p1.setIdade(25);
    cout << "Idade: " << p1.getIdade() << endl;
    
    cout << "- - - - - - - - - - - " << endl;
    
    Pessoas p2;
    
    p1.setNome("Maria");
    cout << "Nome: " << p1.getNome() << endl;
    
    p1.setTelefone(30305555);
    cout << "Telefone: " << p1.getTelefone() << endl;
    
    p1.setTipo("A+");
    cout << "Tipo sanguíneo: " << p1.getTipo() << endl;
    
    p1.setIdade(27);
    cout << "Idade: " << p1.getIdade() << endl;
    
    cout << "- - - - - - - - - - - " << endl;

    return 0;
}
