#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//문자를 번갈아가면서 출력하도록 변환하는 함수
char* solution(const char* str1, const char* str2) {

	//문자열 길이를 구함
	int length = strlen(str1);
	char* answer = (char*)malloc((2 * length + 1) * sizeof(char));

	int index = 0;
	
	//두 문자열을 for문을 이용하여 나란히 반복
	for (int i = 0; i < length; i++)
	{
		//첫번째 문자열의 i값 입력
		answer[index++] = str1[i];
		//두번째 문자열 i값 입력
		answer[index++] = str2[i];
	}

	//끝까지 반복
	answer[index] = '\0';

	return answer;
}

//문자 소문자 여부를 판별하는 함수
int LowerCase(char* str1, char* str2)
{
	//str1과 str2 각각 끝까지
	while (*str1 != '\0' && *str2 != '\0')
	{
		//두 string이 하나라도 대문자면(소문자가 아니면) 0(false)을 반환
		if (!islower(*str1) || !islower(*str2))
		{
			return 0;
		}
		//while 반복문 증가하며 진행
		str1++;
		str2++;
	}

	//두 문자열 길이가 다른 경우에 0(false)을 반환
	if (*str1 != '\0' || *str2 != '\0')
	{
		return 0;
	}

	//외의 경우엔 1(true)을 반환
	return 1;
}

//메인 함수
int main() {
	const int MAX_LENGTH = 10;  // 입력 받을 문자열의 최대 길이

	char* str1 = (char*)malloc(MAX_LENGTH * sizeof(char));
	char* str2 = (char*)malloc(MAX_LENGTH * sizeof(char));

	scanf("%s %s", str1, str2);

	//대소문자 구별값이 true면
	if (LowerCase(str1, str2))
	{
		char* result = solution(str1, str2);
		printf("%s\n", result);  // 결과 출력
		free(result);  // 메모리 초기화
	}
	//대소문자 구별값이 false면
	else
	{
		printf("입력한 문자열의 길이가 다르거나, 대문자가 포함되어 있습니다.");
	}

	//문자열 동적 할당 메모리 초기화
	free(str1);
	free(str2);
	return 0;
}