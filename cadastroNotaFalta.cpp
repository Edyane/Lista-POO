#include <iostream>

using namespace std;

    class cadastroAluno {
        //Atributos públicos
        public:
        string nome;
        int matricula;
        string curso;
        float nota;
        int faltas;
        
        //Métodos construtores
        cadastroAluno(){
            nome = "João";
            matricula = 202250011;
            curso = "engenharia de computacao";
            nota = 9.8;
            faltas = 4;
        }
        
        //Método construtor alternativo
        cadastroAluno (string n, int m, string c, float t, int f){
            nome = n;
            matricula = m;
            curso = c;
            nota = t; 
            faltas = f;
        }
    };

    

int main()
{
    cadastroAluno a1, a2 ("Maria", 202250012, "ciencia da computacao", 9.9, 2);

    cout << "O nome do aluno(a) é: " << a1.nome << endl;
    cout << "A matrícula do aluno(a) é: " << a1.matricula << endl;
    cout << "O curso do aluno é: " << a1.curso << endl;
    cout << "A nota do aluno é: " << a1.nota << endl;
    cout << "A quantidade de faltas do aluno é: " << a1.faltas << endl;
    cout << "- - - - - - - - - - - - " << endl;
    cout << "O nome do aluno(a) é: " << a2.nome << endl;
    cout << "A matrícula do aluno(a) é: " << a2.matricula << endl;
    cout << "O curso do aluno é: " << a2.curso << endl;
    cout << "A nota do aluno é: " << a2.nota << endl;
    cout << "A quantidade de faltas do aluno é: " << a2.faltas << endl;
    
    return 0;
}