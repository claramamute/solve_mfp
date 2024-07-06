#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    // Ler o número de registros
    int n;
    cin >> n;
    cin.ignore();  // Ignorar o caractere de nova linha após o número

    // Variáveis para armazenar a pontuação de cada time
    int pontuacaoTime1 = 0;
    int pontuacaoTime2 = 0;

    // Processar cada registro
    for (int i = 0; i < n; i++) {
        // Ler o registro
        string registro;
        getline(cin, registro);

        // Separar os componentes do registro
        stringstream ss(registro);
        string parte;
        int time, pontos;

        // Ignorar a primeira parte do registro
        ss >> parte;

        // Extrair o número do time e a pontuação
        ss >> time >> pontos;

        // Adicionar os pontos ao time correspondente
        if (time == 1)
            pontuacaoTime1 += pontos;
        else
            pontuacaoTime2 += pontos;
    }

    // Imprimir o resultado final
    cout << pontuacao
}

// int main(int argc, char** argv) {
//     SPEED;

//     int n; cin >> n;

//     pair<int, int> times = {0, 0};

//     while(n--) {
//         string s;
//         int time, pontos;

//         cin >> s >> time >> pontos;

//         if(time == 1) times.first += pontos;
//         else times.second += pontos;
//     }

//     cout << times.first << " x " << times.second << endl;

//     return 0;
// }
