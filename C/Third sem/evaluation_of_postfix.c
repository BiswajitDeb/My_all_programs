#include <stdio.h>
#include <ctype.h>
int stack[50];
int top=-1;
void postfix_evaluation();
void push(int );
int pop();
char postfix[50];

void postfix_evaluation()
  { 
  	char ch;
	int i=0,p1,p2;
	while( (ch=postfix[i++]) != '\0')
	  { 
	     if(isdigit(ch))
           { 
		     push(ch-'0');
		   }
		else
          { 
		    p2=pop();
		    p1=pop();
		    switch(ch)
    { 
		case '+' : push(p1+p2); break;
		case '-' : push(p1-p2); break;
		case '*' : push(p1*p2); break;
		case '/' : push(p1/p2); break;
	}
  }
}
		printf("\n Given Postfix Expn : %s\n",postfix);
		printf("\n Result after Evaluation : %d\n",stack[top]);
}
	void push(int q)
		{
		  stack[++top]=q;
		}
	int pop()
		{
		 return(stack[top--]);
		}

        
int main()
   { 
		printf("\n\nEnter Postfix Expression : ");
		scanf("%s",postfix);
		postfix_evaluation();
		return 0;
	}
