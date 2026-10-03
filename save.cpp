#include <fstream>
void save(int score)
{
    std::ofstream file_out("log.txt");
    if (!file_out.is_open())
    {
        return;
    }
    file_out << score;
}
