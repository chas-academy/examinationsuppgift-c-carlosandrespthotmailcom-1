//Write your code in this file

#include <stdio.h>

int beräkna_högst_medelpoäng(int total1, int total2, int total3, int total4, int total5){

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
    
    float total1 = 0;
    float total2 = 0;
    float total3 = 0;
    float total4 = 0;
    float total5 = 0;

    scanf("%s",elev1);

    for(int i = 0; i < 13; i++){
        scanf("%d",&prov1[i]);
        total1 = total1 + prov1[i];
    }

    scanf("%s",elev2);

    for(int i = 0; i < 13; i++){
        scanf("%d",&prov2[i]);
        total2 = total2 + prov2[i];
    }

    scanf("%s",elev3);

    for(int i = 0; i < 13; i++){
        scanf("%d",&prov3[i]);
        total3 = total3 + prov3[i];
    }

    scanf("%s",elev4);

    for(int i = 0; i < 13; i++){
        scanf("%d",&prov4[i]);
        total4 = total4 + prov4[i];
    }

    scanf("%s",elev5);

    for(int i = 0; i < 13; i++){
        scanf("%d",&prov5[i]);
        total5= total5+ prov5[i];
    }

    // Stor bokstav  asci 65 90
    if(elev1[0]>96){
        elev1[0] = elev1[0] -32;
    }    

    if(elev2[0] > 96){
        elev2[0] = elev2[0] -32;
    }

    if(elev3[0] > 96){
        elev3[0] = elev3[0] -32;
    }

    if(elev4[0] > 96 ){
        elev4[0] = elev4[0] -32;
    }

    if(elev5[0] > 96){
        elev5[0] = elev5[0] -32;
    }    

    //högst medelpoäng
    int högst_medelpoäng = beräkna_högst_medelpoäng(total1, total2, total3, total4, total5);

    if(högst_medelpoäng  ==1){
        printf("%s\n",elev1);
    }

    if(högst_medelpoäng == 2){
        printf("%s\n",elev2);
    }
    
    if(högst_medelpoäng == 3){
        printf("%s\n",elev3);
    }

    if(högst_medelpoäng == 4){
        printf("%s\n",elev4);
    }

    if(högst_medelpoäng == 5){
        printf("%s\n",elev5);
    }

    float totala_medelpoäng = (total1 + total2 + total3 + total4 + total5) / 65.0;
    
   
    //Elever under totala medelpoäng

    if(total1/13.0<totala_medelpoäng){
        printf("%s\n",elev1);
    }
    if(total2/13.0<totala_medelpoäng){
        printf("%s\n",elev2);
    }
    if(total3/13.0<totala_medelpoäng){
        printf("%s\n",elev3);
    }
    if(total4/13.0<totala_medelpoäng){
        printf("%s\n",elev4);
    }
     if(total5/13.0<totala_medelpoäng){
        printf("%s\n",elev5);
    }
    return 0;
}

