#include <bits/stdc++.h>
using namespace std;

int main() 
{
    string s;
    int t, a, b, s_size;
    
    cin >> s >> t;
    
    s_size = s.size();
    
    bool cache[s_size][s_size];
    
    for (int i = 0; i < s_size - 1; i++) {
      cache[i][i] = true;
      cache[i][i + 1] = true;
    }
    cache[s_size][s_size];
    
    for (int i = 2; i < s_size; i++) { // 1 ~ 5
      
      for (int j = 0; j < s_size - i; j++) {
          
        if (s[j] == s[j + i]) {cache[j][j + i] = true;}
        else {cache[j][j + i] = false;}
        //cout << j << ", " << j+i << '\n';
      }
      //cout << '\n';
    }
    
    for (int k = 0; k < t; k++) {
      cin >> a >> b;
      cout << cache[a - 1][b - 1] << '\n';
    }

    return 0;
}