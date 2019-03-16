/* Eli Haimov 308019306 */

#include "Player.h"

Player::Player(const Player& p)
{
    name = p.name;
    num_of_cards = p.num_of_cards;
    curr_sign = p.curr_sign;
    for(size_t i = 0; i < p.cards.size(); i++)
    {
        cards.push_back(p.cards.at(i));
    }
}


Player Player::operator= (Const Player& p)
{
    name = p.name;
    num_of_cards = p.num_of_cards;
    curr_sign = p.curr_sign;
    cards.clear();
    for(size_t i = 0; i < p.cards.size(); i++)
    {
        cards.push_back(p.cards.at(i));
    }
    return *this;
}


void Player::add_cards(const int& num_of_cards)
{
    for(size_t i = 0; i < num_of_cards; i++)
    {
        this->cards.push_back(generate_card());
    }
    
}

bool Player::play(Card& c)
{
    int choice;
    Card chosen_card;

    cout << "current: " << c << endl;
    cout<< this->getName() + ", your turn -"<< endl;
    cout << "Your cards :";
    for(size_t i = 0; i < num_of_cards; i++)
    {
        cout << "(" + to_string((long long)(i+1)) + ")" << this.cards.at(i) << " ";
    }
    count << endl;

    while(true){
        //Select the card of the player
        cin >> choice; 
        //if the player has selected a card inside range
        if(!(choice < 1 || num_of_cards < choice)) 
        {
            //Choose a card number "choise" from the player's deck of cards
            chosen_card = this->cards.at(choice - 1);
            //If the Chosen card is illegal (in terms of color and sign)
            if(!(c.is_legal(chosen_card)))
            {
               cout << "You can't put " << chosen_card << "on" << c << endl;
            }
            else
            {
                //Replaces current card with chosen card
                c = chosen_card;
                //Change the sign on the current sign
                curr_sign = c.get_sign();
                //Delete the chosen card from the player's deck of cards
                this->cards.erase(cards.begin() + choise - 1);
                this->num_of_cards--;

                return 1;
            }
        }
        else 
        {
            this->add_cards(1);
            this->num_of_cards++;
            
            return 0;  
        }
    }
}