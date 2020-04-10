#include<iostream>
#include<vector>
#include <ostream>
#include <queue>
#include <set>
#include <algorithm>
#include <stack>

using namespace std;

class MinStack {
public:
  /** initialize your data structure here. */
  vector<pair<int, int>> myStack;
  MinStack() {

  }
    
  void push(int x) {
    if (myStack.size()) {
      myStack.push_back({ x, min(getMin(), x) });
    } else {
      myStack.push_back({ x, x });
    }
  }
  
  void pop() {
    if (!myStack.size()) return;
    myStack.pop_back();
  }
  
  int top() {
    if (!myStack.size()) return -1;
    return myStack.back().first;
  }
  
  int getMin() {
    if (!myStack.size()) return -1;
    return myStack.back().second;
  }
};

int main () {
  MinStack* obj = new MinStack();
  obj->push(10);
  // obj->pop();
  int param_3 = obj->top();
  int param_4 = obj->getMin();
  cout << param_3 << " " << param_4 << endl;
  return 0;
}
/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */