#include <stdio.h>
#include <stdlib.h>
#include "random_generator.h"
#include "dice.h"
#include "player.h"

int roll_the_dice()
{
	int dice_number = generate_random(1, 6);
	
	
	return dice_number;
}

//int roll_the_dice(int max)
//{
//	int dice_number = generate_random(1, max);
//
//
//	return dice_number;
//}

//void dice_fight(int player1, int player2)
//{
//	
//	if (player1 == player2)
//	{
//		printf("�ڱ� �ڽŰ� �ο�ϴ�!\n");
//	}
//	else
//	{
//		printf("������ȣ %d, ������ȣ %d�� �ο��� ���۵˴ϴ�!\n", player1, player2);
//
//		int dice_player1 = roll_the_dice();
//		int dice_player2 = roll_the_dice();
//
//		printf("������ȣ %d�� �ֻ��� ���ڴ� %d!\n������ȣ %d�� �ֻ��� ���ڴ� %d!\n", player1, dice_player1, player2, dice_player2);
//
//		if (dice_player1 > dice_player2)
//		{
//			printf("������ȣ %d�� �¸��Դϴ�!\n�����մϴ�!\n", player1);
//		}
//		else if(dice_player1 < dice_player2)
//		{
//			printf("������ȣ %d�� �¸��Դϴ�!\n�����մϴ�!\n", player2);
//		}
//		else
//		{
//			printf("���º��Դϴ�!\n�� ġ �յ� ���ٺ� �� ������! \n");
//		}
//	} 
//}



// �Լ��� �����ϰ�, �� �÷��̾��� �̸��� �Ķ���ͷν� �޾ƿ� �� �ֵ��� �մϴ�.
void dice_fight(char player1[], char player2[])
{
	printf("%s, %s�� �ο��� ���۵˴ϴ�!\n", player1, player2);


	// ���� �÷��̾ �ֻ����� ������ ��Ȳ�Դϴ�. 
	// int ���� ������ �����Ͽ� �Ŀ� �� �� �ֵ��� �����մϴ�.
	int dice_player1 = roll_the_dice();
	int dice_player2 = roll_the_dice();

	printf("%s�� �ֻ��� ���ڴ� %d!\n%s�� �ֻ��� ���ڴ� %d!\n", player1, dice_player1, player2, dice_player2);

	// �� �÷��̾��� �ֻ��� ũ�⸦ ���մϴ�.
	// if / else if / else �κ��� ���� if�� ��ü�Ͽ��� ����� ũ�� ��������ϴ�.

	if (dice_player1 > dice_player2)
	{
		// player1�� �ֻ��� ���� Ŭ ��� player1�� �̰�ٴ� ������ ����մϴ�.
		printf("%s�� �¸��Դϴ�!\n�����մϴ�!\n", player1);
	}
	else if (dice_player1 < dice_player2)
	{
		// player2�� �ֻ��� ���� Ŭ ��� player2�� �̰�ٴ� ������ ����մϴ�.
		printf("%s�� �¸��Դϴ�!\n�����մϴ�!\n", player2);
	}
	else
	{
		// �� ���ڰ� ���� ��� ���ºζ�� ������ ����մϴ�.
		printf("���º��Դϴ�!\n�� ġ �յ� ���ٺ� �� ������! \n");
	}
	
}