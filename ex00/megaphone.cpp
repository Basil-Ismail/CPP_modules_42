#include <iostream>
#include <string>

int	main(int ac, char **av)
{
	std::string str;
	
        if(ac != 1){
		for (int i = 1; i < ac; i++){
			str = av[i];
			for (int j = 0 ; av[i][j]; j++)
				str[j] = toupper(str[j]);
			std::cout << str;
		}
        } else
        	std::cout << "* LOUD AND UBEARBLE FEEDBACK NOISE * ";
        std::cout<<"\n";
}
