/*
Riddler
Pawelski
4/4/2022
Please follow the instructions on the activity sheet!
*/

#include <iostream>
#include <string>

int main()
{
    std::string answer;
    std::cout << "Can you answer all the riddles?\n";
    std::cout << "All answers will be lowercase!\n\n";
    std::cout << "What has to be broken before your can use it? >> ";
    getline(std::cin, answer);
    if (answer == "an egg")
    {
        std::cout << "Correct!\n\n";
        std::cout << "What goes up, but never comes down? >> ";
        getline(std::cin, answer);
        if (answer == "your age")
        {
            std::cout << "Correct!\n\n";
            std::cout << "What gets wet while drying? >> ";
            getline(std::cin, answer);
            if (answer == "a towel")
            {
                std::cout << "Correct!\n";
                std::cout << "You answered all my riddles!\n";
            }
            else
            {
                std::cout << "Wrong!\n";
            }
        }
        else
        {
            std::cout << "Wrong!\n";
        }
    }
    else
    {
        std::cout << "Wrong!\n";
    }
    return 0;
}
