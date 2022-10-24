#include<iostream>
using namespace std;

struct dados
{
    int mat;
    int nota1;
    int nota2;
    float media;
};

int main()
{
    dados *alunos; // dados dos alunos
    int numero_alunos; // numero de alunos
    int i; //cont
    int passaram; //alunos com media maior que 60 pontos
    
    //numero de alunos
    cin >> numero_alunos;
    
    // alocando 
    alunos = new dados[numero_alunos];
    
    //entrados com os dados
    for(i=0;i<numero_alunos;i++)
    {
        cin >> alunos[i].mat;
        cin >> alunos[i].nota1;
        cin >> alunos[i].nota2;
    }

    // Calculando a media de cada aluno
    for(i=0;i<numero_alunos;i++)
	{
		alunos[i].media = (float)(alunos[i].nota1+alunos[i].nota2)/2.0;    
	}
        
    //função para contar quantos alunos passaram
    
    passaram = 0;
    for(i=0;i<numero_alunos;i++)
        if(alunos[i].media >= 60)
		{
			 passaram++;
		}
           
    // Apresentando resultados
    cout << "Numero de alunos aprovados:" << passaram << endl;
    
    // lipando a memoria
    delete [] alunos;
    
    return 0;
}