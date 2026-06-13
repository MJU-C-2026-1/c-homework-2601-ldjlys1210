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

void input_data(struct User *u);
void print_report(struct User u);


int main()
{
  system("chcp 65001");

  int choice;

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
    {/
      struct User user;
      user.choice = choice;

      input_data(&user);
      print_report(user);
    } 
    else
    {
      printf("잘못된 숫자를 입력하셨습니다.");
    }

  }
  return 0;
}
void input_data(struct User *u)
{
  printf("이니셜을 입력하세요 : \n");
  scanf(" %c",&(u->name));
      
  printf("마신 커피 잔 수를 입력하세요:\n");
  scanf("%d",&(u->coffee_cup));
      
  printf("마신 에너지 드링크 수를 입력하세요:\n");
  scanf("%d",&(u->energy_cup));
      
  printf("잠잔 시간을 입력하세요: \n");
  scanf("%f",&(u->actual_sleep));
      
  u->caffeine=u->coffee_cup*125+u->energy_cup*69;
}
void print_report(struct User u)
{
  printf("===%c님의 상태===\n",u.name);
  printf("카페인 섭취량 =%.2f\n",u.caffeine);
  printf("잠잔 시간=%.2f\n",u.actual_sleep);
  printf("\n\n");
  printf("%c님의 건강상태 보고\n",u.name);
  int caffeine_limit=400;
  if (u.choice==2)
  {
    caffeine_limit=300;
  }
  else if (u.choice==3)
  {
    caffeine_limit=150;
  }
  
    if (u.caffeine>=caffeine_limit)
    {
      printf("카페인 섭취 과다\n");
      if (u.actual_sleep<8)
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
      if (u.actual_sleep>=8)
      {
        printf("적정한 수면과 카페인을 취하셨습니다.\n");
      }
    }
}

