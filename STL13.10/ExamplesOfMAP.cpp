#include <iostream>
#include <string>
#include <map>
using namespace std;

// ��� ���������� ������ ������ �����������:
typedef map<int, string> MyMap;
typedef MyMap::iterator Iter;

void main()
{
	// ��������� ������������� map
	MyMap m;
	// ������������� value_type ��� ������������ ���� "���� - ��������"
	m.insert(MyMap::value_type(1, "Ivanov"));
	// ����� ��������������� ������������ ��� pair
	m.insert(pair<int, string>(2, "Petrov"));
	// ������������� ������� make_pair
	m.insert(make_pair(3, "Sidorov"));

	for (Iter it = m.begin(); it != m.end(); it++)
	{
		// ������������� ������� ���������:
		// first ��� ��������� � �����,
		// second ��� ��������� � ��������
		cout << it->first << " " << it->second << endl;
	}
}





void main()
{
	// ��������� ������������� map
	MyMap m;
	// ������������� value_type ��� ������������ ���� "���� - ��������"
	m.insert(MyMap::value_type(3, "Ivanov"));
	// ����� ��������������� ������������ ��� pair
	m.insert(pair<int, string>(2, "Petrov"));
	// ������������� ������� make_pair
	// ��� ������� � map ����������� �������� ����� ������������ 
	m.insert(make_pair(3, "Sidorov"));

	for (Iter it = m.begin(); it != m.end(); it++)
	{
		//������������� ������� ���������:
		//first ��� ��������� � �����,
		//second ��� ��������� � ��������
		cout << it->first << " " << it->second << endl;
	}
}




void main()
{
	// ��������� ������������� map
	MyMap m;
	// ������������� value_type ��� ������������ ���� "���� - ��������"
	m.insert(MyMap::value_type(3, "Ivanov"));
	// ����� ��������������� ������������ ��� pair
	m.insert(pair<int, string>(2, "Petrov"));
	// ������������� ������� make_pair
	// ��� ������� � multimap ����������� �������� ����� �� ������������ 
	m.insert(make_pair(3, "Sidorov"));

	for (Iter it = m.begin(); it != m.end(); it++)
	{
		// ������������� ������� ���������:
		// first ��� ��������� � �����,
		// second ��� ��������� � ��������
		cout << it->first << " " << it->second << endl;
	}
}


void main()
{
	// ��������� ������������� map
	MyMap m;
	// ������������� value_type ��� ������������ ���� "���� - ��������"
	// � ����� �������� ������ ������� � �� ��������� ����
	m.insert(MyMap::value_type('L', "London"));
	m.insert(MyMap::value_type('P', "Paris"));
	m.insert(MyMap::value_type('M', "Madrid"));
	m.insert(MyMap::value_type('M', "Moscow"));
	m.insert(MyMap::value_type('M', "Milan"));

	// ����� ����������� ����������
	for (Iter it = m.begin(); it != m.end(); it++)
		cout << it->first << " " << it->second << endl;

	// ������� ���������� ��������� � �������� ��������� �����
	cout << endl << "There are " << m.count('M') << " cities starting on M" << endl;

	// ��������� ��������� ��������� � �������� ��������� �����
	pair<Iter, Iter> p = m.equal_range('M');
	cout << endl << "Cities starting on M: " << endl;
	for (Iter it = p.first; it != p.second; it++)
		cout << it->second << " ";
	cout << endl << endl;

	// ����� �������� �� �������� �����
	Iter res = m.find('P');
	if (res != m.end())
		cout << "The first city starting on P is: " << res->second << endl;
	else
		cout << "City starting on P is not found" << endl;
}


void main()
{
	// ����� � �������� ������ ���������� �������� ���, � � �������� �������� - �� �������
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
	cout << Tones["Si#"] << endl; // ������ �� ��������� - ��������� �������� �� ���������
}




void main()
{
	map <string, string> m;
	// ���������� ����� ���������� ������� � �����������������������
	m.insert(make_pair("Leningrad", "Winter Palace"));
	m.insert(make_pair("London", "Big Ben"));
	m.insert(make_pair("Paris", "Louvre"));

	map <string, string>::iterator it;
	cout << "Initial State: " << endl;
	for (it = m.begin(); it != m.end(); it++)
		cout << it->first << " " << it->second << endl;

	// ��������� �������������
	// �������������� ���� �������� ������:
	// m.begin()->first = "St. Petersburg"; 
	// ������ ���������� �������� �������� ���� const string
	// ��� ��������� ���� �������, � ����� ��������: 
	m.erase("Leningrad");
	m.insert(make_pair("St. Petersburg", "Winter Palace"));
	cout << endl << "After change key: " << endl;
	for (it = m.begin(); it != m.end(); it++)
		cout << it->first << " " << it->second << endl;
}
