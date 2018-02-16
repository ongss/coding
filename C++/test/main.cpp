#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <stack>
using namespace std;


template <typename T1,typename T2>
class MyPair{
public :
    T1 first;
    T2 second;
    MyPair(){
        first = T1();
        second = T2();
    }
    MyPair(T1 f,T2 s){
        first = f;
        second = s;
    }
    bool operator<(const MyPair &o) const{
        if(first == o.first) return second < o.second;
        return first < o.first;
    }
};


template <typename T1, typename T2>
class MyReverse{
public :
    bool operator()(const MyPair<T1,T2> &mp1, const MyPair<T1,T2> &mp2) const{
        if(mp1.first == mp2.first) return mp1.second > mp2.second;
        return mp1.first > mp2.first;
    }
};


int main(){
    vector<int> v;
    stack<int> st;
    set<int> s;
    map<int,int> m;
    for(int i=0;i<10;i++){
        s.insert(i);
        m[i] = i*2;
        v.push_back(i);
    }
    cout << st.size();

    //MyPair<int,int> mp1,mp2;
    //mp1 = {1,2};
    //mp2 = {2,4};
    //set<MyPair<int,int>,MyReverse<int,int>> s;
    //s.insert(mp2);
    //s.insert(mp1);

    //for(MyPair<int,int> a : s){
    //        cout << a.first << " " << a.second << endl;
    //}
    //cout << (mp1 < mp2);
    return 0;
}
