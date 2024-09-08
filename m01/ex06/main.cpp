#include "Harl.hpp"

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        std::cerr << "Usage: ./harlFilter [DEBUG/INFO/WARNING/ERROR]" << std::endl;
        return 1;
    }
    std::string level = argv[1];
    Harl harl;
    harl.filter(level);

    return 0;
}