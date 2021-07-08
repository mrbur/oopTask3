#pragma once

enum Suit {
	CLUBS,
	DIAMONDS,
	HEARTS,
	SPADES
};

enum CardValue {
	TWO = 2, THREE = 3, FOUR = 4, FIVE = 5, SIX = 6, SEVEN = 7, EIGHT = 8, NINE = 9, TEN = 10, JACK = 10, QUEEN = 10, KING = 10, ACE = 1
};

class Card {
	private:
		Suit suit;
		CardValue cardValue;
		bool position = 0;
	public:
		Card(Suit suit, CardValue cardValue) : suit(suit), cardValue(cardValue) {
		}
		void flip() {
			position = position == 0 ? 1 : 0;
		}
		int getValue() const {
			return cardValue;
		}
};