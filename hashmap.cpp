#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
    unordered_map<string, int> map = {{"apple", 10}, {"banana", 20}, {"cherry", 30}, {"date", 40}};

    cout << "HashMap: ";
    for(auto& p : map) cout << p.first << ":" << p.second << " "; cout << endl;

    if(map.find("cherry") != map.end()) cout << "cherry found, value=" << map["cherry"] << endl;

    map["cherry"] = 999;
    cout << "After update cherry: ";

    for(auto& p : map) cout << p.first << ":" << p.second << " "; cout << endl;

    map.erase("date");
    cout << "After delete date: ";
    for(auto& p : map) cout << p.first << ":" << p.second << " "; cout << endl;

    return 0;
}
