#include<stdlib.h>
#include<stdio.h>
#include<time.h>

int main()
{
int array[4];
int x, p;
int count;
int i=0;

srand(time(NULL));

for(count=0;count<4;count++){
array[count]=rand()%4;
}

while(i<4){
    int r=rand()%4;
    
    for (x = 0; x < i; x++)
    {
        if(array[x]==r){
            break;
        }
    }
    if(x==i){
        array[i++]=r;
    }
    
}
for(p=0;p<4;p++){
printf("%d ", array[p]);
}
return 0;

}



