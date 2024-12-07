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


  random_device rd;
  mt19937 g(rd());
  shuffle(vec.begin(), vec.end(), g);
  shuffle(deq.begin(), deq.end(), g);
  shuffle(arr.begin(), arr.end(), g);
  shuffle(str.begin(), str.end(), g);
  shuffle(begin(c_arr), end(c_arr), g);

  make_heap(vec.begin(), vec.end());
  make_heap(deq.begin(), deq.end());
  make_heap(arr.begin(), arr.end());
  make_heap(str.begin(), str.end());
  make_heap(begin(c_arr), end(c_arr));

  copy(vec.begin(), vec.end(), ostream_iterator<int>(std::cout, " "));
  cout << '\n';
  copy(deq.begin(), deq.end(), ostream_iterator<int>(std::cout, " "));
  cout << '\n';
  copy(arr.begin(), arr.end(), ostream_iterator<int>(std::cout, " "));
  cout << '\n';
  copy(str.begin(), str.end(), ostream_iterator<int>(std::cout, " "));
  cout << '\n';
  copy(begin(c_arr), end(c_arr), ostream_iterator<int>(std::cout, " "));
  cout << '\n';

  make_heap(vec.begin(), vec.end(), greater<int>{});
  make_heap(deq.begin(), deq.end(), greater<int>{});
  make_heap(arr.begin(), arr.end(), greater<int>{});
  make_heap(str.begin(), str.end(), greater<int>{});
  make_heap(begin(c_arr), end(c_arr), greater<int>{});

  copy(vec.begin(), vec.end(), ostream_iterator<int>(std::cout, " "));
  cout << '\n';
  copy(deq.begin(), deq.end(), ostream_iterator<int>(std::cout, " "));
  cout << '\n';
  copy(arr.begin(), arr.end(), ostream_iterator<int>(std::cout, " "));
  cout << '\n';
  copy(str.begin(), str.end(), ostream_iterator<int>(std::cout, " "));
  cout << '\n';
  copy(begin(c_arr), end(c_arr), ostream_iterator<int>(std::cout, " "));
  cout << '\n';


}

