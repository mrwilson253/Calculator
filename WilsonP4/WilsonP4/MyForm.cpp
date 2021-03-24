/*
* Jordan Wilson
* jwilson160@cnm.edu
* WilsonP4
* MyForm.cpp
*/

#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void Main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	WilsonP4 ::MyForm form;
	Application::Run(% form);
}
