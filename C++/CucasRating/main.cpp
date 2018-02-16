#include <iostream>
#include <iomanip>
#include <map>

using namespace std;

int main()
{
    cout << std::fixed << std::setprecision(2);

    int n;
    int score;
    string name;
    string id;
    map<string,pair<int,int>> sub;
    map<string,pair<int,int>> tea;

    cin >> n;
    for(int i=0;i<n;i++){
        cin >> id;
        cin >> name;
        cin >> score;
        sub[id].first += score;
        sub[id].second += 1;
        tea[name].first += score;
        tea[name].second += 1;
    }

    for(map<string,pair<int,int>>::iterator it = sub.begin();it!=sub.end();it++){
        cout << it->first << " " << ((it->second).first+0.00)/(it->second).second << endl;
    }

    for(map<string,pair<int,int>>::iterator it = tea.begin();it!=tea.end();it++){
        cout << it->first << " " << ((it->second).first+0.00)/(it->second).second << endl;
    }
}
