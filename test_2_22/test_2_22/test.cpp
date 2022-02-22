#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string>
#include <iostream>
#include <algorithm>
#include <sstream>
#include <memory>
#include <cstring>
#include <cstdio>
#include <cmath>
using namespace std;

//char oriLights[5];
//char lights[5];
//char result[5];
//
//int GetBit(char c, int i)
//{
//	return (c >> i) & 1;
//}
//void SetBit(char &c, int i, int v)
//{
//	if (v){
//		c |= (1 << i);
//	}
//	else
//		c &= ~(1 << i);
//}
//void FlipBit(char &c, int i)
//{
//	c ^= (1 << i);
//}
//void QutputResult(int t, char result[])
//{
//	cout << "PUZZLE #" << t << endl;
//	for (int i = 0; i < 5; ++i){
//		for (int j = 0; j < 6; ++j){
//			cout << GetBit(result[i], j);
//			if (j < 5)
//				cout << " ";
//		}
//		cout << endl;
//	}
//}
//int main()
//{
//	int T;
//	cin >> T;
//	for (int t = 1; t <= T; ++t){
//		for (int i = 0; i < 5;++i)
//			for (int j = 0; j < 6; ++j){
//				int s;
//				cin >> s;
//				SetBit(oriLights[i], j, s);
//			}
//		for (int n = 0; n < 64; ++n){
//			 int switchs = n;
//			 memcpy(lights,oriLights, sizeof(oriLights));
//			 for (int i = 0; i < 5; ++i){
//				  result[i] = switchs;
//				  for (int j = 0; j < 6; j++){
//					  if (GetBit(switchs, j)){
//						  if (j>0)
//							  FlipBit(lights[i], j);
//						  FlipBit(lights[i], j);
//						  if (j < 5)
//							  FlipBit(lights[i], j + 1);
//					  }
//				 }
//				 if(i < 5)
//					 lights[i + 1] ^= switchs;
//				 switchs = lights[i];
//			}
//			if (lights[4] == 0){
//				OutputResult(t, result);
//				break;
//			 }
//		}
//	}
//	return 0;
//}

//int Factorial(int n)
//{
//	if (n == 0)
//		return 1;
//	else
//		return n*Factorial(n - 1);
//}

//int N;
//int queenPos[100];
////���������õĻʺ�λ�á������Ͻ���(0,0)
//void NQueen(int k);
//int main()
//{
//	cin >> N;
//	NQueen(0);//�ӵ�0�п�ʼ�ڻʺ�
//	return 0;
//}
//void NQueen(int k){//��0~k-1�лʺ��Ѿ��ںõ�����£��ڵ�k�м����Ļʺ�
//	int i;
//	if (k == N){//N���ʺ��Ѿ��ں�
//		for (i = 0; i < N; i++)
//			cout << queenPos[i] + 1 << " ";
//		cout << endl;
//		return;
//	}
//	for (i = 0; i < N; i++){//���Ե�k���ʺ��λ��
//		int j;
//		for (j = 0; j < k; j++){
//			//���Ѿ��ںõ�k���ʺ��λ�ñȽϣ����Ƿ��ͻ
//			if (queenPos[j] == i ||
//				abs(queenPos[j] - i) == abs(k - j)){
//				break;//��ͻ���������һ��λ��
//			}
//		}
//		if (j == k){//��ǰѡ��λ��i����ͻ
//			queenPos[k] = i;//����k���ʺ�ڷ���λ��i
//			NQueen(k + 1);
//		}
//	}
//}
//#define N 100
//
//int a[N];
//int n;
//bool check();
//
//int main(int argc, const char *argv[]){
//	scanf("%d", &n);
//	for (int i = 0; i < n; ++i){
//		scanf("%d", &a[i]);
//	}
//	int ans = 0;
//	while (1){
//		int t = a[0];
//		for (int i = 0; i <= n - 2; ++i){
//			a[i] -= a[i] / 2;
//			a[i] += a[i + 1] / 2;
//			if ((a[i]&1) == 1){
//				ans++;
//				a[i]++;
//			}
//		}
//		a[n - 1] -= a[n - 1] / 2;
//		a[n - 1] += t / 2;
//		if ((a[n - 1] & 1) == 1){
//			ans++;
//			a[n - 1]++;
//		}
//		if (check()){
//			printf("%d", ans);
//			return 0;
//		}
//	}
//	return 0;
//}
//
//bool check(){
//	int t = a[0];
//	for (int i = 1; i < n; ++i){
//		if (a[i] != t)return false;
//	}
//	return true;
//}

