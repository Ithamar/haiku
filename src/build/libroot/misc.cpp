
#include <BeOSBuildCompatibility.h>

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/time.h>

#include <Debug.h>
#include <image.h>
#include <OS.h>

#include <syscalls.h>

mode_t __gUmask = 022;

// debugger
void
debugger(const char *message)
{
	fprintf(stderr, "debugger() called: %s\n", message);
	exit(1);
}

// _debuggerAssert
int
_debuggerAssert(const char *file, int line, const char *expression)
{
	char buffer[2048];
	snprintf(buffer, sizeof(buffer), "%s:%d: %s\n", file, line, expression);
	debugger(buffer);
	return 0;
}

// debug_printf
void
debug_printf(const char *format, ...)
{
	va_list args;
	va_start(args, format);
	vfprintf(stderr, format, args);
	va_end(args);
}

// system_time
bigtime_t
system_time(void)
{
	struct timeval tm;
	gettimeofday(&tm, NULL);
	return (int64)tm.tv_sec * 1000000LL + (int64)tm.tv_usec;
}

// snooze
status_t
snooze(bigtime_t amount)
{
	if (amount <= 0)
		return B_OK;

	int64 secs = amount / 1000000LL;
	int64 usecs = amount % 1000000LL;
	if (secs > 0) {
		if (sleep((unsigned)secs) < 0)
			return errno;
	}

	if (usecs > 0) {
		if (usleep((useconds_t)usecs) < 0)
			return errno;
	}

	return B_OK;
}

// snooze_until
status_t
snooze_until(bigtime_t time, int timeBase)
{
	return snooze(time - system_time());
}

// get_architectures
extern "C" size_t
get_architectures(const char** architectures, size_t count)
{
	if (count > 0) {
		architectures[0] = "host";
		return 1;
	}

	return 0;
}

// get_secondary_architectures
extern "C" size_t
get_secondary_architectures(const char** architectures, size_t count)
{
	return 0;
}


int
_kern_open_query(dev_t device, const char *query, size_t queryLength,
			uint32 flags, port_id port, int32 token)
{
	return B_ERROR;
}


status_t
_kern_remove_dir(int fd, const char *path)
{
	return B_ERROR;
}


status_t
_kern_write_fs_info(dev_t device, const struct fs_info *info, int mask)
{
	return B_ERROR;
}


status_t
_kern_reserve_address_range(addr_t* _address, uint32 addressSpec, addr_t size)
{
	return B_ERROR;
}


area_id
_kern_transfer_area(area_id area, void **_address, uint32 addressSpec, team_id target)
{
	return B_ERROR;
}

// #pragma mark - node monitor functions
status_t
_kern_stop_notifying(port_id port, uint32 token)
{
	return B_ERROR;
}

status_t
_kern_start_watching(dev_t device, ino_t node, uint32 flags, port_id port, uint32 token)
{
	return B_ERROR;
}

status_t
_kern_stop_watching(dev_t device, ino_t node, port_id port, uint32 token)
{
	return B_ERROR;
}
