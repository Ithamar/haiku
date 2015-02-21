#include <BeOSBuildCompatibility.h>

#include <fs_index.h>
#include <fs_volume.h>
#include <fs_info.h>


// fs_index.h
int
fs_create_index(dev_t device, const char *name, uint32 type, uint32 flags)
{
	return B_ERROR;
}


int
fs_stat_index(dev_t device, const char *name, struct index_info *indexInfo)
{
	return B_ERROR;
}


// fs_volume.h
dev_t
fs_mount_volume(const char *where, const char *device, const char *filesystem,
		uint32 flags, const char *parameters)
{
	return B_ERROR;
}


status_t
fs_unmount_volume(const char *path, uint32 flags)
{
	return B_ERROR;
}


// fs_info.h
int
fs_stat_dev(dev_t dev, fs_info *info)
{
	return B_ERROR;
}

dev_t
next_dev(int32 *pos)
{
	return B_ERROR;
}

dev_t
dev_for_path(const char *path)
{
	return B_ERROR;
}
