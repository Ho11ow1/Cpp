#include <iostream>
#include <stdlib.h>
#include <stdio.h>

#include <string>
#include <vector>
#include <unordered_map>

#include <ctime>

class bj
{
private:
    std::vector<int> cards = { 11, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10 };

    uint32_t Init_option{};

    uint32_t AI_score = 0;
    uint32_t Player_score = 0;

    int Max = 11;
    int Min = 1;

    uint32_t AI_card;
    uint32_t Player_card;

    std::string c;

    bool Player_win;
    bool AI_win;
    bool Draw;

public:
    void Init()
    {
        while (Init_option != 4)
        {
            printf("%s", "-------------------- BLACKJACK PROGRAM --------------------\n\n");
            printf("%s", "1. Start game\n");
            printf("%s", "2. Check rules\n");
            printf("%s", "3. Test\n");
            printf("%s", "4. Exit!\n\n");

            printf("%s", "Input option choice: ");
            scanf_s("%d", &Init_option, sizeof(uint32_t));

            if (Init_option < 1 || Init_option > 4)
            {
                printf("\n%s", "Invalid option choice, please input a valid option\n");
                continue;
            }

            switch (Init_option)
            {
                case 1:
                    printf("%s", "\n");
                    Game();
                    printf("%s", "\n");
                break;

                case 2:
                    printf("%s", "\n");
                    Rules();
                    printf("%s", "\n");
                break;

                case 3:
                    printf("%s", "\n");
                    Test();
                    printf("%s", "\n");
                break;

                case 4:
                    printf("%s", "\n");
                    printf("%s", "Closing Program...");
                    printf("%s", "\n");
                break;

                default:
                    printf("\n%s", "Segmentation fault\n");
                break;
            }
        }
    }

private:
    void Game()
    {
        srand(time(0));

        AI_score = 0;
        Player_score = 0;

        AI_card = rand() % ((Min + Max) + Min) % cards.size();
        if (AI_card == 0 || AI_card == 12)
        {
            AI_card = rand() % ((Min + Max) + Min) % cards.size();
        }
        AI_score += AI_card;

        printf("%s%d\n", "New card = ", AI_card);
        printf("%s%d\n\n", "AI score = ", AI_score);

        Player_card = rand() % ((Min + Max) + Min) % cards.size();
        if (Player_card == 0 || Player_card == 12)
        {
            Player_card = rand() % ((Min + Max) + Min) % cards.size();
        }
        Player_score += Player_card;

        printf("%s%d\n", "New card = ", Player_card);
        printf("%s%d\n\n", "Player score = ", Player_score);

        if (AI_card == 0 || Player_card == 0)
        {
            AI_card = 1;
            Player_card = 1;
        }

        while (Player_score < 21 || AI_score < 21)
        {
            printf("%s", "Would you like to draw another card? ( Y / N ): ");
            std::getline(std::cin >> std::ws, c);
            printf("%s", "\n");

            if (c == "N" || c == "n")
            {
                for (int i = 0; i <= 1; i++)
                {
                    AI_card = rand() % ((Min + Max) + Min) % cards.size();
                    if (AI_card == 0 || AI_card == 12)
                    {
                        AI_card = rand() % ((Min + Max) + Min) % cards.size();
                    }
                    AI_score += AI_card;

                    goto test;
                }
            }

            AI_card = rand() % ((Min + Max) + Min) % cards.size();
            if (AI_card == 0 || AI_card == 12)
            {
                AI_card = rand() % ((Min + Max) + Min) % cards.size();
            }
            AI_score += AI_card;

            Player_card = rand() % ((Min + Max) + Min) % cards.size();
            if (Player_card == 0 || Player_card == 12)
            {
                Player_card = rand() % ((Min + Max) + Min) % cards.size();
            }
            Player_score += Player_card;

            printf("%s%d\n", "New card = ", Player_card);
            printf("%s%d\n\n", "Player score = ", Player_score);

            printf("%s%d\n", "New card = ", AI_card);
            printf("%s%d\n", "AI score = ", AI_score);

            test:
            printf("%s", "\n");

            if (AI_score > 21)
            {
                Player_win = true;
                break;
            }
            else if (Player_score > 21)
            {
                AI_win = true;
                break;
            }
            else if (Player_score > 21 && AI_score > 21)
            {
                if (Player_score == AI_score)
                {
                    Draw = true;
                    break;
                }
            }
            //else if ()
        }

        if (AI_win)
        {
            printf("%s", "AI wins!!!\n");
        }
        if (Player_win)
        {
            printf("%s", "Player wins!!!\n");
        }
        if (Draw)
        {
            printf("%s", "It's a draw!!!\n");
        }
    }

    void Rules()
    {
        printf("%s", "-------------------- BLACKJACK RULES --------------------\n\n");
        printf("%s", "The deck is unlimited in size.\n");
        printf("%s", "There are no jokers.\n");
        printf("%s", "The Jack, Queen and King all count as 10.\n");
        printf("%s", "The the Ace can count as a 1 or 11.\n");
        printf("%s", "All cards in the deck have an equal probability of being drawn.\n");
        printf("%s", "Cards are not removed from the deck as they are drawn.\n");
        printf("%s", "cards = [11, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10]\n");
        printf("%s", "The computer is the dealer.\n\n");
    }

    void Test()
    {
        for (int i = 0; i < cards.size(); i++)
        {
            int Max = 11;
            int Min = 1;
            int assa;

            assa = rand() % ((Min + Max) + Min) % cards.size();
            if (assa == 0 || assa == 12)
            {
                assa = rand() % ((Min + Max) + Min) % cards.size();
            }
            printf("%s%d%s", "Card rand = ", assa, "\n");
        }
    }
};

int main(int argc, char **argv[])
{
    bj b;
    b.Init();

    return 0;
}
