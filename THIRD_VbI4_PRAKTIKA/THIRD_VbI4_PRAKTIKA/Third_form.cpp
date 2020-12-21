#include "Third_form.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void main(array<String^>^ args){
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	THIRD_VbI4_PRAKTIKA::Form1 form;
	Application::Run(%form);
}