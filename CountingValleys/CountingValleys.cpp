#include <iostream>
#include <string>


int countingValleys(int n, std::string s)
{
    int valleys = 0, height = 0;

    for (auto c : s)
    {
        if (c == 'U')
            ++height;
        else//D
        {
            if (height == 0)
                ++valleys;
            --height;
        }
    }
    return valleys;
}

int main()
{
    std::string path = "UDDDUDUU";
    std::cout << countingValleys(path.size(), path) << std::endl;
}


