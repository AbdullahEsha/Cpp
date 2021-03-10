#include <iostream>
#include <string>
using namespace std;

int main()
{
	string word;
    char letter;
    int length;
    cout << "Enter a word\n";
    cin >> word;
    cout << "What letter would you like to search for?\n";
    cin >> letter;
    cout << "length of word?\n";
    cin >> length;

    for (int i = 0; i < word.length(); i++){
        if(word[i] == letter && word.length() == length){
        cout << letter << " is the " << i + 1 << " no character of " << word <<" word length "<<word.length()<<endl;
        }
    }
}
