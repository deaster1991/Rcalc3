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
		cout << endl << "=================" << endl << this->result << "���" << endl << "=================" << endl << endl;
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

		cout << endl << "=================" << endl << this->result << "���" << endl << "=================" << endl << endl;


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
	cout << "������������� ����������� STONERWOOD" << endl;
	cout << "====================================" << endl << endl;
	cout << "�� ����i�� ������������� � ��������!!!" << endl;
	cout << "����������� � ������� �������� 0,6�� (2�� �� �����������)" << endl << endl;

	for (int repeater = 1; repeater !=0; )
	{
		cout << "���������� ������ �������� � �����?" << endl << "1 - ���\t0 - ͳ" << endl;
		cin >> A;
		if (A == true)
		{
			cout << "������ �������� � �����..." << endl;
			cout << "����� ���� ����� (������ ���� 204 ���)" << endl;
			cout << "�������: ";
			cin >> Xm1;
			Xm1 = Xm1 / 1000;
			cout << "������: ";
			cin >> Ym1;
			Ym1 = Ym1 / 1000;
			cout << "����� ���������� ����� (���� ������� 91���)" << endl;
			cout << "�������: ";
			cin >> Xm2;
			Xm2 = Xm2 / 1000;
			cout << "������: ";
			cin >> Ym2;
			Ym2 = Ym2 / 1000;
			cout << endl;
			cout << "����������� � ������� 0,6��" << endl;
			cout << "������1: ";
			cin >> Krm1;
			Krm1 = Krm1 / 1000;
			cout << "������2: ";
			cin >> Krm2;
			Krm2 = Krm2 / 1000;
			cout << "������3: ";
			cin >> Krm3;
			Krm3 = Krm3 / 1000;
			cout << "������4: ";
			cin >> Krm4;
			Krm4 = Krm4 / 1000;
			Formula2 a;
			a.FormResult(Xm1, Ym1, Xm2, Ym2, Krm1, Krm2, Krm3, Krm4);
			a.PrintResult();
		}
		else
		{
			cout << "������ �� ����� �� ����..." << endl;
			cout << "����� ���� ����� (������ ���� 204 ���)" << endl;
			cout << "�������: ";
			cin >> Xm1;
			Xm1 = Xm1 / 1000;
			cout << "������: ";
			cin >> Ym1;
			Ym1 = Ym1 / 1000;
			cout << endl;
			cout << "����������� � ������� 0,6��" << endl;
			cout << "������1: ";
			cin >> Krm1;
			Krm1 = Krm1 / 1000;
			cout << "������2: ";
			cin >> Krm2;
			Krm2 = Krm2 / 1000;
			cout << "������3: ";
			cin >> Krm3;
			Krm3 = Krm3 / 1000;
			cout << "������4: ";
			cin >> Krm4;
			Krm4 = Krm4 / 1000;
			Formula1 a;
			a.FormResult(Xm1, Ym1, Krm1, Krm2, Krm3, Krm4);
			a.PrintResult();
		}
		cout << "�������� ������?" << endl << "1 - ���\t0 - ͳ" << endl;
		cin >> repeater;
	}

	system("pause");
	return 0;
};