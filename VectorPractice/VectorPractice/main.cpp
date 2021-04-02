#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	vector <string> familyMember;
	familyMember.push_back("Natalia");
	familyMember.push_back("Mike");
	familyMember.push_back("Cici");
	familyMember.push_back("Emily");
	familyMember.push_back("Roger");
	familyMember.insert(familyMember.begin() + 2,"John Baugh");
	familyMember.pop_back();
	for (string name : familyMember)
	{
		cout << name << endl;
	}
	return 0;
}
