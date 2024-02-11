#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len은 배열 arr의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* arr[], size_t arr_len) {
    char *answer = (char *)malloc(arr_len + 1);
    
    for(int i = 0; i<arr_len; i++){
        answer[i]= *arr[i];
      
    }
    answer[arr_len] = '\0';
    return answer;
}