#include <stdlib.h> //������������ ���� ����������� ����������
#include <math.h> // ������������ ���� ���. �������

int x; float result; // ���������� ���������� ����������

void func()
{
	result = cos(x) + cos(2 * x) + cos(6 * x) + cos(7 * x);
}