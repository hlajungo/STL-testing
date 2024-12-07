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

  cout << all_of(vec.begin(), vec.end(), [](int n){ return n%2==0;});
  cout << '\n';
  cout << any_of(vec.begin(), vec.end(), [](int n){ return n%2==0;});
  cout << '\n';
  cout << none_of(vec.begin(), vec.end(), [](int n){ return n%2==0;});
  cout << '\n';

}

