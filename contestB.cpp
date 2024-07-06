#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int calcular_area(vector<pair<int, int>>& cogumelos) {
    // Encontrar a distância entre os cogumelos opostos
    int lado = max_element(cogumelos.begin(), cogumelos.end(), 
                           [](const pair<int, int>& a, const pair<int, int>& b) {
                               return a.first < b.first;
                           })->first 
               - min_element(cogumelos.begin(), cogumelos.end(), 
                             [](const pair<int, int>& a, const pair<int, int>& b) {
                                 return a.first < b.first;
                             })->first;
    
    // Calcular a área do quadrado
    int area = lado * lado;
    
    return area;
}

int main() {
    // Entrada de dados
    vector<pair<int, int>> cogumelos(4);
    for (int i = 0; i < 4; ++i) {
        int x, y;
        cin >> x >> y;
        cogumelos[i] = make_pair(x, y);
    }

    // Calcular e imprimir a área da praça
    cout << calcular_area(cogumelos) << endl;

    return 0;
}
