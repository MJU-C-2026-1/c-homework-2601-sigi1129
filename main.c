/*1. 주석

	파일이름 : main.c
	하 는 일 : 축구 선수 경기 기대득점 및 경기 평점 계산 프로그램
	작 성 자 : 60231944 정준식
	작 성 일 : 26-05-03

	*/

#include <stdio.h>
#include <stdlib.h>

//int main()
int main()
{
	system("chcp 65001");
    char playername[20];
    int goal, successfulpass, shot, assist, keypass; 
    double dribblesSuccess, rating, expected_goals;
	
	printf("==================================================\n");
	printf("축구 선수 경기 기대득점 및 경기 평점 계산 프로그램\n");
    printf("==================================================\n");
    
    printf("선수 이름을 입력하시오 :  ");
    scanf("%s", playername);
	
	printf("득점수를 입력하시오 : ");
    scanf("%d", &goal);
    
	printf("어시스트 횟수를 입력하시오 : "); 
    scanf("%d", &assist);

    printf("중요패스 횟수를 입력하시오 : "); 
    scanf("%d", &keypass);

	printf("성공한 패스 횟수를 입력하시오 : ");
    scanf("%d", &successfulpass);
   
    printf("슛팅 횟수를 입력하시오 : ");
    scanf("%d", &shot);
	
	printf("드리블 성공률을 입력하시오(예72.4) : ");
    scanf("%lf", &dribblesSuccess);
	
	
	expected_goals = (shot * 0.15) + (goal * 0.3) + (successfulpass * 0.01);
    rating = 5.0 + (goal * 0.5) + (assist * 0.3) + (successfulpass * 0.015) + (shot * 0.2) + (dribblesSuccess * 0.02);

    printf("\n=========== 경기 기록 결과 ===========\n");
    printf("선수 이름: %s\n", playername);
    printf("기록: %d골 %도움 / 슈팅 %d회 / 패스 %d회\n", goal, assist, shot, successfulpass);
    printf("기대득점(xG): %.2lf | 경기 평점 : %.2lf\n", expected_goals, rating);
    printf("======================================\n");

    //다중 조건문: 플레이 스타일
    printf("플레이 스타일");
    if (goal >= 3 || (goal >= 2 && successfulpass >= 20))
    {
    	printf("골잡이(finisher)\n");
	}
	else if (successfulpass >= 40 || keypass >= 3)
	{
		printf("플레이 메이커(playmaker)\n");
	}
	else if (dribblesSuccess >= 85.0)
	{
		printf("드리블러(dribbler)\n");
	}
    else
    {
    	printf("평범(standard)\n");
	}
	
	//MOM(man of the match) 승리수당, 인터뷰 대상 
	if (rating >= 8.8 && (goal >= 1 || assist >= 1))
	{
		printf("\n[MOM(Man Of the Match) 선정]\n");
		
		if (goal >= 3)
		{
		    printf("퍼포먼스 등급: ★★★ 해트트릭\n");
			printf("베네핏: 경기 베스트 11 선정과 승리 수당 90%%\n");
		}
		else if (goal >= 1 && assist >= 1) 
		{
        printf("퍼포먼스 등급: ★★ 오늘의 공격수 \n");
        printf("베네핏: MOM 수당 + 공식 인터뷰 + 하이라이트 장면 송출\n");
        }
        else if (assist >= 2 || keypass >= 5) 
		{
        printf("퍼포먼스 등급: ★ 경기 메이커\n");
        printf("베네핏: 인터뷰 + 경기력 보너스 지급\n");
        }
        else 
		{
        printf("퍼포먼스 등급: ★ 기본 MOM\n");
        printf("베네핏: MOM 수당 지급\n");
        }
		
	}
	else
	{
		printf("\n[MOM 선정 미달]\n");
	}
	
	printf("최종평가: ");
	if (rating >= 8.0 && (goal == 0 && assist == 0)) {
        printf("경기는 좋았지만 임팩트가 없었음\n");
    }
    else if (goal >= 1 || assist >= 1) {
        printf("기록은 좋지만 평점에 비해 아쉬움\n");
    }
    else {
        printf("추가 훈련 필요\n");
    }
	
	printf("======================================\n");


   return 0;
}

