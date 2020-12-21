#pragma once
#include <math.h>
#include <iostream>
#include <stdlib.h>
#include <string>
#include "Form3_2.h"
int getCountsOfDigits(long number);
int dec2bin(int num);
int bin2dec(int n);

namespace Lab_verbickiy_2 {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class Form3 : public System::Windows::Forms::Form{
		public:
		Form3(void){
			InitializeComponent();
	}

	protected:
		~Form3(){
			if (components){
				delete components;
			}
	}

	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
		private: System::Windows::Forms::TextBox^ textBox2;
		//private: System::Windows::Forms::TextBox^ textBox3;
		private: System::Windows::Forms::Label^ label1;
		private: System::Windows::Forms::Label^ label2;
		//private: System::Windows::Forms::Label^ label3;
		private: System::Windows::Forms::Label^ label4;
		private: System::Windows::Forms::Button^ button1;
		private: System::Windows::Forms::Button^ button2;
		private: System::Windows::Forms::Button^ button3;
		private: System::Windows::Forms::Button^ button4;
		private: System::Windows::Forms::Button^ button5;
		private:
			System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
	void InitializeComponent(void)
{
	this->textBox1 = (gcnew System::Windows::Forms::TextBox());
	this->textBox2 = (gcnew System::Windows::Forms::TextBox());
	this->label1 = (gcnew System::Windows::Forms::Label());
	this->label2 = (gcnew System::Windows::Forms::Label());
	this->label4 = (gcnew System::Windows::Forms::Label());
	this->button1 = (gcnew System::Windows::Forms::Button());
	this->button2 = (gcnew System::Windows::Forms::Button());
	this->button3 = (gcnew System::Windows::Forms::Button());
	this->button4 = (gcnew System::Windows::Forms::Button());
	this->button5 = (gcnew System::Windows::Forms::Button());
	this->SuspendLayout();
	// 
	// textBox1
	// 
	this->textBox1->Location = System::Drawing::Point(36, 111);
	this->textBox1->Margin = System::Windows::Forms::Padding(4);
	this->textBox1->Name = L"textBox1";
	this->textBox1->Size = System::Drawing::Size(345, 22);
	this->textBox1->TabIndex = 0;
	this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form3::textBox1_KeyPress);
	// 
	// textBox2
	// 
	this->textBox2->Location = System::Drawing::Point(36, 161);
	this->textBox2->Margin = System::Windows::Forms::Padding(4);
	this->textBox2->Name = L"textBox2";
	this->textBox2->Size = System::Drawing::Size(345, 22);
	this->textBox2->TabIndex = 1;
	this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form3::textBox2_KeyPress);
	// 
	// label1
	// 
	this->label1->AutoSize = true;
	this->label1->Location = System::Drawing::Point(40, 89);
	this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
	this->label1->Name = L"label1";
	this->label1->Size = System::Drawing::Size(234, 17);
	this->label1->TabIndex = 3;
	this->label1->Text = L"Введите первый двоичный вектор";
	// 
	// label2
	// 
	this->label2->AutoSize = true;
	this->label2->Location = System::Drawing::Point(40, 137);
	this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
	this->label2->Name = L"label2";
	this->label2->Size = System::Drawing::Size(231, 17);
	this->label2->TabIndex = 4;
	this->label2->Text = L"Введите второй двоичный вектор";
	// 
	// label4
	// 
	this->label4->AutoSize = true;
	this->label4->Location = System::Drawing::Point(45, 415);
	this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
	this->label4->Name = L"label4";
	this->label4->Size = System::Drawing::Size(0, 17);
	this->label4->TabIndex = 6;
	// 
	// button1
	// 
	this->button1->Location = System::Drawing::Point(567, 89);
	this->button1->Margin = System::Windows::Forms::Padding(4);
	this->button1->Name = L"button1";
	this->button1->Size = System::Drawing::Size(159, 28);
	this->button1->TabIndex = 7;
	this->button1->Text = L"AND";
	this->button1->UseVisualStyleBackColor = true;
	this->button1->Click += gcnew System::EventHandler(this, &Form3::button1_Click);
	// 
	// button2
	// 
	this->button2->Location = System::Drawing::Point(567, 125);
	this->button2->Margin = System::Windows::Forms::Padding(4);
	this->button2->Name = L"button2";
	this->button2->Size = System::Drawing::Size(159, 28);
	this->button2->TabIndex = 8;
	this->button2->Text = L"OR";
	this->button2->UseVisualStyleBackColor = true;
	this->button2->Click += gcnew System::EventHandler(this, &Form3::button2_Click);
	// 
	// button3
	// 
	this->button3->Location = System::Drawing::Point(567, 161);
	this->button3->Margin = System::Windows::Forms::Padding(4);
	this->button3->Name = L"button3";
	this->button3->Size = System::Drawing::Size(159, 28);
	this->button3->TabIndex = 9;
	this->button3->Text = L"NOT";
	this->button3->UseVisualStyleBackColor = true;
	this->button3->Click += gcnew System::EventHandler(this, &Form3::button3_Click);
	// 
	// button4
	// 
	this->button4->Location = System::Drawing::Point(567, 197);
	this->button4->Margin = System::Windows::Forms::Padding(4);
	this->button4->Name = L"button4";
	this->button4->Size = System::Drawing::Size(159, 28);
	this->button4->TabIndex = 10;
	this->button4->Text = L"XOR";
	this->button4->UseVisualStyleBackColor = true;
	this->button4->Click += gcnew System::EventHandler(this, &Form3::button4_Click);
	// 
	// button5
	// 
	this->button5->Location = System::Drawing::Point(567, 323);
	this->button5->Margin = System::Windows::Forms::Padding(4);
	this->button5->Name = L"button5";
	this->button5->Size = System::Drawing::Size(159, 28);
	this->button5->TabIndex = 11;
	this->button5->Text = L"Exit";
	this->button5->UseVisualStyleBackColor = true;
	this->button5->Click += gcnew System::EventHandler(this, &Form3::button5_Click);
	// 
	// Form3
	// 
	this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
	this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
	this->ClientSize = System::Drawing::Size(910, 470);
	this->Controls->Add(this->button5);
	this->Controls->Add(this->button4);
	this->Controls->Add(this->button3);
	this->Controls->Add(this->button2);
	this->Controls->Add(this->button1);
	this->Controls->Add(this->label4);
	this->Controls->Add(this->label2);
	this->Controls->Add(this->label1);
	this->Controls->Add(this->textBox2);
	this->Controls->Add(this->textBox1);
	this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
	this->Margin = System::Windows::Forms::Padding(4);
	this->MaximizeBox = false;
	this->Name = L"Form3";
	this->Text = L"Двоичные векторы";
	this->ResumeLayout(false);
	this->PerformLayout();

	}
