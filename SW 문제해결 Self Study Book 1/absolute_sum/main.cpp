#pragma once
// ���� : 
// 5 x 5�� 2�� �迭�� �������� 25���� ���ڷ� �ʱ�ȭ�� �� �� 25���� �� ��ҿ�
// ���ؼ� �� ��ҿ� �̿��� ��ҿ��� ���� ���밪�� ���� ��,
// ���� ��� ���� �� ���� ���Ѵ�.

#include <iostream>

using namespace std;

int main() {
	int sum = 0, tempSum = 0;
	int tempR, tempC;
	int arr[5][5] = { 0, };
	int dx[4] = { 0, 0, -1, 1 };
	int dy[4] = { -1, 1, 0, 0 };

	//�迭 ����
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++){
			arr[i][j] = rand() % 10;

			printf("%d ", arr[i][j]);
		}

		printf("\n");
	}

	printf("\n");

	//��Ÿ�� �̿��� Ž��
	for (int r = 0; r < 5; r++) {
		for (int c = 0; c < 5; c++) {
			tempSum = 0;
			for (int d = 0; d < 4; d++) {
				tempR = r + dy[d];
				tempC = c + dx[d];
				if (tempR >= 0 && tempR < 5 && tempC >= 0 && tempC < 5) {
					tempSum += abs(arr[r][c] - arr[tempR][tempC]);
				}
			}
			printf("%d ", tempSum);
			sum += tempSum;
		}

		printf("\n");
	}

	//�� ��
	printf("\n%d", sum);

	return 0;
}