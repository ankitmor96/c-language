⭐ 2. Increasing Numbers from 11
Code
#include <stdio.h>

int main(){

    int num = 11;

    for(int i=1;i<=4;i++){
        for(int j=1;j<=i;j++){
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }
    return 0;
}

🔹 Output
11
12 13
14 15 16
17 18 19 20



⭐ 3. Left-Aligned Number Triangle
Code
#include <stdio.h>

int main(){

    for(int i=5;i>=1;i--){

        for(int k=5;k>i;k--){
            printf(" ");
        }

        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}

🔹 Output
12345
 1234
  123
   12
    1

⭐ 4. Right-Aligned Number Triangle
Code
#include <stdio.h>

int main(){

    for(int i=5;i>=1;i--){

        for(int k=1;k<i;k++){
            printf(" ");
        }

        for(int j=i;j<=5;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}

🔹 Output
    5
   45
  345
 2345
12345
⭐ 5. Number Pyramid Pattern
Code
#include<stdio.h>

int main(){

    for(int i=5;i>=1;i--){

        for(int j=1;j<i;j++){
            printf(" ");
        }

        for(int j=i;j<=5;j++){
            printf("%d",j);
        }

        for(int j=4;j>=i;j--){
            printf("%d",j);
        }
        printf("\n");
    }

    return 0;
}

🔹 Output
    5
   45 4
  345 43
 2345 432
12345 4321

⭐ 7. Hollow Star Pattern
Code
#include <stdio.h>

int main() {
    int i, j;

    for(i = 1; i <= 3; i++){
        for(j = 1; j <= 5; j++){
            if(i == 2 && j > 1 && j < 5)
                printf("  ");
            else
                printf("* ");
        }
        printf("\n");
    }

    printf("*\n*\n");

    return 0;
}

🔹 Output
* * * * *
*       *
* * * * *
*
*
