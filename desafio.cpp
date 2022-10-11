#include <iostream>

using namespace std;

class contaCorrente {
    private:
    float saldo;
    float quantia;
    
    public: 
    string nome;
    string CPF;
    
    //Getters
    float getSaldo(){
        return this->saldo;
    }
    
    float getQuantia(){
        return this->quantia;
    }
    
    //Setters
    void setSaldo(float s){
        this->saldo = s;
    }
    
    void setQuantia(float q) {
        this->quantia = q;
    }
    
    
    //Cadastrar cliente com nome, CPF e atributos privados
    //Conta nova = valores de saldo e quantia devem ser igual a 0 
    void cadastrarCliente(){
        cout << "Digite o nome: " << nome << endl;
        cin >> nome;
        
        cout << "Digite o CPF: " << CPF << endl;
        cin >> CPF;
        
        cout << "Digite o saldo: " << getSaldo() << endl;
        cin >> saldo;
        
        cout << "Digite a quantia: " << getQuantia() << endl;
        cin >> quantia;
    }
    
    
};

int main()
{
    contaCorrente c1;
    
    c1.cadastrarCliente();

    return 0;
}
