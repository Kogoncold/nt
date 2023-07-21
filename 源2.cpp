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
#include "线程1.h"

using std::ios;
using std::ofstream;

void T1() {
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
}
//线程1

void T2() {
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
}
//线程2

int main() {
	std::thread first(T1);
	first.join();
	std::thread second(T2);
	second.join();

}