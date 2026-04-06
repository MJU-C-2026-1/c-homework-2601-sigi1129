/*1. 주석

	파일이름 : main.c
	하 는 일 : 축구 선수 경기 기대득점 및 경기 평점 계산 프로그램
	작 성 자 : 60231944 정준식
	작 성 일 : 26-04-03

	*/

    

//2. 전처리기
#include <stdio.h>
#include <stdlib.h>

//3. main 함수
int main()
{
	system("chcp 65001");
    char playername[20];
	int goal;
	int successfulpass;
	int shot;
	double dribblesSuccess;
	double rating;	
	double expected_goals;
	
	printf("==================================================\n");
	printf("축구 선수 경기 기대득점 및 경기 평점 계산 프로그램\n");
    printf("==================================================\n");
    
    printf("선수 이름을 입력하시오 :  ");
    scanf("%s", playername);
	
	printf("득점수를 입력하시오 : ");
    scanf("%d", &goal);
    
	printf("성공한 패스 횟수를 입력하시오 : ");
    scanf("%d", &successfulpass);
   
    printf("슛팅 횟수를 입력하시오 : ");
    scanf("%d", &shot);
	
	printf("드리블 성공률을 입력하시오(예72.4) : ");
    scanf("%lf", &dribblesSuccess);
	
	
	expected_goals = (shot * 0.15) + (goal * 0.3) + (successfulpass * 0.01);
    rating = 5.0 + (goal * 0.4) + (successfulpass * 0.015) + (shot * 0.2) + (dribblesSuccess * 0.02);

    printf("\n=========== 경기 기록 결과 ===========\n");
    printf("선수 이름: %s\n", playername);
    printf("득점수: %d\n", goal);
    printf("패스성공횟수: %d\n", successfulpass);
    printf("슈팅: %d\n", shot);
    printf("드리블 성공률 : %.1lf%%\n", dribblesSuccess);
    printf("기대득점(xG): %.2lf\n", expected_goals);
    printf("경기 평점 : %.2lf\n", rating);
    printf("======================================\n");

    return 0;
}
