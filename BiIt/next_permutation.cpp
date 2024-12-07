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

  do
  {
    for (int n : vec)
    {
      std::cout << n << " ";
    }
    std::cout << std::endl;
  } while (std::next_permutation(vec.begin(), vec.end()));

}

