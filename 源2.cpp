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

int main() {
	std::thread first(T1);
	first.join();
	std::thread second(T2);
	second.join();

}