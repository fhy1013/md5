#include "md5.h"
#include <iostream>

int main(){
	std::string s = "123";
	std::string md5 = getMD5(s);
	std::cout<<"\"123\" : "<<md5<<std::endl;
	std::cout<<"\"\": "<< getMD5("")<<std::endl;
	std::cout<<"\"0\": "<< getMD5("0")<<std::endl;
	std::cout<<"\"1\": "<< getMD5("1")<<std::endl;

	return 0;
}
