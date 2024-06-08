#include "./src/Include/BJ.h"

enum Rank
{
	ACE = 1, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING
};

enum Type
{
	SPADES, CLUBS, DIAMONDS, HEARTS
};

class Card
{
public:
	Card(Rank rank, Type type) : rank_(rank), type_(type) {}

	Rank getRank() const { return rank_; }
	Type getType() const { return type_; }

private:
	Rank rank_;
	Type type_;
};

class Deck
{
public:
	Deck()
	{
		for (int type = SPADES; type <= HEARTS; type++)
		{
			for (int rank = ACE; rank <= KING; rank++)
			{
				cards_.push_back(make_unique<Card>(static_cast<Rank>(rank), static_cast<Type>(type)));
			}
		}
	}

	void ShuffleDeck()
	{
		std::random_device rd;
		std::mt19937 g(rd());
		shuffle(cards_.begin(), cards_.end(), g);
	}

	unique_ptr<Card> DrawCard()
	{
		unique_ptr<Card> card = std::move(cards_.back());
		cards_.pop_back();

		return card;
	}

private:
	vector<unique_ptr<Card> > cards_;
};

class Player
{
public:
	void AddCard(unique_ptr<Card> card)
	{
		hand_.push_back(std::move(card));
	}

	int GetHand() const
	{
		int val = 0;
		int ace = 0;

		for (const auto& card : hand_)
		{
			int CardVal = card->getRank();

			if (CardVal >= 10)
			{
				CardVal = 10;
			}
			else if (CardVal == ACE)
			{
				ace += 1;
				CardVal = 11;
			}
			val += CardVal;
		}

		while (val > 21 && ace > 0)
		{
			val -= 10;
			ace -= 1;
		}
		return val;
	}

private:
	vector<unique_ptr<Card> > hand_;
};

class Dealer : public Player
{

};

int main(int argc, char** argv[])
{
	Deck deck;
	deck.ShuffleDeck();

	Player player;
	Dealer dealer;

	player.AddCard(deck.DrawCard());
	player.AddCard(deck.DrawCard());

	dealer.AddCard(deck.DrawCard());
	dealer.AddCard(deck.DrawCard());

	printf("%d\n", player.GetHand());
	printf("%d", dealer.GetHand());
}
