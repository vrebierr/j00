#include <iostream>
#include <string>
#include <locale>

int main (int ac, char **av)
{
    using namespace std;

    if (ac < 2)
        cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
    else
    {
        for (int y = 1; av[y]; y++)
        {
            string tmp(av[y]);
            for (string::size_type i = 0; tmp[i]; i++)
                cout << (char)toupper(tmp[i]);
        }
        cout << endl;
    }

    return (0);
}
