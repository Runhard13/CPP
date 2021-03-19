#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
public:
	Zombie(std::string Name, std::string Type);
	void	announce() const;
	~Zombie();

private:
	std::string	_name;
	std::string	_type;
};

#endif
