/* 
Pseudoword Generator -- Alan Zhong

Pseudowords are sequences of letters that have the structure of a word in the English language, but aren't actually words. 
They can be useful for object names (ex: usernames or product names), linguistics, etc.
This program uses lists of hard and soft syllables to create a combination, the pseudoword that is generated. It has
random (but restricted) length and random generation.
*/

#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define MOD 1000000007
#define nl endl
#define pub push_back
#define pob pop_back

int main() {
	srand(time(0)); // seeding the pseudorandom number generator to the time; this guarantees different results each time we run the program
	int n;
	cout << "How many pseudowords do you want to generate? " << nl;
	cin >> n;
	string hardSyllables[32] = {"b", "c", "d", "f", "g", "h", "j", "k", "l", "m", // list of possible hard syllables to use
	"n", "p", "q", "r", "s", "t", "v", "w", "x", "y", "z", 
	"br", "cr", "dr", "fr", "gr", "pr", "tr", "th", "ch", "sh", "ph"};
	string softSyllables[15] = {"a", "e", "i", "o", "u", "ae", "au", 
	"eu", "eo", "ao", "io", "ea", "ua", "oa", "oi"}; // list of possible soft syllables to use
    string endings[21] = {"b", "c", "d", "f", "g", "h", "j", "k", "l","m", "n", "p", "q", "r", "s", "t", "v", "w", "x", "y", "z"}; // list of possible endings to the pseudoword
	for (int i = 0; i < n; i++) {
        int length = (rand() % 2) * 2  + 3; // length of the pseudoword (in syllables) 
		string pseudoWord = "";
		// constructing the pseudoword
		for (int j = 0; j < length - 1; j++) {
			if (j % 2 == 0) {
				pseudoWord += hardSyllables[rand() % 32];
			} else {
				pseudoWord += softSyllables[rand() % 15];
			}
		}
		pseudoWord += endings[rand() % 21];
		cout << pseudoWord << nl;
    }
}
