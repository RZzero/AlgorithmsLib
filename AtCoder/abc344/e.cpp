#include <bits/stdc++.h>
using namespace std;

struct Node {
  int value = -1;
  int prev = -1;
  int next = -1;
  bool deleted = false;
};

int main() {
  int N, Q;
  cin >> N;

  map<int, Node> mapa;
  vector<int> numbers(N);
  for (auto &n : numbers) {
    cin >> n;
  }

  for (int i = 0; i < N; i++) {
    Node cur;
    cur.value = numbers[i];
    if (i == 0) {
      if (i + 1 < N) {
        cur.next = numbers[i + 1];
      }
    } else if (i == N - 1) {
      cur.prev = numbers[i - 1];
    } else {
      cur.prev = numbers[i - 1];
      cur.next = numbers[i + 1];
    }
    mapa[numbers[i]] = cur;
  }

  cin >> Q;
  for (int i = 0; i < Q; i++) {
    int t;
    cin >> t;
    if (t == 1) {
      int x, y;
      cin >> x >> y;
      // insert y after x
      Node cur = mapa[x];

      if (!mapa.count(y)) {
        Node new_node;
        new_node.value = y;
        mapa[y] = new_node;
      }

      if (cur.next != -1) {
        // inserting an element that is not present yet

        // actualizar next-prev de y
        mapa[y].prev = cur.value;
        mapa[y].next = cur.next;

        // actualizar prev de next de x
        mapa[mapa[x].next].prev = y;

        // actualizar next de x
        mapa[x].next = y;

      } else {
        mapa[x].next = y;
        mapa[y].prev = cur.value;
      }

      mapa[y].deleted = false;
    } else {
      int x;
      cin >> x;

      // update prev
      Node cur = mapa[x];
      if (cur.prev != -1) {
        if (cur.next != -1) {
          mapa[cur.prev].next = mapa[cur.next].value;
          mapa[cur.next].prev = mapa[cur.prev].value;
        } else {
          mapa[cur.prev].next = -1;
        }
      } else if (cur.next != -1) {
        mapa[cur.next].prev = -1;
      }

      // Deleted
      mapa[x].next = -1;
      mapa[x].prev = -1;
      mapa[x].deleted = true;
    }
  }

  Node cur;
  for (auto &node : mapa) {
    if (!node.second.deleted) {
      cur = node.second;
      break;
    }
  }

  // Go to head
  while (cur.prev != -1) {
    cur = mapa[cur.prev];
  }

  while (cur.value != -1) {
    cout << cur.value << " ";
    if (cur.next == -1)
      break;
    cur = mapa[cur.next];
  }

  return 0;
}