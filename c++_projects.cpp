#include <iostream>
using namespace std;
// A card game example

// const int queen = 12;
// const int king = 13;
// const int ace = 14;
// const int jack = 11;

// enum Suit
// {
//     clubs,
//     diamonds,
//     hearts,
//     spades
// };

// struct card
// {
//     int number;
//     Suit suit;
// };

// int main(void)
// {
//     card temp, chosen, prize;
//     int position;

//     card card1 = {7, clubs};
//     cout << "card 1 is the 7 of clubs\n";

//     card card2 = {jack, hearts};
//     cout << "Card 2 is the jack of hearts\n";

//     card card3 = {ace, spades};
//     cout << "Card 3 is the ace of spaces\n";

//     prize = card3;

//     cout << "I'm swapping card 1 and card 3\n";
//     temp = card3;
//     card3 = card2;
//     card2 = temp;

//     cout << "I'm swapping card 2 and card 3\n";
//     temp = card2;
//     card2 = card1;
//     card1 = temp;

//     cout << "I'm swapping card 1 and card 2\n";
//     temp = card2;
//     card2 = card1;
//     card1 = temp;

//     cout << "Now, where(1, 2, or 3) is the ace of spades? ";
//     cin >> position;

//     switch (position)
//     {
//     case 1:
//         chosen = card1;
//         break;
//     case 2:
//         chosen = card2;
//         break;
//     case 3:
//         chosen = card3;
//         break;
//     }
//     if (chosen.number == prize.number && chosen.suit == prize.suit)
//         cout << "That's right! You win!\n";
//     else
//         cout << "Sorry. You lose.\n";
//     return 0;
// }

// Card game implemented using oop
const int queen = 12;
const int king = 13;
const int ace = 14;
const int jack = 11;

enum Suit
{
    clubs,
    diamonds,
    hearts,
    spades
};
class card
{
private:
    int number;
    Suit suit;

public:
    card() {}
    card(int n, Suit s) : number(n), suit(s) {}
    void display();
    bool isEqual(card);
};

void card::display()
{
    if (number >= 2 && number <= 10)
        cout << number << " of ";
    else
        switch (number)
        {
        case jack:
            cout << "jack of ";
            break;
        case queen:
            cout << "queen of ";
            break;
        case king:
            cout << "king of ";
            break;
        case ace:
            cout << "ace of ";
            break;
        }
    switch (suit)
    {
    case clubs:
        cout << "clubs";
        break;
    case diamonds:
        cout << "diamonds";
        break;
    case hearts:
        cout << "hearts";
        break;
    case spades:
        cout << "spades";
        break;
    }
}
bool card::isEqual(card c2)
{
    return (number == c2.number && suit == c2.suit) ? true : false;
}

int main(int argc, char const *argv[])
{
    card temp, chosen, prize;
    int position;

    card card1(7, clubs);
    cout << "\nCard 1 is the ";
    card1.display();

    card card2(jack, hearts);
    cout << "\nCard 2 is the ";
    card2.display();

    card card3(ace, spades);
    cout << "\nCard 3 is the ";
    card3.display();

    prize = card3;

    cout << "\nI'm swapping card 1 and card 3";
    temp = card3;
    card3 = card1;
    card1 = temp;
    cout << "\nI'm swapping card 2 and card 3";
    temp = card2;
    card3 = card2;
    card2 = temp;
    cout << "\nI'm swapping card 1 and card 2";
    temp = card2;
    card2 = card1;
    card1 = temp;

    cout << "\nNow, where (1,2,or 3) is the ";
    prize.display();
    cout << "? ";
    cin >> position;

    switch (position)
    {
    case 1:
        chosen = card1;
        break;
    case 2:
        chosen = card2;
        break;
    case 3:
        chosen = card3;
        break;
    }
    if (chosen.isEqual(prize))
        cout << "That's right! You win!";
    else
        cout << "Sorry, You lose.";
    cout << " You chose the ";
    chosen.display();
    cout << endl;
    return 0;
}
