#define _CRT_SECURE_NO_WARNINGS 1

#include "SeqList.h"

//β��βɾ  ͷ��ͷɾ
void SeqListPushBack(SL* ps, SLDataType x);
void SeqListPopBack(SL* ps);
void SeqListPushFront(SL* ps, SLDataType x);
void SeqListPopFront(SL* ps);

//����λ�õĲ���ɾ��
void SepListInsert(SL* ps, int pos,
	SLDataType x);
void SeqlistErase(SL* ps, int pos);