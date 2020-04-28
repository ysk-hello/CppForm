#pragma once

#include <string>

// éŒ¾
// C++‚ÌƒNƒ‰ƒX

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
