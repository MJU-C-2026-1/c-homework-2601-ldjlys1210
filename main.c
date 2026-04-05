/* 
  파일이름: main.c
  작 성 자: 이동재
  하 는 일: 건강관리 프로그램
*/

#include <stdio.h>
int main()
{
  system("chcp 65001");
  char name[20];
  int target_sleep=8;
  float actual_sleep;
  int sleep_time;
  float caffeine;
  int coffee_cup;
  int energy_cup;
  
  printf("이름을 입력하세요 : \n");
  scanf("%s",&name);
  
  printf("마신 커피 잔 수를 입력하세요:\n");
  scanf("%d",&coffee_cup);
  
  printf("마신 에너지 드링크 수를 입력하세요:\n");
  scanf("%d",&energy_cup);
  
  printf("잠잔 시간을 입력하세요: \n);
  scanf("%f",&actual_sleep);
  
  caffeine=coffee_cup*125+energy_cup*69;

  printf("===%s님의 상태===\n");
  printf("카페인 섭취량 =%f\n",caffeine);
  printf("잠잔 시간=%f\n",actual_sleep);
  return 0;
}
//카피하면 안 됨. 다 보임.
