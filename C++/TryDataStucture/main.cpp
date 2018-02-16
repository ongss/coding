#include <iostream>
#include <set>
#include "queue.h"
#include <algorithm>
#include "pair.h"
#include <map>

using namespace std;


int main(){
    int arr[3] = { 1, 2, 3};
    vector<int> a = {4,0,2,5,3,1};
    std::sort(a.begin(),a.end());
    for(auto i = 0 ; i < 3;i++){
        cout << arr[i] << endl;
    }
    for(auto i = a.begin();i<a.end();i++){
        cout << *i << endl;
    }
    return 0;
}
