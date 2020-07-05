#pragma once
#include <vector>
#include <string>



struct Data
{
	int day;
	int month;
	int year;
    static Data ParseData(std::string Data);
    static std::string ToString(Data Date);
};

struct Contact
{
	std::string FIO;
	std::string number;
	Data burthday;
	Contact();
	Contact(std::string FIO, std::string number, Data burthday);
    std::string ToString();
	
};

class Contacts
{
private:
	std::vector <Contact>* MyContacts;
	std::vector <int>* MyElectContactsIndex; //äëÿ ýêîíîìèè ïàìÿòè
public:
	Contacts();
	Contacts(const Contacts& copy);
	void AddContact(Contact& NewContact);
	Contact& SearchByFIO(std::string FIO);
	Contact& SearchByNumber(std::string number);
	std::vector<Contact>& Search(char Symbol);
	int GetNumberContacts();
	void AddElect(std::string FIO);
	void RemoveFromElect(std::string FIO);
	std::vector <Contact>& ShowElect();
	void RemoveContact(std::string number);
	void ReadFile(std::string path);
	void RecordFile(std::string path);
	
};