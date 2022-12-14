

#include <iostream>
#include <string>
#include "Player.h"
#include "Card.h"
void CalculateHouseScore();
void CalculatePlayerScore();
void PlayerHit();
void ResetGame();
int deck[52];
int list[10];
Player player;
Card card;
int base;
int listbase;
int main()
{
	base = 1;
	listbase = 2;
	std::string user;
	std::cout << "Welcome to BlackJack! Please enter your name below:" << std::endl;
	std::cin >> user;
	player.setName(user);
	std::cout << "Hello there " << player.getName() << "! Enter a choice." << std::endl;
	char choice;
	std::cout << "Enter A too play, or B to quit." << std::endl;
	std::cin >> choice;
	if (choice == 'A' || choice == 'a') {
		std::cout << "You picked PLAY" << std::endl;
		std::cout << "Current Score: " << player.getPoints() << std::endl;
		card.ShuffleDeck(deck);
		player.setScore(card.getValue(deck[0]) + card.getValue(deck[1]));
		list[0] = card.getValue(deck[0]);
		list[1] = card.getValue(deck[1]);
		std::cout << "Your hand is: " << card.getValue(deck[0]) << " " << card.getValue(deck[1]) << " = " << player.getScore() << std::endl;
		std::cout << "" << std::endl;
		CalculatePlayerScore();
		std::cout << "1. Hit or 2. Stay?" << std::endl;
		int pick;
		std::cin >> pick;
		if (pick == 1) {
			PlayerHit();
		}
		else if (pick == 2) {
			std::cout << "You picked stay" << std::endl;
			CalculateHouseScore();
		}

	}
	else if (choice == 'B' || choice == 'b') {
		std::cout << "You picked QUIT." << std::endl;
		exit(0);
	}
	else {
		std::cout << "Invalid choice" << std::endl;
	}


}
void PlayerHit() {
	int pick = 1;

	while (pick == 1) {
		std::cout << "You picked HIT" << std::endl;
		int temp = card.getValue(deck[base++]);
		list[listbase++] = temp;
		player.setScore(player.getScore() + temp);
		std::cout << "Your hand is: ";
		for (int i = 0; i < listbase; i++) {
			std::cout << list[i] << " ";
		}
		std::cout << "= " << player.getScore() << std::endl;
		std::cout << "" << std::endl;
		CalculatePlayerScore();
		std::cout << "1. Hit or 2. Stay?" << std::endl;
		std::cin >> pick;
		if (pick == 1) {
			//repeat the while loop
		}
		else if (pick == 2) {
			std::cout << "You picked stay" << std::endl;
			CalculateHouseScore();
		}
	}

}
void CalculatePlayerScore() {
	if (player.getScore() >= 22) {
		std::cout << "You busted!" << std::endl;
		player.setPoints(player.getPoints() - 50);
		ResetGame();
	}
	else if (player.getScore() == 21) {
		std::cout << "You got 21!" << std::endl;
		player.setPoints(player.getPoints() + 50);
		ResetGame();
	}
}
int housescore = 0;
int start = 0;
int houselist[25];
void CalculateHouseScore() {
	while (housescore < player.getScore()) {
		int housecard = card.getValue(deck[base++]);
		houselist[start++] = housecard;
		housescore += housecard;
		std::cout << "House hand is: ";
		for (int i = 0; i < start; i++) {
			std::cout << houselist[i] << " ";
		}
		std::cout << "= " << housescore << std::endl;
		
		if (housescore >= 22) {
			std::cout << "House busted!" << std::endl;
			player.setPoints(player.getPoints() + 50);
			ResetGame();
			break;
		}
		else if (housescore == 21) {
			std::cout << "House got 21!" << std::endl;
			player.setPoints(player.getPoints() - 50);
			ResetGame();
			break;
		}
		else if (housescore == player.getScore()) {
			std::cout << "You both tied!" << std::endl;
			ResetGame();
			break;
		}
		if (housescore > player.getScore()) {
			std::cout << "House wins!" << std::endl;
			player.setPoints(player.getPoints() - 50);
			ResetGame();
			break;
		}
	}
}
void ResetGame() {
	std::cout << "Would you like to continue? 1. Continue 2. Quit" << std::endl;
	int choice;
	std::cin >> choice;
	if (choice == 1) {
		player.setScore(0);
		base = 0;
		listbase = 0;
		housescore = 0;
		start = 0;
		for (int i = 0; i < 10; i++) {
			list[i] = 0;
		}
		for (int i = 0; i < 52; i++) {
			deck[i] = 0;
		}
		main();
	}
	else if (choice == 2) {
		exit(0);
	}
}

