#include"student.h"
#include"tools.h"

int main()
{
	if(!init())
		return 0;
	for(;;)
	{
		switch(main_menu())
		{
			case 1:student_menu();break;
			case 2:teacher_menu();break;
			case 3:master_menu(); break;
			case 0:break;
		}
		break;
	}
	exit();
	return 0;
}
