#include <iostream>
#include <string>
#include <fstream>
#include <Windows.h>	//����� ����� ���� ������� ������� �������
using namespace std;

/*
	���������� ������ � ����
	������ ������ �� �����
*/

//fsrteam ����� �� ������ � ����� ������
//ifstream	�������� �� ������ ������ �� ������
//ofstream ����������� �������� ������ � ����


int main()
{	
	setlocale(LC_ALL, "ru");	//����� �������� �������
	
	string path = "MyFile.txt";	//�������� ���������� ���� string
	
	/*
	//cin >> path;	
	
	ofstream fout;	//������ ������ ofstream

	//fout.open(path);		//�������� ����� open()	//������������� ������� ������


	//���������� � ������� ������ ofstream, � �������� ���� ����������� ������ ���������� appent - ��������
	fout.open(path, ofstream::app);			//������ ����� ������������� � ����� �����

	if (!fout.is_open())			//�������� �� ������������� �����
	{
		cout << "Oshibka!" << endl;
	}
	else
	{
		//fout << "\nNew data";		//���������� ������ � ����

		//������ ����� � �������
		cout << "Put your number";
		int a;
		cin >> a;
		fout << "\n";
		fout << a;
	}

	fout.close();	//�������� �����
	*/
	
	

	ifstream fin;	//�������� ������� ���� ifstream
	fin.open(path);		//�������� ����� open ��� �������� ����� �����


	
	if (!fin.is_open())
	{
		cout << "Oshibka "<< endl;
	}
	else
	{
		cout << "File open " << endl;
		
		//��������� ���������
		
		string str;
		string cstr = "�����";
		while(!fin.eof())			//����� ����������� ����� �����, ����������� true
		{
			str = "";				//�������� ������ ��������, ����� ������ ����������� ��������
			getline(fin, str);		//1 - �������� - ������ �� �������� ��������� ����, 2 - ���������� ���� ������������ ���� ���������
			//fin >> str;				// ��������� ������� �� �����
			


			//������ ����� ������
			/*
			bool found = str.find(cstr) != string::npos;
			
			if (found) 
			{
				cout << "������ �������" << endl;
			}
			else
			{
				cout << "������ �� �������" << endl;
			}
			*/
			//������ ����� ������
			
			int num = 0;							//���������� ��� �������� �������
			int point = 0;							//�� ����� ����� ����� ������ ���� �������� �����
			int cot = 0;							//�������� ����� ����� � ������
			for (int i = 0; i < str.size(); i++)	//������ ������� �� ����������
			{
				if (str[i] == ',')					//������� ������� ����� ������� �������� � �����
				{
					num++;
				}
				if (num == 2)						//����� ������ ������� ��������� ����� ��������
				{
					point = i + 1;						//������ ������ ��� ��������� ����� ��������
					break;
				}
			}
			for (int j = 0; j < cstr.size(); j++)		//����� ������� ������ ��� ������
				for (int i = point; i < str.size(); i++)	//������ ������� �� ����������
					if (str[i] == cstr[j])
					{

						cout << str[i] << endl;
						cot++;

						//continue;
						break;	//����� ���������� ���������� ����� � ������ ������������ (2 - ����) 
					}
			if (cot == cstr.size())
			{
				cout << "������ �������" << endl;
			}

					


						
			
			for (int j = 0; j < cstr.size(); j++)		//����� ������� ������ ��� ������
				for (int i = 0; i < str.size(); i++)	//������ ������� �� ����������
					if (str[i] == cstr[j])
					{
						
						cout << str[i] << endl;
						

						//continue;
						break;	//����� ���������� ���������� ����� � ������ ������������ (2 - ����) 
					}
			
					
			
			cout << str << endl;
		}
		
		
		/*
		//��� ������ ���� ���������������
		//��������� �����������
		char ch;
		//���� ���������� ������� � ����� ����� ���������� true, ��� - false
		while (fin.get(ch))		//������ �������� ��������� ����-�� ���������� ������
		{
			cout << ch;			//����� �������� ������� �� �����
		}
		
		//fin.get()		//����� get ����������� ��������� ������ � �����
		*/
	
	}
	fin.close();

	string path = "MyBase.txt";	//�������� ���������� ���� string
	string path2 = "ChangeBase.txt";

	int dan = 1;	//erfpsdftv ����� ��������� ����� �������

	fstream fs;			//������� ������ ������ fstream
	fstream fs2;		//��� ��������� ����
	fstream fs3;		//��� ���������� � ���� ������
	//in - ��������, �������� ����� �� ������
	//out - �������� ����� �� ������
	//app - ������ ������������ � ����� �����

	fs.open(path, fstream::in | fstream::out | fstream::app);		//��������� ���� � �� ������ � ����� ����� � �� ������ 
	//fs2.open(path2);
	if (!fs.is_open())			//�������� �� ������������� �����
	{
		cout << "������ �������� �����!" << endl;
	}
	else
	{

		string msg;		//����� � ������� �� ����� ������� ��������� ��� ����� � ��� ����������
		int value;
		cout << "���� ������" << endl;
		cout << "������� 1 ��� ������ ��������� � ����" << endl;
		cout << "������� 2 ��� ������ ���� ������ �� ����� " << endl;
		cout << "������� 3 ��� �������� ������ �� �����" << endl;
		cin >> value;

		if (value == 1)
		{
			cout << "������� ���� � �����!" << endl;

			//����� �������� ��������� ����� ������� �������� �������
			//��������� ��������� � ������� ������ �������� �������	-
			SetConsoleCP(1251);			//����� �������� ��������� �� ��������
			cin >> msg;			//���������� ��������� � �������
			fs << msg << "\n";	//�������� ��������� � ���� � ���������� ������� �� ��������� ������ - \n 
			SetConsoleCP(866);			//���������� ���������
		}

		if (value == 2)
		{
			int num = 0;	//������� ���������� �����

			cout << "������ ������ �� �����" << endl;
			while (!fs.eof())	//������ ���� �� ���������� ����
			{

				msg = "";	//�������� ��������� ����� �� �������� ����
				fs >> msg;
				num++;
				cout << num << " " << msg << endl;

			}
		}
		if (value == 3)
		{
			//int n = 0;
			int dstr = 0;		//��������� ������, ������� ����� ��������
			int num = 0;	//������� ���������� �����

			cout << "�������� ������ �� �����" << endl;
			while (!fs.eof())	//������ ���� �� ���������� ����
			{
				//n++;

				msg = "";	//�������� ��������� ����� �� �������� ����
				fs >> msg;	//������ ������ �� �����
				num++;

				if (num != 2)					//������ ������� ����� ��������
				{
					SetConsoleCP(1251);			//����� �������� ��������� �� ��������
					fs2 << msg << "\n";			//�������� ��������� � ���� � ���������� ������� �� ��������� ������ - \n 
					SetConsoleCP(866);			//���������� ���������
				}

				//cout << num << " " << msg << endl;

			}


			fs3.open(path, fstream::out);									//MyBase	�������

			fs2.open(path2, fstream::in | fstream::out | fstream::app);
			while (!fs2.eof())	//������ ���� �� ���������� ���� �� Cha
			{

				msg = "";	//�������� ��������� ����� �� �������� ����
				fs2 >> msg;	//������ ������ �� ����� ChangeBase


				SetConsoleCP(1251);			//����� �������� ��������� �� ��������
				fs3 << msg << "\n";			//�������� ��������� � ���� MyBase
				SetConsoleCP(866);			//���������� ���������
			}
			fs2.close();
			fs.open(path2, fstream::out);							//������� ���� ChangeBase
			fs3.close();
			fs.close();



		}

		// cout << num << endl;
	}

	fs.close();
	fs2.close();
	//fs3.close();


	

	return 0;
	
}


