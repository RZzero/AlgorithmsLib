#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

struct Guess
{
  int a, b, g;
};

int simulate(vector<Guess> &guesses)
{
  int answer = 0;
  for (int i = 1; i <= 3; i++)
  {
    bool table[4] = {false};
    table[i] = true;
    int answer_for_current_position = 0;

    for (int guess = 0; guess < guesses.size(); guess++)
    {

      bool temp = table[guesses[guess].a];
      table[guesses[guess].a] = table[guesses[guess].b];
      table[guesses[guess].b] = temp;

      if (table[guesses[guess].g])
        answer_for_current_position++;
    }
    answer = max(answer, answer_for_current_position);
  }
  return answer;
}

int main()
{
  freopen("shell.in", "r", stdin);
  freopen("shell.out", "w", stdout);
  int swaps;
  vector<Guess> guesses;

  cin >> swaps;
  for (int i = 0; i < swaps; i++)
  {
    int a, b, g;
    cin >> a >> b >> g;
    guesses.push_back({a, b, g});
  }

  cout << simulate(guesses) << endl;

  return 0;
}