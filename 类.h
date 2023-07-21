#pragma once
#include <iostream>
#include <string>

class SimpleMode {
public:
	int c1 = 0;
	std::string c2;
	std::string c3;
};
//简单模式

class FullMode {
public:
	int d1 = 0;
	std::string da1;//题号字符串
	std::string da2;//选项字符串
	std::string da3;//题目空格
	std::string da4;//题目是否正确输入
};
//全面模式
