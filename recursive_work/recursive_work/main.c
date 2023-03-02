//
//  main.c
//  recursive_work
//
//  Created by ibrahim dağcı on 25.02.2023.
//

#include <stdio.h>

#include <stdio.h>
#include <string.h>
                // 0  1    2     3     4     5      6     7     8      9
char *letters[] = {" "," ","abc","def","ghi","jkl","mno","prsq","tuv","yzwx"};

void combineLetters(char *clickedNumbers,int index,char *temp){
    
    if (clickedNumbers[index] == '\0'){
        printf("%s\n",temp);
        return;
    }
    
    char *clickedChars = letters[clickedNumbers[index] - '0'];
    
    for (int i = 0; clickedChars[i]!='\0'; i++) {
        temp[index] = clickedChars[i];
        combineLetters(clickedNumbers,index+1, temp);
    }
    
    
    
}

int main() {
    
    char numbersc[10],temp[20];
    
    printf("numara giriniz\n");
    scanf("%s",numbersc);
    
    combineLetters(numbersc, 0, temp);
    
    
    return 0;
}
