#include <bits/stdc++.h>
using namespace std;

// http://codeforces.com/blog/entry/19080
// http://pastebin.com/NA9fyTZk
int MOD = 1e9 + 7;
class DynamicSegmentTree {
   struct TreeNode {
      long long val;
      bool delay_flag;
      long long delay_val;
      long long left, right;  // left and right child
      TreeNode() : val(0), delay_flag(0), delay_val(0), left(-1), right(-1) {}
      void update(long long L, long long R, unsigned long long d) {
         delay_flag = true;
         delay_val += d % MOD;
         val += (d * (R-L+1)) % MOD;
      }
   };

   static long long new_TreeNode() {
      long long ret = nodes.size();
      nodes.push_back(TreeNode());
      return ret;
   }

   static void _propagate(long long u, long long L, long long R) {
      if (nodes[u].delay_flag) {
         // push sum to children
         const long long mid = L+(R-L)/2;
         nodes[ nodes[u].left  ].update(L, mid, nodes[u].delay_val);
         nodes[ nodes[u].right ].update(mid+1, R, nodes[u].delay_val);
         nodes[u].delay_flag = false;
         nodes[u].delay_val = 0;
      }
   }

   static vector<TreeNode> nodes;
   long long ROOT;
public:

   DynamicSegmentTree() : ROOT(new_TreeNode()) {
   }
  
   void _update(long long p, long long q, long long val, long long u, long long L, long long R) {
   // fprlong longf(stderr, "u: %d  L: %d  R: %d\n", u, L, R);
      if (q < L || p > R) return;
      if (p <= L && R <= q) {
         nodes[u].update(L, R, val);
         return;
      }
      long long left_idx = nodes[u].left;
      if (left_idx  < 0) {
         left_idx = new_TreeNode();
         nodes[u].left = left_idx;
      }
      long long right_idx = nodes[u].right;
      if (right_idx < 0) {
         right_idx = new_TreeNode();
         nodes[u].right = right_idx;
      }
      _propagate(u, L, R);
      const long long mid = L + (R-L)/2;
      _update(p, q, val, left_idx, L, mid);
      _update(p, q, val, right_idx, mid+1, R);
      nodes[u].val = nodes[left_idx].val + nodes[right_idx].val;
   }

   long long _query(long long p, long long q, long long u, long long L, long long R) {
      if (q < L || p > R) return 0;
      if (p <= L && R <= q) return nodes[u].val;
      long long left_idx = nodes[u].left;
      if (left_idx  < 0) {
         left_idx = new_TreeNode();
         nodes[u].left = left_idx;
      }
      long long right_idx = nodes[u].right;
      if (right_idx < 0) {
         right_idx = new_TreeNode();
         nodes[u].right = right_idx;
      }
      _propagate(u, L, R);
      const long long mid = L + (R-L)/2;
      long long resL = _query(p, q, left_idx, L, mid);
      long long resR = _query(p, q, right_idx, mid+1, R);
      return resL + resR;
   }

   const long long MINS = 0;
   const long long MAXS = 1000000000;
   void update(long long p, long long q, long long val) {
      _update(p, q, val, ROOT, MINS, MAXS);
   }

   long long query(long long p, long long q) {
      return _query(p, q, ROOT, MINS, MAXS);
   }

};

vector<DynamicSegmentTree::TreeNode> DynamicSegmentTree::nodes;

int main(int argc, char *argv[]) {

  DynamicSegmentTree st;
  st.update(0, 1e5*2, 0);
  long long N;
  cin >> N;

  for(long long i = 0; i < N; i++){
    long long dum; cin >> dum;
    st.update(i, i, dum);
  }

  long long Q;
  cin >> Q;
  for(long long i = 0; i < Q; i++){
    long long L, R, V;
    cin >> L >> R >> V;
    for(long long j = 0; j < V; j++){
      long long S = st.query(L-1, R-1);
      st.update(L-1, R-1, S);
    }
  }

  for(long long i = 0; i < N; i++){
    cout << st.query(i,i) << " ";
  }
/*
   for (long long u = 0; u < (long long) st.nodes.size(); ++u) {
      fprlong longf(stderr, "u:%d  val:%lld  flag:%d  delay:%lld  left:%d  right:%d\n",
              u, st.nodes[u].val, st.nodes[u].delay_flag, st.nodes[u].delay_val,
              st.nodes[u].left, st.nodes[u].right);
   }
*/

  //  fprlong longf(stderr, "%lld\n", st.query(1, 100));

  //  st.update(1000, 1000000000, 2);

  //  fprlong longf(stderr, "%lld\n", st.query(1000, 1002));

/*
   for (long long u = 0; u < (long long) st.nodes.size(); ++u) {
      fprlong longf(stderr, "u:%d  val:%lld  flag:%d  delay:%lld  left:%d  right:%d\n",
              u, st.nodes[u].val, st.nodes[u].delay_flag, st.nodes[u].delay_val,
              st.nodes[u].left, st.nodes[u].right);
   }
*/
  return 0;
}
