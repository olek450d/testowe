#include "stdafx.h"
#include "Program.h"

#include "Form1.h"

void Program::Main()
{
	Win32::Forms::Application::Run(new Form1());
}
