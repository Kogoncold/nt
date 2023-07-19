#pragma once
#include <iostream>
#include <string>

struct topic {
	std::string a1;//题号
	std::string a2;//选项答案
};
//题目

struct Preset {
	std::string b1;//第一次确认
	std::string b2;//第二次确认
};
//预先设置

struct SimpleMode {
	int c1 = 0;
	std::string c2;
	std::string c3;
};
//简单模式

struct FullMode {
	double d1 = 0.0;
	std::string d2;
	std::string d3;
};
//全面模式
