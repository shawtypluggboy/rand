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
	unsigned stone_count=d(rnd);

	while(stone_count>0){
		std::cout<<"Количество камней :"<<stone_count<<std::endl;
		int user_turn = read_int("Сколько камней берем(1-3)? : \n");
		if (user_turn<4 && user_turn>0){
			stone_count=stone_count-user_turn;
		}
		else {
			std::cout<<"Введите корректное число от 1 до 3 :"<<stone_count<<std::endl;
		}
	}

		std::cout<<d(rnd) <<' ';

	return 0;
}
