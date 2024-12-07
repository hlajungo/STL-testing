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

  move_backward(vec.begin(), vec.end(), vec2.end());
  move_backward(deq.begin(), deq.end(), deq2.end());
  move_backward(arr.begin(), arr.end(), arr2.end());
  move_backward(str.begin(), str.end(), str2.end());
  move_backward(begin(c_arr), end(c_arr), end(c_arr2));
  move_backward(lst.begin(), lst.end(), lst2.end());
  //move_backward(s.begin(), s.end(), s2.end());
  //move_backward(ms.begin(), ms.end(), ms2.end());
  //move_backward(mp.begin(), mp.end(), mp2.end());
  //move_backward(mmp.begin(), mmp.end(), mmp2.end());

  /*
   *你可以看到即使 move 了，但值是沒有改變的。
   *所有權改變了，但內容沒清空，他們仍舊是C++規定的未定義
   */
  coutRAIt1();
  cout << '\n';
  coutRAIt2();
  cout << '\n';
  coutBiAIt1();
  cout << '\n';
  coutBiAIt2();
  cout << '\n';

}

