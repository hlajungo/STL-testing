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

  copy_backward(vec.begin(), vec.end(), vec2.end());
  copy_backward(deq.begin(), deq.end(), deq2.end());
  copy_backward(arr.begin(), arr.end(), arr2.end());
  copy_backward(str.begin(), str.end(), str2.end());
  copy_backward(begin(c_arr), end(c_arr), end(c_arr2));


  copy_backward(lst.begin(), lst.end(), lst2.end());
  // 導致錯誤
  //copy_backward(s.begin(), s.end(), s2.end());
  //copy_backward(ms.begin(), ms.end(), ms2.end());
  //copy_backward(mp.begin(), mp.end(), mp2.end());
  //copy_backward(mmp.begin(), mmp.end(), mmp2.end());

  coutRAIt1();
  cout << '\n';
  coutBiAIt1();
  cout << '\n';
  coutRAIt2();
  cout << '\n';
  coutBiAIt2();
  cout << '\n';

}

