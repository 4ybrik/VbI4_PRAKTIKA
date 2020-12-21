#pragma once

#pragma once
#include <stdio.h>
#include <string.h>
#include < vcclr.h >
#include <cstdlib> 
#include <ctime> 
#include <string>
#include <iostream>
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
	public ref class Form4 : public System::Windows::Forms::Form
	{
	public:
		Form4(void)
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
		~Form4()
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
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
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
			this->label1->Location = System::Drawing::Point(136, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(386, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Добро пожаловать в СЛОЖНЫЙ УРОВЕНЬ \"Словомески\"";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			//this->label2->BackColor = System::Drawing::Color::LightGoldenrodYellow;
			this->label2->Location = System::Drawing::Point(40, 67);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(416, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Ваш iq - 200. Вы - Чемпион мира по шашкам. Магнус Карлсен";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			//this->label3->BackColor = System::Drawing::Color::LightGoldenrodYellow;
			this->label3->Location = System::Drawing::Point(115, 115);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(129, 17);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Ваша словомеска:";
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
			this->button1->BackColor = System::Drawing::Color::LightGoldenrodYellow;
			this->button1->Location = System::Drawing::Point(211, 212);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(211, 26);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Ввод слова";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form4::button1_Click_1);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			//this->label4->BackColor = System::Drawing::Color::LightGoldenrodYellow;
			this->label4->Location = System::Drawing::Point(208, 260);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(52, 17);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Ответ:";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::LightGoldenrodYellow;
			this->button2->Location = System::Drawing::Point(29, 290);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(112, 38);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Exit";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form4::button2_Click_1);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::LightGoldenrodYellow;
			this->button3->Location = System::Drawing::Point(491, 62);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(142, 26);
			this->button3->TabIndex = 8;
			this->button3->Text = L"Подсказка";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form4::button3_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			//this->label5->BackColor = System::Drawing::Color::LightGoldenrodYellow;
			this->label5->Location = System::Drawing::Point(431, 115);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(82, 17);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Подсказка:";
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::LightGoldenrodYellow;
			this->button4->Location = System::Drawing::Point(12, 11);
			this->button4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(72, 26);
			this->button4->TabIndex = 10;
			this->button4->Text = L"Старт";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Form4::button4_Click);
			// 
			// Form4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightGoldenrodYellow;
			this->ClientSize = System::Drawing::Size(645, 339);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"Form4";
			this->Text = L"Сложный уровень";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion



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
		private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		srand(static_cast<unsigned int>(time(0))); // запускаем генератор случайных чисел 
	System::String^ AYE = textBox1->Text;
		 array<String^,2>^ WORDS = gcnew array<String^,2>(10,3);
		WORDS[0,0] = "телепередача";
		WORDS[0,1] = "пелеечартеда";
		WORDS[0,2] = "нет, блин, ютубканал";
		WORDS[1,0] = "параллелограмм";
		WORDS[1,1] = "амрпглеломарла";
		WORDS[1,2] = "нет, блин, прямоугольник";
		WORDS[2,0] = "газообразование";
		WORDS[2,1] = "бовзаринаогзаео";
		WORDS[2,2] = "нет, блин, жидкоразрушение";
		WORDS[3,0] = "газонокосилка";
		WORDS[3,1] = "аконогазлисок";
		WORDS[3,2] = "нет, блин, грабли";
		WORDS[4,0] = "квадрокоптер";
		WORDS[4,1] = "докрпевакрто";
		WORDS[4,2] = "нет, блин, вертолет";
		WORDS[5,0] = "хачапури";
		WORDS[5,1] = "пауричах";
		WORDS[5,2] = "нет, блин, шаурма";
		WORDS[6,0] = "тамагавк";
		WORDS[6,1] = "ваагкмат";
		WORDS[6,2] = "нет, блин, булава";
		WORDS[7,0] = "пуловер";
		WORDS[7,1] = "руплвое";
		WORDS[7,2] = "нет, блин, свитер";
		WORDS[8,0] = "клаустрофобия";
		WORDS[8,1] = "бофияросткалу";
		WORDS[8,2] = "нет, блин, страх";
		WORDS[9,0] = "телекинез";
		WORDS[9,1] = "кзенилеет";
		WORDS[9,2] = "нет, блин, магия";
		if( AYE == WORDS[rand_numb,0] ){
			label4->Text += WORDS[rand_numb,0];
			this->BackColor = System::Drawing::Color::LightGreen;
			WIN_GAME=true;
			win_game_func(WIN_GAME);
		}
		else {
			label4->Text = "Ответ: неверен ";
			textBox1->Text="";
			this->BackColor = System::Drawing::Color::Crimson;
		}

	}

private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 label5->Text=" ";
			 array<String^,2>^ WORDS = gcnew array<String^,2>(10,3);
		WORDS[0,0] = "телепередача";
		WORDS[0,1] = "пелеечартеда";
		WORDS[0,2] = "нет, блин, ютубканал";
		WORDS[1,0] = "параллелограмм";
		WORDS[1,1] = "амрпглеломарла";
		WORDS[1,2] = "нет, блин, прямоугольник";
		WORDS[2,0] = "газообразование";
		WORDS[2,1] = "бовзаринаогзаео";
		WORDS[2,2] = "нет, блин, жидкоразрушение";
		WORDS[3,0] = "газонокосилка";
		WORDS[3,1] = "аконогазлисок";
		WORDS[3,2] = "нет, блин, грабли";
		WORDS[4,0] = "квадрокоптер";
		WORDS[4,1] = "докрпевакрто";
		WORDS[4,2] = "нет, блин, вертолет";
		WORDS[5,0] = "хачапури";
		WORDS[5,1] = "пауричах";
		WORDS[5,2] = "нет, блин, шаурма";
		WORDS[6,0] = "тамагавк";
		WORDS[6,1] = "ваагкмат";
		WORDS[6,2] = "нет, блин, булава";
		WORDS[7,0] = "пуловер";
		WORDS[7,1] = "руплвое";
		WORDS[7,2] = "нет, блин, свитер";
		WORDS[8,0] = "клаустрофобия";
		WORDS[8,1] = "бофияросткалу";
		WORDS[8,2] = "нет, блин, страх";
		WORDS[9,0] = "телекинез";
		WORDS[9,1] = "кзенилеет";
		WORDS[9,2] = "нет, блин, магия";
				label5->Text = "Подсказка: ";
			
				label5->Text+= WORDS[rand_numb,2];
		 }

private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		this->BackColor = System::Drawing::Color::LightGoldenrodYellow;
		label4->Text="Ответ: ";
		label5->Text="Подсказка: ";
		label3->Text=" ";
		textBox1->Text="";
		array<String^,2>^ WORDS = gcnew array<String^,2>(10,3);
		
	WORDS[0,0] = "телепередача";
		WORDS[0,1] = "пелеечартеда";
		WORDS[0,2] = "нет, блин, ютубканал";
		WORDS[1,0] = "параллелограмм";
		WORDS[1,1] = "амрпглеломарла";
		WORDS[1,2] = "нет, блин, прямоугольник";
		WORDS[2,0] = "газообразование";
		WORDS[2,1] = "бовзаринаогзаео";
		WORDS[2,2] = "нет, блин, жидкоразрушение";
		WORDS[3,0] = "газонокосилка";
		WORDS[3,1] = "аконогазлисок";
		WORDS[3,2] = "нет, блин, грабли";
		WORDS[4,0] = "квадрокоптер";
		WORDS[4,1] = "докрпевакрто";
		WORDS[4,2] = "нет, блин, вертолет";
		WORDS[5,0] = "хачапури";
		WORDS[5,1] = "пауричах";
		WORDS[5,2] = "нет, блин, шаурма";
		WORDS[6,0] = "тамагавк";
		WORDS[6,1] = "ваагкмат";
		WORDS[6,2] = "нет, блин, булава";
		WORDS[7,0] = "пуловер";
		WORDS[7,1] = "руплвое";
		WORDS[7,2] = "нет, блин, свитер";
		WORDS[8,0] = "клаустрофобия";
		WORDS[8,1] = "бофияросткалу";
		WORDS[8,2] = "нет, блин, страх";
		WORDS[9,0] = "телекинез";
		WORDS[9,1] = "кзенилеет";
		WORDS[9,2] = "нет, блин, магия";
		
		label3->Text="Ваша словомеска: ";
		label3->Text+= WORDS[rand_numb,1];
			 
		 }
private: System::Void button2_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 Close();
		 }
};
}