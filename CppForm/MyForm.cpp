#include "MyForm.h"
#include "Hello.h"

using namespace CppForm;

// �v���W�F�N�g�쐬���@
// https://takacity.blog.fc2.com/blog-entry-84.html
// http://y-okamoto-psy1949.la.coocan.jp/booksetc/introvcpp/#BM

// TODO: ������
// TODO: �t�@�C�����o��

// �N���X�̏��������@
// https://blog.livlea.com/entry/2018/08/cpp-class-init

// �A���[���Z�q: �|�C���^�ɑ΂��Ďg��

[STAThreadAttribute]
int Main() {
	Hello hello;
	hello.Say();

	MyForm^ form = gcnew MyForm();
	form->ShowDialog();

	return 0;
}