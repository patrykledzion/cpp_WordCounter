#include "WordCounter.h"

void WordCounter::_countWords()
{
	unsigned int __count = 0;
	std::istringstream builder(this->phrase);
	std::string word;
	while (builder >> word)
	{
		++__count;
	}
	this->numOfWords = __count;
	return;
}
 
WordCounter::WordCounter()
{
	this->numOfWords = 0; 
}

WordCounter::WordCounter(std::string phrase) : phrase(std::move(phrase))
{
	this->_countWords();
}

unsigned int WordCounter::GetNumOfWords() const
{
	return this->numOfWords;
}

unsigned int WordCounter::SetPhrase(std::string phrase)
{
	this->phrase = std::move(phrase);
	this->_countWords();
	return this->numOfWords;
}

