#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int InRectangle( float pt[2], float rect[4] )
{
	float smallx, smally, largex, largey;

	if (rect[2]>rect[0])
	{
		smallx = rect[0];
		largex = rect[2];
	}
	else
	{
		smallx = rect[2];
		largex = rect[0];	
	}

	if (rect[3]>rect[1])
	{
		smally = rect[1];
		largey = rect[3];
	}
	else
	{
		smally = rect[3];
		largey = rect[1];	
	}

	if ((pt[0] >= smallx) && (pt[0] <= largex))
	{
		if ((pt[1] >= smally) && (pt[1] <= largey))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}
}

