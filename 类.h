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

class  TestMode {
public:
	std::string ea1;
	std::string ea2;
	std::string ea3;
	int eb1 =0;
	int eb2 = 0;
};
//测试模式

class  BatchMode {
public:
	std::string fa1;
	std::string fa2;
	std::string fa3;
	int fb1 = 0;
	int fb2 = 0;
	int fb3 = 0;
	int fb4 = 0;
};
//批量模式