#include<stdio.h>
#include<string.h>
char ch[100];

void my_array_func(char ca[])
{
    printf("%d\n", sizeof(ca));
}

void my_pointer_func(char *pa)
{
    printf("%d\n", sizeof(pa));
    
}


int main()
{
	scanf("%s",ch);
	printf("#include <stdio.h>\n\n");
	printf("char ga[] = \"abcdefghijklm\";\n\n");
	printf("void my_array_func(char ca[10])\n");
	printf("{\n");
	printf("    printf(\" addr of array param = %%#x \\n\", ca);\n");
	printf("    printf(\" addr (ca[0]) = %%#x \\n\", &(ca[0]));\n");
	printf("    printf(\" addr (ca[1]) = %%#x \\n\", &(ca[1]));\n");
	printf("    printf(\" ++ca = %%#x \\n\\n\", ++ca);\n");
	printf("}\n\n");
	printf("void my_pointer_func(char *pa)\n");
	printf("{\n");
	printf("    printf(\" addr of ptr param = %%#x \\n\", pa);\n");
	printf("    printf(\" addr (pa[0]) = %%#x \\n\", &(pa[0]));\n");
	printf("    printf(\" addr (pa[1]) = %%#x \\n\", &(pa[1]));\n");
	printf("    printf(\" ++pa = %%#x \\n\", ++pa);\n");	
	printf("}\n\n");
	printf("int main()\n");
	printf("{\n");
	printf("    printf(\" addr of global array = %%#x \\n\", &ga);\n");
	printf("    printf(\" addr (ga[0]) = %%#x \\n\", &(ga[0]));\n");
	printf("    printf(\" addr (ga[1]) = %%#x \\n\\n\", &(ga[1]));\n");
	printf("    my_array_func(ga);\n");
	printf("    my_pointer_func(ga);\n");
	printf("    return 0;\n");
	printf("}\n\n");

	printf("%d\n",strlen(ch)+1);
	my_array_func(ch);
	my_pointer_func(ch);
	
	
	
	return 0;
} 
