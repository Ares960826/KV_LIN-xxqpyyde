// Kvaser_Lin.cpp: ����Ŀ�ļ���

#include "stdafx.h"
#include "Form1.h"

using namespace Kvaser_Lin;
using namespace linlibCLSNET;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// �ڴ����κοؼ�֮ǰ���� Windows XP ���ӻ�Ч��
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 
	Linlib::linInitializeLibrary();
	// ���������ڲ�������
	Application::Run(gcnew Form1());
	return 0;
}
