#include <iostream>

using namespace std;

class contaCorrente {
    //Atributos privados
    private:
    float saldo;
    float quantia;
    
    //Atributos públicos
    public: 
    string nome;
    string CPF;
    float tarifa;
    float saque;
    
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
    
    
    //Método cadastrar cliente
    void cadastrarCliente(){
        //Conta nova = valores de saldo e quantia devem ser igual a 0 
    
        cout << "Digite o nome: " << nome << endl;
        cin >> nome;
        
        cout << "Digite o CPF: " << CPF << endl;
        cin >> CPF;
        
        cout << "Digite o saldo: " << getSaldo() << endl;
        cin >> this->saldo;
        
        cout << "Digite a quantia: " << getQuantia() << endl;
        cin >> this->quantia;
    }
    
    //Método depositar
    void depositar(){
        //Transformar os valores de quantia em saldo
        
        if (quantia > 0) {
            saldo = (quantia + this->saldo);
        } else {
            saldo = this->saldo;
        }
    }
    
    //Método sacar
    void sacar()
        float tarifa = 0.05;
        saque = this->saldo - (quantia - tarifa);
        cout << "O valor sacado foi de: " << saque << endl;     
    }
    
    //Método obter saldo
    void obterSaldo(){
        cout << "O saldo é: " << this->saldo << endl;
    }
    
};

int main()
{
    
    contaCorrente c1[100];
    
    //contaCorrente c1;
    //c1.cadastrarCliente();
    
    
    switch () {
        case 1 Cadastrar cliente:
            cadastrarCliente();
            
            for (int i = 0; i < 100, i++) {
                
            }
        break;
        
        case 2 Depositar:
            depositar();
        break;
        
        case 3 Sacar:
            sacar();
        break;
        
        case 4 Obter saldo:
            obterSaldo();
        break;
        
        case 5 Sair
        break;
    
    }
    
    return 0;
}
