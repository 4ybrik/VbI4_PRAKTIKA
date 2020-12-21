#pragma once
namespace Lab_verbickiy_2 {

	using namespace System;
	using namespace System::Collections::Generic;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Text;
	using namespace System::Threading::Tasks;
	public ref class Form3_2 : public System::Windows::Forms::Form
	{
	public:
		Form3_2(void)
		{
			InitializeComponent();
		}

	protected:
		~Form3_2()
		{
			if (components)
			{
				delete components;
			}
		}
	public:
		 System::Windows::Forms::Label^ label1Form3_2;
		 System::Windows::Forms::Label^ label2Form3_2;
		 System::Windows::Forms::Label^ label3Form3_2;
	protected:
		private: System::Windows::Forms::Button^ buttonForm3_2;

	private: System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->label1Form3_2 = (gcnew System::Windows::Forms::Label());
			this->label2Form3_2 = (gcnew System::Windows::Forms::Label());
			this->label3Form3_2 = (gcnew System::Windows::Forms::Label());
			this->buttonForm3_2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1Form3_2
			// 
			this->label1Form3_2->AutoSize = true;
			this->label1Form3_2->Location = System::Drawing::Point(13, 27);
			this->label1Form3_2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1Form3_2->Name = L"label1Form3_2";
			this->label1Form3_2->Size = System::Drawing::Size(146, 17);
			this->label1Form3_2->TabIndex = 0;
			this->label1Form3_2->Text = L"Ваш первый вектор: ";
			// 
			// label2Form3_2
			// 
			this->label2Form3_2->AutoSize = true;
			this->label2Form3_2->Location = System::Drawing::Point(16, 55);
			this->label2Form3_2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2Form3_2->Name = L"label2Form3_2";
			this->label2Form3_2->Size = System::Drawing::Size(143, 17);
			this->label2Form3_2->TabIndex = 1;
			this->label2Form3_2->Text = L"Ваш второй вектор: ";
			// 
			// label3Form3_2
			// 
			this->label3Form3_2->AutoSize = true;
			this->label3Form3_2->Location = System::Drawing::Point(7, 83);
			this->label3Form3_2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3Form3_2->Name = L"label3Form3_2";
			this->label3Form3_2->Size = System::Drawing::Size(152, 17);
			this->label3Form3_2->TabIndex = 2;
			this->label3Form3_2->Text = L"Результат операции: ";
			// 
			// buttonForm3_2
			// 
			this->buttonForm3_2->Location = System::Drawing::Point(97, 158);
			this->buttonForm3_2->Margin = System::Windows::Forms::Padding(4);
			this->buttonForm3_2->Name = L"buttonForm3_2";
			this->buttonForm3_2->Size = System::Drawing::Size(159, 28);
			this->buttonForm3_2->TabIndex = 3;
			this->buttonForm3_2->Text = L"EXIT";
			this->buttonForm3_2->UseVisualStyleBackColor = true;
			this->buttonForm3_2->Click += gcnew System::EventHandler(this, &Form3_2::buttonForm3_2_Click);
			// 
			// Form3_2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(356, 199);
			this->Controls->Add(this->buttonForm3_2);
			this->Controls->Add(this->label1Form3_2);
			this->Controls->Add(this->label2Form3_2);
			this->Controls->Add(this->label3Form3_2);
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximizeBox = false;
			this->Name = L"Form3_2";
			this->Text = L"Результат";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		private: System::Void buttonForm3_2_Click(System::Object^ sender, System::EventArgs^ e) {
				 Close();
		}
	};
}

