#include "Hello.h"
#include <iostream>
#include <fstream>
#include <stdlib.h>

#include <msclr/marshal_cppstd.h>

// C++ �� C#�ւ̕�����ϊ�
// https://takachan.hatenablog.com/entry/2017/11/29/200234

// ����

std::string Hello::SayName(std::string name)
{
	return name + ": ";
}

void Hello::Say() {
	System::String^ greeting
		= msclr::interop::marshal_as<System::String^>(SayName("test")) + "hello";

	System::Diagnostics::Debug::WriteLine(greeting);
}

int Hello::Read()
{
	using namespace std;
	fstream fs;

	// �J�����g�́Acpp�Ɠ����ꏊ
	fs.open("test.txt", ios::in);
	
	if (!fs) return -1;

	string buf;

	while (!fs.eof()) {
		// 1�s�ǂݍ���
		getline(fs, buf);

		System::String^ text
			= msclr::interop::marshal_as<System::String^>(buf);

		System::Diagnostics::Debug::WriteLine(text);
	}

	fs.close();
}

int Hello::Read2()
{
	// https://programming.pc-note.net/cpp/filestream.html

	using namespace std;
	ifstream fin;

	fin.open("test.txt", ios::in);

	string buf;

	// ��؂蕶���܂œǂݍ���
	fin >> buf;

	System::String^ text
		= msclr::interop::marshal_as<System::String^>(buf);

	System::Diagnostics::Debug::WriteLine(text);

	//while (!fin.eof()) {
	//	// 1�s�ǂݍ���
	//	getline(fin, buf);

	//	System::String^ text
	//		= msclr::interop::marshal_as<System::String^>(buf);

	//	System::Diagnostics::Debug::WriteLine(text);
	//}

	fin.close();

	return 0;
}

void Hello::Write()
{
	// �t�@�C�����o��
	// http://y-okamoto-psy1949.la.coocan.jp/VCpp/SimpleReadWriteFile/

	using namespace std;
	ofstream fout;

	// �ǋL
	fout.open("test.txt", ios::app);
	fout << "hello, world" << endl;
	fout.close();
}

int Hello::ToInt(std::string sval)
{
	// ascii to int ?

	int val = atoi(sval.c_str());

	return val;
}

int Hello::Add(int x, int y)
{
	return x + y;
}