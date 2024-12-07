#ifndef CONTAINER_INIT_H
#define CONTAINER_INIT_H

#include <bits/stdc++.h>
using namespace std;

vector<int> vec = {1, 2, 3, 4};
deque<int> deq = {1, 2, 3, 4};
array<int, 4> arr = {1, 2, 3, 4};
string str = "1234";
int c_arr[4] = {1, 2, 3, 4};

list<int> lst = {1, 2, 3, 4};
set<int> s = {1, 2, 3, 4};
multiset<int> ms = {1, 2, 3, 4};
map<const int, int> mp = {{1, 1234}, {2, 1234}, {3, 1234}, {4, 1234}};
multimap<int, int> mmp = {{1, 1234}, {2, 1234}, {3, 1234}, {4, 1234}};

forward_list<int> fwd_lst = {1, 2, 3, 4};
unordered_set<int> ust = {1, 2, 3, 4};
unordered_multiset<int> ums = {1, 2, 3, 4};
unordered_map<int, int> ump = {{1, 1234}, {2, 1234}, {3, 1234}, {4, 1234}};
unordered_multimap<int, int> ummp = {{1, 1234}, {2, 1234}, {3, 1234}, {4, 1234}};

stack<int> stk; // 無法直接初始化，需逐個壓入
queue<int> que; // 同樣無法直接初始化，需逐個壓入
priority_queue<int> pri_que; // 需逐個壓入

bitset<4> bs = bitset<4>("1111");
pair<int, int> pr = {1234, 1234};

vector<int> vec2(4, 0);
deque<int> deq2(4, 0);
array<int, 4> arr2 = {0, 0, 0, 0};
string str2 = "0000";
int c_arr2[4] = {0, 0, 0, 0};

list<int> lst2(4, 0);
set<int> s2 = {0, 0, 0, 0};
multiset<int> ms2 = {0, 0, 0, 0};
map<int, int> mp2 = {{0, 0}, {1, 0}, {2, 0}, {3, 0}};
multimap<int, int> mmp2 = {{0, 0}, {1, 0}, {2, 0}, {3, 0}};

forward_list<int> fwd_lst2(4, 0);
unordered_set<int> ust2 = {0, 0, 0, 0};
unordered_multiset<int> ums2 = {0, 0, 0, 0};
unordered_map<int, int> ump2 = {{0, 0}, {1, 0}, {2, 0}, {3, 0}};
unordered_multimap<int, int> ummp2 = {{0, 0}, {1, 0}, {2, 0}, {3, 0}};

stack<int> stk2;
queue<int> que2;
priority_queue<int> pri_que2;

void Init()
{
  for (int i = 1; i <= 4; i++)
  {
    stk.push(i);
    que.push(i);
    pri_que.push(i);
    stk2.push(i);
    que2.push(i);
    pri_que2.push(i);
  }
}

void coutRAIt1()
{
  copy(vec.begin(), vec.end(), ostream_iterator<int>(cout, " "));
  cout << '\n';
  copy(deq.begin(), deq.end(), ostream_iterator<int>(cout, " "));
  cout << '\n';
  copy(arr.begin(), arr.end(), ostream_iterator<int>(cout, " "));
  cout << '\n';
  copy(str.begin(), str.end(), ostream_iterator<int>(cout, " "));
  cout << '\n';
  copy(begin(c_arr), end(c_arr), ostream_iterator<int>(cout, " "));
  cout << '\n';
}

void coutBiAIt1()
{
  copy(lst.begin(), lst.end(), ostream_iterator<int>(cout, " "));
  cout << '\n';
  copy(s.begin(), s.end(), ostream_iterator<int>(cout, " "));
  cout << '\n';
  copy(ms.begin(), ms.end(), ostream_iterator<int>(cout, " "));
  cout << '\n';
  for (const auto& p : mp)
  {
    std::cout << p.first << " " << p.second << " ";
  }
  cout << '\n';
  for (const auto& p : mmp)
  {
    std::cout << p.first << " " << p.second << " ";
  }
  cout << '\n';
}

void coutRAIt2()
{
  copy(vec2.begin(), vec2.end(), ostream_iterator<int>(cout, " "));
  cout << '\n';
  copy(deq2.begin(), deq2.end(), ostream_iterator<int>(cout, " "));
  cout << '\n';
  copy(arr2.begin(), arr2.end(), ostream_iterator<int>(cout, " "));
  cout << '\n';
  copy(str2.begin(), str2.end(), ostream_iterator<int>(cout, " "));
  cout << '\n';
  copy(begin(c_arr2), end(c_arr2), ostream_iterator<int>(cout, " "));
  cout << '\n';
}

void coutBiAIt2()
{
  copy(lst2.begin(), lst2.end(), ostream_iterator<int>(cout, " "));cout << '\n';
  copy(s2.begin(), s2.end(), ostream_iterator<int>(cout, ""));cout << '\n';
  copy(ms2.begin(), ms2.end(), ostream_iterator<int>(cout, ""));cout << '\n';
  for (const auto& p : mp2)
  {
    std::cout << p.first << " " << p.second << " ";
  }
  cout << '\n';
  for (const auto& p : mmp2)
  {
    std::cout << p.first << " " << p.second << " ";
  }
  cout << '\n';
}
class ContainerInit {
  public:
    vector<int> vec = {1, 2, 3, 4};
    deque<int> deq = {1, 2, 3, 4};
    array<int, 4> arr = {1, 2, 3, 4};
    string str = "1234";
    int c_arr[4] = {1, 2, 3, 4};

    list<int> lst = {1, 2, 3, 4};
    set<int> s = {1, 2, 3, 4};
    multiset<int> ms = {1, 2, 3, 4};
    map<int, int> mp = {{1, 1234}, {2, 1234}, {3, 1234}, {4, 1234}};
    multimap<int, int> mmp = {{1, 1234}, {2, 1234}, {3, 1234}, {4, 1234}};

    forward_list<int> fwd_lst = {1, 2, 3, 4};
    unordered_set<int> ust = {1, 2, 3, 4};
    unordered_multiset<int> ums = {1, 2, 3, 4};
    unordered_map<int, int> ump = {{1, 1234}, {2, 1234}, {3, 1234}, {4, 1234}};
    unordered_multimap<int, int> ummp = {{1, 1234}, {2, 1234}, {3, 1234}, {4, 1234}};

    stack<int> stk; // 無法直接初始化，需逐個壓入
    queue<int> que; // 同樣無法直接初始化，需逐個壓入
    priority_queue<int> pri_que; // 需逐個壓入

    bitset<4> bs = bitset<4>("1111");
    pair<int, int> pr = {1234, 1234};

    ContainerInit()
    {
      for (int i = 1; i <= 4; i++)
      {
        stk.push(i);
        que.push(i);
        pri_que.push(i);
      }
    }
};

#endif // CONTAINER_INIT_H

