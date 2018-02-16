#include <iostream>
#include <vector>


using namespace std;

void deleteVector(vector<int> &vtr,int del){
    vector<int>::iterator arr[vtr.size()];
    int cnt = 0;
    for(std::vector<int>::iterator it = vtr.begin();it != vtr.end(); it++){
        if(*it == del){
            arr[cnt] = it;
            cnt++;
        }
    }
    for(vector<int>::iterator i : arr){
        cout << *i;
    }
}

struct MyData{
    int a = 10;
    int *ptr = &a;
};

int main(){
    MyData *ptrarr[10];
    MyData arr[10];
    for(int i=0;i<10;i++){
        ptrarr[i] = &arr[i];
        //arr[i] = i*2;
    }
    for(int i=0;i<10;i++){
        cout << ptrarr[i]->a << " ";
    }
    MyData **superPtr = &ptrarr[0];
    MyData ***ultraPtr = &superPtr;
}
