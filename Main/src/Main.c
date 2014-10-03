/*
 ============================================================================
 Name        : Main.c
 Author      : Toru Mitsutake
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
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


