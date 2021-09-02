#include <iostream>
#include <vector>
using namespace std;

void helper(vector<char> characters, int length, std::string output){
    if(length == 0){
        cout << output << endl;
        return;
    }

    string temp = output;
    for(int i = 0; i < length; i++){
        output += characters[i];
        vector<char> copy;
        for(int j = 0; j < length; j++){
            if(j != i){
                copy.push_back(characters[j]);
            }
        }
        helper(copy, length-1, output);
        output = temp;
    }
}

void permutation(std::string in){
    
    int len = in.length();
    vector<char> chars;
    for(int i = 0; i < len; i++){
        chars.push_back(in[i]);
    }
    helper(chars, len, "");
    return;
}


