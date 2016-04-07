#include <iostream>
#include <string>

using namespace std;

string word, fin;

string is_palindrome(string word){
  string backwards;
  cout << "Tell me a word please: ";
  cin >> word;
  cout << endl;

  int large = word.length();
  for (int x = large - 1; x >= 0; x--){
  backwards += word[x];
  }

  if (backwards == word){
  fin = "Your word is a palindrome! YAY!";
  }

  else
  fin = "Your word is not a palindrome, try another one";
  return fin;
}
int main(){
  cout << is_palindrome(fin);
  return 0;
}
