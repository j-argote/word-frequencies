#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
  int num_of_elements, count = 0;
  string word;
  vector<string> words_list;
  vector<int> frequencies;
  
  //read in a integer which is the number of words that follow
  cin >> num_of_elements;
  //read in a list of strings and store them in a vector
  for(int i = 0; i < num_of_elements; i++){
    cin >> word;
    words_list.push_back(word);
  } 
  //loop through list of strings and count number of frequencies of each word
  //add each frequency and store the total in a vector
  //output the word followed by the frequency
  for(unsigned i = 0; i < words_list.size(); i++){
    count = 0;
    for(int j = 0; j < words_list.size(); j++){
      if(words_list.at(i) == words_list.at(j)){
        count++;
      }
    }
    frequencies.push_back(count);
    cout << words_list.at(i) << " - " << frequencies.at(i) << endl;
  }
  
  
  return 0;
}