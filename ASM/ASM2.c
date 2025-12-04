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
        case 2: 
        int so1,so2,ucln,bcnn,i;
        printf("Nhap so: \n");
        scanf("%d %d", &so1, &so2);
        for(i =1;i<=so1 && i<=so2;i++)
        {
           if(so1 % i == 0 && so2 % i == 0)
           {
                ucln = i;
           }
        }
        printf("Uoc chung lon nhat la: %d\n",ucln);
        bcnn = (so1*so2)/ucln;
        printf("Boi chung nho nhat la: %d\n",bcnn);
        break;
        case 3:
        int start,end,total;
        printf("Nhap gio bat dau: \n");
        scanf("%d", &start);
        break;
        case 4:
        double dien,bac1,bac2,bac3,bac4,bac5,bac6,tong;
    bac1 =1.678;
    bac2 =1.734;
    bac3 =2.014;
    bac4 =2.536;
    bac5 =2.834;
    bac6 =2.927;
    printf("Nhap muc dien tieu thu");
    scanf("%lf",&dien);
    if(dien >= 0 && dien <= 50)
    {
        tong = dien * bac1;
        printf("So tien can phai dong la %.2lf",tong);
    }
      else if (dien >= 51 && dien <= 100)
    {
        tong = dien * bac2;
        printf("So tien can phai dong la %.2lf",tong);
    }
    else if (dien >= 101 && dien <= 200)
    {
        tong = dien * bac3;
        printf("So tien can phai dong la %.2lf",tong);
    }
    else if (dien >= 201 && dien <= 300)
    {
        tong = dien * bac4;
        printf("So tien can phai dong la %.2lf",tong);
    }
    else if (dien >= 301 && dien <= 400)
    {
        tong = dien * bac5;
        printf("So tien can phai dong la %.2lf",tong);
    }
    else 
    {
        tong = dien * bac6;
        printf("So tien can phai dong la %.2lf",tong);
    }
        break;
        case 5:
    int menhgia[] = {500,200,100,50,20,10,5,2,1}; 
    int tien; 
    int tien_con_lai;
    int soto;

    printf("Nhap so tien muon doi: \n");
    scanf("%d", &tien);
    
    tien_con_lai = tien;

    printf("Ket qua: \n");
    
    for(int i = 0; i < 9; i++)
    {
        int giatri = menhgia[i];
        if (giatri >= tien) {
            continue;
        }
        soto = tien_con_lai / giatri;
        if(soto > 0)
        {
            printf("%d to %d\n", soto, giatri);
            tien_con_lai %= giatri;
        }
    }        
        break;
        case 6: 
        double vay,lai;
        lai = 0.05;
        int kyhan = 12;
        printf("Nhap so tien muon vay: \n");
        scanf("%lf", &vay);
        double tonglai;
        tonglai = vay * lai * (kyhan +1 )/ 2;
        double tongtien;
        tongtien = vay + tonglai;
        printf("Tong tien lai phai tra: %.0f VND\n", tonglai);
    printf("Tong tien phai tra sau 12 thang: %.0f VND\n", tongtien);
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
