#include "user_choice.h"

// ��������� ����� ��� ��������
#include "administrator_identification.h"
#include "visitor_menu.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	practical_work::user_choice form;
	Application::Run(%form);
}
// ����� �� ���������
System::Void practical_work::user_choice::����������������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
{
	Application::Exit(); // �������� �����
}
// ���������� �� ����
System::Void practical_work::user_choice::������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
{
	MessageBox::Show("��� ������ � ���������� ��� ���� ������� ������������, � ������ �������� �� ������ ����� � ���������. ����� �������������� ��������� ��� ������������� ������ ������. ����� ������������ ��������� ��� ������ ������������ � ��������� ������� ������, � ��� �� ������� � ����.","�� ����");
}
// ������� � ����� ��������������
System::Void practical_work::user_choice::button1_Click(System::Object^  sender, System::EventArgs^  e)
{
	administrator_identification^ form = gcnew administrator_identification(); // ������ ����� �����
	this->Hide(); // �������� ������� �����
	form->Show(); // ��������� ��������� �����
}
// ������� � ����� ����������
System::Void practical_work::user_choice::button2_Click(System::Object^  sender, System::EventArgs^  e)
{
	visitor_menu^ form = gcnew visitor_menu();
	this->Hide();
	form->Show();
}