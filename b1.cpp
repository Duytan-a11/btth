#include <stdio.h>

int main(){
	printf("| %-3s | %-20s | %-6s | %-6s | %-6s | %-6s | %-6s | %-6s|\n", "STT", "Ho va ten", "Toan", "Vat Ly", "Hoa", "Sinh", "Van","Diem TB");
	printf("-----------------------------------------------------------------------------------\n");
	printf("| %-3d | %-20s | %-6.1f | %-6.1f | %-6.1f | %-6.1f | %-6.1f | %-6.1f | \n", 1, "Nguyen Van A", 7.5, 7.0, 5.5, 8.5, 7.5, 7.4);
	printf("-----------------------------------------------------------------------------------\n");
	printf("| %-3d | %-20s | %-6.1f | %-6.1f | %-6.1f | %-6.1f | %-6.1f | %-6.1f |\n", 2, "Nguyen Van B", 7.0, 8.5, 9.0, 5.0, 6.5, 7.1 );
	printf("-----------------------------------------------------------------------------------\n");
	printf("| %-3d | %-20s | %-6.1f | %-6.1f | %-6.1f | %-6.1f | %-6.1f | %-6.1f |\n", 3, "Nguyen Van C", 6.5, 7.2,6.5, 10.0, 5.5, 7.2);

	return 0; 
}