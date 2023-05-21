#include "../header/anagrams.hpp"

// put all anagrams next to each other
void output_anagrams(vector<string> v) {
  int word_value = 0;

  // go through the vector
  for(unsigned i = 0; i < v.size() - 1 ; ++i) {
    for(unsigned j = i+1; j < v.size(); j++) {
      word_value = string_value(v.at(i));
      if(word_value == string_value(v.at(j))) {
        cout << v.at(i) << "\t-\t" << v.at(j) << endl;
      }
    }
  }
}

int string_value(string str) {
  int total = 0;

  for(unsigned i = 0; i < str.length(); i++) {
    if(isalpha(str.at(i))) {
      total += str.at(i) - 'a';
    }
  }

  return total;
}
