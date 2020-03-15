#include "MyForm.h"
#include "Hello.h"

using namespace CppForm;

// プロジェクト作成方法
// https://takacity.blog.fc2.com/blog-entry-84.html
// http://y-okamoto-psy1949.la.coocan.jp/booksetc/introvcpp/#BM

// TODO: 文字列
// TODO: ファイル入出力

// クラスの初期化方法
// https://blog.livlea.com/entry/2018/08/cpp-class-init

// アロー演算子: ポインタに対して使う

[STAThreadAttribute]
int Main() {
	Hello hello;
	hello.Say();

	MyForm^ form = gcnew MyForm();
	form->ShowDialog();

	return 0;
}