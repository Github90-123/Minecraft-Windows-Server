#include "Windows.h"
#include <iostream>

int main(){
	system("tar -xf server.tar");
	system("java -Xmx1G -Xms1G -jar server.jar nogui");
}
