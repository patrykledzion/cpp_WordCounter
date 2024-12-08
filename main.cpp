// Day2_WordCounter.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include "WordCounter.h"

int main()
{
    std::string str = " Ala ma  kota a kot ma   Ale \n ";

    WordCounter* wCounter = new WordCounter();
    wCounter->SetPhrase(str);
    std::cout << "Str 1 words count: " << wCounter->GetNumOfWords() <<std::endl;

    WordCounter* wCounter2 = new WordCounter(str);
    std::cout << "Str 2 words count: " << wCounter2->GetNumOfWords() <<std::endl;
    std::cout<< "Str 2 set phrase: "<<wCounter2->SetPhrase("Ala ma kota a kot nie ma Ali")<<std::endl;
    std::cout << "Str 2 words count: " << wCounter2->GetNumOfWords() <<std::endl;

    WordCounter* wCounter3 = new WordCounter();
    std::cout << "Str 3 words count: " << wCounter3->GetNumOfWords() << std::endl;



    return 0;
}
