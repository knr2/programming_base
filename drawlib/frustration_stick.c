/*
ルール

白線からはみ出ずにゴールを目指す

操作方法
"S"を押すと右へ
"A"を押すと左へ
"W"を押すと上へ
"Z"を押すと下へ
*/

#include <stdio.h>
#include <drawlib.h>

void cm(int x, int y)
{
  dl_circle(x, y, 1, dl_color_from_name("blue"), 1, 1);
}

int main(void)
{

  int i;
  int flag;
  int t, k, x, y;
  int bx, by;
  int xup = 's';
  int xdown = 'a';
  int yup = 'z';
  int ydown = 'w';
  int event_type, key;
  char s[] = "start";
  char m[] = "miss";
  char g[] = "goal";

  dl_initialize(1.0);

  //背景の色の変化
  dl_clear(dl_color_from_name("black"));

  //スタートの作成
  dl_rectangle(0, 420, 50, 480, dl_color_from_name("white"), 2, 1);
  dl_text(s, 5, 450, 0.5, dl_color_from_name("red"), 1.0);

  //迷路の作成
  //左
  dl_rectangle(50, 440, 320, 460, dl_color_from_name("white"), 2, 1);
  dl_rectangle(300, 350, 320, 460, dl_color_from_name("white"), 2, 1);
  dl_rectangle(30, 350, 310, 370, dl_color_from_name("white"), 2, 1);
  dl_rectangle(30, 280, 50, 370, dl_color_from_name("white"), 2, 1);
  dl_rectangle(30, 280, 120, 300, dl_color_from_name("white"), 2, 1);
  dl_rectangle(100, 100, 120, 300, dl_color_from_name("white"), 2, 1);
  dl_rectangle(60, 100, 120, 120, dl_color_from_name("white"), 2, 1);
  dl_rectangle(60, 40, 80, 120, dl_color_from_name("white"), 2, 1);
  dl_rectangle(60, 40, 200, 60, dl_color_from_name("white"), 2, 1);
  //中央
  dl_rectangle(200, 40, 400, 290, dl_color_from_name("white"), 2, 1);

  //右
  dl_rectangle(400, 40, 600, 50, dl_color_from_name("white"), 2, 1);
  dl_rectangle(590, 40, 600, 100, dl_color_from_name("white"), 2, 1);
  dl_rectangle(500, 90, 600, 100, dl_color_from_name("white"), 2, 1);
  dl_rectangle(500, 100, 510, 200, dl_color_from_name("white"), 2, 1);
  dl_rectangle(500, 190, 550, 200, dl_color_from_name("white"), 2, 1);
  dl_rectangle(540, 190, 550, 300, dl_color_from_name("white"), 2, 1);
  dl_rectangle(540, 290, 610, 300, dl_color_from_name("white"), 2, 1);
  dl_rectangle(605, 290, 610, 420, dl_color_from_name("white"), 2, 1);

  //ゴールの作成
  dl_rectangle(580, 420, 640, 480, dl_color_from_name("white"), 2, 1);
  dl_text(g, 590, 450, 0.5, dl_color_from_name("red"), 1.0);

  //操作するもの
  bx = 25, by = 450;
  cm(bx, by);

  while (1)
  {

    //操作
    while (dl_get_event(&t, &k, &x, &y))
    {
      if (t == DL_EVENT_KEY)
      {
        if (k == xup)
          cm(bx++, by);
        else if (k == xdown)
          cm(bx--, by);
        else if (k == yup)
          cm(bx, by++);
        else if (k == ydown)
          cm(bx, by--);
      }
    }

    //ミス判定
    for (i = 0; i <= 51; i++)
    {
      if ((bx == i) && (by == 421))
      {
        printf("失敗\n");
        flag = 1;
      }
    }
    if (flag == 1)
    {
      break;
    }

    for (i = 421; i <= 439; i++)
    {
      if ((bx == 51) && (by == i))
      {
        printf("失敗\n");
        flag = 1;
      }
    }
    if (flag == 1)
    {
      break;
    }

    for (i = 461; i <= 480; i++)
    {
      if ((bx == 51) && (by == i))
      {
        printf("失敗\n");
        flag = 1;
      }
    }
    if (flag == 1)
    {
      break;
    }

    for (i = 51; i <= 299; i++)
    {
      if ((bx == i) && (by == 439))
      {
        printf("失敗\n");
        flag = 1;
      }
    }
    if (flag == 1)
    {
      break;
    }

    for (i = 51; i <= 321; i++)
    {
      if ((bx == i) && (by == 461))
      {
        printf("失敗\n");
        flag = 1;
      }
    }
    if (flag == 1)
    {
      break;
    }

    for (i = 371; i <= 439; i++)
    {
      if ((bx == 299) && (by == i))
      {
        printf("失敗\n");
        flag = 1;
      }
    }
    if (flag == 1)
    {
      break;
    }

    for (i = 349; i <= 461; i++)
    {
      if ((bx == 321) && (by == i))
      {
        printf("失敗\n");
        flag = 1;
      }
    }
    if (flag == 1)
    {
      break;
    }

    for (i = 29; i <= 299; i++)
    {
      if ((bx == i) && (by == 371))
      {
        printf("失敗\n");
        flag = 1;
      }
    }
    if (flag == 1)
    {
      break;
    }

    for (i = 51; i <= 321; i++)
    {
      if ((bx == i) && (by == 349))
      {
        printf("失敗\n");
        flag = 1;
      }
    }
    if (flag == 1)
    {
      break;
    }

    for (i = 279; i <= 371; i++)
    {
      if ((bx == 29) && (by == i))
      {
        printf("失敗\n");
        flag = 1;
      }
    }
    if (flag == 1)
    {
      break;
    }

    for (i = 301; i <= 349; i++)
    {
      if ((bx == 51) && (by == i))
      {
        printf("失敗\n");
        flag = 1;
      }
    }
    if (flag == 1)
    {
      break;
    }

    for (i = 29; i <= 99; i++)
    {
      if ((bx == i) && (by == 279))
      {
        printf("失敗\n");
        flag = 1;
      }
    }
    if (flag == 1)
    {
      break;
    }

    for (i = 51; i <= 121; i++)
    {
      if ((bx == i) && (by == 301))
      {
        printf("失敗\n");
        flag = 1;
      }
    }
    if (flag == 1)
    {
      break;
    }

    for (i = 121; i <= 279; i++)
    {
      if ((bx == 99) && (by == i))
      {
        printf("失敗\n");
        flag = 1;
      }
    }
    if (flag == 1)
    {
      break;
    }

    //
    for (i = 99; i <= 301; i++)
    {
      if ((bx == 121) && (by == i))
      {
        printf("失敗\n");
        flag = 1;
      }
    }
    if (flag == 1)
    {
      break;
    }

    for (i = 81; i <= 121; i++)
    {
      if ((bx == i) && (by == 101))
      {
        printf("失敗\n");
        flag = 1;
      }
    }
    if (flag == 1)
    {
      break;
    }

    for (i = 59; i <= 99; i++)
    {
      if ((bx == i) && (by == 121))
      {
        printf("失敗\n");
        flag = 1;
      }
    }
    if (flag == 1)
    {
      break;
    }

    for (i = 39; i <= 121; i++)
    {
      if ((bx == 59) && (by == i))
      {
        printf("失敗\n");
        flag = 1;
      }
    }
    if (flag == 1)
    {
      break;
    }

    for (i = 81; i <= 121; i++)
    {
      if ((bx == i) && (by == 101))
      {
        printf("失敗\n");
        flag = 1;
      }
    }
    if (flag == 1)
    {
      break;
    }

    for (i = 59; i <= 601; i++)
    {
      if ((bx == i) && (by == 39))
      {
        printf("失敗\n");
        flag = 1;
      }
    }
    if (flag == 1)
    {
      break;
    }

    for (i = 61; i <= 291; i++)
    {
      if ((bx == 201) && (by == i))
      {
        printf("失敗\n");
        flag = 1;
      }
    }
    if (flag == 1)
    {
      break;
    }

    for (i = 199; i <= 401; i++)
    {
      if ((bx == i) && (by == 291))
      {
        printf("失敗\n");
        flag = 1;
      }
    }
    if (flag == 1)
    {
      break;
    }

    for (i = 61; i <= 291; i++)
    {
      if ((bx == 401) && (by == 0))
      {
        printf("失敗\n");
        flag = 1;
      }
    }
    if (flag == 1)
    {
      break;
    }

    for (i = 401; i <= 589; i++)
    {
      if ((bx == i) && (by == 51))
      {
        printf("失敗\n");
        flag = 1;
      }
    }
    if (flag == 1)
    {
      break;
    }

    for (i = 51; i <= 89; i++)
    {
      if ((bx == 589) && (by == i))
      {
        printf("失敗\n");
        flag = 1;
      }
    }
    if (flag == 1)
    {
      break;
    }

    for (i = 39; i <= 101; i++)
    {
      if ((bx == 601) && (by == i))
      {
        printf("失敗\n");
        flag = 1;
      }
    }
    if (flag == 1)
    {
      break;
    }

    for (i = 501; i <= 589; i++)
    {
      if ((bx == i) && (by == 89))
      {
        printf("失敗\n");
        flag = 1;
      }
    }
    if (flag == 1)
    {
      break;
    }

    for (i = 99; i <= 201; i++)
    {
      if ((bx == 499) && (by == i))
      {
        printf("失敗\n");
        flag = 1;
      }
    }
    if (flag == 1)
    {
      break;
    }

    for (i = 511; i <= 601; i++)
    {
      if ((bx == i) && (by == 101))
      {
        printf("失敗\n");
        flag = 1;
      }
    }
    if (flag == 1)
    {
      break;
    }

    for (i = 111; i <= 189; i++)
    {
      if ((bx == 511) && (by == i))
      {
        printf("失敗\n");
        flag = 1;
      }
    }
    if (flag == 1)
    {
      break;
    }

    for (i = 511; i <= 551; i++)
    {
      if ((bx == i) && (by == 189))
      {
        printf("失敗\n");
        flag = 1;
      }
    }
    if (flag == 1)
    {
      break;
    }

    for (i = 189; i <= 289; i++)
    {
      if ((bx == 551) && (by == i))
      {
        printf("失敗\n");
        flag = 1;
      }
    }
    if (flag == 1)
    {
      break;
    }

    for (i = 499; i <= 539; i++)
    {
      if ((bx == i) && (by == 201))
      {
        printf("失敗\n");
        flag = 1;
      }
    }
    if (flag == 1)
    {
      break;
    }

    for (i = 201; i <= 301; i++)
    {
      if ((bx == 539) && (by == i))
      {
        printf("失敗\n");
        flag = 1;
      }
    }
    if (flag == 1)
    {
      break;
    }

    for (i = 539; i <= 604; i++)
    {
      if ((bx == i) && (by == 301))
      {
        printf("失敗\n");
        flag = 1;
      }
    }
    if (flag == 1)
    {
      break;
    }

    for (i = 551; i <= 611; i++)
    {
      if ((bx == i) && (by == 289))
      {
        printf("失敗\n");
        flag = 1;
      }
    }
    if (flag == 1)
    {
      break;
    }

    for (i = 301; i <= 480; i++)
    {
      if ((bx == 604) && (by == i))
      {
        printf("失敗\n");
        flag = 1;
      }
    }
    if (flag == 1)
    {
      break;
    }

    for (i = 291; i <= 480; i++)
    {
      if ((bx == 611) && (by == i))
      {
        printf("失敗\n");
        flag = 1;
      }
    }
    if (flag == 1)
    {
      break;
    }

    for (i = 61; i <= 101; i++)
    {
      if ((bx == 81) && (by == i))
      {
        printf("失敗\n");
        flag = 1;
      }
    }
    if (flag == 1)
    {
      break;
    }

    for (i = 51; i <= 241; i++)
    {
      if ((bx == 401) && (by == i))
      {
        printf("失敗\n");
        flag = 1;
      }
    }
    if (flag == 1)
    {
      break;
    }

    //ゴール判定

    for (i = 600; i <= 620; i++)
    {
      if ((bx == i) && (by == 420))
      {
        printf("クリア\n");
        flag = 1;
      }
    }
    if (flag == 1)
    {
      break;
    }
  }
  return 0;
}
