#pragma once
//
// Created by Alexander.
//
#include <iostream>
#include <sstream>
#include <string>
#include <random>

#include <stdlib.h>

#ifndef MAIN_FUNC_CASION_H
#define MAIN_FUNC_CASION_H


class main_func_casion {
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

    void check_game(int* money , int amount, int rn_num1, int rn_num2, int rn_num3)
    {
        if (rn_num1 == 7 && rn_num2 == 7 && rn_num3 == 7)
        {
            std::cout << "*******ÂÛ ÂÛÉÃÐÀËÈ ÃËÀÂÍÛÉ ÏÐÈÇ****" << std::endl;
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
                std::cout << "*********ÂÛ ÂÛÉÃÐÀËÈ 200***********" << std::endl;
                std::cout << "***********************************" << std::endl;
                std::cout << std::endl;
                *money += 200;
                games_win += 1;
            }
            else if (amount > 1000) 
            {
                std::cout << "*********ÂÛ ÂÛÉÃÐÀËÈ 2000***********" << std::endl;
                std::cout << "***********************************" << std::endl;
                std::cout << std::endl;
                *money += 2000;
                games_win += 1;
            }
            else if (amount > 10'000)
            {
                std::cout << "*********ÂÛ ÂÛÉÃÐÀËÈ 20000***********" << std::endl;
                std::cout << "***********************************" << std::endl;
                std::cout << std::endl;
                *money += 20000;
                games_win += 1;
            }
            else if (amount > 100'000)
            {
                std::cout << "*********ÂÛ ÂÛÉÃÐÀËÈ 200000***********" << std::endl;
                std::cout << "***********************************" << std::endl;
                std::cout << std::endl;
                *money += 200000;
                games_win += 1;
            }
            else if (amount > 1'000'000)
            {
                std::cout << "*********ÂÛ ÂÛÉÃÐÀËÈ 2.000.000***********" << std::endl;
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
                std::cout << "*********ÂÛ ÂÛÉÃÐÀËÈ 150***********" << std::endl;
                std::cout << "***********************************" << std::endl;
                std::cout << std::endl;
                *money += 150;
                games_win += 1;
            }
            else if (amount > 1000)
            {
                std::cout << "*********ÂÛ ÂÛÉÃÐÀËÈ 1500***********" << std::endl;
                std::cout << "***********************************" << std::endl;
                std::cout << std::endl;
                *money += 1500;
                games_win += 1;
            }
            else if (amount > 10'000)
            {
                std::cout << "*********ÂÛ ÂÛÉÃÐÀËÈ 15000***********" << std::endl;
                std::cout << "***********************************" << std::endl;
                std::cout << std::endl;
                *money += 15000;
                games_win += 1;
            }
            else if (amount > 100'000)
            {
                std::cout << "*********ÂÛ ÂÛÉÃÐÀËÈ 150000***********" << std::endl;
                std::cout << "***********************************" << std::endl;
                std::cout << std::endl;
                *money += 150000;
                games_win += 1;
            }
            else if (amount > 1'000'000)
            {
                std::cout << "*********ÂÛ ÂÛÉÃÐÀËÈ 1.500.000***********" << std::endl;
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
                std::cout << "*********ÂÛ ÂÛÉÃÐÀËÈ 500***********" << std::endl;
                std::cout << "***********************************" << std::endl;
                std::cout << std::endl;
                *money += 500;
                games_win += 1;
            }
            else if (amount > 1000)
            {
                std::cout << "*********ÂÛ ÂÛÉÃÐÀËÈ 5000***********" << std::endl;
                std::cout << "***********************************" << std::endl;
                std::cout << std::endl;
                *money += 5000;
                games_win += 1;
            }
            else if (amount > 10'000)
            {
                std::cout << "*********ÂÛ ÂÛÉÃÐÀËÈ 50000***********" << std::endl;
                std::cout << "***********************************" << std::endl;
                std::cout << std::endl;
                *money += 50000;
                games_win += 1;
            }
            else if (amount > 100'000)
            {
                std::cout << "*********ÂÛ ÂÛÉÃÐÀËÈ 500000***********" << std::endl;
                std::cout << "***********************************" << std::endl;
                std::cout << std::endl;
                *money += 500000;
                games_win += 1;
            }
            else if (amount > 1'000'000)
            {
                std::cout << "*********ÂÛ ÂÛÉÃÐÀËÈ 5.000.000***********" << std::endl;
                std::cout << "***********************************" << std::endl;
                std::cout << std::endl;
                *money += 5'000'000;
                games_win += 1;
            }
        }
        else if (rn_num1 == 7)
        {
            std::cout << "*********ÂÛ ÂÛÉÃÐÀËÈ 100***********" << std::endl;
            std::cout << "***********************************" << std::endl;
            std::cout << std::endl;
            *money += 100;
            games_win += 1;
        }
        /* 111, 222, 333, 444, 555, 666 */
        else if (rn_num1 == rn_num2 && rn_num2 == rn_num3 && rn_num1 != 0 && rn_num1 != 7) {
            std::cout << "*********ÂÛ ÂÛÉÃÐÀËÈ 50************" << std::endl;
            *money += 50;
            games_win += 1;
        }
        /* End 111, 222, 333, 444, 555, 666 */
        else if (rn_num1 == 1 && rn_num2 == 3 && rn_num3 == 5)
        {
            std::cout << "*********ÂÛ ÂÛÉÃÐÀËÈ 30************" << std::endl;
            std::cout << "***********************************" << std::endl;
            std::cout << std::endl;
            *money += 30;
            games_win += 1;
        }
        else if (rn_num1 == 2 && rn_num2 == 4 && rn_num3 == 6)
        {
            std::cout << "*********ÂÛ ÂÛÉÃÐÀËÈ 30************" << std::endl;
            std::cout << "***********************************" << std::endl;
            std::cout << std::endl;
            *money += 30;
            games_win += 1;
        }
        else
        {
            std::cout << "*********ÂÛ ÏÐÎÈÃÐÀËÈ**************" << std::endl;
            std::cout << "***********************************" << std::endl;
            std::cout << std::endl;
            games_lost += 1;
        }
    }

public:
    void start_game()
    {
        std::cout << "___________ÄÎÁÐÎ ÏÎÆÀËÎÂÀÒÜ Â ÊÀÇÈÍÎ___________" << std::endl;
        std::cout << "***********************************************" << std::endl;
        std::cout << "***********Äëÿ ïîìîùè íàïèøè help**************" << std::endl;
        std::cout << "***********************************************" << std::endl;
    }

    void help()
    {
        std::cout << "********ÊÎÌÀÍÄÛ ÄËß ÈÃÐÛ***********************" << std::endl;
        std::cout << "* start (âàøà ñòàâêà) - ÷òîáû çàïóñòèòü êàçèíî*" << std::endl;
        std::cout << "* add (ñêîëüêî íóæíî) - âçÿòü â êðåäèò*********" << std::endl;
        std::cout << "* back (ñêîëüêî âåðíóòü äåíåã) - ïîêðûòèå äîëãà" << std::endl;
        std::cout << "* info - ïðîñìîòð âàøåãî ïðîôèëÿ***************" << std::endl;
        std::cout << "* exit - äëÿ âûõîäà****************************" << std::endl;
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
                    std::cout << "ïåðåâûøåí ìàêñèìàëüíûé áàëàíñ!" << std::endl;
                    return;
                }
                else
                {
                    if (amount >= 1'000'000 && *money < 500'000)
                    {
                        std::cout << "ìû ïîêà íå ìîæåì âàì âûäàòü áîëüøå 999,999!";
                        std::cout << std::endl;
                        std::cout << "âàø áàíê" << std::endl;
                        return;
                    } 
                    else if (amount >= 100'000 && *money < 10'000)
                    {
                        std::cout << "ìû ïîêà íå ìîæåì âàì âûäàòü áîëüøå 99,999!";
                        std::cout << std::endl;
                        std::cout << "âàø áàíê" << std::endl;
                        return;
                    }
                    else if (amount >= 10'000 && *money < 3000)
                    {
                        std::cout << "ìû ïîêà íå ìîæåì âàì âûäàòü áîëüøå 9,999!";
                        std::cout << std::endl;
                        std::cout << "âàø áàíê" << std::endl;
                        return;
                    }
                    else if (amount >= 1'000 && *money < 500)
                    {
                        std::cout << "ìû ïîêà íå ìîæåì âàì âûäàòü áîëüøå 999!";
                        std::cout << std::endl;
                        std::cout << "âàø áàíê" << std::endl;
                        return;
                    }
                    else
                    {
                        *money += amount;
                        credit += amount;
                        std::cout << "âàì íà÷èñëåíî: " << amount << std::endl;
                        std::cout << "ñåé÷àñ âû äîëæíû áàíêó: " << credit << std::endl;
                    }
                }
            }
            else
                std::cout << "âû íå ìîæåòå äîáàâèòü ñóììó ìåíüøå 0!" << std::endl;
        }
        else
            std::cout << "ïîñëå add äîëæíû áûòü ÷èñëà!" << std::endl;
        
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
                            std::cout << "âû óñïåøíî âåðíóëè óêàçàííóþ ñóììó áàíêó: " << amount << std::endl;
                        } 
                        else
                        {
                            std::cout << "âû íå äîëæíû òàêóþ ñóììó!" << std::endl;
                            return;
                        }
                    }
                    else
                    {
                        std::cout << "ó âàñ íåäîñòàòî÷íî ñðåäñòâ!" << std::endl;
                        return;
                    }
                }
                else
                {
                    std::cout << "âû íå äîëæíû áàíêó äåíåã!" << std::endl;
                }
            }
        }
    }

