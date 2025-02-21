#include <Harl.class.hpp>

void Harl::debug()
{
    std::cout << "RTFM!!!" << std::endl;
}
void Harl::info()
{
    std::cout << "This is so Informative <3" << std::endl;
}
void Harl::warning()
{
    std::cout << "Get the F out of here!!! " << std::endl;
}
void Harl::error()
{
    std::cout << "This is unacceptable! I want to speak to the manager now!!" << std::endl;
}

void Harl::complain(std::string mode)
{
    void (Harl::* array[])() = { &Harl::error, &Harl::warning, &Harl::info, &Harl::debug };
    std::string modes[4] = { "error", "warning", "info", "debug" };
    for (size_t i = 0; i < 4; i++) {
        if (mode == modes[i]) {
            (this->*array[i])();
            return;
        }
    }
    std::cerr << "No valid mode " << std::endl;
}