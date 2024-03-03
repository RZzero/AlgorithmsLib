#ifndef _GLIBCXX_NO_ASSERT
#include <cassert>
#endif
#include <cctype>
#include <cerrno>
#include <cfloat>
#include <ciso646>
#include <climits>
#include <clocale>
#include <cmath>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>

#if __cplusplus >= 201103L
#include <ccomplex>
#include <cfenv>
#include <cinttypes>
#include <cstdbool>
#include <cstdint>
#include <ctgmath>
#include <cwchar>
#include <cwctype>
#include <exception>
#include <stdexcept>
#endif

// C++
#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>

#if __cplusplus >= 201103L
#include <array>
#include <atomic>
#include <chrono>
#include <condition_variable>
#include <forward_list>
#include <future>
#include <initializer_list>
#include <mutex>
#include <random>
#include <ratio>
#include <regex>
#include <scoped_allocator>
#include <system_error>
#include <thread>
#include <tuple>
#include <typeindex>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
#endif

using namespace std;

using Long = long long;
int main()
{

  int T;
  cin >> T;

  while (T--)
  {
    int n;
    cin >> n;
    vector<int> containers;
    map<int, int> mapa;
    for (int i = 0; i < n; i++)
    {
      int c;
      cin >> c;
      if (!mapa.count(c))
      {
        mapa[c] = 1;
      }
      else
      {
        mapa[c] += 1;
      }
      containers.push_back(c);
    }

    if (mapa.size() == 1)
    {
      cout << 0 << endl;
      continue;
    }

    int cost_from_start = n;
    int cost_from_start_end = n;
    int cost_from_end = n;

    // from start
    for (int i = 1; containers[i - 1] == containers[i] && i < n; i++)
    {
      cost_from_start = n - (i + 1);
      // cout << "N -> " << n << " i " << i << endl;
      // cout << cost_from_start << endl;
    }

    int L = 0;
    int R = n - 1;

    while (containers[L] == containers[R] && L < R)
    {
      L++;
    }
    L--;
    while (containers[R] == containers[L] && R > L)
    {
      R--;
    }
    cost_from_start_end = (R - L);
    reverse(containers.begin(), containers.end());

    for (int i = 1; containers[i - 1] == containers[i] && i < n; i++)
    {
      cost_from_end = n - (i + 1);
    }

    // cout << "The L " << L << endl;
    // cout << "The R " << R << endl;
    // cout << cost_from_start << endl;
    // cout << cost_from_start_end << endl;
    // cout << cost_from_end << endl;

    int answer = min((n - 1), min(min(cost_from_start, cost_from_start_end), cost_from_end));
    cout << answer << endl;
  }
  return 0;
}