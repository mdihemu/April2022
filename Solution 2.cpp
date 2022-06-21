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
    string words[] = {"ALFA", "BRAVO", "GOLF", "HOTEL", "INDIA", "JULIETT", "KILO", "LIMA", "X-RAY", "YANKEE", "ZULU", "MIKE", "NOVEMBER", "UNIFORM", "OSCAR",
    "PAPA", "QUEBEC", "ROMEO", "SIERRA", "TANGO", "VICTOR", "WHISKEY", "CHARLIE", "DELTA", "ECHO", "FOXTROT"};

    int sz = sizeof(words) / sizeof(words[0]);
    sort(words, words+sz);
    cout << "After Sorting: \n";
    for(int i=0;i<sz;i++){
        cout << words[i] << endl;
    }

    cout << "Enter a number from 1 to 9: ";
    int n;
    cin >> n;
    n--;
    string splitted_strings[sz];
    int tempting = -1;
    for(int i=0;i<sz;i++){
        string t = words[i];
        if(t.size()>1){
            tempting++;
            splitted_strings[tempting] = split(t, n);
        }
    }
    //int arraysize = sizeof(splitted_strings) / sizeof(splitted_strings[0]);
    sort(splitted_strings, splitted_strings+tempting);
    cout << "After splitting from the given index.\n";
    for(string i:splitted_strings)
        cout << i << endl;
}
