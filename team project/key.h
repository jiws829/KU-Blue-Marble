#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void key(int now)
{
	char key_name[9][100] = { { "生嬢嬢~~昼廃陥~~!! 2託陥~~!! 誌督穿生稽 亜淑獣神" }, { "板壕還戚 剛 紫含虞馬革ばばばば 15幻据聖 鎧淑獣神" },
	{ "舌俳榎戚 蟹尽柔艦陥. 10幻据聖 閤焼亜室推" }, { "耕特聖 亜澗 劾ぞぞぞ 20幻据聖 紫遂 媒柔艦陥ばばば" },
	{ "強穿増 適虞什研 左食爽原~~!! 強穿増生稽 亜淑獣神" }, { "原製税 壱狽生稽 壱壱壱~~!! 秩切稽 亜淑獣神" },
	{ "昔持精 差災差~~!! 15幻据 走厭!!" }, { "酔軒引 引転~~!! 30幻据税 舌俳榎戚 蟹尽柔艦陥" },
	{ "綬 昼廃 板 陥製 劾 焼徴 15幻据戚 紫虞然柔艦陥" } };

	int random;

	srand(time(NULL));

	random = rand() % 9;

	reset();
	go(16, 12);
	printf("%s", key_name[random]);


	switch (random)
	{
	case 0: move_key(now, 7, 2); reset(); break;
	case 1: you[now].money -= 15; break;
	case 2: you[now].money += 10; break;
	case 3: you[now].money -= 20; break;
	case 4: move_key(now, 3, 0); reset(); break;
	case 5: move_key(now, 2, 4); reset(); break;
	case 6: you[now].money += 15; break;
	case 7: you[now].money += 30; break;
	case 8: you[now].money -= 15; break;
	}
	money(now);
	if (random != 0 && random != 4 && random != 5)
	{
		go(28, 13);
		char c[100];
		fflush(stdin);
		gets(c);
	}
}