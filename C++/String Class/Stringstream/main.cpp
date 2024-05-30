#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    string sentence;
    getline(cin, sentence);
    stringstream ss(sentence);  // we can use constructor like this, and also use ss << sentence; after declaration
    string word;
    //ss >> word;                 // assigns single words one after another into word variable

    int count = 0;
    while(ss >> word)
    {
        cout << word << endl;
        count++;                // counting how many words are there.
    }

    cout << "There are " << count << " words in the sentence." << endl;
}

// ss >> word       // we can think it as insertion operator taking input for word
// ss << sentece    // we can thing it as exertion operator giving output in ss;