    void profile(int* money)
    {
        std::cout << "**********ÂÀØ ÏÐÎÔÈËÜ**************" << std::endl;
        std::cout << "* âàøè äåíüãè: " << (*money) << " ***" << std::endl;
        std::cout << "* èãð ñûãðàíî: " << games_played << " *****" << std::endl;
        std::cout << "* èãð âûéãðàíî: " << games_win << " ****" << std::endl;
        std::cout << "* èãð ïðîèãðàíî: " << games_lost << " ***" << std::endl;
        std::cout << "* äîëæíû áàíêó: " << credit << " ****" << std::endl;
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
            std::cout << "ïîñëå start äîëæíà áûòü ñòàâêà" << std::endl;
            return;
        }

        if (*money < 0)
        {
            std::cout << "íåäîñòàòî÷íî ñðåäñòâ!" << std::endl;
            *money += amount;
            return;
        }
        else if (amount == 0)
        {
            std::cout << "âû íå ìîæåòå ïîñòàâèòü 0!" << std::endl;
            return;
        }
        else if (games_played % 3 == 0)
        {
            std::cout << "åñëè â ñêîðåì âðåìåíè âû íå ïîêðîåòå êðåäèò, íàì ïðèäåòñÿ ñíÿòü êàêóþ-òî ñóììó!";
            std::cout << std::endl;
            std::cout << "âàø áàíê!" << std::endl;
        }
        else if (games_played % 7 == 0 && credit > 0 && *money >= 100)
        {
            std::cout << "ñ âàñ ñíÿëè íåáîëüøóþ ñóììó îò äîëãà!" << std::endl;
            
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
        std::cout << "ÃËÀÂÍÛÉ ÏÐÈÇ - " << main_prize << std::endl;
        std::cout << "ÂÀØÀ ÑÒÀÂÊÀ - " << amount << std::endl;
        std::cout << std::endl;
        std::cout << "************ÊÀÇÈÍÎ 777*************" << std::endl;
        std::cout << "************ÂÀØÈ ×ÈÑËÀ*************" << std::endl;
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



#endif //MAIN_FUNC_CASION_H
