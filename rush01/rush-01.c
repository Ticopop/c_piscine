#include<unistd.h>
char check_arg(int argc, char **argv);

int	main(int argc, char **argv)
{
	if (!check_arg(argc, argv))
		return ;

}

char *tabla(char i, char j)
{
    if (i == 4 && j == 1)
        return ("1234")
    else if (i == 3 && j == 1)
        return ("213413242314");
    else if (i == 3 && j == 2)
        return ("124313422341");
    else if (i == 2 && j == 1)
        return ("31243214");
    else if (i == 2 && j == 2)
        return ("214331423241341214232413");
    else if (i == 2 && j == 3)
        return ("342114322431");
    else if (i == 1 && j == 2)
        return ("41234213");
    else if (i == 1 && j == 3)
        return ("431241324231");
    else if (i == 1 && j == 4)
        return ("4321")
}

