#include "Player.h"

Player::Player() {
	this->name = "";
	this->card1 = 0;
	this->card2 = 0;
	this->score = 0;
	this->cards = 0;
	this->points = 0;
}
Player::Player(std::string n, int c1, int c2, int s, int c, int p) {
	this->name = n;
	this->card1 = c1;
	this->card2 = c2;
	this->score = s;
	this->cards = c;
	this->points = p;
}
Player::~Player() {}

void Player::setName(std::string n) {
	this->name = n;
}
void Player::setCard1(int c1) {
	this->card1 = c1;
}
void Player::setCard2(int c2) {
	this->card2 = c2;
}
void Player::setScore(int s) {
	this->score = s;
}
void Player::setCards(int c) {
	this->cards = c;
}
void Player::setPoints(int p) {
	this->points = p;
}
std::string Player::getName() {
	return this->name;
}
int Player::getCard1() {
	return this->card1;
}
int Player::getCard2() {
	return this->card2;
}
int Player::getScore() {
	return this->score;
}
int Player::getPoints() {
	return this->points;
}
