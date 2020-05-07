#include <stdio.h>
#include "2-3_tree.h"
#include <string.h>
#include <stdlib.h>

int main() {
	node* root = NULL;
	node* t = NULL;
	int i=1;
	float tmp;
	char c;
	while(i)
	{
		printf("What do you want to do?\n");
		printf("Press 'a' to add new number\n");
		printf("Press 'd' to delete a number\n");
		printf("Press 'f' to find a number\n");
		printf("Press 'e' to end\n");
		scanf("%c", &c);
		if(c=='\n')
			scanf("%c", &c);
		if(c=='a')
		{
			printf("Please enter number\n");
			scanf("%f", &tmp);
			if(c=='\n')
				scanf("%c", &c);
			root=insert(root, tmp);
		}
		else if(c=='d'){
			printf("Please enter number\n");
			scanf("%f", &tmp);
			if(c=='\n')
				scanf("%c", &c);
			root = del_key(root, tmp);
		}
		else if(c=='f'){
				printf("Please enter number\n");
				scanf("%f", &tmp);
				if(c=='\n')
					scanf("%c", &c);
				t = search(root, tmp);
				if (!t)
					printf("Not found\n");
				else
					printf("found\n");
		}
		else if(c=='e')
			i--;
		else
			printf("Unknown command\n");
	}
	del_tree(&root);
	return 0;
}
