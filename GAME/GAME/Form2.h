#pragma once
#include <iostream>
#include <string>
#include <cstdlib> 
#include <ctime>
using namespace std;
namespace GAME {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form2 : public System::Windows::Forms::Form
	{
	public:
		Form2(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form2()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  button4;
	protected:

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(115, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(422, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"����� ���������� � ����� ������ ������� \"����������\"";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			//this->label2->BackColor = System::Drawing::Color::LightCyan;
			this->label2->Location = System::Drawing::Point(208, 71);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(217, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"��� iq - 4. �� - EG.RAMZES666";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			//this->label3->BackColor = System::Drawing::Color::LightCyan;
			this->label3->Location = System::Drawing::Point(115, 115);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(129, 17);
			this->label3->TabIndex = 2;
			this->label3->Text = L"���� ����������:";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::Menu;
			this->textBox1->Location = System::Drawing::Point(211, 148);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(211, 22);
			this->textBox1->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::LightCyan;
			this->button1->Location = System::Drawing::Point(211, 212);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(211, 26);
			this->button1->TabIndex = 4;
			this->button1->Text = L"���� �����";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form2::button1_Click_1);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			//this->label4->BackColor = System::Drawing::Color::LightCyan;
			this->label4->Location = System::Drawing::Point(208, 262);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(52, 17);
			this->label4->TabIndex = 5;
			this->label4->Text = L"�����:";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::LightCyan;
			this->button2->Location = System::Drawing::Point(29, 290);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(112, 38);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Exit";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form2::button2_Click_1);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::LightCyan;
			this->button3->Location = System::Drawing::Point(473, 66);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(142, 26);
			this->button3->TabIndex = 7;
			this->button3->Text = L"���������";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form2::button3_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			//this->label5->BackColor = System::Drawing::Color::LightCyan;
			this->label5->Location = System::Drawing::Point(421, 115);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(86, 17);
			this->label5->TabIndex = 8;
			this->label5->Text = L"���������: ";
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::LightCyan;
			this->button4->Location = System::Drawing::Point(12, 18);
			this->button4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(72, 26);
			this->button4->TabIndex = 9;
			this->button4->Text = L"�����";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Form2::button4_Click);
			// 
			// Form2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightCyan;

			this->ClientSize = System::Drawing::Size(645, 339);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label3);
			this->ForeColor = System::Drawing::Color::Black;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"Form2";
			this->Text = L"����� ������� �������";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


		
		//int secretNumber = rand() % 100 + 1;//��������� ����� � ��������� �� 1��100 
		
//		ref class R
//{
//public:
//    void Test3()
//    {
//        array<String^,2>^ WORDS = gcnew array<String^,2>(10,2);
//		WORDS[0,0] = "����";
//		WORDS[0,1] = "���, ����, �������";
//		WORDS[1,0] = "�����";
//		WORDS[1,1] = "���, ����, �������";
//		WORDS[2,0] = "�����";
//		WORDS[2,1] = "���, ����, ������";
//		WORDS[3,0] = "�����";
//		WORDS[3,1] = "���, ����, �����";
//		WORDS[4,0] = "�����";
//		WORDS[4,1] = "���, ����, ������";
//		WORDS[5,0] = "������";
//		WORDS[5,1] = "���, ����, ���";
//		WORDS[6,0] = "������";
//		WORDS[6,1] = "���, ����, �������";
//		WORDS[7,0] = "������";
//		WORDS[7,1] = "���, ����, ������";
//		WORDS[8,0] = "�����";
//		WORDS[8,1] = "���, ����, ������";
//		WORDS[9,0] = "������";
//		WORDS[9,1] = "���, ����, �����";
//		srand(static_cast<unsigned int>(time(0))); 
//		int choice = (rand() % 10);
//		////string theWord = WORDS[choice,WORD];
//		//array<String^,2> theWord=gcnew array<String^,2>(10,2);
//		////�����. ������� ����� �������
//		//string theHint = WORDS[choice,HINT]: //��������� ��� �����
//		array<String^,2>^ SHUFFLEWORDS = gcnew array<String^,2>(10,2);
//		SHUFFLEWORDS[0,0] = "����";
//		SHUFFLEWORDS[0,1] = "���, ����, �������";
//		SHUFFLEWORDS[1,0] = "�����";
//		SHUFFLEWORDS[1,1] = "���, ����, �������";
//		SHUFFLEWORDS[2,0] = "�����";
//		SHUFFLEWORDS[2,1] = "���, ����, ������";
//		SHUFFLEWORDS[3,0] = "�����";
//		SHUFFLEWORDS[3,1] = "���, ����, �����";
//		SHUFFLEWORDS[4,0] = "�����";
//		SHUFFLEWORDS[4,1] = "���, ����, ������";
//		SHUFFLEWORDS[5,0] = "������";
//		SHUFFLEWORDS[5,1] = "���, ����, ���";
//		SHUFFLEWORDS[6,0] = "������";
//		SHUFFLEWORDS[6,1] = "���, ����, �������";
//		SHUFFLEWORDS[7,0] = "������";
//		SHUFFLEWORDS[7,1] = "���, ����, ������";
//		SHUFFLEWORDS[8,0] = "�����";
//		SHUFFLEWORDS[8,1] = "���, ����, ������";
//		SHUFFLEWORDS[9,0] = "������";
//		SHUFFLEWORDS[9,1] = "���, ����, �����";
//    }   
//};
		/*static int Choice(){
			srand(static_cast<unsigned int>(time(0))); 
			int choice = (rand() % 10);
			return choice;
		}
		static int rand_numb=Choice();*/
		ref class R{
		public:
			void Test(){
			array<String^,2>^ WORDS = gcnew array<String^,2>(10,3);
		WORDS[0,0] = "����";
		WORDS[0,1] = "����";
		WORDS[0,2] = "���, ����, �������";
		WORDS[1,0] = "�����";
		WORDS[1,1] = "�����";
		WORDS[1,2] = "���, ����, �������";
		WORDS[2,0] = "�����";
		WORDS[2,1] = "�����";
		WORDS[2,2] = "���, ����, ������";
		WORDS[3,0] = "�����";
		WORDS[3,1] = "�����";
		WORDS[3,2] = "���, ����, �����";
		WORDS[4,0] = "�����";
		WORDS[4,1] = "�����";
		WORDS[4,2] = "���, ����, ������";
		WORDS[5,0] = "������";
		WORDS[5,1] = "������";
		WORDS[5,2] = "���, ����, ���";
		WORDS[6,0] = "������";
		WORDS[6,1] = "������";
		WORDS[6,2] = "���, ����, �������";
		WORDS[7,0] = "������";
		WORDS[7,1] = "������";
		WORDS[7,2] = "���, ����, ������";
		WORDS[8,0] = "�����";
		WORDS[8,1] = "�����";
		WORDS[8,2] = "���, ����, ������";
		WORDS[9,0] = "������";
		WORDS[9,1] = "������";
		WORDS[9,2] = "���, ����, �����";
			}
		};

		static int Choice(){
			srand(static_cast<unsigned int>(time(0))); 
			int choice = (rand() % 10);
			return choice;
		}
		static int rand_numb=Choice();
		static bool WIN_GAME=false;
		static void win_game_func(bool win){
		 if(win==true){
		 	rand_numb=Choice();
		 }
		}
		/*if(Form2::button4_Click()){
			static int rand_numb=Choice();
		}*/
//	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
//				 MessageBox::Show("�����������������");
//				array<String^,1>^ A;
//		srand(static_cast<unsigned int>(time(0))); // ��������� ��������� ��������� ����� 
//	A=gcnew array<String^,1> (15);
//	array<Char>^ ar;
//	ar=gcnew array<Char> (1);
//	ar[0]=' ';
//	//��������� ������� � ���������� �������� ���� (textBox1).
//	array<String^>^ as;
//	for(int i=0;i<15;i++){
//		as=textBox1->Lines[i]->Split(ar);
//		A[i]=Convert::ToString(as[i]);
//}
//	System::String^ AYE = textBox1->Text;
//		//str=textBox1->Text;
//		//A=textBox1->Text;
//		//label5->Text = System::Convert::ToString(secretNumber);
//		 array<String^,2>^ WORDS = gcnew array<String^,2>(10,3);
//		WORDS[0,0] = "����";
//		WORDS[0,1] = "����";
//		WORDS[0,2] = "���, ����, �������";
//		WORDS[1,0] = "�����";
//		WORDS[1,1] = "�����";
//		WORDS[1,2] = "���, ����, �������";
//		WORDS[2,0] = "�����";
//		WORDS[2,1] = "�����";
//		WORDS[2,2] = "���, ����, ������";
//		WORDS[3,0] = "�����";
//		WORDS[3,1] = "�����";
//		WORDS[3,2] = "���, ����, �����";
//		WORDS[4,0] = "�����";
//		WORDS[4,1] = "�����";
//		WORDS[4,2] = "���, ����, ������";
//		WORDS[5,0] = "������";
//		WORDS[5,1] = "������";
//		WORDS[5,2] = "���, ����, ���";
//		WORDS[6,0] = "������";
//		WORDS[6,1] = "������";
//		WORDS[6,2] = "���, ����, �������";
//		WORDS[7,0] = "������";
//		WORDS[7,1] = "������";
//		WORDS[7,2] = "���, ����, ������";
//		WORDS[8,0] = "�����";
//		WORDS[8,1] = "�����";
//		WORDS[8,2] = "���, ����, ������";
//		WORDS[9,0] = "������";
//		WORDS[9,1] = "������";
//		WORDS[9,2] = "���, ����, �����";
//		//guess = Convert::ToInt32(textBox1->Text);
//		//int choice = (rand() % 10);
//		
//		/*if( textBox1->Text == WORDS[rand_numb,0] ){*/
//		if( AYE== "����" || AYE== "�����" || AYE == "�����" || AYE == "�����" || AYE == "�����" || AYE == "������" || AYE == "������" || AYE == "������" || AYE == "�����" || AYE == "������"  ){
//			label4->Text += WORDS[rand_numb,0];
//			this->BackColor = System::Drawing::Color::LightGreen;
//			WIN_GAME=true;
//			win_game_func(WIN_GAME);
//		}
//		else {
//			label4->Text = "�����: ������� ";
//			textBox1->Text="";
//			this->BackColor = System::Drawing::Color::Crimson;
//		}
//
//	}
		private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {

				
		srand(static_cast<unsigned int>(time(0))); // ��������� ��������� ��������� ����� 
		//array<String^,1>^ A;
//	A=gcnew array<String^,1> (15);
//	array<Char>^ ar;
//	ar=gcnew array<Char> (1);
//	ar[0]=' ';
//	//��������� ������� � ���������� �������� ���� (textBox1).
//	array<String^>^ as;
//	for(int i=0;i<15;i++){
//		as=textBox1->Lines[i]->Split(ar);
//		A[i]=Convert::ToString(as[i]);
//}
	System::String^ AYE = textBox1->Text;
		//str=textBox1->Text;
		//A=textBox1->Text;
		//label5->Text = System::Convert::ToString(secretNumber);
		 array<String^,2>^ WORDS = gcnew array<String^,2>(10,3);
		WORDS[0,0] = "����";
		WORDS[0,1] = "����";
		WORDS[0,2] = "���, ����, �������";
		WORDS[1,0] = "�����";
		WORDS[1,1] = "�����";
		WORDS[1,2] = "���, ����, �������";
		WORDS[2,0] = "�����";
		WORDS[2,1] = "�����";
		WORDS[2,2] = "���, ����, ������";
		WORDS[3,0] = "�����";
		WORDS[3,1] = "�����";
		WORDS[3,2] = "���, ����, �����";
		WORDS[4,0] = "�����";
		WORDS[4,1] = "�����";
		WORDS[4,2] = "���, ����, ������";
		WORDS[5,0] = "������";
		WORDS[5,1] = "������";
		WORDS[5,2] = "���, ����, ���";
		WORDS[6,0] = "������";
		WORDS[6,1] = "������";
		WORDS[6,2] = "���, ����, �������";
		WORDS[7,0] = "������";
		WORDS[7,1] = "������";
		WORDS[7,2] = "���, ����, ������";
		WORDS[8,0] = "�����";
		WORDS[8,1] = "�����";
		WORDS[8,2] = "���, ����, ������";
		WORDS[9,0] = "������";
		WORDS[9,1] = "������";
		WORDS[9,2] = "���, ����, �����";
		//guess = Convert::ToInt32(textBox1->Text);
		//int choice = (rand() % 10);
		
		/*if( textBox1->Text == WORDS[rand_numb,0] ){*/
		/*if( AYE== "����" || AYE== "�����" || AYE == "�����" || AYE == "�����" || AYE == "�����" || AYE == "������" || AYE == "������" || AYE == "������" || AYE == "�����" || AYE == "������"  ){*/
		if( AYE == WORDS[rand_numb,0] ){
			label4->Text += WORDS[rand_numb,0];
			this->BackColor = System::Drawing::Color::LightGreen;
			WIN_GAME=true;
			win_game_func(WIN_GAME);
		}
		else {
			label4->Text = "�����: ������� ";
			textBox1->Text="";
			this->BackColor = System::Drawing::Color::Crimson;
		}

	}
//private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
//	Close();
//}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 label5->Text=" ";
			 array<String^,2>^ WORDS = gcnew array<String^,2>(10,3);
		/*WORDS[0,0] = "����";
		WORDS[0,1] = "���, ����, �������";
		WORDS[1,0] = "�����";
		WORDS[1,1] = "���, ����, �������";
		WORDS[2,0] = "�����";
		WORDS[2,1] = "���, ����, ������";
		WORDS[3,0] = "�����";
		WORDS[3,1] = "���, ����, �����";
		WORDS[4,0] = "�����";
		WORDS[4,1] = "���, ����, ������";
		WORDS[5,0] = "������";
		WORDS[5,1] = "���, ����, ���";
		WORDS[6,0] = "������";
		WORDS[6,1] = "���, ����, �������";
		WORDS[7,0] = "������";
		WORDS[7,1] = "���, ����, ������";
		WORDS[8,0] = "�����";
		WORDS[8,1] = "���, ����, ������";
		WORDS[9,0] = "������";
		WORDS[9,1] = "���, ����, �����";
		array<String^,2>^ SHUFFLEWORDS = gcnew array<String^,2>(10,2);
		SHUFFLEWORDS[0,0] = "����";
		SHUFFLEWORDS[0,1] = "���, ����, �������";
		SHUFFLEWORDS[1,0] = "�����";
		SHUFFLEWORDS[1,1] = "���, ����, �������";
		SHUFFLEWORDS[2,0] = "�����";
		SHUFFLEWORDS[2,1] = "���, ����, ������";
		SHUFFLEWORDS[3,0] = "�����";
		SHUFFLEWORDS[3,1] = "���, ����, �����";
		SHUFFLEWORDS[4,0] = "�����";
		SHUFFLEWORDS[4,1] = "���, ����, ������";
		SHUFFLEWORDS[5,0] = "������";
		SHUFFLEWORDS[5,1] = "���, ����, ���";
		SHUFFLEWORDS[6,0] = "������";
		SHUFFLEWORDS[6,1] = "���, ����, �������";
		SHUFFLEWORDS[7,0] = "������";
		SHUFFLEWORDS[7,1] = "���, ����, ������";
		SHUFFLEWORDS[8,0] = "�����";
		SHUFFLEWORDS[8,1] = "���, ����, ������";
		SHUFFLEWORDS[9,0] = "������";
		SHUFFLEWORDS[9,1] = "���, ����, �����";*/
			 WORDS[0,0] = "����";
		WORDS[0,1] = "����";
		WORDS[0,2] = "���, ����, �������";
		WORDS[1,0] = "�����";
		WORDS[1,1] = "�����";
		WORDS[1,2] = "���, ����, �������";
		WORDS[2,0] = "�����";
		WORDS[2,1] = "�����";
		WORDS[2,2] = "���, ����, ������";
		WORDS[3,0] = "�����";
		WORDS[3,1] = "�����";
		WORDS[3,2] = "���, ����, �����";
		WORDS[4,0] = "�����";
		WORDS[4,1] = "�����";
		WORDS[4,2] = "���, ����, ������";
		WORDS[5,0] = "������";
		WORDS[5,1] = "������";
		WORDS[5,2] = "���, ����, ���";
		WORDS[6,0] = "������";
		WORDS[6,1] = "������";
		WORDS[6,2] = "���, ����, �������";
		WORDS[7,0] = "������";
		WORDS[7,1] = "������";
		WORDS[7,2] = "���, ����, ������";
		WORDS[8,0] = "�����";
		WORDS[8,1] = "�����";
		WORDS[8,2] = "���, ����, ������";
		WORDS[9,0] = "������";
		WORDS[9,1] = "������";
		WORDS[9,2] = "���, ����, �����";
				label5->Text = "���������: ";
				/*label5->Text += WORDS[Choice(),2];*/
				label5->Text+= WORDS[rand_numb,2];
		 }

private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		this->BackColor = System::Drawing::Color::LightCyan;
		label4->Text="�����: ";
		label5->Text="���������: ";
		label3->Text=" ";
		textBox1->Text="";
		array<String^,2>^ WORDS = gcnew array<String^,2>(10,3);
		/*WORDS[0,0] = "����";
		WORDS[0,1] = "���, ����, �������";
		WORDS[1,0] = "�����";
		WORDS[1,1] = "���, ����, �������";
		WORDS[2,0] = "�����";
		WORDS[2,1] = "���, ����, ������";
		WORDS[3,0] = "�����";
		WORDS[3,1] = "���, ����, �����";
		WORDS[4,0] = "�����";
		WORDS[4,1] = "���, ����, ������";
		WORDS[5,0] = "������";
		WORDS[5,1] = "���, ����, ���";
		WORDS[6,0] = "������";
		WORDS[6,1] = "���, ����, �������";
		WORDS[7,0] = "������";
		WORDS[7,1] = "���, ����, ������";
		WORDS[8,0] = "�����";
		WORDS[8,1] = "���, ����, ������";
		WORDS[9,0] = "������";
		WORDS[9,1] = "���, ����, �����";*/
		WORDS[0,0] = "����";
		WORDS[0,1] = "����";
		WORDS[0,2] = "���, ����, �������";
		WORDS[1,0] = "�����";
		WORDS[1,1] = "�����";
		WORDS[1,2] = "���, ����, �������";
		WORDS[2,0] = "�����";
		WORDS[2,1] = "�����";
		WORDS[2,2] = "���, ����, ������";
		WORDS[3,0] = "�����";
		WORDS[3,1] = "�����";
		WORDS[3,2] = "���, ����, �����";
		WORDS[4,0] = "�����";
		WORDS[4,1] = "�����";
		WORDS[4,2] = "���, ����, ������";
		WORDS[5,0] = "������";
		WORDS[5,1] = "������";
		WORDS[5,2] = "���, ����, ���";
		WORDS[6,0] = "������";
		WORDS[6,1] = "������";
		WORDS[6,2] = "���, ����, �������";
		WORDS[7,0] = "������";
		WORDS[7,1] = "������";
		WORDS[7,2] = "���, ����, ������";
		WORDS[8,0] = "�����";
		WORDS[8,1] = "�����";
		WORDS[8,2] = "���, ����, ������";
		WORDS[9,0] = "������";
		WORDS[9,1] = "������";
		WORDS[9,2] = "���, ����, �����";
		/*array<String^,2>^ SHUFFLEWORDS = gcnew array<String^,2>(10,2);
		SHUFFLEWORDS[0,0] = "����";
		SHUFFLEWORDS[0,1] = "���, ����, �������";
		SHUFFLEWORDS[1,0] = "�����";
		SHUFFLEWORDS[1,1] = "���, ����, �������";
		SHUFFLEWORDS[2,0] = "�����";
		SHUFFLEWORDS[2,1] = "���, ����, ������";
		SHUFFLEWORDS[3,0] = "�����";
		SHUFFLEWORDS[3,1] = "���, ����, �����";
		SHUFFLEWORDS[4,0] = "�����";
		SHUFFLEWORDS[4,1] = "���, ����, ������";
		SHUFFLEWORDS[5,0] = "������";
		SHUFFLEWORDS[5,1] = "���, ����, ���";
		SHUFFLEWORDS[6,0] = "������";
		SHUFFLEWORDS[6,1] = "���, ����, �������";
		SHUFFLEWORDS[7,0] = "������";
		SHUFFLEWORDS[7,1] = "���, ����, ������";
		SHUFFLEWORDS[8,0] = "�����";
		SHUFFLEWORDS[8,1] = "���, ����, ������";
		SHUFFLEWORDS[9,0] = "������";
		SHUFFLEWORDS[9,1] = "���, ����, �����";*/
		/*array<String^,1>^ SHUFFLEWORDS = gcnew array<String^,1>(20);
		SHUFFLEWORDS[0] = "���, ����, �������";
		SHUFFLEWORDS[1] = "���, ����, �������";
		SHUFFLEWORDS[2] = "���, ����, ������";
		SHUFFLEWORDS[3] = "���, ����, �����";
		SHUFFLEWORDS[4] = "���, ����, ������";
		SHUFFLEWORDS[5] = "���, ����, ���";
		SHUFFLEWORDS[6] = "���, ����, �������";
		SHUFFLEWORDS[7] = "���, ����, ������";
		SHUFFLEWORDS[8] = "���, ����, ������";
		SHUFFLEWORDS[9] = "���, ����, �����";*/
		label3->Text="���� ����������: ";
		//label3->Text+=WORDS[Choice(),0];
		label3->Text+= WORDS[rand_numb,1];
			 /*label3->Text = "���� ����������: ";
			 label3->Text += SHUFFLEWORDS[rand_numb,0];*/
		 }
private: System::Void button2_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 Close();
		 }
};
}