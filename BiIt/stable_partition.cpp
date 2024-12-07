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

  // 以某種規則把容器分兩堆
  // 1(true) 在前 0 在後

  stable_partition(vec.begin(), vec.end(), [](int n) { return n%2 ==0; });
  stable_partition(deq.begin(), deq.end(), [](int n) { return n%2 ==0; });
  stable_partition(arr.begin(), arr.end(), [](int n) { return n%2 ==0; });
  stable_partition(str.begin(), str.end(), [](int n) { return n%2 ==0; });
  stable_partition(begin(c_arr), end(c_arr), [](int n) { return n%2 ==0; });
  stable_partition(lst.begin(), lst.end(), [](int n) { return n%2 ==0; });
  //stable_partition(s.begin(), s.end(), s2.end());
  //stable_partition(ms.begin(), ms.end(), ms2.end());
  //stable_partition(mp.begin(), mp.end(), mp2.end());
  //stable_partition(mmp.begin(), mmp.end(), mmp2.end());

  coutRAIt1();
  cout << '\n';
  coutBiAIt1();
  cout << '\n';

}

