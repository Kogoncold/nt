#include <iostream>
#include <vector>
#include <istream>
#include <fstream>
#include <string>
#include <windows.h>
#include <thread>

#include "struct_1.h"
#include "class_1.h"


void T4() {
	Preset p1;//�Ƿ���������
	for (;;) {
		std::cout << std::endl;
		std::cout << "Ԥ����Ŀ1:�Ƿ���������" << "";
		getline(std::cin, p1.b1);

		if (p1.b1 == "Y") {
			std::cout << "�Ƿ�ȷ�Ͽ������" << "";
			getline(std::cin, p1.b2);

			if (p1.b2 == "C") {
				GJ1 = true;
				break;
			}
			else if (p1.b2 == "A") {
				continue;
			}
			else {
				std::cout << "δ֪��ѡ����������룡" << "";
				continue;
			}
		}

		else if (p1.b1 == "N") {

			std::cout << "�Ƿ�ȷ�Ϲرո��" << "";
			getline(std::cin, p1.b2);

			if (p1.b2 == "C") {
				GJ1 = false;
				break;
			}
			else if (p1.b2 == "A") {
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
	}
	std::cout << std::endl;
}
//�߳�1

void T5() {
	TestMode TM1;
	std::ifstream IFS1;
		IFS1.open("AnswerStorage_M.txt", std::ios::in);
		for (;;) {
			std::cout << std::endl;
			std::cout << "������׼���õĲ��Դ𰸣�" << "";
			getline(std::cin, TM1.ea1);
			getline(IFS1, TM1.ea2);

			if (TM1.ea2 == "O") {
				std::cout << "����ȷ" << --TM1.eb1 << "���;"
					<< "������" << TM1.eb2 << "��𰸡�" << std::endl;
				break;
			}

			if (TM1.ea1 == TM1.ea2) {
				std::cout << "ѡ����ȷ" << "";
				++TM1.eb1;
			}
			else if (TM1.ea1 != TM1.ea2) {
				std::cout << "ѡ�����" << "";
				++TM1.eb2;
			}

		}
		IFS1.close();
		std::cout << std::endl;
}
//�߳�2

void T6() {
	BatchMode BM1;
	std::ifstream IFS2;
	IFS2.open("AnswerStorage_M.txt", std::ios::in);

	remove("SummaryOfGrades_M.txt");
	std::ofstream OFS3;
	OFS3.open("SummaryOfGrades_M.txt");

	for (;;) {
		std::cout << std::endl;
		std::cout << "�����뿼����	������P�������У���" << "";
		getline(std::cin, BM1.fa1);
		getline(IFS2, BM1.fa2);

		if (BM1.fa1 == "P") {
			break;
		}

		if (BM1.fa1 == "O") {
			OFS3 <<"������ţ�" << ++BM1.fb3 << " " << "����ȷ" << --BM1.fb1 << "���;" << "������" << BM1.fb2 << "��𰸡�" << std::endl;
			std::cout << "��ʼ��һ����" << "";
			BM1.fb1 = 0;
			BM1.fb2 = 0;
			IFS2.close();
			IFS2.open("AnswerStorage_M.txt", std::ios::in);
			continue;
		}

		if (BM1.fa1 == BM1.fa2) {
			std::cout << "ѡ����ȷ" << "";
			++BM1.fb1;
		}
		else if (BM1.fa1 != BM1.fa2) {
			std::cout << "ѡ�����" << "";
			++BM1.fb2;
		}

	}
	IFS2.close();
	OFS3.close();
	std::cout << std::endl;
}
//�߳�3

int main() {
	std::cout << "������Ԥ�����ã���������Y����������N;ȷ���������ٴ�����C������������ٴ�����A)" << std::endl;
	std::thread fouth(T4);
	fouth.join();
	if (GJ1 == true) {
		std::thread seventh(T6);
		seventh.join();
	}
	else if (GJ1 == false) {
		std::thread sixth(T5);
		sixth.join();
	}

	system("pause");
	return EXIT_SUCCESS;
}