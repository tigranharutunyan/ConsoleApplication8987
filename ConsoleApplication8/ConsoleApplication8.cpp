// ConsoleApplication8.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
struct Student {
		string Name;		
			int Informatika;
			int Matanliz;
			int Havanakanutyun;		
	}; 
double Raiting(Student student)
	{
		double Migin = (student.Informatika + student.Matanliz + student.Havanakanutyun) / 3;
		return Migin;
	}
          
int main()
{
	
	Student student[3];
	
	
		    
	//cout << "Nermuceq usanoxneri qanakay"; cin >> Count;
	for (int i = 0; i < 3; i++)
	{
		cout << "Nermuceq anunty usanoxi "; cin >> student->Name;
		cout << "Nermuceq  informatikai Gnahatakay"; cin >> student->Informatika;
		cout << "Nermuceq Matanalizi gnahataky "; cin >> student->Matanliz;
		cout << "Nermuceq Havanakanutyun gnahatakay"; cin >> student->Havanakanutyun;
		
		
	}

		


}