#include <stdio.h> // ����������� ����-�����
#include <stdlib.h> // ���������� �������� � ����������

/*
 * ���� �� ����� �� �2.
 * ��������� ��� �������.
 * ����� ���� ����� �� ������, ��������� �����������, ������� ��������� �� �����.
 * �������� ���������� ��� ����-������ graphics.h
 */
int main()
{
    system("chcp 1251"); // ��������� 1251 ��� �������� �����
    system("cls");
    /* ������� ����� ����� ������� �������
                     ���� �� ��������, � ������� ����� ��������:
                     "������� ������� ��������: 1251"
    */
    int a,b; // ��������� ����������
    float c; // c - ������������� ����, �.�. ����� ���������� �����
    printf("������� a,b:\n"); // �������������� ���������
    scanf("%d%d",&a,&b); // ���������� ����������
    if (b == 0){
        /* ���� �������� ����� ����, �� ���������
            ������� ��������� � ���������� � �������*/
        printf("�� ���� ������ ������!");
        return 1; // ���������� ��������� � �������
    }
    else
        // ���� �������� �� ����� ����, ����� ��������� ������� � ��������� �����
        c = (float)a / (float)b; // ������� �������� (�������� a � b � ������������� ����)
    printf("%d / %d = %f",a,b,c); // ����� �������� �� �����
    return 0; // ���������� ��������� ��� ������
}
