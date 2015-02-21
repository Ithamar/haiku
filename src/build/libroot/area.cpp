#include <BeOSBuildCompatibility.h>

#include <OS.h>

area_id
create_area(const char *name, void **startAddress, uint32 addressSpec,
		size_t size, uint32 lock, uint32 protection)
{
	return B_ERROR;
}

area_id
clone_area(const char *name, void **destAddress, uint32 addressSpec,
		uint32 protection, area_id source)
{
	return B_ERROR;
}

status_t
delete_area(area_id id)
{
	return B_ERROR;
}

status_t
set_area_protection(area_id id, uint32 newProtection)
{
	return B_ERROR;
}

status_t
_get_area_info(area_id id, area_info *areaInfo, size_t size)
{
	return B_ERROR;
}

#if 0
status_t
resize_area(area_id id, size_t newSize)
{
	return B_ERROR;
}

area_id
find_area(const char *name)
{
	return B_ERROR;
}

area_id
area_for(void *address)
{
	return B_ERROR;
}

status_t _get_next_area_info(team_id team, ssize_t *cookie, area_info *areaInfo,
				size_t size)
{
	return B_ERROR;
}
#endif
