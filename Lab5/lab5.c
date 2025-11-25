#include <stdio.h>
int ktranam(int nam)
{
    int flag=0;
   if ((nam % 400 == 0) || ((nam % 4 == 0) && (nam % 100 != 0)))
    {
        flag = 1;
    }
   return flag;
}
int main()
{  
     int a,b,c;
    printf("Nhap so 1: \n");
    scanf("%d",&a);
     printf("Nhap so 2: \n");
    scanf("%d",&b);
     printf("Nhap so 3: \n");
    scanf("%d",&c);
     int max = a;
    if (b>max)
    {
        max=b;
    }
    if (c>max)
    {
        max=c;
    }
     int min=a;
    if (b<min)
    {
        min=b;
    }
    if (c<min)
    {
        min=c;
    }
    printf("Gia tri lon nhat la: %d\n",max);
    printf("Gia tri nho nhat la: %d\n",min);
    int nhapnam,kq;
    printf("Nhap nam: ");
    scanf("%d", &nhapnam);
  kq= ktranam(nhapnam);
  if (kq == 1) 
    {
        printf("%d la nam nhuan\n", nhapnam);
    } 
    else 
    {
        printf("%d khong phai la nam nhuan\n", nhapnam);
    }
    int so;
    printf("nhap so : \n");
    scanf("%d", &so);
    if (so %5==0 && so %9 ==0)
    {
        printf("%d la so chia het cho 5 va 9",so);
    }
    else
    {
        printf("%d khong phai so chia het cho 5 va 9",so);
    }
    
    return 0;
}