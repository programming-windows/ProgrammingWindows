// dll_cpp.cpp : ���� DLL Ӧ�ó���ĵ���������

// ���йܶ�̬���ӿ�DLL�Ĵ�������:
// <3> ��cppԴ�����ļ�������ͷ�ļ�����ʵ�ֺ���

#include "stdafx.h"
#include "dll_cpp.h"

int __stdcall testAdd(int a, int b) {
	return a + b;
}

int __stdcall testMulti(int a, int b) {
	return a * b;
}


