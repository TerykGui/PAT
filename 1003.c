//PAT������������
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void main()
{
	char a[10][100];
	int n; int i, j;
	scanf("%d", &n);

	for (i = 0; i < n; i++)//��������ַ�����
	{
		scanf("%s", a[i]);
	}
	for (i = 0; i < n; i++)
	{
		int np = 0, na = 0, nt = 0, len, lp, lt;
		j = 0;
		while (a[i][j] != '\0')
		{
			if (a[i][j] == 'P')
			{
				np++;
				lp = j;//��¼P��λ�ã�Ҳ��ǰ���A�ĸ���
			}
			else if (a[i][j] == 'T')
			{
				nt++;
				lt = j;
			}
			else if (a[i][j] == 'A')
			{
				na++;
			}
			j++;
		}
		len = strlen(a[i]);
		
		if (np != 1 || nt != 1 || (np + nt + na) < len || lt <= lp || na < 1)
		{
			puts("NO"); continue;
		}
		int x = lt - lp - 1, y = len - lt - 1;
		if (x*lp == y)
			puts("YES");
		else
			puts("NO");
	}
}