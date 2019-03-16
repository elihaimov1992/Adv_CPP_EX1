/* Eli Haimov 308019306 */

#ifndef PLAYER_H
#define PLAYER_H
#include "Card.h"
#include <string>
#include <vector>

class Player {
private:
	//private members
	string name;
	int num_of_cards;
	//vector of cards
	vector<Card> cards;
	sign curr_sign; //current sign

public:
	//public members and functions
	//C'tors
	Player(){};
	Player(string name,int num_of_cards) :name(name), num_of_cards(num_of_cards), cur_sign(NAS){};
	Player(const Player& p);
	Player operator= (Const Player& p);
	//Functions
	bool play(Card&); 
	void add_cards(const int& num_of_cards); //add cards to the deck
	bool is_winner() const{return Card.empty();} //return true if the player has no cards and becomes a winner
	//Getters & Setters
	sign getCurr_sign() const{return curr_sign;}
	void setCurr_sign(const sign& new_curr_sign) :curr_sign(new_curr_sign){};
	string getName() const{return name;}
	void reset_curr_sign() {curr_sign=NAS;}
	//D'Ctor
	//~Player(); 
};
#endif



