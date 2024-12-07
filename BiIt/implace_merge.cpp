#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define EL endl
#include "../dataStructs.h"

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  Init();

  vec = {3,5,4,6};
  inplace_merge(vec.begin(), vec.begin() + 2, vec.end());

  for (int n : vec)
  {
      std::cout << n << " ";
  }
  cout << '\n';


}
