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

  reverse(vec.begin(), vec.end());
  reverse(deq.begin(), deq.end());
  reverse(arr.begin(), arr.end());
  reverse(str.begin(), str.end());
  reverse(begin(c_arr), end(c_arr));
  reverse(lst.begin(), lst.end());
  //reverse(s.begin(), s.end(), s2.end());
  //reverse(ms.begin(), ms.end(), ms2.end());
  //reverse(mp.begin(), mp.end(), mp2.end());
  //reverse(mmp.begin(), mmp.end(), mmp2.end());

  /*
   *你可以看到即使 move 了，但值是沒有改變的。
   *所有權改變了，但內容沒清空，他們仍舊是C++規定的未定義
   */
  coutRAIt1();
  cout << '\n';
  coutBiAIt1();
  cout << '\n';

}

