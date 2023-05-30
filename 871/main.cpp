#include <iostream>

using namespace std;

int main()

{

  string g;

  char c1, c2;

  cin >> g >> c1 >> c2;

  for (int i = 0; i < g.length(); i++)

  {

    if (g[i] == c1)

      g[i] = c2;

  }

  cout << g;

  return 0;

}
