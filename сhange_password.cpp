#include "�hange_password.h"
#include "functions.h"

// ����� ��� ��������
#include "admin_menu.h"

// ������� ������
System::Void practical_work::�hange_password::button1_Click(System::Object^  sender, System::EventArgs^  e)
{
	char pas[256] = {};
	FILE *fptr;
    fptr = fopen("password.txt","at");
	if( fptr == NULL)
	{
		MessageBox::Show("�� ������� ������� ���� password.txt.","������");
		fclose(fptr);
		Application::Exit(); // �������� �����
	}
	else
	{
		fclose(fptr);
		fptr = fopen("password.txt","rt");
		if( fptr == NULL)
		{
			MessageBox::Show("�� ������� ������� ���� password.txt.","������");
			fclose(fptr);
			Application::Exit(); // �������� �����
		}
		else
		{
			rewind(fptr);
			fscanf(fptr,"%s", &pas);
			fclose(fptr);
		}
	}

	if( strcmp(pas,Convert_String_to_char(old_pas->Text)) == 0 )
	{
		if( strlen(Convert_String_to_char(new_pas->Text)) > 0 && strlen(Convert_String_to_char(new_pas->Text)) < 201 )
		{
			fptr = fopen("password.txt","wt");
			if( fptr == NULL )
			{
				MessageBox::Show("�� ������� ������� ���� password.txt.","������");
				fclose(fptr);
				Application::Exit(); // �������� �����
			}
			else
			{
				rewind(fptr);
				fprintf(fptr,"%s", Convert_String_to_char(new_pas->Text));
				fclose(fptr);
				old_pas->Text = "";
				new_pas->Text = "";
				MessageBox::Show("��� ������ ������� ������!.","����� ������");
			}
		}
		else
		{
			old_pas->Text = "";
			new_pas->Text = "";
			MessageBox::Show("�� ����� ����� ������ �� ����������� �������. �� ������ ����   ( > 0 ��� <= 200 ) ��������.","������");
		}
	}
	else
	{
		old_pas->Text = "";
		new_pas->Text = "";
		MessageBox::Show("�� ����� �� ���������� ������ ������!","������");
	}
}
// ��������� � ���� ��������������
System::Void practical_work::�hange_password::����������������������������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
{
	admin_menu^ form = gcnew admin_menu();
	this->Hide();
	form->Show();
}
// ����� �� ���������
System::Void practical_work::�hange_password::����������������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
{
	Application::Exit();
}
// �� ����
System::Void practical_work::�hange_password::������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
{
	MessageBox::Show("� ���� ���� �� ������ ������� ������ ��� ����� � ����� ��������������, ��� ��� ��� ���� ������ ������ ������ ��������������, � ����� ����� ������, �� ������ ���� ( > 0 ��� <= 200 ) ��������.","�� ����");
}