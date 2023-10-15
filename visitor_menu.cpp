#include "visitor_menu.h"
#include "functions.h"

// ��������� ����� ��� ��������
#include "flight_output_user.h"
#include "user_choice.h"
#include "flight_output_on_request_user.h"
#include "game_in_the_city.h"

// ��������� � ����� ������������
System::Void practical_work::visitor_menu::���������������������������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
{
	user_choice^ form = gcnew user_choice();
	this->Hide();
	form->Show();
}
// ����� �� ���������
System::Void practical_work::visitor_menu::����������������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
{
	Application::Exit();
}
// �� ����
System::Void practical_work::visitor_menu::������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
{
	MessageBox::Show("� ���� ���� ���������� �� ������ ���������� ��� �����, ������� ��������� � ���� ������, ������� �� �����, ������� ������������� ������ �������, ������� � ���� ������. ����� �� ������ ��������� � ����� ������������ ��� ����� �� ���������.","�� ����");
}
// ����� ��������� ������
System::Void practical_work::visitor_menu::button3_Click(System::Object^  sender, System::EventArgs^  e)
{
	FILE *fptr;
	char flight_number[SIZE] = {},destination[SIZE] = {},departure_date[SIZE] = {},departure_time[SIZE] = {},total_number_of_seats[SIZE] = {},ticket_price[SIZE] = {};
	int number_of_flights;
    fptr = fopen("flight_schedule.txt","at");
	if( fptr == NULL)
	{
		fclose(fptr);
		MessageBox::Show("�� ������� ������� ���� flight_schedule.txt","������");
		this->Hide();
	}
	else
	{
		fclose(fptr);
		fptr = fopen("flight_schedule.txt","rt");
		if( fptr == NULL)
		{
			fclose(fptr);
			MessageBox::Show("�� ������� ������� ���� flight_schedule.txt","������");
			this->Hide();
		}
		else
		{
			rewind(fptr);
			number_of_flights = 0;
			while( fscanf(fptr,"%s%s%s%s%s%s", flight_number,destination,departure_date,departure_time,total_number_of_seats,ticket_price) != EOF )
				number_of_flights++;
			fclose(fptr);
			if( number_of_flights == 0 )
			{
				MessageBox::Show("������ ������ ����!","������");
			}
			else
			{
				flight_output_user^ form = gcnew flight_output_user();
				this->Hide();
				form->Show();
			}
		}
	}
}
// ����� ������ �� �������
System::Void practical_work::visitor_menu::button1_Click(System::Object^  sender, System::EventArgs^  e)
{
	FILE *fptr;
	char flight_number[SIZE] = {},destination[SIZE] = {},departure_date[SIZE] = {},departure_time[SIZE] = {},total_number_of_seats[SIZE] = {},ticket_price[SIZE] = {};
	int number_of_flights;
    fptr = fopen("flight_schedule.txt","at");
	if( fptr == NULL)
	{
		fclose(fptr);
		MessageBox::Show("�� ������� ������� ���� flight_schedule.txt","������");
		this->Hide();
	}
	else
	{
		fclose(fptr);
		fptr = fopen("flight_schedule.txt","rt");
		if( fptr == NULL)
		{
			fclose(fptr);
			MessageBox::Show("�� ������� ������� ���� flight_schedule.txt","������");
			this->Hide();
		}
		else
		{
			rewind(fptr);
			number_of_flights = 0;
			while( fscanf(fptr,"%s%s%s%s%s%s", flight_number,destination,departure_date,departure_time,total_number_of_seats,ticket_price) != EOF )
				number_of_flights++;
			fclose(fptr);
			if( number_of_flights == 0 )
			{
				MessageBox::Show("������ ������ ����!","������");
			}
			else
			{
				flight_output_on_request_user^ form = gcnew flight_output_on_request_user();
				this->Hide();
				form->Show();
			}
		}
	}
}
// ������� � ���� ������
System::Void practical_work::visitor_menu::button2_Click(System::Object^  sender, System::EventArgs^  e)
{
	game_in_the_city^ form = gcnew game_in_the_city();
	this->Hide();
	form->Show();
}