#pragma once
#pragma setlocale("russian")
#include <clocale>
#include <iostream>
#include <vector>
#include <cstdlib>
#include <string>
#include "math.h"
#include <algorithm>
typedef int ���;
typedef bool �����;

#define ������ vector
#define ���� endl
#define ��������� main()
#define ��������� void
#define ���� if
#define ����� else
#define ���� auto
#define ��� for
#define ���� false
#define ������ true
#define �� !
#define ��� ||
#define � &&
#define ������� ^
#define ����� return
#define ����� cout << 
#define ���� cin >>
#define ������(n) for(;i<n;i++)
#define ������(n) {int x=1488;cout<<x;}
#define ��� {
#define ��� }
#define ��� ,
#define ����� <
#define ����� >
#define ��������� <=
#define ��������� >=
#define �����(i) [i]
#define ����(T) <T>
#define �������� <<
#define ������� >>
#define ������ using
#define ������ namespace
#define ������� std;
#define ������ size
#define �������� clear;
#define ������������ push_back
#define �������� insert
#define ��������� pop_back
#define ������������ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(nullptr)
#define ����� copy
#define ���������� struct
#define ����������� using namespace std;struct MyStruct {MyStruct() {setlocale(LC_ALL, "rus");}};MyStruct a;
#define �����������(arr) for(auto &x:arr) cin>>x;
template <typename T>
void ����������(const T& data, int count, char sep)
{
	for (auto it = begin(data); it != data.begin() + count; ++it) {
		std::cout << *it << sep;
	}
}
template <typename T>
void ����������(const T& data, int count)
{
	����������(data, count, ' ');
}
template <typename T>
void ����������(const T& array)
{
	����������(array, array.size());
}
void �����() {
	setlocale(LC_ALL, "rus");
}