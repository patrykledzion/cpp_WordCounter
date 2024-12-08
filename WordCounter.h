#pragma once
#include <iostream>
#include <sstream>
class WordCounter
{
private:
	unsigned int numOfWords;
	void _countWords(); 
	std::string phrase; 
public:
	WordCounter();
	~WordCounter() = default;
	WordCounter(std::string phrase);
	unsigned int GetNumOfWords() const;
	unsigned int SetPhrase(std::string phrase);
};

