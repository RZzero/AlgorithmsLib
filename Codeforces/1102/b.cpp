// https://codeforces.com/problemset/problem/1102/B

#include <iostream>
#include <map>
#include <vector>
#include <set>

using namespace std;

int main () {
  int N, K;
  cin >> N >> K;
  vector<int> elements(N);
  map<int,int> ocurrences;
  map<int,int> used;
  vector<int> colorsOfElement(N, 0);

  vector<bool> allColors(K);

  for (int i = 0; i < N; i++) {
    cin >> elements[i];
    ocurrences[elements[i]]++;
    used[elements[i]] = 0;
  }

  // Debo usar todos los colores
  // Todos los elementos con un color deben ser distintos
  for (auto &element: ocurrences) {
    if (element.second > K) {
      cout << "NO" << endl;
      return 0;
    }
  }
 
  for (int i = 0; i < elements.size(); i++) {
    int currentElement = elements[i];
    colorsOfElement[i] = (used[currentElement] % K)+1;
    allColors[used[currentElement] % K] = true;
    used[currentElement]++;
  }

  // Buscar colores que no he usado y usarlos.
  vector<int> notUsedColors;

  for (int i = 0; i < allColors.size(); i++) {
    if (!allColors[i]) {
      notUsedColors.push_back(i+1);
    }
  }

  set<int> haveSeen;
  int j = 0;
  for (int i = 0; i < colorsOfElement.size() && j < notUsedColors.size(); i++) {
    if (haveSeen.count(colorsOfElement[i])) {
      colorsOfElement[i] = notUsedColors[j];
      j++;
    } else {
      haveSeen.insert(colorsOfElement[i]);
    }
  }

  cout << "YES" << endl;
  for (int i = 0; i < colorsOfElement.size(); i++) {
    cout << colorsOfElement[i] << " ";
  }
  return 0;
}
