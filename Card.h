#include <string>
#include <iostream>
#include <time.h>
#include <stdlib.h>
class Card {
private:
	int value;
	std::string suit;
	std::string name;
public:
	int cards[52];
	Card();
	Card(int v, std::string s, std::string n);
	~Card();
	void setSuit(std::string suit);
	void setValue(int v);
	void setName(std::string n);
	std::string getSuit();
	int getValue(int v);
	int getCard();
	std::string getName();
	void ShuffleDeck(int c[]);
};
