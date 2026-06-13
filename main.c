/* 
  파일이름: main.c
  작 성 자: 이동재
  하 는 일: 건강관리 프로그램
*/

#include <stdio.h>
#include <stdlib.h>

struct User{
  char name;
  int choice;
  int coffee_cup;
  int energy_cup;
  float actual_sleep;
  float caffeine;
};

void input_data(struct User);
void print_report(struct User);


int main()
{
  system("chcp 65001");
  // char name;
  // int target_sleep=8;
  // float actual_sleep;
  // int sleep_time;
  // float caffeine;
  // int coffee_cup;
  // int energy_cup;

  int choice;
  // printf("수면 건강관리시스템 프로그램\n");
  // printf("프로그램 종료를 원하면 0을, 시작을 원하면 1을 눌러주세요.\n");
  // scanf("%d",&choice);
  // printf("%d",choice);

  while(1)
  {
    printf("수면 건강관리시스템 프로그램\n");
    printf("프로그램 종료를 원하면 0을, 성인이면 1을, 임산부면 2를, 청소년이면 3을 눌러주세요.\n");
    scanf("%d",&choice);
    

    if(choice==0)
    {
      printf("프로그램을 종료합니다.");
      break;
    }
    else if(choice==1||choice==2||choice==3)
    {//400,300,150
      struct User;
      user.choice = choice;

      input_data(struct User);
      print_report(struct User);
    } 
    else
    {
      printf("잘못된 숫자를 입력하셨습니다.");
    }

  }
  return 0;
}
void input_data(struct User)
{
  printf("이니셜을 입력하세요 : \n");
  scanf(" %c",&name);
      
  printf("마신 커피 잔 수를 입력하세요:\n");
  scanf("%d",&coffee_cup);
      
  printf("마신 에너지 드링크 수를 입력하세요:\n");
  scanf("%d",&energy_cup);
      
  printf("잠잔 시간을 입력하세요: \n");
  scanf("%f",&actual_sleep);
      
  caffeine=coffee_cup*125+energy_cup*69;
}
void print_report(struct User)
{
  printf("===%c님의 상태===\n",name);
  printf("카페인 섭취량 =%.2f\n",caffeine);
  printf("잠잔 시간=%.2f\n",actual_sleep);
  printf("\n\n");
  printf("%c님의 건강상태 보고\n",name);
  int caffeine_limit=400;
  if (choice==3)
  {
    caffeine_limit=300;
  }
  else if (choice==4)
  {
    caffeine_limit=150;
  }
  
    if (caffeine>=caffeine_limit)
    {
      printf("카페인 섭취 과다\n");
      if (actual_sleep<8)
      {
        printf("수면부족 심각, 건강관리 요망\n");
      }
      else
      {
        printf("수면이 부족합니다.\n");
      }
    }
    else
    {
      printf("적정량의 카페인 섭취함.\n");
      if (actual_sleep>=8)
      {
        printf("적정한 수면과 카페인을 취하셨습니다.\n");
      }
    }
}
//카피하면 안 됨. 다 보임.
