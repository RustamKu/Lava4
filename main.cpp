#include <iostream>
#include <string>
#include "Complex.h"
#include "Child.h"
#include "Tiles.h"
#include "Vector.h"

int main() {
	Complex com_1;
	Complex com_2;
	com_1.cplx();
	com_1.cplx();
	
	child child_1;
	child_1.vvod();
	child child_2;
	child_2.vvod();

	Tiles tile_1;
	Tiles tile_2;
	tile_1.get_Data();
	tile_2.get_Data();

	Vector ve_1;
	Vector ve_2;
	ve_1.module();
	ve_1.Vecplus();
	ve_2.module();
	ve_2.Vecplus();
	
	return 0;
}