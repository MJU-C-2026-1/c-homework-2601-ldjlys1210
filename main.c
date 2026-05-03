/* 
  파일이름: main.c
  작 성 자: 이동재
  하 는 일: 건강관리 프로그램
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
  system("chcp 65001");
  char name;
  int target_sleep=8;
  float actual_sleep;
  int sleep_time;
  float caffeine;
  int coffee_cup;
  int energy_cup;
  
  printf("이니셜을 입력하세요 : \n");
  scanf("%c",&name);
  
  printf("마신 커피 잔 수를 입력하세요:\n");
  scanf("%d",&coffee_cup);
  
  printf("마신 에너지 드링크 수를 입력하세요:\n");
  scanf("%d",&energy_cup);
  
  printf("잠잔 시간을 입력하세요: \n");
  scanf("%f",&actual_sleep);
  
  caffeine=coffee_cup*125+energy_cup*69;

  printf("===%c님의 상태===\n",name);
  printf("카페인 섭취량 =%f\n",caffeine);
  printf("잠잔 시간=%f\n",actual_sleep);

  printf("%c님의 건강상태 보고\n",name);
  if (caffeine>=400)
  {
    printf("카페인 섭취 과다");
    if (actual_sleep<8)
    {
      printf("수면부족 심각, 건강관리 요망");
    }
    else
    {
      printf("수면이 부족합니다.");
    }
  }
  else
  {
    printf("적정량의 카페인 섭취함.");
    if (actual_sleep>=8)
    {
      printf("적정한 수면과 카페인을 취하셨습니다.");
    }
  }
  return 0;
}
//카피하면 안 됨. 다 보임.
