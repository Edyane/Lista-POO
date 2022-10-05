#include <iostream>

using namespace std;

    class cadastroAluno {
        //Atributos públicos
        public:
        string nome;
        int matricula;
        string curso;
        
        //Métodos construtores
        cadastroAluno(){
            nome = "João";
            matricula = 202250011;
            curso = "engenharia de computacao";
        }
        
        //Método construtor alternativo
        cadastroAluno (string n, int m, string c){
            nome = n;
            matricula = m;
            curso = c;
        }
    };

    

int main()
{
    cadastroAluno a1, a2 ("Maria", 202250012, "ciencia da computacao");

    cout << "O nome do aluno(a) é: " << a1.nome << endl;
    cout << "A matrícula do aluno(a) é: " << a1.matricula << endl;
    cout << "O curso do aluno é: " << a1.curso << endl;
    cout << "- - - - - - - - - - - - " << endl;
    cout << "O nome do aluno(a) é: " << a2.nome << endl;
    cout << "A matrícula do aluno(a) é: " << a2.matricula << endl;
    cout << "O curso do aluno é: " << a2.curso << endl;
    
    return 0;
}
