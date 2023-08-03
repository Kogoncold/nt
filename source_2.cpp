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
	Preset p1;//是否批量处理
	for (;;) {
		std::cout << std::endl;
		std::cout << "预先项目1:是否批量处理？" << "";
		getline(std::cin, p1.b1);

		if (p1.b1 == "Y") {
			std::cout << "是否确认开启该项？" << "";
			getline(std::cin, p1.b2);

			if (p1.b2 == "C") {
				GJ1 = true;
				break;
			}
			else if (p1.b2 == "A") {
				continue;
			}
			else {
				std::cout << "未知的选项，请重新输入！" << "";
				continue;
			}
		}

		else if (p1.b1 == "N") {

			std::cout << "是否确认关闭该项？" << "";
			getline(std::cin, p1.b2);

			if (p1.b2 == "C") {
				GJ1 = false;
				break;
			}
			else if (p1.b2 == "A") {
				continue;
			}
			else {
				std::cout << "未知的选项，请重新输入！" << "";
				continue;
			}
		}

		else {
			std::cout << "未知的选项，请重新输入！" << "";
			continue;
		}
	}
	std::cout << std::endl;
}
//线程1

void T5() {
	TestMode TM1;
	std::ifstream IFS1;
		IFS1.open("AnswerStorage_M.txt", std::ios::in);
		for (;;) {
			std::cout << std::endl;
			std::cout << "请输入准备好的测试答案：" << "";
			getline(std::cin, TM1.ea1);
			getline(IFS1, TM1.ea2);

			if (TM1.ea2 == "O") {
				std::cout << "共正确" << --TM1.eb1 << "项答案;"
					<< "共错误" << TM1.eb2 << "项答案。" << std::endl;
				break;
			}

			if (TM1.ea1 == TM1.ea2) {
				std::cout << "选项正确" << "";
				++TM1.eb1;
			}
			else if (TM1.ea1 != TM1.ea2) {
				std::cout << "选项错误" << "";
				++TM1.eb2;
			}

		}
		IFS1.close();
		std::cout << std::endl;
}
//线程2

void T6() {
	BatchMode BM1;
	std::ifstream IFS2;
	IFS2.open("AnswerStorage_M.txt", std::ios::in);

	remove("SummaryOfGrades_M.txt");
	std::ofstream OFS3;
	OFS3.open("SummaryOfGrades_M.txt");

	for (;;) {
		std::cout << std::endl;
		std::cout << "请输入考生答案	（输入P结束运行）：" << "";
		getline(std::cin, BM1.fa1);
		getline(IFS2, BM1.fa2);

		if (BM1.fa1 == "P") {
			break;
		}

		if (BM1.fa1 == "O") {
			OFS3 <<"考生编号：" << ++BM1.fb3 << " " << "共正确" << --BM1.fb1 << "项答案;" << "共错误" << BM1.fb2 << "项答案。" << std::endl;
			std::cout << "开始下一考生" << "";
			BM1.fb1 = 0;
			BM1.fb2 = 0;
			IFS2.close();
			IFS2.open("AnswerStorage_M.txt", std::ios::in);
			continue;
		}

		if (BM1.fa1 == BM1.fa2) {
			std::cout << "选项正确" << "";
			++BM1.fb1;
		}
		else if (BM1.fa1 != BM1.fa2) {
			std::cout << "选项错误" << "";
			++BM1.fb2;
		}

	}
	IFS2.close();
	OFS3.close();
	std::cout << std::endl;
}
//线程3

int main() {
	std::cout << "请输入预先设置（是请输入Y，否请输入N;确认输入请再次输入C，输入错误请再次输入A)" << std::endl;
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