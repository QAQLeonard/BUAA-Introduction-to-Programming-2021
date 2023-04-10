#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
	char ch[1000];
	int length;
	bool double_quotation = false, long_notes = false, single_quotation = false;
	while (gets(ch) != NULL)
	{
		length = strlen(ch);

		for (int i = 0; i < length; i++)
		{

			if (!double_quotation && !long_notes && !single_quotation) //�Ȳ���˫������Ҳ���ڳ�ע����Ҳ���ڵ�������
			{
				if (ch[i] == '"')
				{
					double_quotation = true;
					printf("%c", ch[i]);
				}

				else if (ch[i] == '/' && ch[i + 1] == '/')
				{
					break;
				} //������ע��ֱ����������

				else if (ch[i] == '/' && ch[i + 1] == '*')
				{
					long_notes = true;
				}

				else if (ch[i] == 39)
				{
					printf("%c", ch[i]);
					single_quotation = true;
				}
				else
				{
					printf("%c", ch[i]);
				}
			}

			else if (double_quotation && !long_notes && !single_quotation) //˫������
			{
				printf("%c", ch[i]);
				if (ch[i] == '"')
				{
					double_quotation = false;
				}
			}

			else if (long_notes && !double_quotation && !single_quotation) //��ע����
			{
				if (ch[i] == '*' && ch[i + 1] == '/')
				{
					long_notes = false;
					i++;
				}
			}

			else if (single_quotation && !double_quotation && !long_notes)
			{
				printf("%c", ch[i]);
				if (ch[i] == 39)
				{
					single_quotation = false;
				}
			}
		}

		if (!long_notes) //����
		{
			printf("\n");
		}
	}
	return 0;
}
