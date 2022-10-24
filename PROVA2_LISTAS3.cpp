#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    char sexo[10]; // armazena os sexos das pessoas
    int N; // número de pessoas a serem consultadas
    int nMasc=0; // número de pessoas do sexo masculino 
    int i; // contador
    char *p; // ponteiro para varrer o vetor
    
    // Lendo número de pessoas
    cin >> N;
    
    // Lendo sexo de cada pessoa
    for(i=0;i<N;i++)
        cin >> sexo[i];
        
    // Contando número de pessoas do sexo masculino
    p = sexo;
    for(i=0;i<N;i++)
    {
        if(*p=='M')
            nMasc++;
        p++;    
    }
    
    // Apresentando resultados
    cout << fixed << setprecision(1);
    cout << float(N-nMasc)*100.0/N << " % de pessoas do sexo feminino" << endl;
    cout << float(nMasc)*100.0/N << " % de pessoas do sexo masculino" << endl;
    
    return 0;
}