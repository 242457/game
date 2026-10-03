#include <fstream>
#include <string>
std::string load()
{
    std::ifstream file_in("log.txt");
    std::string line;
    if (!file_in.is_open())
    {
        return "10";
    }
    std::getline(file_in, line);
    return line;
}
