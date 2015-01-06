#include "Contact.class.hpp"

Contact::Contact() {

}

Contact::~Contact() {

}

void            Contact::add() {
    std::string input;

    std::cout << "First name:" << std::endl;
    input = getInput();
    this->setFirstName(input);
    std::cout << "Last name:" << std::endl;
    input = getInput();
    this->setLastName(input);
    std::cout << "Nickname:" << std::endl;
    input = getInput();
    this->setNickname(input);
    std::cout << "Login:" << std::endl;
    input = getInput();
    this->setLogin(input);
    std::cout << "Postal Address:" << std::endl;
    input = getInput();
    this->setPostalAddress(input);
    std::cout << "Address:" << std::endl;
    input = getInput();
    this->setAddress(input);
    std::cout << "Phone Number:" << std::endl;
    input = getInput();
    this->setPhoneNumber(input);
    std::cout << "Birthday Date:" << std::endl;
    input = getInput();
    this->setBirthdayDate(input);
    std::cout << "Favorite Meal:" << std::endl;
    input = getInput();
    this->setFavoriteMeal(input);
    std::cout << "Underwear Color:" << std::endl;
    input = getInput();
    this->setUnderwearColor(input);
    std::cout << "Darkest Secret:" << std::endl;
    input = getInput();
    this->setDarkestSecret(input);
    std::cout << "Contact added !" << std::endl;
}

std::string    Contact::resize(std::string s) {
    if (s.length() > 10)
    {
        s[9] = '.';
        s.resize(10);
    }
    while (s.length() < 10)
    {
        s.append(1u, ' ');
    }
    return s;
}

void    Contact::index(int i) {
    std::cout << i << "        ";
    std::cout << "|" << this->resize(this->getFirstName());
    std::cout << "|" << this->resize(this->getLastName());
    std::cout << "|" << this->resize(this->getNickname()) << std::endl;
}

void    Contact::print() const {
    std::cout << "First name: " << this->getFirstName() << std::endl;
    std::cout << "Last name: " << this->getLastName() << std::endl;
    std::cout << "Nickname: " << this->getNickname() << std::endl;
    std::cout << "Login: " << this->getLogin() << std::endl;
    std::cout << "Postal Address: " << this->getPostalAddress() << std::endl;
    std::cout << "Address: " << this->getAddress() << std::endl;
    std::cout << "Phone Number: " << this->getPhoneNumber() << std::endl;
    std::cout << "Birthday Date: " << this->getBirthdayDate() << std::endl;
    std::cout << "Favorite Meal: " << this->getFavoriteMeal() << std::endl;
    std::cout << "Underwear Color: " << this->getUnderwearColor() << std::endl;
    std::cout << "Darkest Secret: " << this->getDarkestSecret() << std::endl;
}

std::string  Contact::getFirstName() const {
    return this->first_name;
}

void    Contact::setFirstName(std::string first_name) {
    this->first_name = first_name;
    return;
}

std::string  Contact::getLastName() const {
    return this->last_name;
}

void    Contact::setLastName(std::string last_name) {
    this->last_name = last_name;
    return;
}

std::string  Contact::getNickname() const {
    return this->nickname;
}

void    Contact::setNickname(std::string nickname) {
    this->nickname = nickname;
    return;
}

std::string  Contact::getLogin() const {
    return this->login;
}

void    Contact::setLogin(std::string login) {
    this->login = login;
    return;
}

std::string  Contact::getPostalAddress() const {
    return this->postal_address;
}

void    Contact::setPostalAddress(std::string postal_address) {
    this->postal_address = postal_address;
    return;
}

std::string  Contact::getAddress() const {
    return this->address;
}

void    Contact::setAddress(std::string address) {
    this->address = address;
    return;
}

std::string  Contact::getPhoneNumber() const {
    return this->phone_number;
}

void    Contact::setPhoneNumber(std::string phone_number) {
    this->phone_number = phone_number;
    return;
}

std::string  Contact::getBirthdayDate() const {
    return this->birthday_date;
}

void    Contact::setBirthdayDate(std::string birthday_date) {
    this->birthday_date = birthday_date;
    return;
}

std::string  Contact::getFavoriteMeal() const {
    return this->favorite_meal;
}

void    Contact::setFavoriteMeal(std::string favorite_meal) {
    this->favorite_meal = favorite_meal;
    return;
}

std::string  Contact::getUnderwearColor() const {
    return this->underwear_color;
}

void    Contact::setUnderwearColor(std::string underwear_color) {
    this->underwear_color = underwear_color;
    return;
}

std::string  Contact::getDarkestSecret() const {
    return this->darkest_secret;
}

void    Contact::setDarkestSecret(std::string darkest_secret) {
    this->darkest_secret = darkest_secret;
    return;
}
