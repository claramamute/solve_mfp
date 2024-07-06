#include <bits/stdc++.h>

#include <algorithm>
using namespace std;


bool can_deliver(int time, int N, int p, const vector<int>& athletes) {
      int total_pizzas = 0;
      for (int i = 0; i < N; ++i) {
          int pizzas_delivered = min(time / athletes[i], p - total_pizzas);  
          total_pizzas += pizzas_delivered;
          if (total_pizzas >= p) {
              return true;
          }
      }
      return false;
}

  
int min_time(int N, int p, const vector<int>& athletes) {
      
      int left = 1;
      int right = *min_element(athletes.begin(), athletes.end()) * p; 

      while (left < right) {
          int mid = (left + right) / 2;
          if (can_deliver(mid, N, p, athletes)) {
              right = mid;
          } else {
              left = mid + 1;
          }
      }

      return left;
}

int main() {
      // Entrada de dados
    int N, p;
    cin >> N >> p;
    vector<int> athletes(N);
    for (int i = 0; i < N; ++i) {
        cin >> athletes[i];
    }

    // Chamada da função e impressão do resultado
    cout << min_time(N, p, athletes) << endl;

    return 0;
}

