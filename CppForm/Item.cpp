using namespace System;

// �Q�ƃN���X
// �l�C�e�B�u C++ �̃N���X�Ƃ͈قȂ�A.NET Framework ��p�̃N���X���Q�ƃN���X
// http://www.wisdomsoft.jp/386.html

namespace Lib {
	public enum ItemType {
		A,
		B,
		C
	};

	public ref class Item {
	public:
		ItemType ItemType;
		String ^Name;
		int Price;
	};
}