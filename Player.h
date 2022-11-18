#include <string>
#include <iostream>
#include <time.h>
#include <stdlib.h>
class Player {
private:
	std::string name;
	int card1;
	int card2;
	int score;
	int cards;
	int points;
public:
	Player();
	Player(std::string n, int c1, int c2, int s, int c, int p);
	~Player();
	void setName(std::string n);
	void setCard1(int c1);
	void setCard2(int c2);
	void setCard3(int c3);
	void setScore(int s);
	void setCards(int c);
	void setPoints(int p);
	std::string getName();
	int getCard1();
	int getCard2();
	int getScore();
	int getCards();
	int getPoints();
};