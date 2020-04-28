using namespace System;

// 参照クラス
// ネイティブ C++ のクラスとは異なる、.NET Framework 専用のクラスを参照クラス
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