#pragma once

#include <string>

// �錾
// C++�̃N���X

public class Hello {
private:
	std::string SayName(std::string name);
public:
	void Say();
	int Read();
	int Read2();
	void Write();
	int ToInt(std::string sval);
	static int Add(int x, int y);
};
