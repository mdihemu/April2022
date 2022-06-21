#include<bits/stdc++.h>
using namespace std;

string split(string s, int n)
{
    string t = "";
    for(int i=n;i<s.size();i++){
        t += s[i];
    }
    return t;
}

int main()
{
    vector<string>words = {"ALFA", "BRAVO", "GOLF", "HOTEL", "INDIA", "JULIETT", "KILO", "LIMA", "X-RAY", "YANKEE", "ZULU", "MIKE", "NOVEMBER", "UNIFORM", "OSCAR",
    "PAPA", "QUEBEC", "ROMEO", "SIERRA", "TANGO", "VICTOR", "WHISKEY", "CHARLIE", "DELTA", "ECHO", "FOXTROT"};

    sort(words.begin(), words.end());
    cout << "After Sorting: \n";
    for(string i:words)
        cout << i << endl;

    cout << "Enter a number from 1 to 9: ";
    int n;
    cin >> n;
    n--;
    vector<string>splitted_strings;
    for(string i:words){
        string t = i;
        splitted_strings.push_back(split(t, n));
    }
    sort(splitted_strings.begin(), splitted_strings.end());
    cout << "After splitting from the given index.\n";
    for(string i:splitted_strings)
        cout << i << endl;
}
