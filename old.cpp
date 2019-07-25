#include <algorithm>
#include <cctype>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
#define fn "testdata"
#define ll long long
// #define int long long
#define pc(x) putchar(x)
#define endln putchar('\n')
#define println(x) print(x), endln
#define ms(a, b) memset(a, b, sizeof a)
#define fileIn freopen("testdata.in", "r", stdin)
#define fileOut freopen("testdata.out", "w", stdout)
#define rep(i, a, b) for (int i = (a); i <= (b); ++i)
#define per(i, a, b) for (int i = (a); i >= (b); --i)
#ifdef yyfLocal
#define dbg(x) std::clog << #x " = " << (x) << std::endl
#define logs(x) std::clog << (x) << std::endl
#else
#define dbg(x) 42
#define logs(x) 42
#endif

template <typename T>
void read(T &x) {
  T res = 0, flag = 1;
  char ch = getchar();
  while (!isdigit(ch)) {
    if (ch == '-') flag = -1;
    ch = getchar();
  }
  while (isdigit(ch)) {
    res = res * 10 + ch - 48;
    ch = getchar();
  }
  x = res * flag;
}

template <typename T>
void print(T x) {
  if (x < 0) putchar('-'), x = -x;
  if (x > 9) print(x / 10);
  putchar(x % 10 + 48);
}

void solution() {}

signed main() {
#ifdef yyfLocal
  fileIn;
  // fileOut;
#else
#ifndef ONLINE_JUDGE
  freopen(fn ".in", "r", stdin);
  freopen(fn ".out", "w", stdout);
#endif
#endif
  logs("main.exe");
  solution();
}