#pragma endregion
private:
static array<char>^ s = gcnew array<char>(200);
static array<char>^ l = gcnew array<char>(200);
static array<int>^ A1 = gcnew array<int>(50);
static array<int>^ A2 = gcnew array<int>(50);
static array<int>^ Q1 = gcnew array<int>(50);
static array<int>^ Q2 = gcnew array<int>(50);
static array<int>^ Result = gcnew array<int>(50);

static int vector1;
static int vector2;
static int dim1;
static int dim2;
static int f=0;
static int e1=0;

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	try// ((textBox1->Text->Length!=0)&&(textBox2->Text->Length!=0))
	{
		/*vector1=Convert::ToInt32(textBox1->Text);
		vector2=Convert::ToInt32(textBox2->Text);*/
		int dvector1 = Convert::ToInt64(textBox1->Text);
		int dvector2 = Convert::ToInt64(textBox2->Text);
		int bvector1 = bin2dec(dvector1);
		int bvector2 = bin2dec(dvector2);
		int bresultOfFirstClick = bvector1 & bvector2;
		int dresultOfFirstClick = dec2bin(bresultOfFirstClick);
		Form3_2^ gform3_2 = gcnew Form3_2;
		gform3_2->Show();
		gform3_2->label1Form3_2->Text = "Ваш первый вектор:  " + dvector1.ToString();
		gform3_2->label2Form3_2->Text = "Ваш второй вектор:  " + dvector2.ToString();
		gform3_2->label3Form3_2->Text = "Результат операции:  " + dresultOfFirstClick.ToString();
		/*label1->Text="Ваш вектор равен: " + dvector1.ToString();
		label2->Text="Ваш вектор равен: " + dvector2.ToString();
		label4->Text="Результат: " + dresultOfFirstClick.ToString();*/
	}
	catch(Exception^ e){
		MessageBox::Show("Ошибка типа данных: вы ввели слишком длинное число !\n", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}

private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if ((e->KeyChar>='0')&&(e->KeyChar<='1') )
		return;
	e->Handled=true;
}

