#include <iostream>
#include <random>
#include <chrono>
#include <sstream>


int read_int(
		const char*question)
{
int result;
std::string inp;
re:std::cout<<question;
std::getline(std::cin, inp);
{
std::stringstream
inps{inp};
inps>>result;
if (inps.fail()){
	std::cout<<"Некорректный ввод!"<<std::endl;
	goto re;
}
}
return result;
}



int main (){
	using clk=std::chrono::system_clock;
	std::minstd_rand rnd{
		unsigned(clk::now().time_since_epoch().count())
	};
	std::uniform_int_distribution<> d{10,30};
	unsigned stone_cout=d(rnd);
	int user_turn =
			read_int("Сколько камней"
					"Берем (1-3)? ");
	for(unsigned i=0;
			i<10;++i)
		std::cout<<
		d(rnd) <<' ';

/*
	int i;
	std::string inp;
	reee:std::getline(std::cin ,inp);
	std::stringstream inps{inp};
	inps >>i;

	if(inps.fail()){
		std::cout<<"Aaa! \n";
		goto reee;
	}

	*/
	return 0;
}
