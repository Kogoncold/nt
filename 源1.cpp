#include <iostream>
#include <vector>
#include <istream>
#include <fstream>
#include <string>
#include <windows.h>
#include <thread>

#include "函数.h"
#include "结构体.h"
#include "类.h"

void T1() {
	Preset p3;//是否简单模式
	for (;;) {

		std::cout << "预先项目1:是否开启简单模式？" << std::endl;
		getline(std::cin, p3.b1);

		if (p3.b1 == "Y") {
			std::cout << "是否确认开启该项？" << std::endl;
			getline(std::cin, p3.b2);

			if (p3.b2 == "C") {
				GJ1 = true;
				break;
			}
			else if (p3.b2 == "A") {
				continue;
			}
			else {
				std::cout << "未知的选项，请重新输入！" << std::endl;
				continue;
			}
		}

		else if (p3.b1 == "N") {

			std::cout << "是否确认关闭该项？" << std::endl;
			getline(std::cin, p3.b2);

			if (p3.b2 == "C") {
				GJ1 = false;
				break;
			}
			else if (p3.b2 == "A") {
				continue;
			}
			else {
				std::cout << "未知的选项，请重新输入！" << std::endl;
				continue;
			}
		}

		else {
			std::cout << "未知的选项，请重新输入！" << std::endl;
			continue;
		}
	}
	//预先设置
}
//线程1

void T2() {
	SimpleMode SM1;
	std::ofstream OFS1;
	OFS1.open("AnswerStorage_M.txt");
	for (;;) {
		std::cout << "第" << ++SM1.c1 << "题" << std::endl;
		std::cout << "请输入预设答案(输入O为结束输入）：" << std::endl;
		getline(std::cin, SM1.c2);
		OFS1 << SM1.c2 << std::endl;

		if (SM1.c2 == "O") {
			OFS1.close();
			std::cout << "是否确认答案？（是请输入Y，否请输入N）" << std::endl;
			getline(std::cin, SM1.c3);
			if (SM1.c3 == "Y") {
				std::cout << "存储文件已保存！" << std::endl;
				break;
			}
			else if (SM1.c3 == "N") {
				remove("AnswerStorage_M.txt");
				std::cout << "存储文件已删除，请重新运行程序！" << std::endl;
				break;
			}
			else {
				std::cout << "未知的选项！存储文件已保存最后一次输入！请重新运行程序！" << std::endl;
				break;
			}
		}

		else {
			continue;
		}
	}
	//简单模式
}
//线程2

void T3() {
	FullMode FM1;
	std::ofstream OFS2;
	OFS2.open("AnswerStorage_M.txt");
	std::cout << "是否启用题号与选项间空格？（是请输入Y，否请输入N）" << std::endl;
	getline(std::cin, FM1.da3);
	for (;;) {
		std::cout << "请输入您所需的第" << ++FM1.d1 << "题中题号的字符串(保存请输入O）:" << std::endl;
		getline(std::cin, FM1.da1);

		if (FM1.da1 == "O") {
			OFS2 << FM1.da1 << std::endl;
			OFS2.close();
			std::cout << "存储文件已保存！" << std::endl;
			break;
		}

		std::cout << "请输入您所需要的选项答案字符串:" << std::endl;
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
			std::cout << "未知的选项！存储文件已删除！请重新运行程序!" << std::endl;
			break;
		}

	}
	//全面模式
}
//线程3

int main() {
	std::cout << "请输入预先设置（是请输入Y，否请输入N;确认输入请再次输入C，输入错误请再次输入A)" << std::endl;
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

	std::cout << "答案编辑已完成！" << std::endl;
	system("pause");
	return EXIT_SUCCESS;
}