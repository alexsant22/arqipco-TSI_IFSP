#include <iostream>
using namespace std;

class Aluno
{
private:
    string nome;
    int idade;

public:
    void setIdade(int i)
    {
        idade = i;
    }

    int getIdade()
    {
        return idade;
    }
    
    void mostrar()
    {
        cout << "Aluno";
    }
};

int main()
{
    Aluno aluno1;

    aluno1.setIdade(20);

    cout << aluno1.getIdade();
    aluno1.mostrar();

    return 0;
}