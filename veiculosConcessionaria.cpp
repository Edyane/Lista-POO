#include <iostream>
#include <fstream>

using namespace std;

class Veiculo{
    private:
    float peso;
    int ano;
    string cor, marca;
    public:
    
    //Getters
    float getPeso(){
    return this->peso;
    }
    
    int getAno(){
    return this->ano;
    }
    
    string getCor(){
    return this->cor;
    }
    
    string getMarca(){
    return this->marca;
}

    //Setters
    void setPeso(float p){
    this->peso = p;
    }
    
    void setAno(int a){
    this->ano = a;
    }
    
    void setCor(string c){
    this->cor = c;
    }
    
    void setMarca(string m){
    this->marca = m;
    }
    
    //Adicionando veículos
    void addVeiculos(float p,int a, string c, string m){
        setPeso(p);
        setAno(a);
        setCor(c);
        setMarca(m);
    }
    
    //Imprimindo veículos
    void imprimirVeiculos(){
        cout << "O peso do veículo é " << getPeso() << endl;
        cout << "O ano do veículo é " << getAno() << endl;
        cout << "A cor do veículo é " << getCor() << endl;
        cout << "A marca do veículo é " << getMarca() << endl;
    }
    
    
    //Impressão do arquivo em .txt
    void imprimirArq(){
        ofstream MyFile("arquivos.txt");
        //MyFile.open("arquivos.txt");
        // Write to the file
        MyFile << getPeso() << ":";
        MyFile << getAno() << ":";
        MyFile << getCor() << ":";
        MyFile << getMarca() << endl;

    // Close the file
    MyFile.close();
    
    }
    };
    
    
    int main()
    {
        Veiculo v1,v2;
        
        v1.addVeiculos(400,2022,"vermelha","fiat");
        v1.imprimirVeiculos();
        v1.imprimirArq();
        
        v2.addVeiculos(550,1022,"vermelha","fiat");
        v2.imprimirVeiculos();
        v2.imprimirArq();
        return 0;
    }