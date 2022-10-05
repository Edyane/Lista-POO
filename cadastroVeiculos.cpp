#include <iostream>

using namespace std;

    class cadastroVeiculos {
        //Atributos públicos
        public:
        string nome;
        int telefone;
        string marca;
        string placa;
        string cor;
        
        //Método construtor alternativo
        cadastroVeiculos (string n, int t, string m, string p, string c){
            nome = n;
            telefone =  t;
            marca = m;
            placa = p;
            cor = c;
        }
    };

    

int main()
{
    cadastroVeiculos v1 ("Jose", 30302022, "Honda", "ABC2022", "verde");

    cout << "Nome: " << v1.nome << endl;
    cout << "Telefone: " << v1.telefone << endl;
    cout << "Marca: " << v1.marca << endl;
    cout << "Placa: " << v1.placa << endl;
    cout << "Cor: " << v1.cor << endl;
   
    return 0;
}