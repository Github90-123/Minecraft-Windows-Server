#include "Windows.h"
#include <iostream>

int main(){
	system("tar -xf server.tar");
	system("java -Xmx2G -Xms2G -jar server.jar nogui");
}
