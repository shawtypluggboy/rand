#include <iostream>
#include <random>
#include <chrono>

int main (){
	using clk=std::chrono::system_clock;
	std::minstd_rand rnd{
		unsigned(clk::now().time_since_epoch().count())
	};
	std::uniform_int_distribution<> d{10,30};
	for(unsigned i=0;
			i<10;++i)
		std::cout<<
		d(rnd) <<' ';
	return 0;
}
