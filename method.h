
//========================================// 
//                �Ƚ����� 				  // 
//========================================// 

void merge(int A[],int p,int q,int r);//�鲢�����㷨  �ȶ� ==>>���β���                                           �� 
void Merge(int A[],int p,int q);      //�鲢�Ӻ��� 
void insertSort(int A[],int m,int n);// �Ż��鲢����ʱ���õ��ĵ��ӳ����Դ���� (k<lognʱ�����ò������� 
void insertSort(int A[],int n);       //��������    �ȶ�                                                          
void selectSort(int A[],int n);        //ѡ������   ���ȶ�                                                        �� 
void bubbleSort(int A[],int n);       //ð������    �ȶ� 
void quickSort(int A[],int m,int n);   //��������   ���ȶ�  ==>>���β���
int partion1(int A[],int p,int q);  //���������ӳ���1 															 
int partion2(int A[],int p,int q);  //���������ӳ���2															  �� 
int partion3(int A[],int p,int q);  //���������ӳ���3
void heapSort(int A[],int n);			//������       ���ȶ�      ʹ��iΪ����������Ϊ����      
void maxHeap(int A[],int n);   //ʹ����A��Ϊ�󶥶� 
void heap(int A[],int n,int i);    //ʹ����A�����±�iΪ���ڵ��������Ϊ�󶥶� 									  �� 
/* ������ =>>���ȼ����� 
*����������ȼ��������㷨���沢û��ʲô���� 
*��������һ�������㷨==>>�㷨 
*���ȼ�������һ�����ݽṹ�����������洢���ݣ�ʵ�����ݵ���ɾ��ģ�ʵʱά��==>>���ݽṹ 
*/



//========================================// 
//     		    �ǱȽ����� 				  // 
//========================================//
void conutSort(int A[],int n,int max)   //��������    �ȶ� 
{
	int i=0;
	int C[max+1]={0}; 
	int B[n]={0};
	for(;i<n;i++)
		C[A[i]]++;
	for(i=1;i<max+1;i++)
		C[i]=C[i]+C[i-1];
	for(i=n-1;i>=0;i--)
	{
		B[C[A[i]]-1]=A[i];
		C[A[i]]--;
	}
	for(int i=0;i<n;i++)
		A[i]=B[i];
}
 




void swap(int &a,int &b);       //��������
int BinarySearch(int A[],int n,int x);   //���ֲ��ҵݹ�/�ǵݹ�  
void randomArray(int A[],int n);//����������� 
int randInt();                  //��������� 
void printArray(int A[],int n);//��ӡ���� 
