#include "drz.h"

#include <iostream>
#include <string>
#include <string_view>

int main(int argc, char* argv[])
{
    for (int i = 1; i < argc; ++i)
    {
        std::string_view arg(argv[i]);
        if (arg.substr(0, 9) == "--random=")
        {
            size_t pos = arg.rfind('=');
            if (pos != std::string_view::npos && pos + 1 < arg.length())
            {
                int setDigit = std::stoi(std::string(arg.substr(pos + 1)));
                if (!(setDigit >= 1 && setDigit <= 10))
                {
                    std::cout << "Error...";
                    return -1;
                }
                std::cout << setDigit << std::endl;
                return 0;
            }
        }
    }

    launchGame();
    return 0;
}