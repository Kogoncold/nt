#include <iostream>
#include <vector>
#include <istream>
#include <fstream>
#include <string>
#include <windows.h>
#include <thread>

#include "����.h"
#include "�ṹ��.h"
#include "��.h"
#include "�߳�1.h"

using std::ios;
using std::ofstream;

void T1() {
	Preset p1;//�Ƿ���������
	for (;;) {

		std::cout << "Ԥ����Ŀ1:�Ƿ���������" << std::endl;
		getline(std::cin, p1.b1);

		if (p1.b1 == "Y") {
			std::cout << "�Ƿ�ȷ�Ͽ������" << std::endl;
			getline(std::cin, p1.b2);

			if (p1.b2 == "C") {

				break;
			}
			else if (p1.b2 == "A") {
				continue;
			}
			else {
				std::cout << "δ֪��ѡ����������룡" << std::endl;
				continue;
			}
		}

		else if (p1.b1 == "N") {

			std::cout << "�Ƿ�ȷ�Ϲرո��" << std::endl;
			getline(std::cin, p1.b2);

			if (p1.b2 == "C") {

				break;
			}
			else if (p1.b2 == "A") {
				continue;
			}
			else {
				std::cout << "δ֪��ѡ����������룡" << std::endl;
				continue;
			}
		}

		else {
			std::cout << "δ֪��ѡ����������룡" << std::endl;
			continue;
		}
	}
}
//�߳�1

void T2() {
	Preset p2;//�Ƿ񳬹�������ֵ
	for (;;) {

		std::cout << "Ԥ����Ŀ2:��������Ա�����Ƿ񳬹�������ֵ��65535����" << std::endl;
		getline(std::cin, p2.b1);

		if (p2.b1 == "Y") {

			std::cout << "�Ƿ�ȷ�Ͽ������" << std::endl;
			getline(std::cin, p2.b2);

			if (p2.b2 == "C") {
				break;
			}
			else if (p2.b2 == "A") {
				continue;
			}
			else {
				std::cout << "δ֪��ѡ����������룡" << std::endl;
				continue;
			}
		}

		else if (p2.b1 == "N") {

			std::cout << "�Ƿ�ȷ�Ϲرո��" << std::endl;
			getline(std::cin, p2.b2);

			if (p2.b2 == "C") {

				break;
			}
			else if (p2.b2 == "A") {
				continue;
			}
			else {
				std::cout << "δ֪��ѡ����������룡" << std::endl;
				continue;
			}
		}

		else {
			std::cout << "δ֪��ѡ����������룡" << std::endl;
			continue;
		}
	}
}
//�߳�2

void T3() {
	Preset p3;//�Ƿ��ģʽ
	for (;;) {

		std::cout << "Ԥ����Ŀ3:�Ƿ�����ģʽ��" << std::endl;
		getline(std::cin, p3.b1);

		if (p3.b1 == "Y") {
			std::cout << "�Ƿ�ȷ�Ͽ������" << std::endl;
			getline(std::cin, p3.b2);

			if (p3.b2 == "C") {
				GJ1 = true;
				break;
			}
			else if (p3.b2 == "A") {
				continue;
			}
			else {
				std::cout << "δ֪��ѡ����������룡" << std::endl;
				continue;
			}
		}

		else if (p3.b1 == "N") {

			std::cout << "�Ƿ�ȷ�Ϲرո��" << std::endl;
			getline(std::cin, p3.b2);

			if (p3.b2 == "C") {
				GJ1 = false;
				break;
			}
			else if (p3.b2 == "A") {
				continue;
			}
			else {
				std::cout << "δ֪��ѡ����������룡" << std::endl;
				continue;
			}
		}

		else {
			std::cout << "δ֪��ѡ����������룡" << std::endl;
			continue;
		}
	}
	//Ԥ������
}
//�߳�3

void T4() {
	SimpleMode SM1;
	std::ofstream OFS1;
	OFS1.open("AnswerStorage_SM.txt");
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
}
//�߳�4

void T5() {
	FullMode FM1;
	std::ofstream OFS2;
	OFS2.open("AnswerStorage_FM.txt");
	std::cout << "�Ƿ����������ѡ���ո񣿣���������Y����������N��" << std::endl;
	getline(std::cin, FM1.da3);
	for (;;) {
		std::cout << "������������ĵ�" << ++FM1.d1 << "������ŵ��ַ���(����������O��:" << std::endl;
		getline(std::cin, FM1.da1);

		if (FM1.da1 == "O") {
			OFS2.close();
			std::cout << "�洢�ļ��ѱ��棡" << std::endl;
			break;
		}

		std::cout << "������������Ҫ��ѡ����ַ���:" << std::endl;
		getline(std::cin, FM1.da2);

		if (FM1.da3 == "Y") {
			OFS2 << FM1.da1 << " " << FM1.da2 << std::endl;
		}
		else if (FM1.da3 == "N") {
			OFS2 << FM1.da1 << FM1.da2 << std::endl;
		}
		else {
			OFS2.close();
			remove("AnswerStorage_FM.txt");
			std::cout << "δ֪��ѡ��洢�ļ���ɾ�������������г���!" << std::endl;
			break;
		}

	}
	//ȫ��ģʽ
}
//�߳�5

int main() {
	std::cout << "������Ԥ�����ã���������Y����������N;ȷ���������ٴ�����C������������ٴ�����A)" << std::endl;
	std::thread first(T1);
	first.join();
	std::thread second(T2);
	second.join();
	std::thread third(T3);
	third.join();
	if (GJ1 == true){
		std::thread fourth(T4);
		fourth.join();
	}
	else if (GJ1== false) {
		std::thread  fifth(T5);
		fifth.join();
	}

	system("pause");
		return 0;
}