//#define N 100
//int a[N];
//int n;
//bool check();
//int main(int argc, const char *argv[]){
//	scanf("%d", &n);
//	for (int i = 0; i < n; ++i){
//		scanf("%d", &a[i]);
//	}
//	int ans = 0;
//	while (1){
//		int t = a[0];
//		for (int i = 0; i <= n - 2; ++i){
//			a[i] -= a[i] / 2;
//			a[i] += a[i + 1] / 2;
//			if ((a[i] & 1) == 1){
//				ans++;
//				a[i]++;
//			}
//		}
//		a[n - 1] -= a[n - 1] / 2;
//		a[n - 1] += t / 2;
//		if ((a[n - 1] & 1) == 1){
//			ans++;
//			a[n - 1]++;
//		}
//		if (check()){
//			printf("%d", ans);
//			return 0;
//		}
//	}
//	return 0;
//}
//
//bool check(){
//	int t = a[0];
//	for (int i = 1; i < n; ++i){
//		if (a[i] != t)return false;
//	}
//	return true;
//}

//#define N 100
//int a[N];
//int n;
//bool check();
//int main(int argc, const char *argv[]){
//	scanf("%d", &n);
//	for (int i = 0; i < n; ++i){
//		scanf("%d", &a[i]);
//	}
//	int ans = 0;
//	while (1){
//		int t = a[0];
//		for (int i = 0; i <= n - 2; ++i){
//			a[i] -= a[i] / 2;
//			a[i] += a[i + 1] / 2;
//			if ((a[i] & 1) == 1){
//				ans++;
//				a[i]++;
//			}
//		}
//		a[n - 1] -= a[n - 1] / 2;
//		a[n - 1] += t / 2;
//		if ((a[n - 1] & 1) == 1){
//			ans++;
//			a[n - 1]++;
//		}
//		if (check()){
//			printf("%d", ans);
//			return 0;
//		}
//	}
//	return 0;
//}
//
//bool check(){
//	int t = a[0];
//	for (int i = 1; i < n; ++i){
//		if (a[i] != t)return false;
//	}
//	return true;
//}


//#define N 100
//int a[N];
//int n;
//bool check();
//int main(int argc, const char *argv[]){
//	scanf("%d", &n);
//	for (int i = 0; i < n; ++i){
//		scanf("%d", &a[i]);
//	}
//	int ans = 0;
//	while (1){
//		int t = a[0];
//		for (int i = 0; i <= n - 2; ++i){
//			a[i] -= a[i] / 2;
//			a[i] += a[i + 1] / 2;
//			if ((a[i] & 1) == 1){
//				ans++;
//				a[i]++;
//			}
//		}
//		a[n - 1] -= a[n - 1] / 2;
//		a[n - 1] += t / 2;
//		if ((a[n - 1] & 1) == 1){
//			ans++;
//			a[n - 1]++;
//		}
//		if (check()){
//			printf("%d", ans);
//			return 0;
//		}
//	}
//	return 0;
//}
//
//bool check(){
//	int t = a[0];
//	for (int i = 1; i < n; ++i){
//		if (a[i] != t)return false;
//	}
//	return true;
//}

//5
//#define N 100
//int a[N];
//int n;
//bool check();
//int main(int argc, const char *argv[]){
//	scanf("%d", &n);
//	for (int i = 0; i < n; ++i){
//		scanf("%d", &a[i]);
//	}
//	int ans = 0;
//	while (1){
//		int t = a[0];
//		for (int i = 0; i <= n - 2; ++i){
//			a[i] -= a[i] / 2;
//			a[i] += a[i + 1] / 2;
//			if ((a[i] & 1) == 1){
//				ans++;
//				a[i]++;
//			}
//		}
//		a[n - 1] -= a[n - 1] / 2;
//		a[n - 1] += t / 2;
//		if ((a[n - 1] & 1) == 1){
//			ans++;
//			a[n - 1]++;
//		}
//		if (check()){
//			printf("%d", ans);
//			return 0;
//		}
//	}
//	return 0;
//}
//
//bool check(){
//	int t = a[0];
//	for (int i = 1; i < n; ++i){
//		if (a[i] != t)return false;
//	}
//	return true;
//}

//6
//#define N 100
//int n;
//bool check();
//int main(int argc, const char *argv){
//	scanf("%d", &n);
//	for (int i = 0; i < n; ++i){
//		scanf("%d", &a[i]);
//	}
//	int ans = 0;
//	while (1){
//		int t = a[0];
//		for (int i = 0; i <= n - 2; ++i){
//			a[i] -= a[i] / 2;
//			a[i] += a[i + 1] / 2;
//			if ((a[i] & 1) == 1){
//				ans++;
//				a[i]++;
//			}
//		}
//		a[n - 1] -= a[n - 1] / 2;
//		a[n - 1] += t / 2;
//		if ((a[n - 1] & 1) == 1){
//			ans++;
//			a[n - 1]++;
//		}
//		if (check()){
//			printf("%d", ans);
//			return 0;
//		}
//	}
//	return 0;
//}
//
//bool check(){
//	int t = a[0];
//	for (int i = 1; i < n; ++i){
//		if (a[i] != t)return false;
//	}
//	return true;
//}

