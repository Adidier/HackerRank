#include <iostream>
#include <string>

using namespace std;

string removeSpaces(string& s)
{
    auto found = s.begin();
    while (found != s.end())
    {
       found = s.find(" ");
       if (found != s.end())
       s.erase(found)
    }
}

// Complete the encryption function below.
string encryption(string s)
{
    float raiz = sqrt(s.length());
    unsigned int row = floor(raiz);
    unsigned int column = ceil(raiz);
    
}

int main()
{
    
    string result = encryption("have a nice day");
    std::cout << result << "\n";

    return 0;
}
