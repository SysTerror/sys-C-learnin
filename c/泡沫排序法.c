#include <stdio.h>

int main() {
	int v[5], i, j;

	// 输入
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &v[i]);
	}

	// 泡沫排序·由小到大
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			if (v[j] > v[j+1])
			{
				int t = v[j];
				v[j] = v[j + 1];
				v[j + 1] = t;
			}
		}
	}

	for (i = 0; i < 5; i++)
	{
		printf("%d, ", v[i]);
	}
}