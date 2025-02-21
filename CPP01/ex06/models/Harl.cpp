#include <Harl.class.hpp>

void Harl::debug()
{
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "RTFM!!!" << std::endl;
}
void Harl::info()
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "This is so Informative <3" << std::endl;
}
void Harl::warning()
{
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "Get the F out of here!!! " << std::endl;
}
void Harl::error()
{
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now!!" << std::endl;
}

void Harl::complain(std::string mode)
{
    void (Harl::* array[])() = { &Harl::error, &Harl::warning, &Harl::info, &Harl::debug };
    std::string modes[4] = { "ERROR", "WARNING", "INFO", "DEBUG" };
    size_t i = 0;

    for (i = 0; i < 4; i++) {
        if (mode == modes[i]) {
            break;
        }
    }
    switch (i) {
    case 3:
        (this->*array[3])();
        std::cout << std::endl;
        // fall through
    case 2:
        (this->*array[2])();
        std::cout << std::endl;
        // fall through
    case 1:
        (this->*array[1])();
        std::cout << std::endl;
        // fall through
    case 0:
        (this->*array[0])();
        std::cout << std::endl;
        break;
    default:
        std::cerr << "[ Probably complaining about insignificant problems ]" << std::endl;
        break;
    }
}