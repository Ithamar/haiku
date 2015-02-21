
#include <BeOSBuildCompatibility.h>

#include <OS.h>

static const thread_id kMainThreadID = 3;


// kill_thread
status_t
kill_thread(thread_id thread)
{
	return B_BAD_VALUE;
}

// resume_thread
status_t
resume_thread(thread_id thread)
{
	return B_BAD_VALUE;
}

// suspend_thread
status_t
suspend_thread(thread_id thread)
{
	return B_BAD_VALUE;
}

// find_thread
thread_id
find_thread(const char *name)
{
	if (name != NULL)
		return B_ENTRY_NOT_FOUND;
	
	return kMainThreadID;
}

// _get_thread_info
status_t
_get_thread_info(thread_id id, thread_info* info, size_t size)
{
	return B_ERROR;
}


thread_id
spawn_thread(thread_func, const char *name, int32 priority, void *data)
{
	return B_ERROR;
}


status_t
wait_for_thread(thread_id thread, status_t *returnValue)
{
	return B_ERROR;
}


status_t
rename_thread(thread_id thread, const char *newName)
{
	return B_ERROR;
}

void
exit_thread(status_t status)
{
}

status_t
send_data(thread_id thread, int32 code, const void *buffer, size_t bufferSize)
{
	return B_ERROR;
}

int32
receive_data(thread_id *sender, void *buffer, size_t bufferSize)
{
	return B_ERROR;
}

//bool
//has_data(thread_id thread)
//{
//	return false;
//}

// _get_next_thread_info
// status_t
// _get_next_thread_info(team_id team, int32 *cookie, thread_info *info,
// 	size_t size)
// {
// 	return B_ERROR;
// }
