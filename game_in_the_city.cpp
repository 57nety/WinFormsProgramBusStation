#include "game_in_the_city.h"
#include "functions.h"


// ��������� ����� ��� ��������
#include "visitor_menu.h"

// ��������� � ���� ����������
System::Void practical_work::game_in_the_city::���������������������������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
{
	FILE *fptr;
	fptr = fopen("use_town.txt","wt");
	if( fptr == NULL )
	{
		fclose(fptr);
		this->Hide();
		MessageBox::Show("�� ������� ������� ���� use_town.txt! ��������� ��������� ���� ������.","������");
	}
	else
	{
		fclose(fptr);
		remove("use_town.txt");
		visitor_menu^ form = gcnew visitor_menu();
		this->Hide();
		form->Show();
	}
}
// ����� �� ���������
System::Void practical_work::game_in_the_city::����������������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
{
	FILE *fptr;
	fptr = fopen("use_town.txt","wt");
	if( fptr == NULL )
	{
		fclose(fptr);
		this->Hide();
		MessageBox::Show("�� ������� ������� ���� use_town.txt! ��������� ��������� ���� ������.","������");
	}
	else
	{
		fclose(fptr);
		remove("use_town.txt");
		Application::Exit();
	}
}
// �� ����
System::Void practical_work::game_in_the_city::������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
{
	MessageBox::Show("� ���� \"���� � ������\" �� ������� � ������ � �����������, � ��������� ������ �������, �� ��� ���� ������ �������� ������ �� ������, ����� ����� ��������� ������� ���, ��� ���� ��������� ����� �����, ������� �� ���������� �� �� �����, �� ������� ������������� �������� ������, ��������� �����������. ����� ������ �� ������ ��������. ����� �� ������ ��������� � ���� ������ ������ ������ ��� ����� �� ���������.","�� ����");
}
// �������
System::Void practical_work::game_in_the_city::button2_Click(System::Object^  sender, System::EventArgs^  e)
{
	FILE *fptr;
	fptr = fopen("use_town.txt","wt");
	if( fptr == NULL )
	{
		fclose(fptr);
		this->Hide();
		MessageBox::Show("�� ������� ������� ���� use_town.txt! ��������� ��������� ���� ������.","������");
	}
	else
	{
		fclose(fptr);
		remove("use_town.txt");
		visitor_menu^ form = gcnew visitor_menu();
		this->Hide();
		form->Show();
		MessageBox::Show("��� ��� �� �������, ������ ������� ���������. ����� ��� � ��������� �����.","�� �������!");
	}
}
// ��������
System::Void practical_work::game_in_the_city::button1_Click(System::Object^  sender, System::EventArgs^  e)
{
	char *input_town, *output_town;
	char use_town[SIZE] = {}, end_simbol[4] = {};
	int counter;

	end_simbol[0] = end_simbol[2] = '\'';
	end_simbol[3] = '\0';

	input_town = Convert_String_to_char(input->Text);
	output_town = Convert_String_to_char(output->Text);

	FILE *fptr;
	fptr = fopen("use_town.txt","at");
	if( fptr == NULL )
	{
		fclose(fptr);
		this->Hide();
		MessageBox::Show("�� ������� ������� ���� use_town.txt! ��������� ��������� ���� ������.","������");
	}
	fclose(fptr);
	fptr = fopen("use_town.txt","rt");
	if( fptr == NULL )
	{
		fclose(fptr);
		this->Hide();
		MessageBox::Show("�� ������� ������� ���� use_town.txt! ��������� ��������� ���� ������.","������");
	}
	else
	{
		counter = 0;
		while( fscanf(fptr,"%s",use_town) != EOF )
			counter++;
		fclose(fptr);
	}

	if( input->Text == "" && counter == 0 )
	{
		info->Text = "������� �������� ������ ����������� ������";
	}
	else if( input->Text == "" && counter != 0 )
	{
		end_simbol[1] = output_town[strlen(output_town)-1] - 32;
		info->Text = "������� �������� ������ ����������� ������, ������� ��� �� �������������  �� ����� " + Convert_string_to_String((std::string)end_simbol);
	}
	else
	{
		if( strlen(output_town) > 0 )
			end_simbol[1] = output_town[strlen(output_town)-1];
		else
			end_simbol[1] = 0;

		switch(city_check(input_town,end_simbol))
		{
			case -5:
				input->Text = "";
				info->Text = "� �� ���� ������ ������ � ������";
				break;
			case -4:
				input->Text = "";
				info->Text = "������ ����� ��� �������������";
				break;
			case -3:
				input->Text = "";
				end_simbol[1] = end_simbol[1] - 32;
				info->Text = "�� ����� �������� ������ �� �� ����� " + Convert_string_to_String((std::string)end_simbol);
				break;
			case -2:
				this->Hide();
				MessageBox::Show("�� ������� ������� ���� use_town.txt! ��������� ��������� ���� ������.","������");
				break;
			case -1:
				this->Hide();
				MessageBox::Show("�� ������� ������� ���� cities.txt! ��������� ��������� ���� ������.","������");
				break;
			case  0:
				switch(city_search(input_town,output_town))
				{
					case -2:
						this->Hide();
						MessageBox::Show("�� ������� ������� ���� use_town.txt! ��������� ��������� ���� ������.","������");
						break;
					case -1:
						this->Hide();
						MessageBox::Show("�� ������� ������� ���� cities.txt! ��������� ��������� ���� ������.","������");
						break;
					case  0:
						input->Text = "";
						output->Text = Convert_string_to_String((std::string)output_town);
						end_simbol[1] = output_town[strlen(output_town)-1] - 32;
						info->Text = "������� �������� ������ ����������� ������, ������� ��� �� �������������  �� ����� " + Convert_string_to_String((std::string)end_simbol);
						break;
					case  1:
						remove("use_town.txt");
						visitor_menu^ form = gcnew visitor_menu();
						this->Hide();
						form->Show();
						MessageBox::Show("���������� �� ��������!","������");
						break;
				}
				break;
		}
	}
}
// ������ ����������� �����
System::Void practical_work::game_in_the_city::game_in_the_city_Shown(System::Object^  sender, System::EventArgs^  e)
{
	info->Text = "������� �������� ������ ����������� ������";
}