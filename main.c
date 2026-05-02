//Write your code in this file

#include <stdio.h>
#include <math.h>

int högst_medelpoäng(int total1, int total2, int total3, int total4, int total5){

    int Vilken_elev = 1;
   
    float medelp1 = total1/13.0;
    float medelp2 = total2/13.0;
    float medelp3 = total3/13.0;
    float medelp4 = total4/13.0;
    float medelp5 = total5/13.0;

    float högst_medelpoäng = medelp1;

    if(medelp2 > högst_medelpoäng){
        högst_medelpoäng = medelp2;
        Vilken_elev = 2;
    }
   if(medelp3 > högst_medelpoäng){
        högst_medelpoäng = medelp3;
        Vilken_elev = 3;
    }
   if(medelp4 > högst_medelpoäng){
        högst_medelpoäng = medelp4;
        Vilken_elev = 4;
    }
   if(medelp5 > högst_medelpoäng){
        högst_medelpoäng = medelp5;
        Vilken_elev = 5;
    }

return Vilken_elev;
}


int main(){

    char elev1[10];
    char elev2[10];
    char elev3[10];
    char elev4[10];
    char elev5[10];

    int prov1[13];    
    int prov2[13];
    int prov3[13];
    int prov4[13];
    int prov5[13];
    
    int total1 = 0;
    int total2 = 0;
    int total3 = 0;
    int total4 = 0;
    int total5 = 0;

    scanf("%s",elev1);
            for(int i = 0; i<13; i++){

            scanf("%d",&prov1[i]);

            total1 = total1 + prov1[i];
        }

    scanf("%s",elev2);
         for(int i = 0; i<13; i++){

            scanf("%d",&prov2[i]);

            total2 = total2 + prov2[i];
        }

     scanf("%s",elev3);
         for(int i = 0; i<13; i++){

            scanf("%d",&prov3[i]);

            total3 = total3 + prov3[i];
        }

     scanf("%s",elev4);
        for(int i = 0; i<13; i++){

            scanf("%d",&prov4[i]);

            total4 = total4 + prov4[i];
        }

     scanf("%s",elev5);
        for(int i = 0; i<13; i++){

            scanf("%d",&prov5[i]);

           total5= total5+ prov5[i];
        }

        if(högst_medelpoäng(total1, total2, total3, total4, total5) == 3){
            printf("%s",elev3);
        }



    return 0;
}


