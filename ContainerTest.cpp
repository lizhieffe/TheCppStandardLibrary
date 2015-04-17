//
// Created by Zhi Li on 4/15/15.
//

#include "ContainerTest.h"

#include <vector>
using std::vector;

#include <deque>
using std::deque;

#include <list>
using std::list;

#include <set>
using std::set;

#include <string>
using std::string;

#include <map>
using std::map;

#include <unordered_map>
using std::unordered_map;

#include <iostream>
using std::cout;
using std::endl;

void ContainerTest::testVector() {
    vector<int> v;
    for (int i = 0; i < 6; ++i)
        v.push_back(i);

    cout << endl << __func__ << endl;
    for (int i = 0; i < v.size(); ++i)
        cout << i << " ";
    cout << endl;
}

void ContainerTest::testDeque() {
    deque<double> dq;

    for (int i = 0; i < 6; ++i) {
        double val = ((double)i) * 1.1;
        dq.push_back(val);
        dq.push_front(val);
    }

    cout << endl << __func__ << endl;
    for (int i = 0; i < dq.size(); ++i)
        cout << dq[i] << " ";
    cout << endl;
}

void ContainerTest::testList() {
    list<char> l;
    for (char c = 'a'; c <= 'z'; ++c)
        l.push_back(c);
    cout << endl << __func__ << endl;
    for (char c : l)
        cout << c << " ";
    cout << endl;
}

void ContainerTest::testSet() {
    set<string> st;
    st.insert("aaa");
    st.insert("bbb");
    st.insert("ccc");
    cout << endl << __func__ << endl;
    for (string s : st)
        cout << s << " ";
    cout << endl;
}

void ContainerTest::testMap() {
    map<string, int> mp;
    mp.insert(std::pair<string, int>("aaa", 1));
    mp.insert(std::pair<string, int>("bbb", 2));
    mp.insert(std::pair<string, int>("zzz", 26));
    cout << endl << __func__ << endl;
    for (std::pair<string, int> entry : mp)
        cout << entry.first << ", " << entry.second << "; ";
    cout << endl;
}

void ContainerTest::testUnorderedMap() {
    unordered_map<string, int> um;
    um.insert(std::pair<string, int>("aaa", 1));
    um.insert(std::pair<string, int>("bbb", 2));
    um.insert(std::pair<string, int>("zzz", 26));
    cout << endl << __func__ << endl;
    for (std::pair<string, int> entry : um)
        cout << entry.first << ", " << entry.second << "; ";
    cout << endl;
    for (std::pair<const string, int> &entry : um) {
        entry.second *= entry.second;
        cout << entry.first << ", " << entry.second << "; ";
    }
    cout << endl;
}

void ContainerTest::testIterator() {
    unordered_map<string, int> um;
    um.insert(std::pair<string, int>("aaa", 1));
    um.insert(std::pair<string, int>("bbb", 2));
    um.insert(std::pair<string, int>("zzz", 26));
    cout << endl << __func__ << endl;
    for (unordered_map<string, int>::const_iterator it = um.begin(); it != um.end(); ++it)
        cout << it->first << ", " << it->second << "; ";
    cout << endl;
}