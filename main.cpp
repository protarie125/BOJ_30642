#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;

ll n, k;
string s;

ll FindOdd(ll from, ll mx) {
  if (from % 2 == 1) {
    return from;
  }

  return from - 1;
}

ll FindEven(ll from, ll mx) {
  if (from % 2 == 0) {
    return from;
  }

  if (from == mx) {
    return from - 1;
  }

  return from + 1;
}

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> n >> s >> k;

  ll ans;
  if (s == "annyong") {
    ans = FindOdd(k, n);
  } else {
    ans = FindEven(k, n);
  }
  cout << ans;

  return 0;
}