#include <iostream>
#include <string>
using namespace std;

class siswa;
class orang;
{
private:
	string nama;


public:
	void setNama(string pNama);
	friend class siswa;

};

class siswa
{
private:
	int id;
public:
	void setid(int pId);
	void displayA11(orang& a);

};

void siswa::displayA11(orang& a)
{
	cout << id << endl
		<< a.nama;
}



