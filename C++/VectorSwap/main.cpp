#include <iostream>
#include <vector>
using namespace std;
void vector_swap(vector<int> &v1,vector<int> &v2,int start1, int end1,int start2, int end2) {
    vector<int> newV1;
    vector<int> newV2;
    for(vector<int>::iterator it = v1.begin();it!=v1.begin()+start1;it++){
        newV1.push_back(*it);
    }
    for(vector<int>::iterator it = v2.begin()+start2;it!=v2.begin()+end2;it++){
        newV1.push_back(*it);
    }
    for(vector<int>::iterator it = v1.begin()+end1;it!=v1.end();it++){
        newV1.push_back(*it);
    }
    for(vector<int>::iterator it = v2.begin();it!=v2.begin()+start2;it++){
        newV2.push_back(*it);
    }
    for(vector<int>::iterator it = v1.begin()+start1;it!=v1.begin()+end1;it++){
        newV2.push_back(*it);
    }
    for(vector<int>::iterator it = v2.begin()+end2;it!=v2.end();it++){
        newV2.push_back(*it);
    }

    v1 = newV1;
    v2 = newV2;

}
int main() {
 //read input
 int n,c;
 vector<int>v1,v2;
 cin >> n; //number of v1
 for (int i = 0;i < n;i++) {
 cin >> c;
 v1.push_back(c);
 }
 cin >> n; //number of v2
 for (int i = 0;i < n;i++) {
 cin >> c;
 v2.push_back(c);
 }
 int s1,e1,s2,e2; //position
 cin >> s1 >> e1 >> s2 >> e2;
 //call the function
 vector_swap(v1,v2,s1,e1,s2,e2); ๆ
 //display content of the stack
 cout << "v1 has " << v1.size() << endl;
 for (auto &x : v1) { cout << x << " "; }
 cout << endl;
 //display content of the stack
 cout << "v2 has " << v2.size() << endl;
 for (auto &x : v2) { cout << x << " "; }
 cout << endl;
}