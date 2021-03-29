#include <iostream>

struct Data
{
	std::string s1;
	int n;
	std::string s2;
};

int	*serialize()
{

	std::string		s1;
	std::string		s2;
	int				n;
	std::string		str = "0123456789abcdefghijklmopqrstuvxyzABCDEFGHIJKLMOPQRSTUVXYZ";

	n = rand();
	for ( int i = 0 ; i < 8 ; i++ )
	{
		s1 += str[rand() % 58];
		s2 += str[rand() % 58];
	}
	std::cout << sizeof(s1) << std::endl;
	std::cout << sizeof(s2)<< std::endl;
	std::cout << sizeof(n)<< std::endl;
	Data *data = new Data;

	data->s1 = s1;
	data->n = n;
	data->s2 = s2;

	std::cout << "_________________Before serialization_________________" << std::endl;
	std::cout << "s1 = " << data->s1 << std::endl;
	std::cout << "n = " << data->n << std::endl;
	std::cout << "s2 = " << data->s2 << std::endl;

	return (reinterpret_cast <int *> (data));
}

Data	*deserialize(int *ptr)
{
	return (reinterpret_cast <Data *> (ptr));
}


int	main()
{
	int	*ptr;
	Data	*data;

	srand(time(0));
	ptr = serialize();
	data = deserialize(ptr);

	std::cout << "_________________After deserialization_________________" << std::endl;
	std::cout << "s1 = " << data->s1 << std::endl;
	std::cout << "n = " << data->n << std::endl;
	std::cout << "s2 = " << data->s2 << std::endl;

	delete data;
	return (0);
}