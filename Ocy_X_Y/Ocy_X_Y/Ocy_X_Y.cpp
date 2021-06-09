#include <iostream>

int main()
{
	using namespace std;
	setlocale(LC_ALL, "ru");

	cout << "\t^ y\t \n\t|\t \n   II\t|    I \n\t|\t \n\t|\t \n--------|--------> x \n\t|\t \n   III\t|   IV \n\t|\t \n\t|\t \n\n"
		<< "Введите числа (x, y):" << endl;

	int x, y;

	up:
	cin >> x >> y;
	cout << endl;
	//cout << x + y;
	// Добавить надо полоски от точки

	if ((x != 0) & (y != 0))
	{
		if ((x > 0) & (y > 0))
		{
			cout << "(I) Четверть" << endl;
			cout << "\t^ y\t \n\t|\t \n   \t(" << y << ")-----*\n\t|\t| \n\t|\t| \n--------|----(" << x << ")----> x \n\t|\t \n   \t|    \n\t|\t \n\t|\t \n\n";
		}
		else if ((x < 0) & (y < 0))
		{
			cout << "(III) Четверть" << endl;
			cout << "\t^ y\t \n\t|\t \n   \t|\n\t|\t \n\t|\t \n--(" << x << ")--|--------> x \n\t|\t \n   III\t|    \n\t(" << y << ")\t \n\t|\t \n\n";
		}
		else if ((x > 0) & (y < 0))
		{
			cout << "(IV) Четверть" << endl;
			cout << "\t^ y\t \n\t|\t \n   \t|      \n\t|\t \n\t|\t \n--------|----(" << x << ")----> x \n\t|\t \n   \t(" << y << ")  IV\n\t|\t \n\t|\t \n\n";
		}
		else if ((x < 0) & (y > 0))
		{
			cout << "(II) Четверть" << endl;
			cout << "\t^ y\t \n\t|\t   \n   II\t(" << y << ")      \n\t|\t \n\t|\t \n----(" << x << ")----|--------> x \n\t|\t \n   \t|    \n\t|\t \n\t|\t \n\n";
		}
		else
		{
			cout << "ERROR !" << endl;
		}
	}
	else {
		cout << "ERROR !\nDEBUG: Без нулей" << endl;
	}

	goto up;

	return 0;
}


//#include <iostream>
//
//int main()
//{
//	using namespace std;
//	setlocale(LC_ALL, "ru");
//
//	cout << "\t^ y\t \n\t|\t \n   II\t|    I \n\t|\t \n\t|\t \n--------|--------> x \n\t|\t \n   III\t|   IV \n\t|\t \n\t|\t \n\n" 
//		<< "Введите числа (x, y):" << endl;
//
//	int x, y;
//
//	cin >> x >> y;
//	//cout << x + y;
//	// Добавить надо полоски от точки
//
//	if ((x != 0) & (y != 0))
//	{
//		if ((x > 0) & (y > 0))
//		{
//			cout << "(I) Четверть" << endl;
//		}
//		else if ((x < 0) & (y < 0))
//		{
//			cout << "(III) Четверть" << endl;
//		}
//		else if ((x > 0) & (y < 0))
//		{
//			cout << "(IV) Четверть" << endl;
//		}
//		else if ((x < 0) & (y > 0))
//		{
//			cout << "(II) Четверть" << endl;
//		}
//		else
//		{
//			cout << "ERROR !" << endl;
//		}
//	}
//	else {
//		cout << "Ноль 0" << endl;
//	}
//
//
//	return 0;
//}