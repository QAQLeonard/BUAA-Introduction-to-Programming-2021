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

			if (!double_quotation && !long_notes && !single_quotation) //既不在双引号里也不在长注释里也不在单引号里
			{
				if (ch[i] == '"')
				{
					double_quotation = true;
					printf("%c", ch[i]);
				}

				else if (ch[i] == '/' && ch[i + 1] == '/')
				{
					break;
				} //遇到短注释直接跳过本行

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

			else if (double_quotation && !long_notes && !single_quotation) //双引号里
			{
				printf("%c", ch[i]);
				if (ch[i] == '"')
				{
					double_quotation = false;
				}
			}

			else if (long_notes && !double_quotation && !single_quotation) //长注释里
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

		if (!long_notes) //换行
		{
			printf("\n");
		}
	}
	return 0;
}
