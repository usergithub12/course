#include "Tour.h"



Tour::Tour()
{
}

ostream &operator << (ostream&os, Tour p)
{
	//os << "Кількість зірок: " << p.amountOfstars << endl;
	//os << "Кількість туристів: " << p.amountofTourists << endl;
 //   os << "Дата початку туру" << p.dstart << "/" << p.mstart << "/" << p.ystart << endl;
	//os << "Дата кінця туру: " << p.dend << "/" << p.mend<< "/" << p.yend << endl;
	//os << "Тип кімнати: " << p.typeRoom << endl;
	//os << "Тип транспорту: " << p.typetransport << endl;
	p.ShowInfo();
	return os;
}




void Tour::SetInfo()
{
	cout << "\t\tВибір готелю " << endl;
	Hotel::SetInfo();
	price += Hotel::GetPrice();
	
	cout << "\t\tОберіть транспорт " << endl;
	int choice = 0;
	cout << "1 - Авіа" << endl;
	cout << "2 - Автобус" << endl;
	cout << "3 - Поїзд" << endl;
	while (true)
	{

		cin >> choice;

		switch (choice)
		{
		case 1:
			t = new Avia;
			typetransport = "Авіа";
			t->SetInfo();
			price += t->GetPrice();
			break;
		case 2:
			t = new Avtobus;
			typetransport = "Автобус";
			t->SetInfo();
			price += t->GetPrice();
			break;
		case 3:
			t = new Train;
			typetransport = "Поїзд";
			t->SetInfo();
			price += t->GetPrice();
			break;
		default:
			cout << "Виберіть 1-3." << endl;
			break;
		}
		if (choice <= 3) { break; }
	}
		Country::InitCountry();
		Country::InitKurort();
		//system("cls");
	}



void Tour::ShowInfo()
{
	system("cls");
	if (amountOfstars != 0)
	{
		Hotel::ShowInfo();
		t->ShowInfo();
		Country::ShowInfo();
		cout <<"Транспорт: " << typetransport << endl;
	    cout<<"Ціна: " <<  price << endl;
	}
}


void Tour::SaveToFile()
{
	ofstream out("tour.txt",ios_base::app);

	Hotel::SaveToFile();
	out << price << ':';
	out << _nameofCountry << ':';
	out<< _kurort << ';';
	out.close();

}

void Tour::ReadFromFile()
{
	
		ifstream in("tour.txt");
		char buf[250];	char buf1[250];
		
		while (!in.eof())
		{
			in.getline(buf, 250, ':');
			amountOfstars = atoi(buf);
			getline(in, typeRoom, ':');
			in.getline(buf1, 250, ':');
			price = atoi(buf1);
			getline(in, _nameofCountry, ':');
			getline(in, _kurort, ';');
			if (amountOfstars != 0)
			{
			
				cout << "Кількість зірок: " << amountOfstars << endl;
				cout << "Тип кімнати: " << typeRoom << endl;
				cout << "Ціна: " << price << endl;
				cout << _nameofCountry << endl;
				cout << _kurort << endl;
				cout << endl;

			}
		}
			in.close();
			system("pause");
	}

	


void Tour::HotTour()
{
	system("cls");
	string htour[30];

	ifstream in("ht.txt");

	string _buf;

	int x = 50; int y = 0;
	int x1 = 105;
	int y1 = 0;

	for (int i = 0; i < 150; i++)
	{
		SetColor(4);
		getline(in, _buf);

		if (i % 4 == 0) { SetColor(4); }
		else {
			SetColor(7);
		}
		if (i < 50)
		{
			cout << _buf << endl;
		}
		if (i > 49 && i < 100)
		{
			SetPos(x, y);
			cout << _buf << endl;
			y += 1;
		}
		if (i > 99 && i < 150)
		{
			SetPos(x1, y1);
			cout << _buf << endl;
			y1 += 1;
		}

	}
}


Tour::~Tour()
{


}
