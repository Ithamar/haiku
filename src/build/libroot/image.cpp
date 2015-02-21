
#include <BeOSBuildCompatibility.h>

#include <image.h>

thread_id
load_image(int32 argc, const char **argv, const char **environ)
{
	return B_ERROR;
}

image_id
load_add_on(const char *path)
{
	return B_ERROR;
}

status_t
unload_add_on(image_id image)
{
	return B_ERROR;
}

status_t
get_image_symbol(image_id image, const char *name, int32 symbolType,
				void **_symbolLocation)
{
	return B_ERROR;
}

status_t _get_next_image_info(team_id team, int32 *cookie, image_info *info,
				size_t size)
{
	return B_ERROR;
}

#if 0
status_t
_get_image_info(image_id image, image_info *info, size_t size)
{
}

status_t
get_nth_image_symbol(image_id image, int32 n, char *nameBuffer,
		int32 *_nameLength, int32 *_symbolType, void **_symbolLocation)
{
}

void
clear_caches(void *address, size_t length, uint32 flags)
{
}
#endif
