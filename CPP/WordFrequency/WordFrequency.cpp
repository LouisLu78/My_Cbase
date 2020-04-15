//Author: Guangqiang Lu
//Time: 20200415
//Email: gq4350lu@hotmail.com

#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include "WordFrequency.h"

using namespace std;

WordFrequency::WordFrequency(const string&fileName)
{
    ifstream infile;
    infile.open(fileName.c_str());
    if(!infile){
        cout << "The file cannot be opened." << endl;
    }
    else{
        string word;
        while(infile >> word){
            ++wordMap[word];
        }
        infile.close();
    }
}

 int WordFrequency::getWordFrequency(const string& word) const
 {
     MSI::const_iterator iter = wordMap.find(word);

     if (iter != wordMap.end()){
        return iter->second;
     }
     else{
        return -1;
     }
 }

  int WordFrequency::getWordRank(const string &word) const
  {
      int frequency = getWordFrequency(word);
      if(frequency == -1){
        cout <<"The word doesn't exist in the text, so it has no rank among the words." << endl;
        return -1;
      }
      else{
        int rank = 1;
        for (MSI::const_iterator iter = wordMap.begin(); iter != wordMap.end(); iter++){
            if(iter->second > frequency){
                rank++;
            }
        }
        return rank;
      }
  }

  int WordFrequency::getTotalWords() const
  {
      int counter = 0;
      for (MSI::const_iterator iter = wordMap.begin(); iter != wordMap.end(); iter++){
        ++counter;
      }
      return counter;
  }
