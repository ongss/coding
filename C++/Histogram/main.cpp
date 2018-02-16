#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<string,int> mymap;
    int n;
    string s;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> s;
        mymap[s]++;
    }
    for(map<string,int>::iterator it = mymap.begin();it != mymap.end();it++){
        if(it->second > 1){
            cout << it->first << " " << it->second;
            cout << endl;
        }
    }
    return 0;
}
