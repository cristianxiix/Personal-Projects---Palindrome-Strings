#include <iostream>
#include <string>

void palindrome(std::string x);

int main()
{
    palindrome("aPa");
}
void palindrome(std::string x)
{
    int i = 0;
    int j = x.length() - 1;

    while (i < x.length() / 2 && j >= 0)
    {
        if (x[i] >= 'A' && x[i] <= 'Z')
        {

            x[i] += 32;
            //std::cout << "x[i] is now : " << x[i] << std::endl;
        }
        else if (x[j] >= 'A' && x[j] <= 'Z')
        {

            x[j] += 32;
           //std::cout << "x[j] is now : " << x[j] << std::endl;
        }
        else if (x[i] == x[j])
        {
            i++;
            j--;
            continue;
        }
        else
        {
            std::cout << "The given string is NOT a palindrome!";
            return;
        }
    }

    std::cout << "The given string is a palindrome!";


}