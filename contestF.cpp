#include <iostream>
using namespace std;

int contar_modalidades(int pontuacao_total) {
    // Pontuações de cada modalidade
    int pontuacoes[] = {8, 4, 2, 1};
    
    // Contador de modalidades
    int modalidades_ganhas = 0;
    
    // Itera sobre as pontuações de cada modalidade
    for (int pontuacao : pontuacoes) {
        // Se a pontuação total for maior ou igual à pontuação da modalidade,
        // subtrai a pontuação da modalidade da pontuação total e incrementa o contador de modalidades
        if (pontuacao_total >= pontuacao) {
            pontuacao_total -= pontuacao;
            modalidades_ganhas += 1;
        }
    }
    
    return modalidades_ganhas;
}

int main() {
    // Entrada de dados
    int pontuacao_total;
    cin >> pontuacao_total;
    
    // Calcula e imprime a quantidade de modalidades em que o país de Amy ganhou medalhas
    cout << contar_modalidades(pontuacao_total) << endl;
    
    return 0;
}
