#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len은 배열 arr의 길이입니다.
char* solution(const char* arr[], size_t arr_len) {
    char *answer = (char *)malloc(arr_len + 1);
    
    for(int i = 0; i<arr_len; i++){
        answer[i]= *arr[i];
      
    }
    answer[arr_len] = '\0';
    return answer;
}
/*
https://school.programmers.co.kr/learn/courses/30/lessons/181941
*/