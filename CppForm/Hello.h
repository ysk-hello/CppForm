#pragma once

#include <string>

// 宣言
// C++のクラス

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
