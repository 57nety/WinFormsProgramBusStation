#include "edit_type_selection.h"

// ��������� ����� ��� ��������
#include "admin_menu.h"
#include "edit_specific_field.h"
#include "delete_a_specific_flight.h"

// ��������� � ���� ��������������
System::Void practical_work::edit_type_selection::��������������������������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
{
	admin_menu^ form = gcnew admin_menu();
	this->Hide();
	form->Show();
}
// ����� �� ���������
System::Void practical_work::edit_type_selection::����������������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
{
	Application::Exit();
}
// �� ����
System::Void practical_work::edit_type_selection::������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
{
	MessageBox::Show("� ������ ���� �� ������ ������� �� ��������, ������� �� ������ ������� � ����� ������.����� �� ������ ��������� � ���� ��������������, ��� ����� �� ���������.","�� ����");
}
// ������������� ����������� ���� � �����
System::Void practical_work::edit_type_selection::button1_Click(System::Object^  sender, System::EventArgs^  e)
{
	edit_specific_field^ form = gcnew edit_specific_field();
	this->Hide();
	form->Show();
}
// ������� ����������� ����
System::Void practical_work::edit_type_selection::button2_Click(System::Object^  sender, System::EventArgs^  e)
{
	delete_a_specific_flight^ form = gcnew delete_a_specific_flight();
	this->Hide();
	form->Show();
}