#ifndef CONTAINER_INIT_H
#define CONTAINER_INIT_H

#include <bits/stdc++.h>
using namespace std;

class ContainerInit {
public:
    // 序列容器
    vector<int> vec = {1, 2, 3, 4};
    deque<int> deq = {1, 2, 3, 4};
    array<int, 4> arr = {1, 2, 3, 4};
    forward_list<int> fwd_list = {1, 2, 3, 4};
    list<int> lst = {1, 2, 3, 4};
    string str = "1234";

    // 關聯性容器
    set<int> s = {1, 2, 3, 4};
    multiset<int> ms = {1, 2, 3, 4};
    map<int, int> mp = {{1, 1234}, {2, 1234}, {3, 1234}, {4, 1234}};
    multimap<int, int> mmp = {{1, 1234}, {2, 1234}, {3, 1234}, {4, 1234}};

    // 無排序的關聯性容器
    unordered_set<int> ust = {1, 2, 3, 4};
    unordered_multiset<int> ums = {1, 2, 3, 4};
    unordered_map<int, int> ump = {{1, 1234}, {2, 1234}, {3, 1234}, {4, 1234}};
    unordered_multimap<int, int> ummp = {{1, 1234}, {2, 1234}, {3, 1234}, {4, 1234}};

    // 適配器容器
    stack<int> stk; // 無法直接初始化，需逐個壓入
    queue<int> que; // 同樣無法直接初始化，需逐個壓入
    priority_queue<int> pri_que; // 需逐個壓入

    // 特殊容器
    bitset<4> bs = bitset<4>("1111");
    pair<int, int> pr = {1234, 1234};
    int c_arr[4] = {1, 2, 3, 4};

    // Constructor to initialize adapter containers
    ContainerInit() {
        for (int i = 1; i <= 4; i++) {
            stk.push(i);
            que.push(i);
            pri_que.push(i);
        }
    }
};

#endif // CONTAINER_INIT_H

