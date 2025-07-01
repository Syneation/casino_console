#pragma once
//
// Created by Alexander.
//
#include <iostream>
#include <sstream>
#include <string>
#include <random>

#include <stdlib.h>

class main_func_casino {
private:
    int games_played = 0;
    int games_win = 0;
    int games_lost = 0;
    int main_prize = 1000;
    int credit = 0;

    void ran_numbers(int* rn_num1, int* rn_num2, int* rn_num3)
    {
        std::random_device rnd_dvc;
        std::mt19937 gen(rnd_dvc());
        std::uniform_int_distribution<> dist(0, 7);

        *rn_num1 = dist(gen);
        *rn_num2 = dist(gen);
        *rn_num3 = dist(gen);

    }

    void check_game(int* money, int amount, int rn_num1, int rn_num2, int rn_num3)
    {
        if (rn_num1 == 7 && rn_num2 == 7 && rn_num3 == 7)
        {
            std::cout << "*******YOU WON THE MAIN PRIZE******" << std::endl;
            std::cout << "***********************************" << std::endl;
            std::cout << std::endl;
            *money += main_prize;
            games_win += 1;
            main_prize = 0;
        }
        else if (rn_num1 == 7 && rn_num3 == 7 && rn_num2 == 0)
        {
            if (amount > 100)
            {
                std::cout << "*************YOU WON 200***********" << std::endl;
                std::cout << "***********************************" << std::endl;
                std::cout << std::endl;
                *money += 200;
                games_win += 1;
            }
            else if (amount > 1000)
            {
                std::cout << "************YOU WON 2000***********" << std::endl;
                std::cout << "***********************************" << std::endl;
                std::cout << std::endl;
                *money += 2000;
                games_win += 1;
            }
            else if (amount > 10'000)
            {
                std::cout << "***********YOU WON 20000***********" << std::endl;
                std::cout << "***********************************" << std::endl;
                std::cout << std::endl;
                *money += 20000;
                games_win += 1;
            }
            else if (amount > 100'000)
            {
                std::cout << "**********YOU WON 200000***********" << std::endl;
                std::cout << "***********************************" << std::endl;
                std::cout << std::endl;
                *money += 200000;
                games_win += 1;
            }
            else if (amount > 1'000'000)
            {
                std::cout << "*******YOU WON 2,000,000***********" << std::endl;
                std::cout << "***********************************" << std::endl;
                std::cout << std::endl;
                *money += 2'000'000;
                games_win += 1;
            }
        }
        else if (rn_num1 == 7 && rn_num3 == 7)
        {
            if (amount > 100)
            {
                std::cout << "*************YOU WON 150***********" << std::endl;
                std::cout << "***********************************" << std::endl;
                std::cout << std::endl;
                *money += 150;
                games_win += 1;
            }
            else if (amount > 1000)
            {
                std::cout << "************YOU WON 1500***********" << std::endl;
                std::cout << "***********************************" << std::endl;
                std::cout << std::endl;
                *money += 1500;
                games_win += 1;
            }
            else if (amount > 10'000)
            {
                std::cout << "**********YOU WON 15000***********" << std::endl;
                std::cout << "***********************************" << std::endl;
                std::cout << std::endl;
                *money += 15000;
                games_win += 1;
            }
            else if (amount > 100'000)
            {
                std::cout << "**********YOU WON 150000***********" << std::endl;
                std::cout << "***********************************" << std::endl;
                std::cout << std::endl;
                *money += 150000;
                games_win += 1;
            }
            else if (amount > 1'000'000)
            {
                std::cout << "*******YOU WON 1,500,000***********" << std::endl;
                std::cout << "***********************************" << std::endl;
                std::cout << std::endl;
                *money += 1'500'000;
                games_win += 1;
            }
        }
        else if (rn_num1 == 7 && rn_num2 == 7)
        {
            if (amount > 100)
            {
                std::cout << "*************YOU WON 500***********" << std::endl;
                std::cout << "***********************************" << std::endl;
                std::cout << std::endl;
                *money += 500;
                games_win += 1;
            }
            else if (amount > 1000)
            {
                std::cout << "************YOU WON 5000***********" << std::endl;
                std::cout << "***********************************" << std::endl;
                std::cout << std::endl;
                *money += 5000;
                games_win += 1;
            }
            else if (amount > 10'000)
            {
                std::cout << "***********YOU WON 50000***********" << std::endl;
                std::cout << "***********************************" << std::endl;
                std::cout << std::endl;
                *money += 50000;
                games_win += 1;
            }
            else if (amount > 100'000)
            {
                std::cout << "**********YOU WON 500000***********" << std::endl;
                std::cout << "***********************************" << std::endl;
                std::cout << std::endl;
                *money += 500000;
                games_win += 1;
            }
            else if (amount > 1'000'000)
            {
                std::cout << "*******YOU WON 5,000,000***********" << std::endl;
                std::cout << "***********************************" << std::endl;
                std::cout << std::endl;
                *money += 5'000'000;
                games_win += 1;
            }
        }
        else if (rn_num1 == 7)
        {
            std::cout << "*************YOU WON 100***********" << std::endl;
            std::cout << "***********************************" << std::endl;
            std::cout << std::endl;
            *money += 100;
            games_win += 1;
        }
        /* 111, 222, 333, 444, 555, 666 */
        else if (rn_num1 == rn_num2 && rn_num2 == rn_num3 && rn_num1 != 0 && rn_num1 != 7) {
            std::cout << "*************YOU WON 50************" << std::endl;
            *money += 50;
            games_win += 1;
        }
        /* End 111, 222, 333, 444, 555, 666 */
        else if (rn_num1 == 1 && rn_num2 == 3 && rn_num3 == 5)
        {
            std::cout << "*************YOU WON 30************" << std::endl;
            std::cout << "***********************************" << std::endl;
            std::cout << std::endl;
            *money += 30;
            games_win += 1;
        }
        else if (rn_num1 == 2 && rn_num2 == 4 && rn_num3 == 6)
        {
            std::cout << "*************YOU WON 30************" << std::endl;
            std::cout << "***********************************" << std::endl;
            std::cout << std::endl;
            *money += 30;
            games_win += 1;
        }
        else
        {
            std::cout << "*************YOU LOST**************" << std::endl;
            std::cout << "***********************************" << std::endl;
            std::cout << std::endl;
            games_lost += 1;
        }
    }

public:
    void start_game()
    {
        std::cout << "___________WELCOME TO THE CASINO___________" << std::endl;
        std::cout << "***********************************************" << std::endl;
        std::cout << "***********For help type help**************" << std::endl;
        std::cout << "***********************************************" << std::endl;
    }

    void help()
    {
        std::cout << "********GAME COMMANDS***********************" << std::endl;
        std::cout << "* start (your bet) - to start the casino*" << std::endl;
        std::cout << "* add (amount needed) - take a loan*********" << std::endl;
        std::cout << "* back (amount to return) - pay the debt" << std::endl;
        std::cout << "* info - view your profile***************" << std::endl;
        std::cout << "* exit - to exit****************************" << std::endl;
        std::cout << "***********************************************" << std::endl;
    }

    void addMoney(std::string user_input, int* money)
    {
        std::string amount_str = user_input.substr(4);
        std::istringstream iss(amount_str);
        int amount = 0;

        if (iss >> amount)
        {
            if (amount > 0)
            {
                if (*money > INT_MAX - amount)
                {
                    std::cout << "maximum balance exceeded!" << std::endl;
                    return;
                }
                else
                {
                    if (amount >= 1'000'000 && *money < 500'000)
                    {
                        std::cout << "we can't give you more than 999,999 yet!";
                        std::cout << std::endl;
                        std::cout << "your bank" << std::endl;
                        return;
                    }
                    else if (amount >= 100'000 && *money < 10'000)
                    {
                        std::cout << "we can't give you more than 99,999 yet!";
                        std::cout << std::endl;
                        std::cout << "your bank" << std::endl;
                        return;
                    }
                    else if (amount >= 10'000 && *money < 3000)
                    {
                        std::cout << "we can't give you more than 9,999 yet!";
                        std::cout << std::endl;
                        std::cout << "your bank" << std::endl;
                        return;
                    }
                    else if (amount >= 1'000 && *money < 500)
                    {
                        std::cout << "we can't give you more than 999 yet!";
                        std::cout << std::endl;
                        std::cout << "your bank" << std::endl;
                        return;
                    }
                    else
                    {
                        *money += amount;
                        credit += amount;
                        std::cout << "credited: " << amount << std::endl;
                        std::cout << "now you owe the bank: " << credit << std::endl;
                    }
                }
            }
            else
                std::cout << "you can't add an amount less than 0!" << std::endl;
        }
        else
            std::cout << "after add there should be numbers!" << std::endl;

    }

    void backMoney(std::string user_input, int* money)
    {
        std::string amount_str = user_input.substr(5);
        std::istringstream iss(amount_str);
        int amount = 0;

        if (iss >> amount)
        {
            if (amount > 0)
            {
                if (credit > 0)
                {
                    if (amount <= *money)
                    {
                        if (amount <= credit)
                        {
                            *money -= amount;
                            credit -= amount;
                            std::cout << "you successfully returned the specified amount to the bank: " << amount << std::endl;
                        }
                        else
                        {
                            std::cout << "you don't owe that much!" << std::endl;
                            return;
                        }
                    }
                    else
                    {
                        std::cout << "you don't have enough funds!" << std::endl;
                        return;
                    }
                }
                else
                {
                    std::cout << "you don't owe the bank any money!" << std::endl;
                }
            }
        }
    }

    void profile(int* money)
    {
        std::cout << "**********YOUR PROFILE**************" << std::endl;
        std::cout << "* your money: " << (*money) << " ***" << std::endl;
        std::cout << "* games played: " << games_played << " *****" << std::endl;
        std::cout << "* games won: " << games_win << " ****" << std::endl;
        std::cout << "* games lost: " << games_lost << " ***" << std::endl;
        std::cout << "* owe to bank: " << credit << " ****" << std::endl;
        std::cout << "***********************************" << std::endl;
    }

    void game_start(std::string user_input, int* money)
    {
        std::string amount_str = user_input.substr(6);
        std::istringstream iss(amount_str);
        int amount = 0;

        if (iss >> amount)
        {
            if (amount > 0)
            {
                *money -= amount;
            }
        }
        else
        {
            std::cout << "after start there should be a bet" << std::endl;
            return;
        }

        if (*money < 0)
        {
            std::cout << "not enough funds!" << std::endl;
            *money += amount;
            return;
        }
        else if (amount == 0)
        {
            std::cout << "you can't bet 0!" << std::endl;
            return;
        }
        else if (games_played % 3 == 0)
        {
            std::cout << "if you don't pay off the loan soon, we'll have to deduct some amount!";
            std::cout << std::endl;
            std::cout << "your bank!" << std::endl;
        }
        else if (games_played % 7 == 0 && credit > 0 && *money >= 100)
        {
            std::cout << "a small amount was deducted from your debt!" << std::endl;

            int tmp = (credit / 2) - *money;
            if (tmp != 0)
            {
                *money -= tmp;
            }
            else
            {
                tmp = *money - 100;
                if (tmp != 0)
                {
                    *money -= tmp;
                }
            }
        }

        int rn_num1, rn_num2, rn_num3;

        games_played += 1;
        main_prize += amount;

        ran_numbers(&rn_num1, &rn_num2, &rn_num3);
        std::cout << std::endl;
        std::cout << "MAIN PRIZE - " << main_prize << std::endl;
        std::cout << "YOUR BET - " << amount << std::endl;
        std::cout << std::endl;
        std::cout << "************CASINO 777*************" << std::endl;
        std::cout << "**********YOUR NUMBERS*************" << std::endl;
        std::cout << "*********** " << rn_num1 << " * " << rn_num2 << " * " << rn_num3 << " *************" << std::endl;
        std::cout << "***********************************" << std::endl;
        check_game(money, amount, rn_num1, rn_num2, rn_num3);

    }

    void checkUserInput(std::string user_input, int* money)
    {
        if (user_input == "help")
            help();

        else if (user_input.find("add ") == 0)
            addMoney(user_input, money);

        else if (user_input.find("back ") == 0)
            backMoney(user_input, money);

        else if (user_input == "info")
            profile(money);

        else if (user_input.find("start ") == 0)
            game_start(user_input, money);
    }
};

