#include <iostream>
#include <vector>
#include <istream>
#include <fstream>
#include <string>
#include <windows.h>

#include "函数.h"
#include "结构体.h"
#include "类.h"

using std::ios;
using std::ofstream;

int main() {
	std::cout << "请输入预先设置（是请输入Y，否请输入N;确认输入请再次输入C，输入错误请再次输入A)" << std::endl;

	Preset p1;//是否批量处理
	for (;;) {

		std::cout << "预先项目1:是否批量处理？" << std::endl;
		getline(std::cin, p1.b1);

		if (p1.b1 == "Y") {
			std::cout << "是否确认开启该项？" << std::endl;
			getline(std::cin, p1.b2);

			if (p1.b2 == "C") {

				break;
			}
			else if (p1.b2 == "A") {
				continue;
			}
			else {
				std::cout << "未知的选项，请重新输入！" << std::endl;
				continue;
			}
		}

		else if (p1.b1 == "N") {

			std::cout << "是否确认关闭该项？" << std::endl;
			getline(std::cin, p1.b2);

			if (p1.b2 == "C") {

				break;
			}
			else if (p1.b2 == "A") {
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

	Preset p2;//是否超过整型阈值
	for (;;) {

		std::cout << "预先项目2:需评测人员数量是否超过整型阈值（65535）？" << std::endl;
		getline(std::cin, p2.b1);

		if (p2.b1 == "Y") {

			std::cout << "是否确认开启该项？" << std::endl;
			getline(std::cin, p2.b2);

			if (p2.b2 == "C") {
				break;
			}
			else if (p2.b2 == "A") {
				continue;
			}
			else {
				std::cout << "未知的选项，请重新输入！" << std::endl;
				continue;
			}
		}

		else if (p2.b1 == "N") {

			std::cout << "是否确认关闭该项？" << std::endl;
			getline(std::cin, p2.b2);

			if (p2.b2 == "C") {

				break;
			}
			else if (p2.b2 == "A") {
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

	Preset p3;//是否简单模式
	for (;;) {

		std::cout << "预先项目3:是否开启简单模式？" << std::endl;
		getline(std::cin, p3.b1);

		if (p3.b1 == "Y") {
			std::cout << "是否确认开启该项？" << std::endl;
			getline(std::cin, p3.b2);

			if (p3.b2 == "C") {

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

	SimpleMode SM1;
	std::ofstream OFS1;
	OFS1.open("AnswerStorage_SM.txt");
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
				remove("AnswerStorage.txt");
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

	FullMode FM1;
	std::ofstream OFS2;
	OFS1.open("AnswerStorage_FM.txt");
	std::cout << "请输入您所需要的题号中的第一个字符串:" << std::endl;
	getline(std::cin, FM1.da1);
	std::cout << "请选择您所需要的题号偏好（A/C；A为阿拉伯数字(小题)，C为中文数字（大题））" << std::endl;
	getline(std::cin, FM1.da1);
	if (FM1.da1 == "C") {

	}
	//全面模式
	return 0;
}