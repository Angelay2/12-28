#include <stdio.h>
#include <stdlib.h>

//#include "cal.h"
//
//void Menu(){
//	printf("###############################\n");
//	printf("## 1. �ӷ�           2. ���� ##\n");
//	printf("## 3. �˷�           4. ���� ##\n");
//	printf("## 0. �˳�������             ##\n");
//	printf("����������ѡ��:                \n");
//
//}
//
//int main(){
//	int(*p[4])(int, int) = { my_add, my_sub, my_mul, my_div };
//
//	while (!0){
//		Menu();
//		int choice = 0;
//		scanf("%d", &choice);
//		if (choice == 0){
//			printf("byebye!\n");
//			break;
//		}
//		else if (choice < 0 || choice > 4){
//			printf("������������!����������:\n");
//			continue;
//		}
//
//		int x = 0;
//		int y = 0;
//		printf("��������������������(�ÿո����):\n");
//		scanf("%d %d", &x, &y);
//		int z = p[choice - 1](x, y);
//		printf("������Ϊ:%d\n", z);
//	}
//	system("pause");
//	return 0;
//}
//// �ַ�ָ��: ָ������char* 
//
//
//
//
//
//// ����ָ������:
//
//
//// ָ����ָ�������ָ��:
//// ָ����ָ�������ָ����һ��ָ��, ָ��ָ��һ������, �����Ԫ�ض��Ǻ���ָ��

// ��������������������������Ԫ�ص� '��ַ'
// ����ֵ: 1, 0, -1
int cmp_int(const void* xp,const void* yp){
	const int* _xp = (const int*)xp;
	const int* _yp = (const int*)yp;

	if(*_xp > *_yp){
		return 1;
	}else if(*_xp < *_yp){
		return -1;
	}else{
		return 0;
	}
}
void show1(int a[], int num, char* message){
	printf("%s\n", message);
	int i = 0;
	for (; i < num; i++){
		printf("%d ", a[i]);
	}
	printf("\n");
}
int main1(){
	//int a[4][5] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	//int num = sizeof(a) / sizeof(a[0][0]);
	//printf("%d\n", num);
	//int i = 0;
	//for (; i < num; i++){
	//	printf("%d\n", a[i]);
	//}
	// void ���������������,ֻ���ú�������ֵΪ�յ����
	// void* ���Զ������,�ñ������Խ�����������, �����ڽ���һָ������
	//int* x1 = NULL;
	//char* x2 = NULL;
	//double* x3 = NULL;
	//float* x4 = NULL;

	//void* x = x1;
	//x = x2;
	//x = x3;
	//x = x4;// ��ͨ��

	//void qsort(void* base, size_t num, size_t size,
	//	int(*compar)(const void*, const void*));

	int a[] = { 3, 5, 3234, 654, 64, 32, -2, 57, -45, 4, 8654, 56};
	int num = sizeof(a) / sizeof(a[0]);
	show1(a, num,"sort before");
	qsort(a, num, sizeof(int), cmp_int);
	show1(a, num,"sort after");

	system("pause");
	return 0;

}


int cmp_float(const void* xp, const void* yp){

	const float *_xp = (const float*)xp;
	const float *_yp = (const float*)yp;

	if(*_xp > *_yp){
		return -1;
	}
	else if(*_xp < *_yp){
		return 1;
	}
	else{
		return 0;
	}

}
void show2(float a[], int num, char* message){
	printf("%s\n", message);
	int i = 0;
	for (; i < num; i++){
		printf("%f ", a[i]);
	}
	printf("\n");
}
int main(){
	float a[] = { 1.2, 3.4, 45.3, 56.3, -45.2, -0.4, 30.6, 24.6};
	int num = sizeof(a) / sizeof(a[0]);
	show2(a, num, "sort before");
	qsort(a, num, sizeof(float), cmp_float);
	show2(a, num, "sort after");
	system("pause");
	return 0;
}