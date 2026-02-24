#ifndef WRONGWrongANIMAL_HPP
# define WRONGWrongANIMAL_HPP

# include <string>
#include <iostream>

class WrongAnimal
{
  protected:
	std::string _type;

  public:
	WrongAnimal();
	WrongAnimal(std::string type);
	WrongAnimal(const WrongAnimal &other);
	WrongAnimal &operator=(const WrongAnimal &other);
	virtual ~WrongAnimal();

	const std::string &getType() const;
	virtual void makeSound() const;
};

#endif