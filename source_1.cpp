#include <iostream>
#include <vector>
#include <istream>
#include <fstream>
#include <string>
#include <windows.h>
#include <thread>

#include "struct_1.h"
#include "class_1.h"

void T1() {
	Preset p3;//�Ƿ��ģʽ
	for (;;) {
		std::cout << std::endl;
		std::cout << "Ԥ����Ŀ1:�Ƿ�����ģʽ��" << "";
		getline(std::cin, p3.b1);

		if (p3.b1 == "Y") {
			std::cout << "�Ƿ�ȷ�Ͽ������" << "";
			getline(std::cin, p3.b2);

			if (p3.b2 == "C") {
				GJ1 = true;
				break;
			}
			else if (p3.b2 == "A") {
				continue;
			}
			else {
				std::cout << "δ֪��ѡ����������룡" << "";
				continue;
			}
		}

		else if (p3.b1 == "N") {

			std::cout << "�Ƿ�ȷ�Ϲرո��" << "";
			getline(std::cin, p3.b2);

			if (p3.b2 == "C") {
				GJ1 = false;
				break;
			}
			else if (p3.b2 == "A") {
				continue;
			}
			else {
				std::cout << "δ֪��ѡ����������룡" << "";
				continue;
			}
		}

		else {
			std::cout << "δ֪��ѡ����������룡" << "";
			continue;
		}
		std::cout << std::endl;
	}
	//Ԥ������
}
//�߳�1

void T2() {
	SimpleMode SM1;
	std::ofstream OFS1;
	OFS1.open("AnswerStorage_M.txt");
	for (;;) {
		std::cout << std::endl;
		std::cout << "��" << ++SM1.c1 << "��" << "";
		std::cout << "������Ԥ���(����OΪ�������룩��" << "";
		getline(std::cin, SM1.c2);
		OFS1 << SM1.c2 << std::endl;

		if (SM1.c2 == "O") {
			OFS1.close();
			std::cout << "�Ƿ�ȷ�ϴ𰸣�����������Y����������N��" << "";
			getline(std::cin, SM1.c3);
			if (SM1.c3 == "Y") {
				std::cout << "�洢�ļ��ѱ��棡" << "";
				break;
			}
			else if (SM1.c3 == "N") {
				remove("AnswerStorage_M.txt");
				std::cout << "�洢�ļ���ɾ�������������г���" << "";
				break;
			}
			else {
				std::cout << "δ֪��ѡ��洢�ļ��ѱ������һ�����룡���������г���" << "";
				break;
			}

		}

		else {
			continue;
		}
	}
	std::cout << std::endl;
	//��ģʽ
}
//�߳�2

void T3() {
	FullMode FM1;
	std::ofstream OFS2;
	OFS2.open("AnswerStorage_M.txt");
	std::cout << "�Ƿ����������ѡ���ո񣿣���������Y����������N��" << std::endl;
	getline(std::cin, FM1.da3);
	for (;;) {
		std::cout << std::endl;
		std::cout << "������������ĵ�" << ++FM1.d1 << "������ŵ��ַ���(����������O��:" << "";
		getline(std::cin, FM1.da1);

		if (FM1.da1 == "O") {
			OFS2 << FM1.da1 << std::endl;
			OFS2.close();
			std::cout << "�洢�ļ��ѱ��棡" << "";
			break;
		}

		std::cout << "������������Ҫ��ѡ����ַ���:" << "";
		getline(std::cin, FM1.da2);

		if (FM1.da3 == "Y") {
			OFS2 << FM1.da1 << " " << FM1.da2 << std::endl;
		}
		else if (FM1.da3 == "N") {
			OFS2 << FM1.da1 << FM1.da2 << std::endl;
		}
		else {
			OFS2.close();
			remove("AnswerStorage_M.txt");
			std::cout << "δ֪��ѡ��洢�ļ���ɾ�������������г���!" << "";
			break;
		}

	}
	std::cout << std::endl;
	//ȫ��ģʽ
}
//�߳�3

int main() {
	std::cout << "������Ԥ�����ã���������Y����������N;ȷ���������ٴ�����C������������ٴ�����A)" << "";
	std::thread first(T1);
	first.join();
	if (GJ1 == true){
		std::thread second(T2);
		second.join();
	}
	else if (GJ1== false) {
		std::thread  third(T3);
		third.join();
	}

	std::cout << "�𰸱༭����ɣ�" << std::endl;
	system("pause");
	return EXIT_SUCCESS;
}