#include <iostream>
#include <list>
#include <algorithm>  
using namespace std;

int main() {
    list<int> ll = {10, 20, 30, 40, 50};

    cout << "LL: ";
    for(int x : ll) cout << x << " "; cout << endl;

    auto it = find(ll.begin(), ll.end(), 30);
    if(it != ll.end()) cout << "30 found" << endl;

    auto updateIt = ll.begin(); advance(updateIt, 2);
    *updateIt = 999;
    cout << "After update: ";
    for(int x : ll) cout << x << " "; cout << endl;

    auto delIt = ll.begin(); advance(delIt, 3);
    ll.erase(delIt);
    cout << "After delete: ";
    for(int x : ll) cout << x << " "; cout << endl;

    return 0;
}
