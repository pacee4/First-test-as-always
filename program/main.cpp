#include <iostream>
#include <ctime>
#include <cstdlib>

class Characteristics
{
public:
    int power;
    int nightvision;
    int specialability;
};

class DiceRoll {
public:
    int result;

    DiceRoll() {
        result = 0;
    }

    void roll() {
        srand(time(0));
        result = rand() % 6 + 1;
        // 1 2 3 4 5 6
    }

    int displayResult() {
        switch (result) {
        case 1:
            std::cout << "Один" << std::endl;
            break;
        case 2:
            std::cout << "Два" << std::endl;
            break;
        case 3:
            std::cout << "Три" << std::endl;
            break;
        case 4:
            std::cout << "Четыре" << std::endl;
            break;
        case 5:
            std::cout << "Пять" << std::endl;
            break;
        case 6:
            std::cout << "Шесть" << std::endl;
            break;
        default:
            std::cout << "Invalid result" << std::endl;
        }
        return result;
    }
};

int main() {
    setlocale(LC_ALL, "ru");
    DiceRoll res;
    int result = res.displayResult(); // 1 2 3 4 5 6 
    Characteristics playerStats;
    playerStats.power = result;
    playerStats.nightvision = result;
    playerStats.specialability = result;

    Characteristics playerStats2;
    playerStats2.power = result;
    playerStats2.nightvision = result;
    playerStats2.specialability = result;

    Characteristics playerStats3;
    playerStats3.power = result;
    playerStats3.nightvision = result;
    playerStats3.specialability = result;

    DiceRoll dice;
    dice.roll();
    dice.displayResult();

    return 0;
}