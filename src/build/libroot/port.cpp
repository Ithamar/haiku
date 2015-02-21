
#include <BeOSBuildCompatibility.h>

#include <OS.h>

port_id
create_port(int32 capacity, const char *name)
{
}

port_id
find_port(const char *name)
{
}

ssize_t
read_port(port_id port, int32 *code, void *buffer, size_t bufferSize)
{
}

ssize_t
read_port_etc(port_id port, int32 *code, void *buffer,
		size_t bufferSize, uint32 flags, bigtime_t timeout)
{
}

status_t
write_port(port_id port, int32 code, const void *buffer, size_t bufferSize)
{
}

status_t
write_port_etc(port_id port, int32 code, const void *buffer,
		size_t bufferSize, uint32 flags, bigtime_t timeout)
{
}

status_t
close_port(port_id port)
{
	return B_ERROR;
}

status_t
delete_port(port_id port)
{
}

ssize_t
port_buffer_size_etc(port_id port, uint32 flags,
			bigtime_t timeout)
{
}

ssize_t
port_count(port_id port)
{
}

status_t
set_port_owner(port_id port, team_id team)
{
	return B_ERROR;
}

status_t
_get_port_info(port_id port, port_info *portInfo, size_t portInfoSize)
{
	return B_ERROR;
}

#if 0
ssize_t
port_buffer_size(port_id port)
{
	return B_ERROR;
}


status_t
_get_next_port_info(team_id team, int32 *cookie,
			port_info *portInfo, size_t portInfoSize)
{
	return B_ERROR;
}
#endif

