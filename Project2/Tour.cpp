#include "Tour.h"



Tour::Tour()
{
}

ostream &operator << (ostream&os, Tour p)
{

	os << "ʳ������ ����: " << p.amountOfstars << endl;
	os << "ʳ������ �������: " << p.amountofTourists << endl;
//	os << "���� ������� ����" << p.dstart << p << endl;
	//os << "���� ���� ����: " << p.end << endl;
	os << "��� ������: " << p.typeRoom << endl;
	os << "��� ����������: " << p.typetransport << endl;
	
	return os;
}





void Tour::SetInfo()
{
	cout << "\t\t���� ������ " << endl;
	Hotel::SetInfo();
	cout << "\t\t������ ��������� " << endl;
	int choice = 0;
	cout << "1 - ���" << endl;
	cout << "2 - �������" << endl;
	cout << "3 - ����" << endl;
	cin >> choice;

	switch (choice)
	{
	case 1:
		t = new Avia;
		typetransport = "���";
		t->SetInfo();
		t->SaveToFile();
	
		break;
	case 2:
		t = new Avtobus;
		typetransport = "�������";
		t->SetInfo();
		t->SaveToFile();
	
		break;
	case 3:
		t = new Train;
		typetransport = "����";
		t->SetInfo();
		t->SaveToFile();
		break;
	default:
		break;
	}
	system("cls");
	Country::InitCountry();
	Country::InitKurort();
	

}

void Tour::ShowInfo()
{
	if (amountOfstars != 0)
	{
		Hotel::ShowInfo();
		t->ShowInfo();
		Country::ShowInfo();
		cout << "���������: " << typetransport << endl;
	}
}

void Tour::SaveToFile()
{
	ofstream out("tour.txt",ios_base::app);

	Hotel::SaveToFile();
	out << typetransport << ':';
	out << _nameofCountry << ':';
	out<< _kurort << ':';
	out.close();

}

void Tour::ReadFromFile()
{
	ifstream in("tour.txt");
	
	    getline(in, typeRoom, ':');
		in >> amountOfstars;
		getline(in, typetransport, ':');
		getline(in, _nameofCountry, ':');
		
		getline(in, _kurort, ':');
		


	in.close();
	

}

void Tour::HotTour()
{
	system("cls");
	ifstream in("ht.txt");

	string _buf;
	
	int x=50; int y=0;
	int x1 = 105;
	int y1 = 0;
	
	for (int i = 0; i < 150; i++)
	{
		SetColor(4);
		getline(in, _buf);
	
		if (i%5==0) { SetColor(4); }
		else {
			SetColor(7);
		}

		if (i < 50)
		{
			cout<< _buf << endl;

		}
		if (i>49 && i<100)
		{
			SetPos(x, y);
			cout << _buf << endl;
			y += 1;
		}
		if (i>99&& i<150)
		{
			SetPos(x1, y1);
			cout  << _buf << endl;
			y1 += 1;
		}
		

	}
	in.close();
	

}

Tour::~Tour()
{


}
