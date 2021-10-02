#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    string vovel = "AEIOUY";

    int l = s.length();

    // Count the no. of spaces in the string
    int c = count(s.begin(), s.end(), ' ');

    // Remove all spaces in the string
    remove(s.begin(), s.end(), ' ');

    // Resize the string after removing the spaces
    s.resize(l - c);

    // Convert the whole resized string to upper case
    transform(s.begin(), s.end(), s.begin(), ::toupper);

    // If the last letter(before '?') is present in the vovel string then print YES else NO
    if (vovel.find(s[s.length() - 2]) != string::npos)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}