#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int menu(){
	printf("\n");
	
    printf("+---------------======  Menu  ======----------------------+\n");
    printf("|1. Tinh trung binh tong cac so chia het cho 3 trong mang |\n");
    printf("|2. Tim gia tri lon nhat va nho nhat trong mang           |\n");
    printf("|3. Sap xep mang theo thu tu giam dan                     |\n");
    printf("|4. Tinh binh phuong cac phan tu trong mang 2 chieu       |\n");
    printf("|5. Khai bao mang                                         |\n");
    printf("|6. Exit                                                  |\n");
    printf("+------------------===== END =====------------------------+\n");
	printf("Moi ban chon so tu[1-5]\n");
	int chon ;
	scanf("%d",&chon);
	return chon;
	}
	void sapXepGiamDan(){
	 int a[100];
    int n;
    
    printf("\nNhap so luong phan tu n = ");
    do{
        scanf("%d", &n);
        if(n <= 0){
            printf("\nNhap lai n = ");
        }
    }while(n <= 0);
    for(int i = 0; i < n; i++){
        printf("\nNhap a[%d] = ",i);
        scanf("%d", &a[i]);
    }
    int temp;
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] < a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;        
            }
        }
    }
    
    
    printf("\nMang da sap xep la: ");
    for(int i = 0; i < n; i++){
        printf("%5d", a[i]);
    }
    
		}
		void binhPhuongTongTrongMang(){
			int a[100][100];
			int n =0,m=0;
			printf("Moi ban nhap mang 2 chieu");
		printf("Nhap m ="); scanf("%d",&m);
			printf("Nhap n ="); scanf("%d",&n);
			for(int i = 0;i<m;i++){
				for(int j = 0; j<n;j++){
					printf("a[%d][%d]=",i,j);
					scanf("%d",&a[i][j]);
					}
				}
				printf("Xuat mang 2 chieu\n");
				
				for(int i = 0; i< m ;i++){
					for(int j = 0 ; j<n; j++){
						printf("a[%d][%d]= %d\t",i,j,a[i][j]);
						}
						printf("\n");
					}
					printf("\nIn binh phuong\n");
						for(int i= 0;i<m;i++){
						for(int j = 0;j<n;j++){
							printf("%d\t",a[i][j] * a[i][j]);
							}
						}
			}
			
			
void khaiBaoMang(){
	int array[5]={1,2,3,4,5};
	float crr[3] = {2,5,4.3};
	printf("Phan tu dau tien la %d",array[0]);
	}
void tongMangChia3(){
      int i, n;
      printf("Moi nhap so gia tri muon tao: ");
      scanf("%d",&n);
      int mang[n];
      for(i=0;i<n;i++){
            printf("Moi nhap phan tu thu[%d] la: ", i);
            scanf("%d",&mang[i]);
      }
      float tong=0, trungBinh;
      int dem=0;
      for(i=0;i<n;i++){
            if(mang[i]%3==0){
                  tong+=mang[i];
                  dem++;
            }
      }
      trungBinh = tong/dem;
      printf("Trung binh tong cac so chia het cho 3 trong mang la %.2f", trungBinh);
      
}
	void nhapSo(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Nhap vao phan tu a[%d]: ", i);
        scanf("%d", &a[i]);
    }
}
int max(int a[], int n)
{
    int max = a[0];
    for (int i = 1; i < n; i++)
        if (max < a[i])
            max = a[i];
    return max;
}
 
int min(int a[], int n)
{
    int min = a[0];
    for (int i = 1; i < n; i++)
        if (min > a[i])
            min = a[i];
    return min;
}		




	void timMinMax( ){
		system("cls");
		int a[1000];
    int n;
    printf("\nNhap n = ");
    scanf("%d", &n);
    nhapSo(a, n);
    printf("\nMax = %d", max(a, n));
    printf("\nMin = %d", min(a, n));
		   getch();
      

}

 
main(){
    while(true){
        int chon = menu();
        if(chon>5 || chon <1){
        	printf("Chon so tu 1-5 .Vui long chon lai \n");
        	}else{
			
            
        switch(chon){
        	case 1:
        	tongMangChia3();
        		break;
			case 2:
			timMinMax(); 
			 break;
			case 3:
				sapXepGiamDan();
			 break;
			case 4:
			binhPhuongTongTrongMang();
			  	break;
            case 5:
                khaiBaoMang();
            break;
                case 6:
                	exit(0);
           	break;
                	
        }
        }

    }
}



		
		
	
