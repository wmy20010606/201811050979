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
while(i<=end) //END�����������
{
q=(struct monkey *)malloc(sizeof(struct monkey));
q->number=i;//Ϊÿ�����ӱ�һ������
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
// i+=out;//OUT��������˳�����
}
/*if(p==head) //�����ͷ���HEADָ����һ��ֵ
{
temp=head;
head=temp->next;
free(temp);//�ͷ�ͷ���
}*/
temp=p->next; //ɾ��p->next
p->next=temp->next;
p=p->next;
free(temp);//ɾ��p->next���ͷ���
}
printf("���Ӵ���:%d\n",p->number);
return NULL;
}
void main()
{
int n,m;
printf("\n��������Ӹ���m�ͱ���n\n");
scanf("%d",&n);
scanf("%d",&m);
head=add(head,n);
head=game(head,m,n);
}
