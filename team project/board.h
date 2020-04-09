#include <stdio.h>

struct board
{
	char name[9];//이름
	int price;//가격
	int own;//소지 상태
	char menu[100];//설명
	int owner;  //사장 직원 상태   사장 1 / 직원 2 / 황금열쇠 3
}block[8][5] = {
	{{ "start!!!" }, { "학    식", 6, 0, "학기초 이후 아무도 안가는 곳" }, { "고대분식", 10, 0, "하스 지하 숨겨진 명소" }, { "알    촌", 12, 0, "아잉 후엔 역시 알촌" }, { "도스마스", 14, 0, "품격있는 부리또" } },
	{{ "설쌈냉면", 36, 0, "14학번 한윤(21/남) - \"설쌈 개삘\"" }, {}, {}, {}, { "서 병 장", 16, 0, "평택사람 우대! 부대볶음집" } },
	{{ "베나레스", 34, 0, "비싸서 아무도 안가는 전설의 카레집" }, {}, {}, {}, { "춘    자", 20, 0, "우리모두의 마음의 고향" } },
	{{ "땡 전 집", 30, 0, "어머니의 손맛이 살아있는 전맛" }, {}, {}, {}, { "황금열쇠" }},
	{{ "황금열쇠" }, {}, {}, {}, { "비    아", 18, 0, "고급화 부대찌개가게" }},
	{{ "Mr.Pizza", 34, 0, "피자는 역시 도미노피자" }, {}, {}, {}, { "오 바 케", 22, 0, "어느곳에나 다 있는 돈부리집" }},
	{{ "삼통치킨", 32, 0, "마늘맛만 드세요!" }, {}, {}, {}, { "고대맛집", 24, 0, "떡볶이가 꿀맛" }},
	{{ "행운당첨", 0, 0, "기부금 수령!" }, { "철판남매", 28, 0, "매콤달콤 화닭 두루치기!" }, { "삼 파 전", 30, 0, "고대인은 역시 파전에 막걸리" }, { "유 가 네", 26, 0, "전국 어디에나 있는 신기한 가게" }, { "학우돕기", 0, 0, "기부금 내세요" }}
};