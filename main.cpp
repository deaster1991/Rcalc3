#include <iostream>
#include <cstdlib>
#include <locale>;
#include "windows.h";
using namespace std;

class Formula1
{
public:
	int FormResult(float a1, float b1, float Krm1, float Krm2, float Krm3, float Krm4)
	{
		this->a1 = a1, this->b1 = b1;
		this->Krm1 = Krm1;
		this->Krm2 = Krm2;
		this->Krm3 = Krm3;
		this->Krm4 = Krm4;
		this->newd = ((a1 * b1) * 204) + ((Krm1 + Krm2 + Krm3 + Krm4) * 14);
		this->result = newd;
		return result;
	}
	void PrintResult()
	{
		cout << endl << "=================" << endl << this->result << "грн" << endl << "=================" << endl << endl;
	}
private:
	float result, newd;
	float a1, b1;
	float Krm1, Krm2, Krm3, Krm4;
};

class Formula2
{
public:
	int FormResult(float a1, float b1, float a2, float b2, float Krm1, float Krm2, float Krm3, float Krm4)
	{
		this->a1 = a1, this->b1 = b1;
		this->a2 = a2, this->b2 = b2;
		this->Krm1 = Krm1;
		this->Krm2 = Krm2;
		this->Krm3 = Krm3;
		this->Krm4 = Krm4;
		this->newd = (((a1 * b1) * 204) + ((Krm1 + Krm2 + Krm3 + Krm4) * 14)) - ((a2 * b2) * 91);
		this->result = newd;
		return result;
	}

	void PrintResult()
	{

		cout << endl << "=================" << endl << this->result << "грн" << endl << "=================" << endl << endl;


	}

private:
	float result, newd, oldd;
	float a1, b1;
	float a2, b2;
	float Krm1, Krm2, Krm3, Krm4;

};


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	float Xm1, Ym1, Xm2, Ym2, Krm1, Krm2, Krm3, Krm4;
	bool A;
	cout << "====================================" << endl;
	cout << "Рекламаційний калькулятор STONERWOOD" << endl;
	cout << "====================================" << endl << endl;
	cout << "Всі розмiри обраховуються в міліметрах!!!" << endl;
	cout << "Калькуляція з кромкою виключно 0,6мм (2мм не підтримується)" << endl << endl;

	for (int repeater = 1; repeater !=0; )
	{
		cout << "Пошкоджена деталь повторно в роботі?" << endl << "1 - Так\t0 - Ні" << endl;
		cin >> A;
		if (A == true)
		{
			cout << "Деталь повторно в роботі..." << endl;
			cout << "Розмір нової деталі (оптова ціна 204 грн)" << endl;
			cout << "Довжина: ";
			cin >> Xm1;
			Xm1 = Xm1 / 1000;
			cout << "Ширина: ";
			cin >> Ym1;
			Ym1 = Ym1 / 1000;
			cout << "Розмір пошкодженої деталі (ціна закупівлі 91грн)" << endl;
			cout << "Довжина: ";
			cin >> Xm2;
			Xm2 = Xm2 / 1000;
			cout << "Ширина: ";
			cin >> Ym2;
			Ym2 = Ym2 / 1000;
			cout << endl;
			cout << "Калькуляція з кромкою 0,6мм" << endl;
			cout << "Кромка1: ";
			cin >> Krm1;
			Krm1 = Krm1 / 1000;
			cout << "Кромка2: ";
			cin >> Krm2;
			Krm2 = Krm2 / 1000;
			cout << "Кромка3: ";
			cin >> Krm3;
			Krm3 = Krm3 / 1000;
			cout << "Кромка4: ";
			cin >> Krm4;
			Krm4 = Krm4 / 1000;
			Formula2 a;
			a.FormResult(Xm1, Ym1, Xm2, Ym2, Krm1, Krm2, Krm3, Krm4);
			a.PrintResult();
		}
		else
		{
			cout << "Деталь не взята на облік..." << endl;
			cout << "Розмір нової деталі (оптова ціна 204 грн)" << endl;
			cout << "Довжина: ";
			cin >> Xm1;
			Xm1 = Xm1 / 1000;
			cout << "Ширина: ";
			cin >> Ym1;
			Ym1 = Ym1 / 1000;
			cout << endl;
			cout << "Калькуляція з кромкою 0,6мм" << endl;
			cout << "Кромка1: ";
			cin >> Krm1;
			Krm1 = Krm1 / 1000;
			cout << "Кромка2: ";
			cin >> Krm2;
			Krm2 = Krm2 / 1000;
			cout << "Кромка3: ";
			cin >> Krm3;
			Krm3 = Krm3 / 1000;
			cout << "Кромка4: ";
			cin >> Krm4;
			Krm4 = Krm4 / 1000;
			Formula1 a;
			a.FormResult(Xm1, Ym1, Krm1, Krm2, Krm3, Krm4);
			a.PrintResult();
		}
		cout << "Наступна деталь?" << endl << "1 - Так\t0 - Ні" << endl;
		cin >> repeater;
	}

	system("pause");
	return 0;
};