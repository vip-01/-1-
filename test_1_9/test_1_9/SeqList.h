
#pragma once

//typedef int SLDataType;
//#define N 10
//
//struct SeqList
//{
//	SLDataType a[N];
//	int size;
//	int capacity;
//};
//
////β��βɾ  ͷ��ͷɾ
//void SeqListPushBack(struct SeqList* ps, SLDataType x);
//void SeqListPopBack(struct SeqList* ps);
//void SeqListPushFront(struct SeqList* ps, SLDataType x);
//void SeqListPopFront(struct SeqList* ps);
//
////����λ�õĲ���ɾ��
//void SepListInsert(struct SeList* ps, int pos,
//	SLDataType x);
//void SeqlistErase(struct Seqlist* ps, int pos);
////����λ�õĲ���ɾ��
//void SeqlistInsert(struct Seqlist* ps, int pos,
//	SLDataType x);
//void SeqlistErase(struct Seqlist* ps, int pos);


typedef struct SeqList
{
	SLDataType* a;
	int size;
	int capacity;
}SL, SeqList;

//β��βɾ  ͷ��ͷɾ
void SeqListPushBack(SL* ps, SLDataType x);
void SeqListPopBack(SL* ps);
void SeqListPushFront(SL* ps, SLDataType x);
void SeqListPopFront(SL* ps);

//����λ�õĲ���ɾ��
void SepListInsert(SL* ps, int pos,
	SLDataType x);
void SeqlistErase(SL* ps, int pos);