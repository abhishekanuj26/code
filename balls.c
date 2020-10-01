#include<stdio.h>
#include<stdlib.h>


  


int main(){
    int t;
    scanf("%d",&t);
    while(t--){
      long long  int a[4],c=0,k=0,i,s=0,one=0,temp,j;
        for(i=0;i<4;i++){
            scanf("%lld",&a[i]);
            if(a[i]==0)
            s++;
         
        }
        if(s>0 && s<4){
            printf("No\n");
        }
        
        else{

        if(a[0]==a[1] && a[0]==a[2] && a[0]==a[3]){
            printf("Yes\n");
        }
        else{
     for(i=0;i<3;i++){
        for(j=i+1;j<4;j++){
            if(a[i]>a[j]){
                    temp=  a[i];
                    a[i] = a[j];
                    a[j] = temp;
            }
        }
    }
    a[3]=a[3]+a[0];
    for(i=0;i<3;i++){
        a[i]=a[i]-a[0];
    }


    

       
        for(i=0;i<4;i++){
         if(a[i]%2==0)
            k++;
            else{
            c++;
             }
            if(a[i]==1)
            one++;
                }
           
            if(k==3){
                printf("Yes\n");
              
            }
            else if(k==2 && one==1){
                printf("No\n");
            }
            else{
                printf("Yes\n");
            }

    }
        } 
    }
    }
