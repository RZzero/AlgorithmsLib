#include <stdio.h>
#include <vector>
using namespace std;

vector<int> extract_numbers_from_mask(int mask, vector<int> &numbers) {
  vector<int> extracted_numbers;
  int i = 0;
  while (mask){
    if (mask & 1) extracted_numbers.push_back(numbers[i]);
    mask = (mask >> 1);
    i++; 
  }
  return extracted_numbers;
}

int main () {
  int minutes, tracks;
  while(scanf("%d%d", &minutes, &tracks) != EOF) {
    vector<int> cds(tracks);
    for (auto &cdd : cds) scanf("%d", &cdd);
    
    int best_mask = 0;
    int max_sum = 0;
    for (int mask = 0; mask <= (1 << tracks); mask++) {
      int current_sum = 0;
      for (int i = 0; i < tracks; i++) {
        if (mask & (1 << i)) {
          current_sum+= cds[i];
        }
      }

      if (current_sum > max_sum && current_sum <= minutes) {
        best_mask = mask;
        max_sum = current_sum;
      }
    }

    vector<int> answer = extract_numbers_from_mask(best_mask,cds);
    for (int i = 0; i < answer.size(); i++) printf("%d ", answer[i]);
    printf("sum:");
    printf("%d\n", max_sum);
  }
  return 0;
}