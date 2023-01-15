#include "Windows.h"
#include <iostream>

int main(){
	system("tar -xf server.tar");
	system("java -Xmx4G -Xms4G -jar server.jar nogui");
}
