#include<stdlib.h>
#include<time.h>
#include"method.h"

#define MAX  100

using namespace std;


//========================================// 
//                �Ƚ����� 				  // 
//========================================// 

void merge(int A[],int p,int q,int r)  //�鲢������Ӻ��� 
{
	int n1=q-p+1,n2=r-q;
	int i=0,j;
	int L[n1];
	int R[n2];
	for(;i<n1;i++)
		L[i]=A[p+i];
	for(i=0;i<n2;i++)
		R[i]=A[q+1+i];
	i=j=0;
	while((i<n1)&&(j<n2))  //�Ż�����L��R����ĩβ�����ڱ��� 
	{
		if(L[i]<=R[j])
		{
			A[p++]=L[i];
			i++;
		}
		else
		{
			A[p++]=R[j];
			j++;
		}		
	}
	if(i==n1)
		for(;j<n2;j++)
			A[p++]=R[j];
	else
		for(;i<n1;i++)
			A[p++]=L[i];
}
void Merge(int A[],int p,int q)   //�鲢���� 
{
	if(p<q){              //�����鲢���� 
		int n=(p+q)/2;
		Merge(A,p,n);
		Merge(A,n+1,q);
		merge(A,p,n,q);	
	}


/*	if((q-p+1)>(int)(log((double)(q-p+1))/log((double)2)))   //�Ż��鲢���� 
	{
		int n=(p+q)/2;
		Merge(A,p,n);
		Merge(A,n+1,q);
		merge(A,p,n,q);	
	}
	else
	{
		insertSort(A,p,q);
	}
*/ 
}
void insertSort(int A[],int n)    //�������� 
{
	int temp,j;
	for(int i=1;i<n;i++)
	{
		temp=A[i];
		j=i-1;
		while((j>0)&&(A[j]>temp))
		{
			A[j+1]=A[j];
			j--;
		}
		A[j+1]=temp;
	}
}

/* TODO (Bill#1#): ��Ϊ�Ż��鲢�������õ����ӳ��򣬼�����
                   ���Ķ����ģ����k<logn ʱ����ֱ�Ӳ���
                   ���� */
void insertSort(int A[],int m,int n) 
{
	int temp,j;
	for(int i=m+1;i<=n;i++)
	{
		temp=A[i];
		j=i-1;
		while((j>0)&&(A[j]>temp))
		{
			A[j+1]=A[j];
			j--;
		}
		A[j+1]=temp;
	}
}
void selectSort(int A[],int n)    //ѡ������ 
{
	int min,j;
	for(int i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
			if(A[j]<A[min])
				min=j;
		swap(A[i],A[min]);
	} 
	
}
void bubbleSort(int A[],int n)  //ð������ 
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-1-i;j++)
		{
			if(A[j]>A[j+1])
				swap(A[j],A[j+1]);
		}
	}
}



void heapSort(int A[],int n)			//������       ���ȶ�      ʹ��iΪ����������Ϊ����
{
	maxHeap(A,n);
	int heapsize=n;
	for(int i=n;i>0;i--)
	{
		swap(A[0],A[i-1]);
		heapsize--;
		heap(A,heapsize,0);
	} 
} 
void maxHeap(int A[],int n)    //ʹ����A��Ϊ�󶥶� 
{
	int heapsize=n;
	for(int i=(n-1)/2;i>=0;i--)
		heap(A,heapsize,i);
}
void heap(int A[],int heapsize,int i)  //ʹ����A�����±�iΪ���ڵ��������Ϊ�󶥶�
{
	int left=2*i+1;
	int right=2*i+2;
	int max;
	if((left<heapsize)&&(A[left]>A[i]))
		max=left;
	else
		max=i;
	if((right<heapsize)&&(A[right]>A[max]))
		max=right;
	if(max!=i)
	{
		swap(A[max],A[i]);
		heap(A,heapsize,max);	
	}
}
 

void quickSort(int A[],int m,int n)   //�������� 
{
	if(m<n)
	{
		int t=partion2(A,m,n);
		quickSort(A,m,t-1);
		quickSort(A,t+1,n);
	}
}
int partion1(int A[],int p,int q)     //���������ӳ���1
{
	int i=p-1;
	if(p<q)
	{	
		for(int j=p;j<q;j++)
		{
			if(A[j]<=A[q])
			{
				i++;
				swap(A[i],A[j]);
			}
		}
		swap(A[i+1],A[q]);
	}
	return i+1;
}
int partion2(int A[],int p,int q)  //���������ӳ���2
{
	int key=A[p];
	while(p<q)
	{
		while((p<q)&&(A[q]>=key)) q--;
		A[p]=A[q];
		while((p<q)&&(A[p]<=key)) p++;
		A[q]=A[p];
	}
	A[p]=key; 
	return q;
} 
int partion3(int A[],int p,int q) //���������ӳ���3
{
	int i=p,j=q;
	while(true)
	{
		while(A[i]<=A[p])
			i++;
		while(A[j]>=A[q])
			j--;
		if(i<j)
			swap(A[i],A[j]);
		else return j;	
	} 
} 



//========================================// 
//     		    �ǱȽ����� 				  // 
//========================================// 

void conutSort(int A[],int n,int max);   //��������    �ȶ� 













int randInt(int n)
{
	srand((unsigned)time(NULL));
	return (rand()%n+1);
}
void randomArray(int A[],int n)
{
	srand((unsigned)time(NULL));
	for(int i=0;i<n;i++)		
		A[i]=rand()%MAX+1; 		
}
 

 
int BinarySearch(int A[],int n,int x)  //���ֲ��� 
{
	int left=0,right=n-1;         //���� �ǵݹ� 
	int mid;
	while(left<=right)
	{
		mid=(left+right)/2;
		if(A[mid]==x)
			return mid;
		else if(A[mid]<x)
			left=mid+1;
		else
			right=mid-1;		
	}
	return -1;
} 

void swap(int &a,int &b)          //�������� 
{
	int temp=a;
	a=b;
	b=temp;
}

void printArray(int A[],int n)
{
	for(int i=0;i<n;i++)
		cout<<A[i]<<" ";
	cout<<endl; 
} 
