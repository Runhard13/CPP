#ifndef CPP_ITER_HPP
#define CPP_ITER_HPP

template<typename T>
void iter (T *array, int length, void (*f)(const T& funcArg))
{
	int i = 0;

	while (i < length)
	{
		f(array[i]);
		i++;
	}
}
#endif //CPP_ITER_HPP