private: System::Void textBox2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if((e->KeyChar>='0')&&(e->KeyChar<='1'))
		return;
	e->Handled=true;
}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	try{
		/*vector1=Convert::ToInt32(textBox1->Text);
		vector2=Convert::ToInt32(textBox2->Text);*/
		int dvector1 = Convert::ToInt64(textBox1->Text);
		int dvector2 = Convert::ToInt64(textBox2->Text);
		int bvector1 = bin2dec(dvector1);
		int bvector2 = bin2dec(dvector2);
		int bresultOfSecondClick = bvector1 | bvector2;
		int dresultOfSecondClick = dec2bin(bresultOfSecondClick);
		Form3_2^ gform3_2 = gcnew Form3_2;
		gform3_2->Show();
		gform3_2->label1Form3_2->Text = "Ваш первый вектор:  " + dvector1.ToString();
		gform3_2->label2Form3_2->Text = "Ваш второй вектор:  " + dvector2.ToString();
		gform3_2->label3Form3_2->Text = "Результат операции:  " + dresultOfSecondClick.ToString();
		/*label1->Text="Ваш вектор равен: " + dvector1.ToString();
		label2->Text="Ваш вектор равен: " + dvector2.ToString();
		label4->Text="Результат: " + dresultOfSecondClick.ToString();*/
	}
	catch(Exception^ e){
		MessageBox::Show("Ошибка типа данных: вы ввели слишком длинное число !\n", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	try{
		/*vector1=Convert::ToInt32(textBox1->Text);
		vector2=Convert::ToInt32(textBox2->Text);*/
		int dvector1 = Convert::ToInt64(textBox1->Text);
		int dvector2 = Convert::ToInt64(textBox2->Text);
		int bvector1 = bin2dec(dvector1);
		int bvector2 = bin2dec(dvector2);
		int counter1 = getCountsOfDigits(dvector1);
		int counter2 = getCountsOfDigits(dvector2);
		/*int bresultOfThirdClick_First = ~((-2)*bvector1-1);
		int bresultOfThirdClick_Second = ~((-2)*bvector2-1);*/
		int bresultOfThirdClick_First = pow(2,counter1) - bvector1 - 1 ;
		int bresultOfThirdClick_Second = pow(2,counter2) - bvector2 - 1 ;
		int dresultOfThirdClick_First = dec2bin(bresultOfThirdClick_First);
		int dresultOfThirdClick_Second = dec2bin(bresultOfThirdClick_Second);
		Form3_2^ gform3_2 = gcnew Form3_2;
		gform3_2->Show();
		gform3_2->label1Form3_2->Text = "Ваш первый вектор:  " + dvector1.ToString();
		gform3_2->label2Form3_2->Text = "Ваш второй вектор:  " + dvector2.ToString();
		gform3_2->label3Form3_2->Text = "Результат операции:  " + dresultOfThirdClick_First.ToString()+
										"\n                                     "+dresultOfThirdClick_Second.ToString();
		
		/*label1->Text="Ваш вектор равен: " + dvector1.ToString();
		label2->Text="Ваш вектор равен: " + dvector2.ToString();
		label4->Text="Результат: " + dresultOfThirdClick_First.ToString()+"\n"+"                   "+dresultOfThirdClick_Second.ToString();*/
	}
	catch(Exception^ e){
		MessageBox::Show("Ошибка типа данных: вы ввели слишком длинное число !\n", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	try{
		/*vector1=Convert::ToInt32(textBox1->Text);
		vector2=Convert::ToInt32(textBox2->Text);*/
		int dvector1 = Convert::ToInt64(textBox1->Text);
		int dvector2 = Convert::ToInt64(textBox2->Text);
		int bvector1 = bin2dec(dvector1);
		int bvector2 = bin2dec(dvector2);
		int bresultOfFourthClick = bvector1 ^ bvector2;
		int dresultOfFourthClick = dec2bin(bresultOfFourthClick);
		Form3_2^ gform3_2 = gcnew Form3_2;
		gform3_2->Show();
		gform3_2->label1Form3_2->Text = "Ваш первый вектор:  " + dvector1.ToString();
		gform3_2->label2Form3_2->Text = "Ваш второй вектор:  " + dvector2.ToString();
		gform3_2->label3Form3_2->Text = "Результат операции:  " + dresultOfFourthClick.ToString();
		/*label1->Text="Ваш вектор равен: " + dvector1.ToString();
		label2->Text="Ваш вектор равен: " + dvector2.ToString();
		label4->Text="Результат: " + dresultOfFourthClick.ToString();*/
	}
	catch(Exception^ e){
		MessageBox::Show("Ошибка типа данных: вы ввели слишком длинное число !\n", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	Close();
		}
};
}

int getCountsOfDigits(long number) {
        int count = (number == 0) ? 1 : 0;
        while (number != 0) {
            count++;
            number /= 10;
        }
        return count;
    }
int dec2bin(int num)
{
    int bin = 0, k = 1;

    while (num)
    {
        bin += (num % 2) * k;
        k *= 10;
        num /= 2;
    }

    return bin;
}
int bin2dec(int n)
{
    int decimalNumber = 0, i = 0, remainder;
    while (n!=0)
    {
        remainder = n%10;
        n /= 10;
        decimalNumber += remainder*pow(2,i);
        ++i;
    }
    return decimalNumber;
}