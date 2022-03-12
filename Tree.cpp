#include <bits/stdc++.h>
using namespace std;

string s = "";

int main() {
    ifstream myReadFile;
    myReadFile.open("text.txt");
    char output[100];
    if (myReadFile.is_open()) {
        while (!myReadFile.eof()) {
            myReadFile >> output;
            string tmp(output);
            s += tmp + ' ';
            
        }
    }
    
    int maxLen = sqrt(s.size() * 4) - 1;
    int cnt = 0;
    bool ok = 1;
    int last = 0;
    for (int i = 0; i < maxLen && ok; ++i) {
        last = 0;
        if ((maxLen - 2 * i + 1) / 2 <= 1) ok = 0;
        for (int j = (maxLen - (2 * i - 1)) / 2; j >= 0; j--, last++) {
            cout << " ";
            
        }
        for (int j = 1; j < (2 * i - 1); ++j, last++) {
            cout << s[cnt++];
        }

        cout << endl;
    }
    int edge = sqrt(s.size() - cnt);
    for (int i = 0; i <= edge; ++i) {
        for (int i = 0; i < (last - edge) / 2; ++i) cout << " ";
        for (int i = 0; i < edge; ++i) cout << s[cnt++];
        cout << endl;
    }
    
    //cout << s << endl;
    myReadFile.close();
    return 0;
}
