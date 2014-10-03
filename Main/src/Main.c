/*
 ============================================================================
 Name        : Main.c
 Author      : Toru Mitsutake-Sitoa
 Version     : 1.0.0
 Copyright   : Copyright © 2014 Sitoa All Rights Reserved.
 Description : RoboCupRobot.Program
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "Sitoa_template.h"
//新規関数宣言

int main(void)  {
//初期化関数
	init_pro();
	firsttime();

	while(1){
		roopfacter();
	}

	return EXIT_SUCCESS;
}


