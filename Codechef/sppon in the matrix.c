#include<stdio.h>
main()
{
  int arr[100][100];
  char s[5];
  int r,c,i,j,count;
  char ch;
  scanf("%d %d",&r,&c);
  fflush(stdin);
  for(i=0;i<r;i++)
  {
  for(j=0;j<c;j++)
  {

     arr[i][j]=getchar();
  }
  }
  for(i=0;i<r;i++)
  {
  for(j=0;j<c;j++)
  {
    }
  }
  for(j=0;j<c;j++)
  {
  for(i=0;i<r;i++)
  {
     ch=putchar(arr[j][i]);
     if(r>=5 && ch='s')
     s[0]=ch;
     if(r>=5 && ch='p')
        s[1]=ch;
     if(r>=5 && ch='o')
        s[2]=ch;
        if(r>=5 && ch='o')
        s[3]=ch;
        if(r>=5 && ch='n')
        s[4]=ch;
    }
  }
  if(puts(s)== "spoon")
    printf("there is a spoon");
  return 0;
}
