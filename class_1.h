#pragma once
#include <iostream>
#include <string>

class SimpleMode {
public:
	int c1 = 0;
	std::string c2;
	std::string c3;
};
//��ģʽ

class FullMode {
public:
	int d1 = 0;
	std::string da1;//����ַ���
	std::string da2;//ѡ���ַ���
	std::string da3;//��Ŀ�ո�
	std::string da4;//��Ŀ�Ƿ���ȷ����
};
//ȫ��ģʽ

class  TestMode {
public:
	std::string ea1;
	std::string ea2;
	std::string ea3;
	int eb1 =0;
	int eb2 = 0;
};
//����ģʽ

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
//����ģʽ