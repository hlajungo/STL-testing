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

  reverse_copy(vec.begin(), vec.end(), vec2.begin());
  reverse_copy(deq.begin(), deq.end(), deq2.begin());
  reverse_copy(arr.begin(), arr.end(), arr2.begin());
  reverse_copy(str.begin(), str.end(), str2.begin());
  reverse_copy(begin(c_arr), end(c_arr), begin(c_arr2));

  reverse_copy(lst.begin(), lst.end(), lst2.begin());
  // 導致錯誤
  //reverse_copy(s.begin(), s.end(), s2.begin());
  //reverse_copy(ms.begin(), ms.end(), ms2.begin());
  //reverse_copy(mp.begin(), mp.end(), mp2.begin());
  //reverse_copy(mmp.begin(), mmp.end(), mmp2.begin());

  coutRAIt1();
  cout << '\n';
  coutBiAIt1();
  cout << '\n';
  coutRAIt2();
  cout << '\n';
  coutBiAIt2();
  cout << '\n';

}

