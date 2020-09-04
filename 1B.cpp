#include <bits/stdc++.h>
using namespace std;

vector<string> a,s;
bool used[10000];

// A function to check if a string str is palindrome 
bool isPalindrome(string str) 
{ 
    // Start from leftmost and rightmost corners of str 
    int l = 0; 
    int h = str.length() - 1; 
  
    // Keep comparing characters while they are same 
    while (h > l) 
    { 
        if (str[l++] != str[h--]) 
        { 
            return false; 
        } 
    } 
    return true;
} 

void back(int pos, vector<string> s, int size){
    int i;
    if (pos==size) {
        int max = 0;
        string s1 = "";
        for (int i = 0; i < s.size(); i++) {
            
        }
        s.clear;
        return ;
    }
    for (i = 0; i < size; i++)
    if (!used[i]){
        s.push_back(a[i]);
        used[i] = true;
        back(pos+1, s, size);
        used[i] = false;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // freopen("input.txt", "r", stdin);
    int n,m;
    cin >> n >> m;

    
    return 0;
}