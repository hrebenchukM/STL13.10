#include <iostream>
#include <string>
#include <map>
using namespace std;

// для сокращения записи вводим обозначение:
typedef map<int, string> MyMap;
typedef MyMap::iterator Iter;

void main()
{
	// начальная инициализация map
	MyMap m;
	// использование value_type для формирования пары "ключ - значение"
	m.insert(MyMap::value_type(1, "Ivanov"));
	// можно непосредственно использовать тип pair
	m.insert(pair<int, string>(2, "Petrov"));
	// использование функции make_pair
	m.insert(make_pair(3, "Sidorov"));

	for (Iter it = m.begin(); it != m.end(); it++)
	{
		// использование свойств итератора:
		// first для обращения к ключу,
		// second для обращения к значению
		cout << it->first << " " << it->second << endl;
	}
}





void main()
{
	// начальная инициализация map
	MyMap m;
	// использование value_type для формирования пары "ключ - значение"
	m.insert(MyMap::value_type(3, "Ivanov"));
	// можно непосредственно использовать тип pair
	m.insert(pair<int, string>(2, "Petrov"));
	// использование функции make_pair
	// при вставке в map дублирующие значения ключа игнорируются 
	m.insert(make_pair(3, "Sidorov"));

	for (Iter it = m.begin(); it != m.end(); it++)
	{
		//использование свойств итератора:
		//first для обращения к ключу,
		//second для обращение к значению
		cout << it->first << " " << it->second << endl;
	}
}




void main()
{
	// начальная инициализация map
	MyMap m;
	// использование value_type для формирования пары "ключ - значение"
	m.insert(MyMap::value_type(3, "Ivanov"));
	// можно непосредственно использовать тип pair
	m.insert(pair<int, string>(2, "Petrov"));
	// использование функции make_pair
	// при вставке в multimap дублирующие значения ключа не игнорируются 
	m.insert(make_pair(3, "Sidorov"));

	for (Iter it = m.begin(); it != m.end(); it++)
	{
		// использование свойств итератора:
		// first для обращения к ключу,
		// second для обращения к значению
		cout << it->first << " " << it->second << endl;
	}
}


void main()
{
	// начальная инициализация map
	MyMap m;
	// использование value_type для формирования пары "ключ - значение"
	// в карте хранится список городов и их начальных букв
	m.insert(MyMap::value_type('L', "London"));
	m.insert(MyMap::value_type('P', "Paris"));
	m.insert(MyMap::value_type('M', "Madrid"));
	m.insert(MyMap::value_type('M', "Moscow"));
	m.insert(MyMap::value_type('M', "Milan"));

	// вывод содержимого контейнера
	for (Iter it = m.begin(); it != m.end(); it++)
		cout << it->first << " " << it->second << endl;

	// подсчет количества элементов с заданным значением ключа
	cout << endl << "There are " << m.count('M') << " cities starting on M" << endl;

	// получение диапазона элементов с заданным значением ключа
	pair<Iter, Iter> p = m.equal_range('M');
	cout << endl << "Cities starting on M: " << endl;
	for (Iter it = p.first; it != p.second; it++)
		cout << it->second << " ";
	cout << endl << endl;

	// поиск элемента по значению ключа
	Iter res = m.find('P');
	if (res != m.end())
		cout << "The first city starting on P is: " << res->second << endl;
	else
		cout << "City starting on P is not found" << endl;
}


void main()
{
	// карта в качестве ключей использует названия нот, а в качестве значений - их частоты
	map<string, int> Tones;
	Tones["Do"] = 523;
	Tones["Re"] = 587;
	Tones["Mi"] = 659;
	Tones["Fa"] = 698;
	Tones["Sol"] = 783;
	Tones["La"] = 879;
	Tones["Si"] = 987;
	map<string, int>::iterator it;
	for (it = Tones.begin(); it != Tones.end(); it++)
	{
		cout << (*it).first << " " << (*it).second << endl;
	}
	cout << Tones["Si#"] << endl; // ошибки не возникает - выводится значение по умолчанию
}




void main()
{
	map <string, string> m;
	// Заполнение карты названиями городов и достопримечательностями
	m.insert(make_pair("Leningrad", "Winter Palace"));
	m.insert(make_pair("London", "Big Ben"));
	m.insert(make_pair("Paris", "Louvre"));

	map <string, string>::iterator it;
	cout << "Initial State: " << endl;
	for (it = m.begin(); it != m.end(); it++)
		cout << it->first << " " << it->second << endl;

	// Ленинград переименовали
	// непосредсвенно ключ заменить нельзя:
	// m.begin()->first = "St. Petersburg"; 
	// ошибка присвоения значения операнду типа const string
	// Для изменения надо удалить, а потом добавить: 
	m.erase("Leningrad");
	m.insert(make_pair("St. Petersburg", "Winter Palace"));
	cout << endl << "After change key: " << endl;
	for (it = m.begin(); it != m.end(); it++)
		cout << it->first << " " << it->second << endl;
}
