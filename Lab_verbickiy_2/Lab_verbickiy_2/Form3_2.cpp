#include "Form3_2.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void MainForm3_2(array<String^>^ args){
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Lab_verbickiy_2::Form3_2 form;
	Application::Run(%form);
}
