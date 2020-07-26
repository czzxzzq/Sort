	#include<iostream>
#include<stdlib.h> 
#include<time.h>
#include"sort.h"

#define SIZE 20
#define MAX  100
/* TODO (Bill#1#): �鲢������Ż�������δ��� */
/* TODO (Bill#2#): ��������ĵ�����HOARE-PARTITION()�Լ���Ӧ��quickSort()������δ��� */

using namespace std;

/*void merge(int A[],int p,int q,int r);//�鲢�����㷨  �ȶ� 
void Merge(int A[],int p,int q);      //�鲢�Ӻ��� 
void quickSort(int A[],int m,int n);   //��������   ���ȶ�  ==>>���β���
void quickSort(int A[],int m,int n);   //��������   ���ȶ�  ==>>���β���
int partion1(int A[],int p,int q);  //���������ӳ���1 
int partion2(int A[],int p,int q);  //���������ӳ���2
int partion3(int A[],int p,int q);  //���������ӳ���3     !!!
void insertSort(int A[],int n);       //��������    �ȶ� 
void selectSort(int A[],int n);        //ѡ������   ���ȶ� 
void bubbleSort(int A[],int n);       //ð������    �ȶ� 
void HEAPSORT(int A[],int n);			//������       ���ȶ�      ʹ��iΪ����������Ϊ����
void heapSort(int A[],int n,int i);    //ʹ����A�����±�iΪ���ڵ��������Ϊ�󶥶�


void conutSort(int A[],int n,int max);   //��������    �ȶ� 

void insertSort(int A[],int m,int n);// �Ż��鲢����ʱ���õ��ĵ��ӳ����Դ���� 
void swap(int &a,int &b);       //��������
int BinarySearch(int A[],int n,int x);   //���ֲ��ҵݹ�/�ǵݹ� 

void randomArray(int A[],int n);   //��������Ϊn��������� 
int randInt();              //��������� 
void printArray(int A[],int n);//��ӡ���� 
*/ 

int main()
{
	
	int n=randInt(SIZE);
	int data[n];
	int x;
	int index;
	cout<<"ϵͳ�����Ĵ��������ĸ���Ϊ��"<<n<<endl; 
	randomArray(data,n);
	cout<<"���������������Ϊ:"<<endl; 
	printArray(data,n);
	
	
	//========================================// 
	//                �Ƚ����� 				  // 
	//========================================// 
	//Merge(data,0,n-1);   		//�鲢����   �ռ临�Ӷ�O(n),ʱ�临�Ӷ�O(nlogn)
	//quickSort(data,0,n-1);      //��������   �ռ临�Ӷ�O(1),ʱ�临�Ӷ�:���O(n^2),���O(n^2),ƽ��O(nlogn)
	//insertSort(data,n);  		//��������   �ռ临�Ӷ�O(1),ʱ�临�Ӷ�:���O(n),���O(n^2),ƽ��O(n^2) 
	//selectSort(data,n);  		//ѡ������   �ռ临�Ӷ�O(1),ʱ�临�Ӷ�:���O(n^2),���O(n^2),ƽ��O(n^2)
	//bubbleSort(data,n);  		//ð������   �ռ临�Ӷ�O(1),ʱ�临�Ӷ�:���O(n),���O(n^2),ƽ��O(n^2)
	//heapSort(data,n);    		//������   �ռ临�Ӷ�O(1),ʱ�临�Ӷȣ����O(nlogn),���O(nlogn),ƽ��O(nlogn)  
	
	
	
	
	//========================================// 
	//     		    �ǱȽ����� 				  // 
	//========================================//
	conutSort(data,n,MAX);      //��������  �ռ临�Ӷ� O(max+n),ʱ�临�Ӷ�O(n+max) 
	cout<<"����������:"<<endl; 
	printArray(data,n);
	cout<<"������Ҫ��ѯ������:"<<endl;
	cin>>x;
	index=BinarySearch(data,n,x);
	cout<<"����ѯ�������������е�λ���±�Ϊ:"<<index<<endl;
}



