#include <iostream>

using namespace std;

class Veiculos {
    private:
    float peso;
    int ano;
    string cor;
    string marca;
    
    public:
    
    //Setter
    void setPeso(string p){
        nome = p;
    }
    
    //Getter
    float getPeso(){
        return peso;
    }
    
    //Setter
    void setAno(int a){
        ano = a;
    }
    
    //Getter
    int getAno(){
        return ano;
    }
    
    //Setter
    void setCor(string c){
        cor = c;
    }
    
    //Getter
    string getCor(){
        return cor;
    }
    
    //Setter
    void setMarca(int m){
        marca = m;
    }
    
    //Getter
    string getMarca(){
        return marca;
    }
};

int main()
{
    
    Veiculos v1;
    
    //Adicionar e imprimir
    cout << "Insira o peso do veículo: " << veiculo << endl;
    cin >> peso;
    
    cout << "Insira o ano do veículo: " << ano << endl;
    cin >> ano;
    
    cout << "Insira a cor da veiculo: " << cor << endl;
    cin >> cor;
    
    cout << "Insira a marca do veículo: " << marca << endl;
    cin >> marca;
    
    cout << "- - - - - - - - - - - " << endl;

    return 0;
}