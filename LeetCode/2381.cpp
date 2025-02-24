#include <bits/stdc++.h>
using namespace std;

string shiftingLetters(string s, vector<vector<int>> &shifts) {
  string abecedario = "";

  for (auto l = 'a'; l <= 'z'; l++) {
    abecedario += l;
  }

  int size_of_s = s.size();
  map<int, int> finish_r;
  map<int, int> starts_l;
  vector<int> PS(size_of_s, 0);

  for (int i = 0; i < size_of_s; i++) {
    finish_r[i] = 0;
    starts_l[i] = 0;
  }

  for (auto update : shifts) {
    int l = update[0];
    int r = update[1];
    int shif_t = update[2];
    starts_l[l] += shif_t ? +1 : -1;
    finish_r[r] += shif_t ? +1 : -1;
  }

  int current_sum = 0;

  // 1. Sumar todos los suffix que terminen en i
  // 2. Hacer cambios en el PS array
  // 3. En caso de que algún shift comience en la posición i, actualizar [restar el cambio]
  for (int i = 0; i < size_of_s; i++) {
    current_sum += starts_l[i];
    PS[i] = current_sum;
    current_sum -= finish_r[i];
  }

  string answer = "";
  long long size_of_abecedario = abecedario.size();
  long long a_large = size_of_abecedario * 1'000'000;
  for (int i = 0; i < size_of_s; i++) {
    char c = s[i];
    int int_value_of_c = (int)(c - 'a');
    long long new_val = (int_value_of_c + PS[i]) + a_large;
    s[i] = abecedario[new_val % size_of_abecedario];
  }

  return s;
}

int main() {
  cerr << ('z' - 'a') + 'a' << endl;
  map<string, vector<vector<int>>> test_cases;
  test_cases["abc"] = {
      {0, 1, 0},
      {1, 2, 1},
      {0, 2, 1},
  };
  test_cases["dztz"] = {
      {0, 0, 0},
      {1, 1, 1},
  };
  // [[4,8,0],[4,4,0],[2,4,0],[2,4,0],[6,7,1],[2,2,1],[0,2,1],[8,8,0],[1,3,1]]
  test_cases["xuwdbdqik"] = {
      {4, 8, 0},
      {4, 4, 0},
      {2, 4, 0},
      {2, 4, 0},
      {6, 7, 1},
      {2, 2, 1},
      {0, 2, 1},
      {8, 8, 0},
      {1, 3, 1},
  };
  test_cases["ksztajnymer"] = {
      {4, 9, 1}, {2, 5, 1}, {7, 9, 0}, {6, 10, 0}, {1, 7, 1}, {0, 7, 1}, {0, 3, 0}, {3, 3, 1}, {7, 9, 0}, {7, 7, 0}, {6, 7, 0}, {7, 9, 0}, {3, 9, 0}, {10, 10, 1}, {8, 9, 0}, {6, 9, 1}, {1, 2, 1}, {3, 9, 0}, {8, 10, 1}, {4, 7, 1}, {9, 10, 1}, {8, 9, 0}, {5, 8, 0}, {8, 9, 1}, {0, 7, 1}, {2, 2, 1}, {8, 8, 1}, {3, 7, 0}, {1, 10, 1}, {9, 9, 1}, {4, 9, 0}, {5, 6, 1}, {7, 8, 1}, {8, 9, 0}, {7, 7, 1}, {9, 9, 1}};
  for (auto [key, val] : test_cases) {
    cout << shiftingLetters(key, val) << endl;
  }
  // vector<vector<int>> test_cases =
  return 0;
}