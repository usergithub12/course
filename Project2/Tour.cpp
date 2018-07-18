#include "Tour.h"



Tour::Tour()
{
}

ostream &operator << (ostream&os, Tour p)
{

	os << "ʳ������ ����: " << p.GetStars() << endl;
	os << "ʳ������ �������: " << p.amountofTourists << endl;
    os << "���� ������� ����" << p.dstart << "/" << p.mstart << "/" << p.ystart << endl;
	os << "���� ���� ����: " << p.dend << "/" << p.mend<< "/" << p.yend << endl;
	os << "��� ������: " << p.typeRoom << endl;
	os << "��� ����������: " << p.typetransport << endl;

	return os;
}





void Tour::SetInfo()
{
	cout << "\t\t���� ������ " << endl;
	Hotel::SetInfo();
	price += Hotel::GetPrice();
	
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
	price += t->GetPrice();
		t->SaveToFile();
	
		break;
	case 2:
		t = new Avtobus;
		typetransport = "�������";
		t->SetInfo();
		price += t->GetPrice();
		t->SaveToFile();
	
		break;
	case 3:
		t = new Train;
		typetransport = "����";
		t->SetInfo();
		price += t->GetPrice();
		t->SaveToFile();
		break;
	default:
		break;
	}
	cout << "ֳ��: " << price << endl;
	system("pause");
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
	    cout<<"ֳ��: " <<  price << endl;
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
//
//int Tour::GetPrice()
//{
//	return price;
//}

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
