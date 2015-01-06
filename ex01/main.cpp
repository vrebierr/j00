#include "Contact.class.hpp"
#include <cstdlib>

std::string      getInput(void) {
    std::string input;

    if (!std::getline(std::cin, input))
    {
        std::cout << "Exiting program." << std::endl;
		std::exit(0);
    }
    return input;
}

int              getValidIndex(int length) {
    std::string     input;

    std::cout << "Select a index:" << std::endl;
    input = getInput();
    if (input.length() > 1 || input[0] < 48 || input[0] >= 48 + length)
    {
        std::cout << "Wrong index. Please try again." << std::endl;
        input = getValidIndex(length) + 48;
    }
    return input[0] - 48;
}

int              main () {
    std::string     input;
    Contact         contactList[8];
    int             numContacts = 0;
    int             validIndex;

    while (42)
    {
        std::cout << "Available commands: ADD | SEARCH | EXIT" << std::endl;
        input = getInput();
        if (input.compare("ADD") == 0)
        {
            if (numContacts >= 8)
                std::cout << "Contact list full !" << std::endl;
            else
            {
                contactList[numContacts].add();
                numContacts++;
            }
        }
        else if (input.compare("SEARCH") == 0 && numContacts)
        {
            for (int i = 0; i < numContacts; i++)
                contactList[i].index(i);
            validIndex = getValidIndex(numContacts);
            contactList[validIndex].print();
        }
        else if (input.compare("EXIT") == 0)
            return 0;
    }
}
