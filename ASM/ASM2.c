    #include <stdio.h>
    int main()
    {
        int luachon;
        do
        { 
        printf("-------ASM 1 cua Nguyen Quoc Vu PS49768-------\n");
        printf("1.Kiem tra so nguyen\n");
        printf("2.Tim uoc so chung va boi so chung cua 2 so\n");
        printf("3.Tinh tien cho quan karaoke\n");
        printf("4.Tinh tien dien\n");
        printf("5.Doi tien\n");
        printf("6.Tinh lai suat vay ngan hang vay tra gop\n");
        printf("7.Vay tien mua xe\n");
        printf("8.Sap xep thong tin sinh vien\n");
        printf("9.Xay dunng game FPOLY-LOTT\n");
        printf("10.Tinh toan giai phan so\n");
        printf("0.Thoat\n");
        printf("Nhap chuc nang:");
        scanf("%d",&luachon);
        switch(luachon)
        {
        case 1: 
        int x,nt,cp;
        nt = 0;
        cp = 0;
        printf("Nhap so x: \n");
        scanf("%d", &x);
        if(x<0)
        {
            printf("%d khong phai so nguyen\n",x);
        }
        else
        {
            printf("%d la so nguyen\n",x);
        }
        if ( x== 1)
        {
            printf("%d khong phai so nguyen to\n");
            nt = 1;
        }
        else 
        {
            for(int i =2;i<x;i++)
            {
                if(x %i==0)
                {
                    nt++;
                    break;
                }
            }
        }
        if(nt==0)
        {
            printf("%d la so nguyen to\n",x);
        }
        else
        {
            printf("%d khong phai la so nguyen to\n",x);
        }
         if ( x == 0 || x == 1)
        {
            printf("%d la so chinh phuong\n",x);
        }
        else 
        {
            for(int i = 1 ;i*i<=x;i++)
            {
                if(i*i == x)
                {
                    cp++;
                    break;
                }
            }
        }
        if (cp == 1)
        {
            printf("%d la so chinh phuong\n",x);
        }
        else 
        {
            printf("%d khong phai la so chinh phuong\n",x);
        }
        break;
        case 2: printf("ban da chon chuc nang 2 tim uoc so chung va boi so chung cua 2 so\n");
        break;
        case 3: printf("ban da chon chuc nang 3 tinh tien cho quan karaoke\n");
        break;
        case 4: printf("ban da chon chuc nang 4 tinh tien dien\n");
        break;
        case 5: printf("ban da chon chuc nang 5 doi tien\n");
        break;
        case 6: printf("ban da chon chuc nang 6 tinh lai suat vay ngan hang vay tra gop\n");
        break;
        case 7: printf("ban da chon chuc nang 7 vay tien mua xe\n");
        break;
        case 8: printf("ban da chon chuc nang 8 sap xep thong tin sinh vien\n");
        break;
        case 9: printf("ban da chon chuc nang 9 tay dunng game FPOLY-LOTT\n");
        break;
        case 10: printf("ban da chon chuc nang 10 tinh toan giai phan so\n");
        break;
        case 0:
        break;
         default:
        printf("chuc nang khong hop le moi nhap lai\n");
        break;
        }
     } while (luachon !=0);
        return 0;
    }