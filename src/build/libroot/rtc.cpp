#include <BeOSBuildCompatibility.h>

#include <OS.h>


uint32
real_time_clock (void)
{
	return 0;
}

bigtime_t real_time_clock_usecs (void)
{
	return 0;
}

void set_real_time_clock (int32 secs_since_jan1_1970)
{
}
