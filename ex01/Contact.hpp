#include <string>
#include <iostream>

class Contact {
	public:
		Contact();
		Contact(const std::string& firstName,
				const std::string& lastName,
				const std::string& nickname,
				const std::string& phoneNumber,
				const std::string& darkestSecret);
		~Contact();
		void setFirstName(std::string& firstName);
		void setLastName(std::string& lastName);
		void setNickname(std::string& nickname);
		void setPhoneNumber(std::string& phoneNumber);
		void setDarkestSecret(std::string& darkestSecret);
		std::string getFirstName();
		std::string getLastName();
		std::string getNickname();
		std::string getPhoneNumber();
		std::string getDarkestSecret();
		bool _isInitialized;

	private:
		std::string _firstName;
		std::string _lastName;
		std::string _nickname;
		std::string _phoneNumber;
		std::string _darkestSecret;
};
