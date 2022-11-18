#include "Card.h"

Card::Card() {
	this->value = 0;
	this->name = "";
}
Card::Card(int v, std::string s, std::string n) {
	this->value = v;
	this->suit = s;
	this->name = n;
}
Card::~Card() {}
//getters and setters
void Card::setSuit(std::string ss) {
	this->suit = ss;
}
void Card::setValue(int v) {
	this->value = v;
}
void Card::setName(std::string n) {
	this->name = n;
}
std::string Card::getSuit() {
	return this->suit;
}
int Card::getValue(int v) {
	int value;
	switch (v) {
		//first row
	case 1:
		value = 11;
		break;
	case 2:
		value = 2;
		break;
	case 3:
		value = 3;
		break;
	case 4:
		value = 4;
		break;
	case 5:
		value = 5;
		break;
	case 6:
		value = 6;
		break;
	case 7:
		value = 7;
		break;
	case 8:
		value = 8;
		break;
	case 9:
		value = 9;
		break;
	case 10:
		value = 10;
		break;
	case 11:
		value = 10;
		break;
	case 12:
		value = 10;
		break;
	case 13:
		value = 10;
		break;
		//new row
	case 14:
		value = 11;
		break;
	case 15:
		value = 2;
		break;
	case 16:
		value = 3;
		break;
	case 17:
		value = 4;
		break;
	case 18:
		value = 5;
		break;
	case 19:
		value = 6;
		break;
	case 20:
		value = 7;
		break;
	case 21:
		value = 8;
		break;
	case 22:
		value = 9;
		break;
	case 23:
		value = 10;
		break;
	case 24:
		value = 10;
		break;
	case 25:
		value = 10;
		break;
	case 26:
		value = 10;
		break;
		//new row
	case 27:
		value = 11;
		break;
	case 28:
		value = 2;
		break;
	case 29:
		value = 3;
		break;
	case 30:
		value = 4;
		break;
	case 31:
		value = 5;
		break;
	case 32:
		value = 6;
		break;
	case 33:
		value = 7;
		break;
	case 34:
		value = 8;
		break;
	case 35:
		value = 9;
		break;
	case 36:
		value = 10;
		break;
	case 37:
		value = 10;
		break;
	case 38:
		value = 10;
		break;
	case 39:
		value = 10;
		break;
		//new row
	case 40:
		value = 11;
		break;
	case 41:
		value = 2;
		break;
	case 42:
		value = 3;
		break;
	case 43:
		value = 4;
		break;
	case 44:
		value = 5;
		break;
	case 45:
		value = 6;
		break;
	case 46:
		value = 7;
		break;
	case 47:
		value = 8;
		break;
	case 48:
		value = 9;
		break;
	case 49:
		value = 10;
		break;
	case 50:
		value = 10;
		break;
	case 51:
		value = 10;
		break;
	case 52:
		value = 10;
		break;
	}
	return value;
}
std::string Card::getName() {
	return this->name;
}
//shuffedecks is a function that shuffles the deck of cards
void Card::ShuffleDeck(int card[]) {
	for (int i = 0; i < 52; i++) {
		card[i] = i;
	}
	srand(time(NULL));
	for (int i = 0; i < 52; i++) {
		int j = rand() % 52;
		int temp = card[i];
		card[i] = card[j];
		card[j] = temp;
	}


}
