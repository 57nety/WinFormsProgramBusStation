#include "administrator_identification.h"
#include <string.h>
#include <iostream>
#include "functions.h"

// ��������� ����� ��� ��������
#include "user_choice.h"
#include "admin_menu.h"

// ��������� � ����� ������������
System::Void practical_work::administrator_identification::���������������������������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
{
	user_choice^ form = gcnew user_choice();
	this->Hide();
	form->Show();
}
// ����� �� ���������
System::Void practical_work::administrator_identification::����������������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
{
	Application::Exit(); // �������� �����
}
// ���������� �� ����
System::Void practical_work::administrator_identification::������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
{
	MessageBox::Show("��� ����, ��� �� ����� � ����� ��������������, ��� ���� ������ ���������� ������ (�� ��������� ��� 0000). �� ������ ����� �� ������ ������� ���������, ��� ��������� � ����� ������������.","�� ����");
}
// ���� � ����� ��������������
System::Void practical_work::administrator_identification::button1_Click(System::Object^  sender, System::EventArgs^  e)
{
	char pas[256] = {};
	FILE *fptr;
    fptr = fopen("password.txt","at");
	if( fptr == NULL)
	{
		MessageBox::Show("�� ������� ������� ���� password.txt.","������");
		fclose(fptr);
		this->Hide(); // �������� �����
	}
	else
	{
		fclose(fptr);
		fptr = fopen("password.txt","r");
		if( fptr == NULL)
		{
			MessageBox::Show("�� ������� ������� ���� password.txt.","������");
			fclose(fptr);
			this->Hide(); // �������� �����
		}
		else
		{
			rewind(fptr);
			fscanf(fptr,"%s", &pas);
			fclose(fptr);
		}
	}
	if( strcmp(pas,Convert_String_to_char(password->Text)) == 0 )
	{
		admin_menu^ form = gcnew admin_menu();
		this->Hide();
		form->Show();
	}
	else
	{
		password->Text = "";
		MessageBox::Show("�� ����� �� ���������� ������!","������");
	}
}