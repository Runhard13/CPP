#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
public:
	Zombie(const std::string& Name, const std::string& Type);
	Zombie();
	void	announce() const;
	~Zombie();

private:
	std::string	_name;
	std::string	_type;
};

#endif
