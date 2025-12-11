#include <stdio.h>
#include <string.h>
struct sinhvien {
        int masv;
        char name[50];
        float diem;
        char hocluc[50];
    };
void inputStructSV(struct sinhvien x[],int n)
    {
        int i;
        for(i=0;i<n;i++)
        {
            printf("Nhap ma SV[%d]: \n",i);
            scanf("%d", &x[i].masv);
            getchar();  
            printf("Nhap ten SV[%d]: \n",i);
            scanf(" %s", &x[i].name);
            printf("Nhap diem[%d]: \n",i);
            scanf("%f", &x[i].diem);
        }
    }
void printStruct(struct sinhvien x[],int n)
    {
        int i;
        printf("Ma SV  ");
        printf("Ho Ten  ");
        printf("Diem  ");
        printf("Hoc Luc  \n");
        for(i=0;i<n;i++)
        {
            printf("%4d  ", x[i].masv);
            printf("%6s  ", x[i].name);
            printf("%4.1f  ", x[i].diem);
            printf("%9s\n", x[i].hocluc);
        }
    }
void xeploai(struct sinhvien x[],int n )
{
    int i;
    for(i=0;i<n;i++)
    {
            if(x[i].diem<5)
            {
                strcpy (x[i].hocluc, "Yeu");
            }
            else if(x[i].diem<6.5)
            {
                strcpy (x[i].hocluc,"TB");
            }
            else if(x[i].diem<8)
            {
                strcpy (x[i].hocluc,"Kha");
            }
            else if(x[i].diem<9)
            {
                strcpy (x[i].hocluc,"Gioi");
            }
            else
            {
                strcpy (x[i].hocluc,"Xuat sac");
            }
    }
}
void swapStructSV(struct sinhvien *x,struct sinhvien *y)
{
    struct sinhvien temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int main()
{
    int k,j,dssv;
        struct sinhvien SA21303[39];
        printf("Nhap so luong: \n");
        scanf("%d", &dssv);
        inputStructSV(SA21303,dssv);
        printStruct(SA21303,dssv);
        xeploai(SA21303,dssv);
        for(k=0;k<dssv-1;k++)
        {
            for(j=k+1;j<dssv;j++)
            {
                if(SA21303[k].diem<SA21303[j].diem)
                {
                    swapStructSV(&SA21303[k],&SA21303[j]);
                }       
            }
        }
        printf("Danh sach SV sau khi sort: \n");
        printStruct(SA21303,dssv);
    int masv_timkiem; 
    int tim_thay = 0;

    printf("Nhap Ma SV can tim: ");
    scanf("%d", &masv_timkiem); 
    for (int i = 0; i < dssv; i++) {
        if (SA21303[i].masv == masv_timkiem) {
          printf("\nTim thay sinh vien co Ma SV %d:\n", masv_timkiem);
            printf("\n%-10s %-20s %-10s %-10s\n", "Ma SV", "Ho Ten", "Diem", "Hoc Luc");
            printf("--------------------------------------------------\n");
         printf("%-10d %-20s %-10.1f %-10s\n", SA21303[i].masv, SA21303[i].name, 
             SA21303[i].diem,
             SA21303[i].hocluc);
            printf("--------------------------------------------------\n");
            tim_thay = 1; 
            break;        
        }
    }

   
    if (tim_thay == 0) {
        printf("Khong tim thay sinh vien co Ma SV %d trong danh sach.\n", masv_timkiem);
    }
        return 0;
}