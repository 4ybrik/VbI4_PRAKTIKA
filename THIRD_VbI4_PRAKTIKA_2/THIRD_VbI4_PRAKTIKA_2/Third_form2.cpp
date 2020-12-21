#include "Third_form2.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void main(array<String^>^ args){
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	THIRD_VbI4_PRAKTIKA_2::Form1 form;
	Application::Run(%form);
}