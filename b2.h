#pragma once
#include <iostream>
#include <string>

struct topic {
	std::string a1;//���
	std::string a2;//ѡ���
};
//��Ŀ

struct Preset {
	std::string b1;//��һ��ȷ��
	std::string b2;//�ڶ���ȷ��
};
//Ԥ������

struct SimpleMode {
	int c1 = 0;
	std::string c2;
	std::string c3;
};
//��ģʽ

struct FullMode {
	double d1 = 0.0;
	std::string d2;
	std::string d3;
};
//ȫ��ģʽ
