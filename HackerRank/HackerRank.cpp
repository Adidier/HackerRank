/*
Arrays: Left Rotation
https://www.hackerrank.com/challenges/ctci-array-left-rotation/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=arrays
*/

#include <iostream>
#include <vector>
#include <fstream>
#include <iostream>
#include <string>
#include <iostream>     // std::cout
#include <algorithm>    // std::unique, std::distance
#include <vector>       // std::vector


using namespace std;

vector<string> split_string(string);

// Complete the rotLeft function below.
vector<int> rotLeft(vector<int> a, int d) {
    vector<int> result (a.size());
    
    int rotate = a.size() - (d % a.size());
    for (int i = 0; i < a.size(); ++i)
    {
        result[(rotate + i) % a.size()] = a[i];
    }
    
    return result;
}

int main()
{
    vector<int> a = { 1,2,3,4,5,6 };
    int d = 3;

    vector<int> result = rotLeft(a, d);

    for (int i = 0; i < result.size(); i++) {
        std::cout << result[i];
        if (i != result.size() - 1) {
            std::cout << " ";
        }
    }

    std::cout << "\n";
    return 0;
}
