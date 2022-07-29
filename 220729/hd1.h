#pragma once
//동물병원
//동물의 이름 , 종류, 고유코드
struct Animal
{
	char name[100];
	char species[100];
	char code[100];

}typedef Animal;

//내가 만들고 싶은것
struct Food
{
	int price;
	char name[100];
}typedef food;

struct StudentScore
{
	int kor;
	int eng;
	int math;
}typedef StudentScore;

struct KBStudent
{
	int cscore;
	int javascore;
	char name[100];

}typedef KBStudent;