/*
	Object RelationShip : 객체 관계

	-Composition(구성) part-of

	-Aggregation(집합) has-a

	-Association(연계) uses-a 특정클래스를 필요할경우 생성 필요없을경우 제거

	-Dependency(의존) depend-on 

	-Inheritance(상속) is-a

													관계 형태    다른 클래스에 속할수 있는가  멤버의 존재를 클래스가 관리  방향성
	 Composition(구성)     part-of     전체/부품                   No                        Yes             단방향
	 Aggregation(집합)     has-a       전체/부품                   Yes                       No              단방향
	 Association(연계)     uses-a      용도 외엔 무관              Yes                       No              단방향 or 양방향
	 Dependency(의존)      depends-on  옹도 외엔 무관              Yes                       Yes             단방향

	 결합도 : 낮을 수록 좋음
	 응집도 : 높을 수록 좋음

*/

#include<iostream>

using namespace std;

int main()
{
	return;
}