#include <iostream>
#include <istream>
#include <fstream>
#include <string>
#include <windows.h>
#include "b2.h"

using std::ios;
using std::ofstream;

int main() {

	std::cout << "������Ԥ�����ã���������Y����������N;ȷ���������ٴ�����C������������ٴ�����A)" << std::endl;

	Preset p1;//�Ƿ���������
	for (;;) {

		std::cout << "Ԥ����Ŀ1:�Ƿ���������" << std::endl;
		getline(std::cin, p1.b1);

		if (p1.b1 == "Y") {

			system("color 07");
			std::cout << "�Ƿ�ȷ�Ͽ������" << std::endl;
			getline(std::cin, p1.b2);

			if (p1.b2 == "C") {

				system("color 07");
				break;
			}
			else if (p1.b2 == "A") {
				system("color 07");
				continue;
			}
			else {
				system("color 04");
				std::cout << "δ֪��ѡ����������룡" << std::endl;
				continue;
			}
		}

		else if (p1.b1 == "N") {

			system("color 07");
			std::cout << "�Ƿ�ȷ�Ϲرո��" << std::endl;
			getline(std::cin, p1.b2);

			if (p1.b2 == "C") {

				system("color 07");
				break;
			}
			else if (p1.b2 == "A") {
				system("color 07");
				continue;
			}
			else {
				system("color 04");
				std::cout << "δ֪��ѡ����������룡" << std::endl;
				continue;
			}
		}

		else {
			system("color 04");
			std::cout << "δ֪��ѡ����������룡" << std::endl;
			continue;
		}
	}

	Preset p2;//�Ƿ񳬹�������ֵ
	for (;;) {

		std::cout << "Ԥ����Ŀ2:��������Ա�����Ƿ񳬹�������ֵ��65535����" << std::endl;
		getline(std::cin, p2.b1);

		if (p2.b1 == "Y") {

			std::cout << "�Ƿ�ȷ�Ͽ������" << std::endl;
			getline(std::cin, p2.b2);

			if (p2.b2 == "C") {
				system("color 07");
				break;
			}
			else if (p2.b2 == "A") {
				system("color 07");
				continue;
			}
			else {
				std::cout << "δ֪��ѡ����������룡" << std::endl;
				system("color 04");
				continue;
			}
		}

		else if (p2.b1 == "N") {

			std::cout << "�Ƿ�ȷ�Ϲرո��" << std::endl;
			getline(std::cin, p2.b2);

			if (p2.b2 == "C") {

				system("color 07");
				break;
			}
			else if (p2.b2 == "A") {
				system("color 07");
				continue;
			}
			else {
				system("color 04");
				std::cout << "δ֪��ѡ����������룡" << std::endl;
				continue;
			}
		}

		else {
			system("color 04");
			std::cout << "δ֪��ѡ����������룡" << std::endl;
			continue;
		}
	}

	Preset p3;//�Ƿ��ģʽ
	for (;;) {

		std::cout << "Ԥ����Ŀ3:�Ƿ�����ģʽ��" << std::endl;
		getline(std::cin, p3.b1);

		if (p3.b1 == "Y") {
			std::cout << "�Ƿ�ȷ�Ͽ������" << std::endl;
			getline(std::cin, p3.b2);

			if (p3.b2 == "C") {
				system("color 07");

				break;
			}
			else if (p3.b2 == "A") {
				system("color 07");
				continue;
			}
			else {
				std::cout << "δ֪��ѡ����������룡" << std::endl;
				system("color 04");
				continue;
			}
		}

		else if (p3.b1 == "N") {

			std::cout << "�Ƿ�ȷ�Ϲرո��" << std::endl;
			getline(std::cin, p3.b2);

			if (p3.b2 == "C") {

				system("color 07");
				break;
			}
			else if (p3.b2 == "A") {
				system("color 07");
				continue;
			}
			else {
				system("color 04");
				std::cout << "δ֪��ѡ����������룡" << std::endl;
				continue;
			}
		}

		else {
			system("color 04");
			std::cout << "δ֪��ѡ����������룡" << std::endl;
			continue;
		}
	}
	//Ԥ������

	SimpleMode SM1;
	std::ofstream OFS1;
	OFS1.open("AnswerStorage.txt");
	for (;;) {
		std::cout << "��" << ++SM1.c1 << "��" << std::endl;
		std::cout << "������Ԥ���(����OΪ�������룩��" << std::endl;
		getline(std::cin, SM1.c2);
		OFS1 << SM1.c2 << std::endl;

		if (SM1.c2 == "O") {
			OFS1.close();
			std::cout << "�Ƿ�ȷ�ϴ𰸣�����������Y����������N��" << std::endl;
			getline(std::cin, SM1.c3);
			if (SM1.c3 == "Y") {
				std::cout << "�洢�ļ��ѱ��棡" << std::endl;
				break;
			}
			else if (SM1.c3 == "N") {
				remove("AnswerStorage.txt");
				std::cout << "�洢�ļ���ɾ�������������г���" << std::endl;
				break;
			}
			else {
				std::cout << "δ֪��ѡ��洢�ļ��ѱ������һ�����룡���������г���" << std::endl;
				break;
			}
		}

		else {
			continue;
		}
	}
	//��ģʽ

	return 0;
}

