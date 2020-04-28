#pragma once

#include "Hello.h"
#include <windows.h>
#include "Item.cpp"

namespace CppForm {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace TestLib;

	/// <summary>
	/// MyForm の概要
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: ここにコンストラクター コードを追加します
			//
		}

	protected:
		/// <summary>
		/// 使用中のリソースをすべてクリーンアップします。
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	protected:

	private:
		/// <summary>
		/// 必要なデザイナー変数です。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// デザイナー サポートに必要なメソッドです。このメソッドの内容を
		/// コード エディターで変更しないでください。
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 41);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(12, 70);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 2;
			this->button3->Text = L"button3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(12, 100);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 3;
			this->button4->Text = L"button4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(12, 138);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 4;
			this->button5->Text = L"button5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(106, 12);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 5;
			this->button6->Text = L"button6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(106, 41);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 6;
			this->button7->Text = L"button7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(106, 70);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 23);
			this->button8->TabIndex = 7;
			this->button8->Text = L"button8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(106, 99);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 23);
			this->button9->TabIndex = 8;
			this->button9->Text = L"button9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(106, 138);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(75, 23);
			this->button10->TabIndex = 9;
			this->button10->Text = L"button10";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(197, 12);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(75, 23);
			this->button11->TabIndex = 10;
			this->button11->Text = L"button11";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(197, 41);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(75, 23);
			this->button12->TabIndex = 11;
			this->button12->Text = L"button12";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Hello hello;
		hello.Say();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Hello hello;
		hello.Read2();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		Hello hello;
		hello.Write();
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		Hello hello;
		int val = hello.ToInt("100");
		System::Diagnostics::Debug::WriteLine(val);
	}

	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {

		// L: ユニコード文字列
		OutputDebugString("debug\n");
	
		// 書式付き
		// https://ameblo.jp/e27182818/entry-10853335213.html
		
		// https://vllv.us/Junk/_T/
		// マルチバイト文字セットを使用する
		
		char str[100];
		sprintf(str, "%d %d %d\n", 100, 120, 140);
		OutputDebugString(str);
	}

	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		Device^ device = gcnew Device("radio");
		device->Description = "no description";
		device->Price = 1000;

		System::Diagnostics::Debug::WriteLine(String::Format("{0} {1} {2}", device->Name, device->Description, device->Price));
	}

	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		Lib::Item^ item = gcnew Lib::Item();
		item->Name = "item";
		item->Price = 100;
	
		System::Diagnostics::Debug::WriteLine(String::Format("{0} {1}", item->Name, item->Price));
	}

	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		// 変数のアドレス: &変数名
		// ポインタ(変数のアドレス): int *pt

		// pt = &adrlab;
		// *pt = 10;
		// exchange(int *x, int *y);

		// 関数へのポインタ(関数ポインタ): 関数名がポインタ
		// void (*p)(int, double);
		// p = foo;
		// (*p)(5, 3.14);
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		Lib::Item^ item = gcnew Lib::Item();
		item->Name = "item";
		item->Price = 100;
		item->ItemType = Lib::ItemType::C;

		System::Diagnostics::Debug::WriteLine(String::Format("{0} {1} {2}", item->Name, item->Price, (int)item->ItemType));
	}
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Diagnostics::Debug::WriteLine(Environment::CurrentDirectory);

		if (rename("test.txt", "test2.txt") == 0) {
			System::Diagnostics::Debug::WriteLine("ファイル名を変更しました。");
		}
		else {
			System::Diagnostics::Debug::WriteLine("ファイル名の変更に失敗しました。");
		}
	}
	private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
		char path[1024];
		GetModuleFileNameA(NULL, path, sizeof(path));
	}
	private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
		// ①ポインタ基礎
		int test = 10;
		int* pt = &test;	// ポインタ

		System::Diagnostics::Debug::WriteLine(test);
		System::Diagnostics::Debug::WriteLine(*pt);	// 間接演算子

		// ②ポインタによる配列操作
		int nums[3];
		int* num_pt;

		num_pt = nums;	// 配列名は先頭のアドレス
		*(num_pt) = 1;
		*(num_pt + 1) = 2;
		*(num_pt + 2) = 3;

		System::Diagnostics::Debug::WriteLine(nums[0]);
		System::Diagnostics::Debug::WriteLine(nums[1]);
		System::Diagnostics::Debug::WriteLine(nums[2]);

		// ③引数にポインタ
		int x = 11;
		int y = 12;

		swap(&x, &y);

		System::Diagnostics::Debug::WriteLine(x);
		System::Diagnostics::Debug::WriteLine(y);

		swap(x, y);

		System::Diagnostics::Debug::WriteLine(x);
		System::Diagnostics::Debug::WriteLine(y);

		// ④関数ポインタ(デリゲートみたいなもの)
		int (*p)(int, int);	// 定義
		p = Hello::Add;
		int z = (*p)(10, 20);

		System::Diagnostics::Debug::WriteLine(z);

		// 参考: ポインタ型記法、ポインタ変数記法
		// https://marycore.jp/coding/pointer-is-type/
	}

	private: void swap(int* x, int* y) {
		int temp = *x;
		*x = *y;
		*y = temp;
	}

	// 参照渡し(c++)
	private: void swap(int& x, int& y) {
		int temp = x;
		x = y;
		y = temp;
	}
};
}
