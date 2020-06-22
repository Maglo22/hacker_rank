/*
    Find the volume of each box that can be successfully transported to the other end of the tunnel.
    The height of the tunnel is 41 feet and the width can be assumed to be infinite.

    Sample input:
    4 <- number of boxes
    5 5 5 <- length, width, height
    1 2 40
    10 5 41
    7 2 42

    Sample output:
    125
    80
*/

#include <stdio.h>
#include <stdlib.h>
#define MAX_HEIGHT 41

struct box
{
    int length;
    int width;
    int height;
};

typedef struct box box;

// return volume of box
int get_volume(box b) {
    return b.length * b.width * b.height;
}

// check if box height is lower than max height
int is_lower_than_max_height(box b) {
    return (b.height < MAX_HEIGHT)? 1 : 0;
}

int main()
{
	int n;
	scanf("%d", &n);

	box *boxes = malloc(n * sizeof(box));

	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &boxes[i].length, &boxes[i].width, &boxes[i].height);
	}

	for (int i = 0; i < n; i++) {
		if (is_lower_than_max_height(boxes[i])) {
			printf("%d\n", get_volume(boxes[i]));
		}
	}

	return 0;
}