#include <fcntl.h>
#include <unistd.h>

int main(int argc, char **argv) {
    int fd = open(argv[1], O_RDONLY);
	char c;

	for (int i = 0; i >= 0; ++i) {
		if (read(fd, &c, 1) <= 0)
			break ;

		c -= i;

		write(1, &c, 1);
	}

	return 0;
}
