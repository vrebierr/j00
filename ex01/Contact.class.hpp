#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H
# include <iostream>
# include <string>

std::string             getInput(void);

class Contact {
    public:
        Contact();
        ~Contact();

        std::string     getFirstName(void) const;
        void            setFirstName(std::string first_name);
        std::string     getLastName(void) const;
        void            setLastName(std::string last_name);
        std::string     getNickname(void) const;
        void            setNickname(std::string nickname);
        std::string     getLogin(void) const;
        void            setLogin(std::string login);
        std::string     getPostalAddress(void) const;
        void            setPostalAddress(std::string postal_address);
        std::string     getAddress(void) const;
        void            setAddress(std::string address);
        std::string     getPhoneNumber(void) const;
        void            setPhoneNumber(std::string phone_number);
        std::string     getBirthdayDate(void) const;
        void            setBirthdayDate(std::string birthday_date);
        std::string     getFavoriteMeal(void) const;
        void            setFavoriteMeal(std::string favorite_meal);
        std::string     getUnderwearColor(void) const;
        void            setUnderwearColor(std::string underwear_color);
        std::string     getDarkestSecret(void) const;
        void            setDarkestSecret(std::string darkest_secret);
        void            index(int i);
        void            print(void) const;
        void            add(void);

    private:
        std::string     first_name;
        std::string     last_name;
        std::string     nickname;
        std::string     login;
        std::string     postal_address;
        std::string     address;
        std::string     phone_number;
        std::string     birthday_date;
        std::string     favorite_meal;
        std::string     underwear_color;
        std::string     darkest_secret;
        std::string     resize(std::string s);
};

#endif
