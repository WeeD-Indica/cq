#include<stdio.h>

#define max 5 
static int a[max];
int front=-1,rear;
void Enqueue(int x);
void Dqueue();
void display();

int main()
{
  int ch,x,c=1;
  do
    {
      printf("1.INSERT\n2.DELETE\n3.DISPLAY\nENTER YOUR CHOICE:");
      scanf("%d",&ch);
      switch(ch)
	{
	case 1:
	  printf("\nEnter element to be inserted:\n");
	  scanf("%d",&x);
	  Enqueue(x);
	  break;
	case 2:
	  Dqueue();
	  break;
	case 3:
	  display();
	  break;
	default:printf("\nwrong input");
	}
      printf("Do you want to continue(1|0)?");
      scanf("%d",&c);
    }while(c);
}

void Enqueue(int x)
{
  if((front == 0 &&rear== max-1)||(rear==(front-1)%(max-1)))
    {
      printf("\nqueue full\n");
      return;
    }
  if(front==-1)
    {
      front=0;
      rear=0;
      a[rear]=x;
    }
  else if (rear==max-1 && front!=0)
      {
	  rear=0;
	  a[rear]=x;
      }
  else
    {
      rear++;
      a[rear]=x;
      
    }
}

void Dqueue()
{
  if(front==-1)
    {
      printf("\nqueue empty\n");
      return;
    }
  else
    {
      if(front==max&&rear<front)
	front=0;
      printf("\nelement to be deleted is %d\n",a[front]);
      front++;
      if(front==rear)
	{
	  front=-1;
	  rear=-1;
	}
    }
  return;
}

void display()
{
  int i;
  if (front==-1)
    {
      printf("\nEmpty Queue\n");
      return;
    }
  if(rear>=front)
    {
      for(i=front;i<=rear;i++)
	{
	  printf("%d ",a[i]);
	}
    }
  else
    {
      for(i=front;i<max;i++)
	printf("%d ",a[i]);

      for(i=0;i<rear+1;i++)
	printf("%d ",a[i]);
    }
}
	
      
      
  
	     
  
  
  
      
      
