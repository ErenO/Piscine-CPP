/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdek <eozdek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 10:32:46 by eozdek            #+#    #+#             */
/*   Updated: 2017/10/03 21:18:54 by eozdek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

class PhoneBook {
public:

    PhoneBook( void );
    ~PhoneBook( void );

    void printall();
    void info();

    std::string getNickName();
    std::string getFirstName();
    std::string getLastName();

private:
    std::string _name;
    std::string _first_name;
    std::string _last_name;
    std::string _nickname;
    std::string _login;
    std::string _postal_address;
    std::string _email_address;
    std::string _phone_number;
    std::string _birthday_date;
    std::string _favorite_meal;
    std::string _underwear_color;
    std::string _darkest_secret;
};

#endif
