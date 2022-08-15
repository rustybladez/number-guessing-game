#include <iostream>
#include <time.h>
#include <cstdlib>

int main()
{
    srand(time(0));
    int answer;
    answer = (rand() % 50) + 1;
    int guess = 0, guesses = 0;
    std::cout << "***NUMBER GUESSING GAME***\n\nGues a number between 1 and 50\n\n";
    
    char play = 'Y';
    char mode;
    
    std::cout << "Which Mode do you want to play the game in?\n\n'E' for Easy(Infinite chances)\n'M' for Medium(5 Chances)\n'H' for Hard(3 Chances)\nMode: ";
    std::cin >> mode;
    
    if (mode == 'E' || mode == 'e')
    {
        do {
            std::cout << "Guess the Number: ";
            std::cin >> guess;
            
            if (guess == answer) {
                std::cout << "CORRECT!!! You Win!\n";
                guesses++;
                std::cout << "Guesses: " << guesses << std::endl;
            }
            else if (guess > answer) {
                std::cout << "Too High!!! Try Again!\n";
                guesses++;
            }
            else {
                std::cout << "Too Low!!! Try Again!\n";
                guesses++;
            }
        } while (answer != guess);
    }
    else if (mode == 'M' || mode == 'm')
    {
        do {
            std::cout << "Guess the Number: ";
            std::cin >> guess;
            
            if (guess == answer) {
                std::cout << "CORRECT!!! You Win!\n";
                guesses++;
                std::cout << "Guesses: " << guesses << std::endl;
                break;
            }
            else if (guess > answer) {
                std::cout << "Too High!!! Try Again!\n";
                guesses++;
            }
            else {
                std::cout << "Too Low!!! Try Again!\n";
                guesses++;
            }
            if (guesses == 5 && answer != guess)
                std::cout << "You Lost! Better Luck Next Time!" << std::endl;
        } while (guesses < 5);
    }
    else if (mode == 'H' || mode == 'h')
    {
        do {
            std::cout << "Guess the Number: ";
            std::cin >> guess;
            
            if (guess == answer) {
                std::cout << "CORRECT!!! You Win!\n";
                guesses++;
                std::cout << "Guesses: " << guesses << std::endl;
                break;
            }
            else if (guess > answer) {
                std::cout << "Too High!!! Try Again!\n";
                guesses++;
            }
            else {
                std::cout << "Too Low!!! Try Again!\n";
                guesses++;
            }
            if (guesses == 3 && answer != guess)
                std::cout << "You Lost! Better Luck Next Time!\nCorrect Answer: " << answer << std::endl;
        } while (guesses < 3);
    }

    return 0;
}
