#pragma once

// ���йܶ�̬���ӿ�DLL�Ĵ�������:
// <1> ����C++������Ŀ����Ŀ����Ϊ��⣬����Ϊdll_cpp

// <2> ��ͷ�ļ�����������ԭ��
extern "C" __declspec( dllexport ) int __stdcall testAdd ( int a, int b );
extern "C" __declspec( dllexport ) int __stdcall testMulti ( int a, int b );