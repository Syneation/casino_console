#include <iostream>

#include "main_func_casino.h"

int main()
{
    setlocale(LC_ALL, "ru");
    main_func_casino MFC;

    int money = 100;

    std::string user_input;
    bool isRun = true;

    MFC.start_game();

    while (isRun)
    {
        std::cout << "Your money: " << money;
        std::cout << ">";
        std::getline(std::cin, user_input);

        if (user_input == "exit")
            isRun = false;
        else
            MFC.checkUserInput(user_input, &money);
    }

    return 0;
}