//#define N 100
//int a[N];
//int n;
//bool check();
//int main(int argc, const char *argv[]){
//	scanf("%d", &n);
//	for (int i = 0; i < n; ++i){
//		scanf("%d", &a[i]);
//	}
//	int ans = 0;
//	while (1){
//		int t = a[0];
//		for (int i = 0; i <= n - 2; ++i){
//			a[i] -= a[i] / 2;
//			a[i] += a[i + 1] / 2;
//			if ((a[i] & 1) == 1){
//				ans++;
//				a[i]++;
//			}
//		}
//		a[n - 1] -= a[n - 1] / 2;
//		a[n - 1] += t / 2;
//		if ((a[n - 1] & 1) == 1){
//			ans++;
//			a[n - 1]++;
//		}
//		if (check()){
//			printf("%d", ans);
//			return 0;
//		}
//	}
//	return 0;
//}
//
//bool check(){
//	int t = a[0];
//	for (int i = 1; i < n; ++i){
//		if (a[i] != t)return false;
//	}
//	return true;
//}

//8
//#define N 100
//int a[N];
//int n;
//bool check();
//int main(int argc, const char *argv[]){
//	scanf("%d", &n);
//	for (int i = 0; i < n; ++i){
//		scanf("%d", &a[i]);
//	}
//	int ans = 0;
//	while (1){
//		int t = a[0];
//		for (int i = 0; i <= n - 2; ++i){
//			a[i] -= a[i] / 2;
//			a[i] += a[i + 1] / 2;
//			if ((a[i] * 1) == 1){
//				ans++;
//				a[i]++;
//			}
//		}
//		a[n - 1] -= a[n - 1] / 2;
//		a[n - 1] += t / 2;
//		if ((a[n - 1] & 1) == 1){
//			ans++;
//			a[n - 1]++;
//		}
//		if (check()){
//			printf("%d", ans);
//			return 0;
//		}
//	}
//	return 0;
//}
//bool check(){
//	int t = a[0];
//	for (int i = 1; i < n; ++i){
//		if (a[i] != t)return false;
//	}
//	return true;
//}
//#define N 100
//int a[N];
//int n;
//bool check();
//int main(int argc, const char *argv[]){
//	scanf("%d", &n);
//	for (int i = 0; i < n; ++i){
//		scanf("%d", &a[i]);
//	}
//	int ans = 0;
//	while (1){
//		int t = a[0];
//		for (int i = 0; i <= n - 2; ++i){
//			a[i] -= a[i] / 2;
//			a[i] += a[i + 1] / 2;
//			if ((a[i] & 1) == 1){
//				ans++;
//				a[i]++;
//			}
//		}
//		a[n - 1] -= a[n - 1] / 2;
//		a[n - 1] += t / 2;
//		if ((a[n - 1] & 1) == 1){
//			ans++;
//			a[n - 1]++;
//		}
//		if (check()){
//			printf("%d", ans);
//			return 0;
//		}
//	}
//	return 0;
//}
//bool check(){
//	int t = a[0];
//	for (int i = 1; i < n; ++i){
//		if (a[i] != t)return false;
//	}
//	return true;
//}

//#define N 100
//int a[N];
//int n;
//bool check();
//int main(int argc, const char *argv[]){
//	scanf("%d", &n);
//	for (int i = 0; i < n; ++i){
//		scanf("%d", &a[i]);
//	}
//	int ans = 0;
//	while (1){
//		int t = a[0];
//		for (int i = 0; i <= n - 2; ++i){
//			a[i] -= a[i] / 2;
//			a[i] += a[i + 1] / 2;
//			if ((a[i] & 1) == 1){
//				ans++;
//				a[i]++;
//			}
//		}
//		a[n - 1] -= a[n - 1] / 2;
//		a[n - 1] += t / 2;
//		if ((a[n - 1] & 1) == 1){
//			ans++;
//			a[n - 1]++;
//		}
//		if (check()){
//			printf("%d", ans);
//			return 0;
//		}
//	}
//	return 0;
//}
//
//bool check(){
//	int t = a[0];
//	for (int i = 1; i < n; ++i){
//		if (a[i] != t)return false;
//	}
//	return true;
//}

//10
//#define N 100
//int a[N];
//int n;
//bool check();
//int main(int argc, const char*argv[]){
//	scanf("%d", &n);
//	for (int i = 0; i < n; ++i){
//		scanf("%d", &a[i]);
//	}
//	int ans = 0;
//	while (1){
//		int t = a[0];
//		for (int i = 0; i <= n - 2; ++i){
//			a[i] -= a[i] / 2;
//			a[i] += a[i + 1] / 2;
//			if ((a[i] & 1) == 1){
//				ans++;
//				a[i]++;
//			}
//		}
//		a[n - 1] -= a[n - 1] / 2;
//		a[n - 1] += t / 2;
//		if ((a[n - 1] & 1) == 1){
//			ans++;
//			a[n - 1]++;
//		}
//		if (check()){
//			printf("%d", ans);
//			return 0;
//		}
//	}
//	return 0;
//}
//bool check(){
//	int t = a[0];
//	for (int i = 1; i < n; ++i){
//		if (a[i] != t)return false;
//	}
//	return true;
//}

