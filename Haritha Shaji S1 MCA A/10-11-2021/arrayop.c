#include<stdio.h>
#include<stdlib.h>
void main()
{
int array[100],pos,i,n,val,choice=1,ch,flag=0;
printf("enter the no.of elements in an array :\n");
scanf("%d",&n);
printf("enter %d elements\n",n);
for(i=0;i<n;i++)
scanf("%d",&array[i]);
while(choice>0&&choice<6)
{
   printf("\n1.insertion\n2.traversal\n3.deletion\n4.searching\n5.exit\n");
   printf("enter your choice\n");
   scanf("%d",&choice);
    switch(choice)
     {
      case 1:
          printf("enter the location to insert an element\n");
          scanf("%d",&pos);
          printf("enter the value to insert\n");
          scanf("%d",&val);
          for(i=n-1;i>=pos-1;i--)
           {
            array[i+1]=array[i];

           }

           array[pos-1]=val;
           printf("after insertion : \n");
           for(i=0;i<n+1;i++)
           printf("%d\t",array[i]);
           break;
      case 2:
           printf("resultant array is\n");
           for(i=0;i<n;i++)
            {
              printf("%d\n",array[i]);
            }
           break;
      case 3:
           printf("enter the location to delete the element\n");
           scanf("%d",&pos);
           for(i=pos-1;i<n;i++)
            {
              array[i]=array[i+1];
            }
            printf("resultant array\n");
            for(i=0;i<n-1;i++)
            printf("%d\n",array[i]);
            break;
      case 4:
            printf("enter element to search\n");
            scanf("%d",&ch);
            for(i=0;i<n;i++)
             {
              if(array[i]==ch)
                {
                 flag=1;
                 break;
                }
             }
            if(flag==1)
             {
              printf("%d found at position %d\n",ch,i+1);
             }
             else
              {
               printf("not found");

              }
               break;
        case 5:
            exit(0);
            break;

        default :

printf("\nWRONG CHOICE\n");
   }
}}
