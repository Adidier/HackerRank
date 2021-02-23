#include <iostream>
#include <string>

using namespace std;


std::string removeSpaces(std::string& s)
{
    std::size_t found = s.find(" ");;
    while (found != std::string::npos)
    {
        found = s.find(" ");
        if (found != std::string::npos)
            s.erase(s.begin() + found);
    }

    return s;
}

std::string getSubstringAtIndex(const int& i, const std::string& s)
{
    return (i < s.size()) ? s.substr(i, 1) : std::string("");
}

// Complete the encryption function below.
std::string encryption(std::string s)
{
    s = removeSpaces(s);
    float raiz = sqrt(s.length());
    unsigned int columns = ceil(raiz);
    unsigned int rows = floor(raiz) + (unsigned int)(((s.length() % columns) > 0) ? 1 : 0);

    std::string result;
    for (int i = 0; i < columns; ++i)
    {
        for (int j = 0; j < rows; ++j)
        {
            result.append(getSubstringAtIndex(j * columns + i, s));
        }
        result.append(" ");
    }

    return result;
}

int main()
{
    
    string result = encryption("have a nice day");
    std::cout << result << "\n";

    return 0;
}
