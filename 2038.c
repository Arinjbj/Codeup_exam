#include <stdio.h>

int main()
{
	int armor1, armor2, armor3, armor4, player_health;
	int player_offense;
	int have_potion;
	char potion_type;
	int potion_offense, duration;
	int monster_offense, monster_health;
	int doesplayerwin = 1;

	scanf("%d %d %d %d", &armor1, &armor2, &armor3, &armor4);
	scanf("%d", &player_offense);
	scanf("%d", &have_potion);
	if (have_potion == 1) {
		scanf(" %c%d %d", &potion_type, &potion_offense, &duration);
		if (potion_type == '+') {
			potion_offense += player_offense;
		} else if (potion_type == '*') {
			potion_offense *= player_offense;
		}
	}
	scanf("%d %d", &monster_offense, &monster_health);
	player_health = armor1 + armor2 + armor3 + armor4;
	while (1) {
		//player's turn
		if (have_potion == 1 && duration != 0) {
			monster_health -= potion_offense;
			--duration;
		} else {
			monster_health -= player_offense;
		}
		if (monster_health <= 0) {
			doesplayerwin = 1;
			break;
		}
		//monster's turn
		player_health -= monster_offense;
		if (player_health <= 0) {
			doesplayerwin = 0;
			break;
		}
	}
	printf("%d", doesplayerwin);
	return 0;
}