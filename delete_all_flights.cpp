#include "delete_all_flights.h"
#include "functions.h"

// �� ����
System::Void practical_work::delete_all_flights::������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
{
	MessageBox::Show("���� �� ������ ������� ��� ����� �� ���� ������, �� ������� ������ �� ������ ��������������, � ������� ������ ������� ��� �����. ���� �� ���������� ��� ������, �� �� ������ ������ ������ ������, ��� ������ ������� ����, ����� �� �������.","�� ����");
}
// ������� ��� �����
System::Void practical_work::delete_all_flights::button1_Click(System::Object^  sender, System::EventArgs^  e)
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
		fptr = fopen("password.txt","r");
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
	if( strcmp(pas,Convert_String_to_char(password->Text)) == 0 )
	{
		fptr = fopen("flight_schedule.txt","wt");
		if( fptr == NULL)
		{
			MessageBox::Show("�� ������� ������� ���� flight_schedule.txt.","������");
			fclose(fptr);
			Application::Exit(); // �������� �����
		}
		else
		{
			fclose(fptr);
		}
		password->Text = "";
		MessageBox::Show("�� ������� ��� ����� �� ���� ������.","�������� ���� ������");
		this->Hide();
	}
	else
	{
		password->Text = "";
		MessageBox::Show("�� ����� �� ���������� ������!","������");
	}
}
// ������
System::Void practical_work::delete_all_flights::button2_Click(System::Object^  sender, System::EventArgs^  e)
{
	this->Hide();
}