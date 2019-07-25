#include <algorithm>
#include <cctype>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
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

void read() {}

template <typename T, typename... Targs>
void read(T& x, Targs&... args) {
  x = 0;
  bool flag = false;
  char ch = getchar();
  while (!isdigit(ch)) {
    if (ch == '-') flag = true;
    ch = getchar();
  }
  while (isdigit(ch)) {
    x = x * 10 + ch - 48;
    ch = getchar();
  }
  if (flag) x *= -1;
  read(args...);
}

template <typename T>
void qprint(T x) {
  if (x < 0) putchar('-'), x = -x;
  if (x > 9) qprint(x / 10);
  putchar(x % 10 + 48);
}

template <char end = '\n', typename... Targs>
void print(const Targs&... args) {
  ((qprint(args), putchar(' ')), ...);
  putchar(end);
}

void printt(const char* format) { std::cout << format; }

template <typename T, typename... Targs>
void printt(const char* format, T value, Targs... args) {
  for (; *format != '\0'; format++) {
    if (*format == '%') {
      std::cout << value;
      printt(format + 1, args...);
      return;
    }
    std::cout << *format;
  }
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
#ifdef yyfLocal
  fprintf(stderr, "\ntime: %.3fms\n", clock() * 1000.0 / CLOCKS_PER_SEC);
#endif
}
