#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "hello";  // Create

    // Traverse
    cout << "String: ";
    for(char c : s) cout << c << " "; cout << endl;

    // Search (find substring/index)
    size_t pos = s.find("ell");
    if(pos != string::npos) cout << "'ell' found at " << pos << endl;

    // Update (replace char)
    s[1] = 'a';
    cout << "After update: " << s << endl;  // "hallo"

    // Insert
    s.insert(2, "p");  
    cout << "After insert: " << s << endl;  // "hapallo"

    // Delete/erase
    s.erase(1, 3);  // erase 3 chars from position 1
    cout << "After erase: " << s << endl;   // "allo"

  

    return 0;
}
