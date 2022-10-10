#include <iostream>

using namespace std;
class Empregado {
    public:
    float salario;
    string nome;
    int matricula;
};


class Vendedor : public Empregado {
    public:
    float valorVendas = 100;
    float comissao = 0.5;
    
    void calcularSalario(float s) {
        this->salario = s;
        float salarioVendedor;
        salarioVendedor = this->salario + (this->valorVendas * this->comissao);
          
        cout << "O salario do Vendedor é: " << salarioVendedor << endl;
    }
};

int main()
{
    Vendedor v1;
    v1.calcularSalario(2800);

    return 0;
}