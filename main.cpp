#include <iostream>
#include <string>
#include <sstream>
#include <vector>

std::vector<std::string> separator(const std::string& str){
    std::vector<std::string> words;
    bool inWord{false};
    std::string j{""};
    for(int i = 0; i < str.size(); ++i){
        if(str[i] == ' '){
            if(inWord == true){
                words.push_back(j);
                j.clear();
            }
            inWord = false;   
        }
        else{
            inWord = true;
            j.push_back(str[i]);
        }
    }
    if(inWord)
        words.push_back(j);
    return words;
}

void replaceinator(std::vector<std::string>& words){
    for(auto& i : words){
        if(i == "sit")
            i = "sex";
    }
}

int main(){
    std::string ex;
    std::getline(std::cin, ex);
    std::vector<std::string> words = separator(ex);
    replaceinator(words);
    for(auto& i : words){
        std::cout << i << ' ';
    }
}
