# include<stdio.h>
# include<stdlib.h>
struct monkey
{
int number;
struct monkey *next;
};
struct monkey *p,*q,*head=NULL,*temp;
struct monkey *add(struct monkey *head,int end)
{ int i=1;
while(i<=end) //END代表猴子总数
{
q=(struct monkey *)malloc(sizeof(struct monkey));
q->number=i;//为每个猴子编一个号码
if(head==NULL)
{
head=p=q;
}
else
if(i==end)
{
p->next=q;
q->next=head;
}
p->next=q;
p=q;
i++;
}
return head;
}
struct monkey *game(struct monkey *head,int out,int end)
{
p=head; int i=1;
while(p->next!=p)
{
for(i=1;i<out-1;i++)
{
p=p->next;
// i+=out;//OUT代表猴子退出的数
}
/*if(p==head) //如果是头结点HEAD指向下一个值
{
temp=head;
head=temp->next;
free(temp);//释放头结点
}*/
temp=p->next; //删掉p->next
p->next=temp->next;
p=p->next;
free(temp);//删掉p->next后并释放他
}
printf("猴子大王:%d\n",p->number);
return NULL;
}
void main()
{
int n,m;
printf("\n请输入猴子个数m和报数n\n");
scanf("%d",&n);
scanf("%d",&m);
head=add(head,n);
head=game(head,m,n);
}
