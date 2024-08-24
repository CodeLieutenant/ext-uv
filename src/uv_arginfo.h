/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: ed664c9641e7036ee4b9344eafac1a3e0abacc83 */

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_uv_loop_new, 0, 0, UVLoop, 0)
ZEND_END_ARG_INFO()

#define arginfo_uv_default_loop arginfo_uv_loop_new

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_uv_run, 0, 0, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, loop, UVLoop, 0, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, mode, IS_LONG, 0, "UV::RUN_DEFAULT")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_uv_poll_start, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, poll, UVPoll, 0)
	ZEND_ARG_TYPE_INFO(0, events, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, callback, IS_CALLABLE, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_uv_poll_init, 0, 2, UVPoll, 0)
	ZEND_ARG_OBJ_INFO(0, loop, UVLoop, 0)
	ZEND_ARG_TYPE_INFO(0, fd, IS_MIXED, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_uv_poll_stop, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, poll, UVPoll, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_uv_close, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, handle, UV, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, callback, IS_CALLABLE, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_uv_shutdown, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, handle, UVStream, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, callback, IS_CALLABLE, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_uv_timer_init, 0, 0, UVTimer, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, loop, UVLoop, 0, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_uv_timer_start, 0, 3, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, timer, UVTimer, 0)
	ZEND_ARG_TYPE_INFO(0, timeout, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, repeat, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, callback, IS_CALLABLE, 0, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_uv_timer_stop, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, timer, UVTimer, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_uv_stop, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, loop, UVLoop, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_uv_write, 0, 3, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, handle, UV, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_uv_read_start, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, handle, UVStream, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_uv_fs_open, 0, 5, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, loop, UVLoop, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, flag, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mode, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_uv_fs_close, 0, 3, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, loop, UVLoop, 0)
	ZEND_ARG_TYPE_INFO(0, fd, IS_MIXED, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_uv_fs_read, 0, 5, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, loop, UVLoop, 0)
	ZEND_ARG_TYPE_INFO(0, fd, IS_MIXED, 0)
	ZEND_ARG_TYPE_INFO(0, offset, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, length, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_uv_fs_write, 0, 5, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, loop, UVLoop, 0)
	ZEND_ARG_TYPE_INFO(0, fd, IS_MIXED, 0)
	ZEND_ARG_TYPE_INFO(0, buffer, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, offset, IS_LONG, 0, "-1")
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 0)
ZEND_END_ARG_INFO()

#define arginfo_uv_fs_fdatasync arginfo_uv_fs_close

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_uv_fs_scandir, 0, 4, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, loop, UVLoop, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, flags, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_uv_fs_stat, 0, 3, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, loop, UVLoop, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 0)
ZEND_END_ARG_INFO()

#define arginfo_uv_fs_lstat arginfo_uv_fs_stat

#define arginfo_uv_fs_fstat arginfo_uv_fs_close

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_uv_fs_sendfile, 0, 6, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, loop, UVLoop, 0)
	ZEND_ARG_TYPE_INFO(0, out_fd, IS_MIXED, 0)
	ZEND_ARG_TYPE_INFO(0, in_fd, IS_MIXED, 0)
	ZEND_ARG_TYPE_INFO(0, offset, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, length, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_uv_is_active, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, handle, UV, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_uv_fs_poll_start, 0, 4, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, poll, UVPoll, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, interval, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_uv_fs_poll_stop arginfo_uv_poll_stop

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_uv_fs_poll_init, 0, 1, UVPoll, 0)
	ZEND_ARG_OBJ_INFO(0, loop, UVLoop, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_uv_exepath, 0, 0, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_uv_cwd arginfo_uv_exepath

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_uv_cpu_info, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_uv_signal_init, 0, 0, UVSignal, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, loop, UVLoop, 0, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_uv_signal_start, 0, 3, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, handle, UVSignal, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 0)
	ZEND_ARG_TYPE_INFO(0, signal, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_uv_signal_stop, 0, 1, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, handle, UVSignal, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_uv_spawn, 0, 7, UVProcess, 0)
	ZEND_ARG_OBJ_INFO(0, loop, UVLoop, 0)
	ZEND_ARG_TYPE_INFO(0, command, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, args, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, stdio, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, cwd, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, env, IS_ARRAY, 0, "array()")
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, flags, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_uv_process_kill, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, process, UVProcess, 0)
	ZEND_ARG_TYPE_INFO(0, signal, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_uv_process_get_pid, 0, 1, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, process, UVProcess, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_uv_kill, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, pid, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, signal, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_uv_pipe_init, 0, 2, UVPipe, 0)
	ZEND_ARG_OBJ_INFO(0, loop, UVLoop, 0)
	ZEND_ARG_TYPE_INFO(0, ipc, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_uv_pipe_open, 0, 2, MAY_BE_LONG|MAY_BE_FALSE)
	ZEND_ARG_OBJ_INFO(0, handle, UVPipe, 0)
	ZEND_ARG_TYPE_INFO(0, pipe, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_uv_pipe_bind, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, handle, UVPipe, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_uv_pipe_connect, 0, 3, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, handle, UVPipe, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_uv_pipe_pending_instances, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, handle, UVPipe, 0)
	ZEND_ARG_TYPE_INFO(0, count, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_uv_stdio_new, 0, 2, UVStdio, 0)
	ZEND_ARG_OBJ_INFO(0, fd, UV, 0)
	ZEND_ARG_TYPE_INFO(0, flags, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_uv_async_init, 0, 2, UVAsync, 0)
	ZEND_ARG_OBJ_INFO(0, loop, UVLoop, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_uv_async_send, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, handle, UVAsync, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_uv_queue_work, 0, 3, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, loop, UVLoop, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 0)
	ZEND_ARG_TYPE_INFO(0, after_callback, IS_CALLABLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_uv_idle_init, 0, 0, UVIdle, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, loop, UVLoop, 0, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_uv_idle_start, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, idle, UVIdle, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_uv_idle_stop, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, idle, UVIdle, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_uv_prepare_init, 0, 0, UVPrepare, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, loop, UVLoop, 0, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_uv_prepare_start, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, handle, UVPrepare, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_uv_prepare_stop, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, handle, UVPrepare, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_uv_check_init, 0, 0, UVCheck, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, loop, UVLoop, 0, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_uv_check_start, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, handle, UVCheck, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_uv_check_stop, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, handle, UVCheck, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_uv_last_error, 0, 0, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, uv_loop, UVLoop, 0, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_uv_err_name, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, error_code, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_uv_strerror arginfo_uv_err_name

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_uv_update_time, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, uv_loop, UVLoop, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_uv_ref, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, uv_handle, UV, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_uv_unref, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, uv_t, UV, 0)
ZEND_END_ARG_INFO()

#define arginfo_uv_now arginfo_uv_last_error

#define arginfo_uv_loop_delete arginfo_uv_update_time

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_uv_tcp_bind, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, uv_tcp, UVTcp, 0)
	ZEND_ARG_OBJ_INFO(0, uv_sockaddr, UVSockAddr, 0)
ZEND_END_ARG_INFO()

#define arginfo_uv_tcp_bind6 arginfo_uv_tcp_bind

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_uv_write2, 0, 4, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, handle, UVStream, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_STRING, 0)
	ZEND_ARG_OBJ_TYPE_MASK(0, send, UVTcp|UVPipe, 0, NULL)
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_uv_tcp_nodelay, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, handle, UVTcp, 0)
	ZEND_ARG_TYPE_INFO(0, enable, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_uv_accept, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_TYPE_MASK(0, server, UVTcp|UVPipe, 0, NULL)
	ZEND_ARG_OBJ_TYPE_MASK(0, client, UVTcp|UVPipe, 0, NULL)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_uv_listen, 0, 3, IS_VOID, 0)
	ZEND_ARG_OBJ_TYPE_MASK(0, handle, UVTcp|UVPipe, 0, NULL)
	ZEND_ARG_TYPE_INFO(0, backlog, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_uv_read_stop, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, handle, UVStream, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_uv_ip4_addr, 0, 2, UVSockAddrIPv4, 0)
	ZEND_ARG_TYPE_INFO(0, ipv4_addr, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, port, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_uv_ip6_addr, 0, 2, UVSockAddrIPv6, 0)
	ZEND_ARG_TYPE_INFO(0, ipv6_addr, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, port, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_uv_tcp_connect, 0, 3, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, handle, UVTcp, 0)
	ZEND_ARG_OBJ_INFO(0, ipv4_addr, UVSockAddrIPv4, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_uv_tcp_connect6, 0, 3, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, handle, UVTcp, 0)
	ZEND_ARG_OBJ_INFO(0, ipv6_addr, UVSockAddrIPv6, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 0)
ZEND_END_ARG_INFO()

#define arginfo_uv_timer_again arginfo_uv_timer_stop

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_uv_timer_set_repeat, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, timer, UVTimer, 0)
	ZEND_ARG_TYPE_INFO(0, repeat, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_uv_timer_get_repeat, 0, 1, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, timer, UVTimer, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_uv_getaddrinfo, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, loop, UVLoop, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, node, IS_STRING, 0, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, service, IS_STRING, 0, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, hints, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_uv_ip4_name, 0, 1, IS_STRING, 0)
	ZEND_ARG_OBJ_INFO(0, address, UVSockAddr, 0)
ZEND_END_ARG_INFO()

#define arginfo_uv_ip6_name arginfo_uv_ip4_name

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_uv_tcp_init, 0, 0, UVTcp, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, loop, UVLoop, 0, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_uv_udp_init, 0, 0, UVUdp, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, loop, UVLoop, 0, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_uv_udp_bind, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, handle, UVUdp, 0)
	ZEND_ARG_OBJ_INFO(0, address, UVSockAddr, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, flags, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_uv_udp_bind6, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, handle, UVUdp, 0)
	ZEND_ARG_OBJ_INFO(0, address, UVSockAddrIPv6, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, flags, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_uv_udp_recv_start, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, handle, UVUdp, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_uv_udp_recv_stop, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, handle, UVUdp, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_uv_udp_set_membership, 0, 4, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, handle, UVUdp, 0)
	ZEND_ARG_TYPE_INFO(0, multicast_addr, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, interface_addr, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, membership, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_uv_udp_set_multicast_loop, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, handle, UVUdp, 0)
	ZEND_ARG_TYPE_INFO(0, enabled, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_uv_udp_set_multicast_ttl, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, handle, UVUdp, 0)
	ZEND_ARG_TYPE_INFO(0, ttl, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_uv_udp_set_broadcast arginfo_uv_udp_set_multicast_loop

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_uv_udp_send, 0, 4, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, handle, UVUdp, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_STRING, 0)
	ZEND_ARG_OBJ_INFO(0, uv_addr, UVSockAddr, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_uv_udp_send6, 0, 4, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, handle, UVUdp, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_STRING, 0)
	ZEND_ARG_OBJ_INFO(0, uv_addr6, UVSockAddrIPv6, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_uv_is_readable, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, handle, UVStream, 0)
ZEND_END_ARG_INFO()

#define arginfo_uv_is_writable arginfo_uv_is_readable

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_uv_walk, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, loop, UVLoop, 0)
	ZEND_ARG_TYPE_INFO(0, closure, IS_CALLABLE, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, opaque, IS_ARRAY, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_uv_guess_handle, 0, 1, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, uv, UV, 0)
ZEND_END_ARG_INFO()

#define arginfo_uv_loadavg arginfo_uv_cpu_info

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_uv_rwlock_init, 0, 0, UVLock, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_uv_rwlock_rdlock, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, handle, UVLock, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_uv_rwlock_tryrdlock, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, handle, UVLock, 0)
ZEND_END_ARG_INFO()

#define arginfo_uv_rwlock_rdunlock arginfo_uv_rwlock_rdlock

#define arginfo_uv_rwlock_wrlock arginfo_uv_rwlock_rdlock

#define arginfo_uv_rwlock_trywrlock arginfo_uv_rwlock_tryrdlock

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_uv_rwlock_wrunlock, 0, 1, boold, 0)
	ZEND_ARG_OBJ_INFO(0, handle, UVLock, 0)
ZEND_END_ARG_INFO()

#define arginfo_uv_mutex_init arginfo_uv_rwlock_init

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_uv_mutex_lock, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, lock, UVLock, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_uv_mutex_trylock, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, lock, UVLock, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_uv_sem_init, 0, 1, UVLock, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_uv_sem_post, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, sem, UVLock, 0)
ZEND_END_ARG_INFO()

#define arginfo_uv_sem_wait arginfo_uv_sem_post

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_uv_sem_trywait, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, sem, UVLock, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_uv_hrtime, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_uv_fs_fsync, 0, 3, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, loop, UVLoop, 0)
	ZEND_ARG_OBJ_INFO(0, fd, resource, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_uv_fs_ftruncate, 0, 4, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, loop, UVLoop, 0)
	ZEND_ARG_OBJ_INFO(0, fd, resource, 0)
	ZEND_ARG_TYPE_INFO(0, offset, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_uv_fs_mkdir, 0, 4, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, loop, UVLoop, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, mode, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 0)
ZEND_END_ARG_INFO()

#define arginfo_uv_fs_rmdir arginfo_uv_fs_stat

#define arginfo_uv_fs_unlink arginfo_uv_fs_stat

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_uv_fs_rename, 0, 4, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, loop, UVLoop, 0)
	ZEND_ARG_TYPE_INFO(0, from, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, to, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_uv_fs_utime, 0, 5, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, loop, UVLoop, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, utime, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, atime, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_uv_fs_futime, 0, 5, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, loop, UVLoop, 0)
	ZEND_ARG_OBJ_INFO(0, fd, resource, 0)
	ZEND_ARG_TYPE_INFO(0, utime, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, atime, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 0)
ZEND_END_ARG_INFO()

#define arginfo_uv_fs_chmod arginfo_uv_fs_mkdir

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_uv_fs_fchmod, 0, 4, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, loop, UVLoop, 0)
	ZEND_ARG_OBJ_INFO(0, fd, resource, 0)
	ZEND_ARG_TYPE_INFO(0, mode, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_uv_fs_chown, 0, 5, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, loop, UVLoop, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, uid, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, gid, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_uv_fs_fchown, 0, 5, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, loop, UVLoop, 0)
	ZEND_ARG_OBJ_INFO(0, fd, resource, 0)
	ZEND_ARG_TYPE_INFO(0, uid, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, gid, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_uv_fs_symlink, 0, 5, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, loop, UVLoop, 0)
	ZEND_ARG_TYPE_INFO(0, from, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, to, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, flags, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 0)
ZEND_END_ARG_INFO()

#define arginfo_uv_fs_link arginfo_uv_fs_rename

#define arginfo_uv_fs_readlink arginfo_uv_fs_stat

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_uv_fs_readdir, 0, 4, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, loop, UVLoop, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, flags, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_uv_fs_event_init, 0, 3, UVFsEvent, 0)
	ZEND_ARG_OBJ_INFO(0, loop, UVLoop, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, flags, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_uv_tty_init, 0, 3, UVTty, 0)
	ZEND_ARG_OBJ_INFO(0, loop, UVLoop, 0)
	ZEND_ARG_OBJ_INFO(0, fd, resource, 0)
	ZEND_ARG_TYPE_INFO(0, readable, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_uv_tty_get_winsize, 0, 3, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, tty, UVTty, 0)
	ZEND_ARG_TYPE_INFO(1, width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(1, height, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_uv_tty_set_mode, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, tty, UVTty, 0)
	ZEND_ARG_TYPE_INFO(0, mode, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_uv_tty_reset_mode, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_uv_uptime, 0, 0, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

#define arginfo_uv_get_free_memory arginfo_uv_hrtime

#define arginfo_uv_get_total_memory arginfo_uv_hrtime

#define arginfo_uv_interface_addresses arginfo_uv_cpu_info

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_uv_chdir, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, directory, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_uv_tcp_getsockname, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_OBJ_INFO(0, uv_sock, UVTcp, 0)
ZEND_END_ARG_INFO()

#define arginfo_uv_tcp_getpeername arginfo_uv_tcp_getsockname

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_uv_udp_getsockname, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_OBJ_INFO(0, uv_sock, UVUdp, 0)
ZEND_END_ARG_INFO()

#define arginfo_uv_resident_set_memory arginfo_uv_hrtime

#define arginfo_uv_handle_get_type arginfo_uv_guess_handle

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_uv_tcp_open, 0, 2, MAY_BE_LONG|MAY_BE_FALSE)
	ZEND_ARG_OBJ_INFO(0, handle, UVTcp, 0)
	ZEND_ARG_TYPE_INFO(0, tcpfd, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_uv_udp_open, 0, 2, MAY_BE_LONG|MAY_BE_FALSE)
	ZEND_ARG_OBJ_INFO(0, handle, UVUdp, 0)
	ZEND_ARG_TYPE_INFO(0, udpfd, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_uv_is_closing, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, handle, UV, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_uv_run_once, 0, 0, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, uv_loop, UVLoop, 1, "null")
ZEND_END_ARG_INFO()


ZEND_FUNCTION(uv_loop_new);
ZEND_FUNCTION(uv_default_loop);
ZEND_FUNCTION(uv_run);
ZEND_FUNCTION(uv_poll_start);
ZEND_FUNCTION(uv_poll_init);
ZEND_FUNCTION(uv_poll_stop);
ZEND_FUNCTION(uv_close);
ZEND_FUNCTION(uv_shutdown);
ZEND_FUNCTION(uv_timer_init);
ZEND_FUNCTION(uv_timer_start);
ZEND_FUNCTION(uv_timer_stop);
ZEND_FUNCTION(uv_stop);
ZEND_FUNCTION(uv_write);
ZEND_FUNCTION(uv_read_start);
ZEND_FUNCTION(uv_fs_open);
ZEND_FUNCTION(uv_fs_close);
ZEND_FUNCTION(uv_fs_read);
ZEND_FUNCTION(uv_fs_write);
ZEND_FUNCTION(uv_fs_fdatasync);
ZEND_FUNCTION(uv_fs_scandir);
ZEND_FUNCTION(uv_fs_stat);
ZEND_FUNCTION(uv_fs_lstat);
ZEND_FUNCTION(uv_fs_fstat);
ZEND_FUNCTION(uv_fs_sendfile);
ZEND_FUNCTION(uv_is_active);
ZEND_FUNCTION(uv_fs_poll_start);
ZEND_FUNCTION(uv_fs_poll_stop);
ZEND_FUNCTION(uv_fs_poll_init);
ZEND_FUNCTION(uv_exepath);
ZEND_FUNCTION(uv_cwd);
ZEND_FUNCTION(uv_cpu_info);
ZEND_FUNCTION(uv_signal_init);
ZEND_FUNCTION(uv_signal_start);
ZEND_FUNCTION(uv_signal_stop);
ZEND_FUNCTION(uv_spawn);
ZEND_FUNCTION(uv_process_kill);
ZEND_FUNCTION(uv_process_get_pid);
ZEND_FUNCTION(uv_kill);
ZEND_FUNCTION(uv_pipe_init);
ZEND_FUNCTION(uv_pipe_open);
ZEND_FUNCTION(uv_pipe_bind);
ZEND_FUNCTION(uv_pipe_connect);
ZEND_FUNCTION(uv_pipe_pending_instances);
ZEND_FUNCTION(uv_stdio_new);
ZEND_FUNCTION(uv_async_init);
ZEND_FUNCTION(uv_async_send);
ZEND_FUNCTION(uv_queue_work);
ZEND_FUNCTION(uv_idle_init);
ZEND_FUNCTION(uv_idle_start);
ZEND_FUNCTION(uv_idle_stop);
ZEND_FUNCTION(uv_prepare_init);
ZEND_FUNCTION(uv_prepare_start);
ZEND_FUNCTION(uv_prepare_stop);
ZEND_FUNCTION(uv_check_init);
ZEND_FUNCTION(uv_check_start);
ZEND_FUNCTION(uv_check_stop);
ZEND_FUNCTION(uv_last_error);
ZEND_FUNCTION(uv_err_name);
ZEND_FUNCTION(uv_strerror);
ZEND_FUNCTION(uv_update_time);
ZEND_FUNCTION(uv_ref);
ZEND_FUNCTION(uv_unref);
ZEND_FUNCTION(uv_now);
ZEND_FUNCTION(uv_loop_delete);
ZEND_FUNCTION(uv_tcp_bind);
ZEND_FUNCTION(uv_tcp_bind6);
ZEND_FUNCTION(uv_write2);
ZEND_FUNCTION(uv_tcp_nodelay);
ZEND_FUNCTION(uv_accept);
ZEND_FUNCTION(uv_listen);
ZEND_FUNCTION(uv_read_stop);
ZEND_FUNCTION(uv_ip4_addr);
ZEND_FUNCTION(uv_ip6_addr);
ZEND_FUNCTION(uv_tcp_connect);
ZEND_FUNCTION(uv_tcp_connect6);
ZEND_FUNCTION(uv_timer_again);
ZEND_FUNCTION(uv_timer_set_repeat);
ZEND_FUNCTION(uv_timer_get_repeat);
ZEND_FUNCTION(uv_getaddrinfo);
ZEND_FUNCTION(uv_ip4_name);
ZEND_FUNCTION(uv_ip6_name);
ZEND_FUNCTION(uv_tcp_init);
ZEND_FUNCTION(uv_udp_init);
ZEND_FUNCTION(uv_udp_bind);
ZEND_FUNCTION(uv_udp_bind6);
ZEND_FUNCTION(uv_udp_recv_start);
ZEND_FUNCTION(uv_udp_recv_stop);
ZEND_FUNCTION(uv_udp_set_membership);
ZEND_FUNCTION(uv_udp_set_multicast_loop);
ZEND_FUNCTION(uv_udp_set_multicast_ttl);
ZEND_FUNCTION(uv_udp_set_broadcast);
ZEND_FUNCTION(uv_udp_send);
ZEND_FUNCTION(uv_udp_send6);
ZEND_FUNCTION(uv_is_readable);
ZEND_FUNCTION(uv_is_writable);
ZEND_FUNCTION(uv_walk);
ZEND_FUNCTION(uv_guess_handle);
ZEND_FUNCTION(uv_loadavg);
ZEND_FUNCTION(uv_rwlock_init);
ZEND_FUNCTION(uv_rwlock_rdlock);
ZEND_FUNCTION(uv_rwlock_tryrdlock);
ZEND_FUNCTION(uv_rwlock_rdunlock);
ZEND_FUNCTION(uv_rwlock_wrlock);
ZEND_FUNCTION(uv_rwlock_trywrlock);
ZEND_FUNCTION(uv_rwlock_wrunlock);
ZEND_FUNCTION(uv_mutex_init);
ZEND_FUNCTION(uv_mutex_lock);
ZEND_FUNCTION(uv_mutex_trylock);
ZEND_FUNCTION(uv_sem_init);
ZEND_FUNCTION(uv_sem_post);
ZEND_FUNCTION(uv_sem_wait);
ZEND_FUNCTION(uv_sem_trywait);
ZEND_FUNCTION(uv_hrtime);
ZEND_FUNCTION(uv_fs_fsync);
ZEND_FUNCTION(uv_fs_ftruncate);
ZEND_FUNCTION(uv_fs_mkdir);
ZEND_FUNCTION(uv_fs_rmdir);
ZEND_FUNCTION(uv_fs_unlink);
ZEND_FUNCTION(uv_fs_rename);
ZEND_FUNCTION(uv_fs_utime);
ZEND_FUNCTION(uv_fs_futime);
ZEND_FUNCTION(uv_fs_chmod);
ZEND_FUNCTION(uv_fs_fchmod);
ZEND_FUNCTION(uv_fs_chown);
ZEND_FUNCTION(uv_fs_fchown);
ZEND_FUNCTION(uv_fs_symlink);
ZEND_FUNCTION(uv_fs_link);
ZEND_FUNCTION(uv_fs_readlink);
ZEND_FUNCTION(uv_fs_readdir);
ZEND_FUNCTION(uv_fs_event_init);
ZEND_FUNCTION(uv_tty_init);
ZEND_FUNCTION(uv_tty_get_winsize);
ZEND_FUNCTION(uv_tty_set_mode);
ZEND_FUNCTION(uv_tty_reset_mode);
ZEND_FUNCTION(uv_uptime);
ZEND_FUNCTION(uv_get_free_memory);
ZEND_FUNCTION(uv_get_total_memory);
ZEND_FUNCTION(uv_interface_addresses);
ZEND_FUNCTION(uv_chdir);
ZEND_FUNCTION(uv_tcp_getsockname);
ZEND_FUNCTION(uv_tcp_getpeername);
ZEND_FUNCTION(uv_udp_getsockname);
ZEND_FUNCTION(uv_resident_set_memory);
ZEND_FUNCTION(uv_handle_get_type);
ZEND_FUNCTION(uv_tcp_open);
ZEND_FUNCTION(uv_udp_open);
ZEND_FUNCTION(uv_is_closing);
ZEND_FUNCTION(uv_run_once);


static const zend_function_entry ext_functions[] = {
	ZEND_FE(uv_loop_new, arginfo_uv_loop_new)
	ZEND_FE(uv_default_loop, arginfo_uv_default_loop)
	ZEND_FE(uv_run, arginfo_uv_run)
	ZEND_FE(uv_poll_start, arginfo_uv_poll_start)
	ZEND_FE(uv_poll_init, arginfo_uv_poll_init)
	ZEND_FE(uv_poll_stop, arginfo_uv_poll_stop)
	ZEND_FE(uv_close, arginfo_uv_close)
	ZEND_FE(uv_shutdown, arginfo_uv_shutdown)
	ZEND_FE(uv_timer_init, arginfo_uv_timer_init)
	ZEND_FE(uv_timer_start, arginfo_uv_timer_start)
	ZEND_FE(uv_timer_stop, arginfo_uv_timer_stop)
	ZEND_FE(uv_stop, arginfo_uv_stop)
	ZEND_FE(uv_write, arginfo_uv_write)
	ZEND_FE(uv_read_start, arginfo_uv_read_start)
	ZEND_FE(uv_fs_open, arginfo_uv_fs_open)
	ZEND_FE(uv_fs_close, arginfo_uv_fs_close)
	ZEND_FE(uv_fs_read, arginfo_uv_fs_read)
	ZEND_FE(uv_fs_write, arginfo_uv_fs_write)
	ZEND_FE(uv_fs_fdatasync, arginfo_uv_fs_fdatasync)
	ZEND_FE(uv_fs_scandir, arginfo_uv_fs_scandir)
	ZEND_FE(uv_fs_stat, arginfo_uv_fs_stat)
	ZEND_FE(uv_fs_lstat, arginfo_uv_fs_lstat)
	ZEND_FE(uv_fs_fstat, arginfo_uv_fs_fstat)
	ZEND_FE(uv_fs_sendfile, arginfo_uv_fs_sendfile)
	ZEND_FE(uv_is_active, arginfo_uv_is_active)
	ZEND_FE(uv_fs_poll_start, arginfo_uv_fs_poll_start)
	ZEND_FE(uv_fs_poll_stop, arginfo_uv_fs_poll_stop)
	ZEND_FE(uv_fs_poll_init, arginfo_uv_fs_poll_init)
	ZEND_FE(uv_exepath, arginfo_uv_exepath)
	ZEND_FE(uv_cwd, arginfo_uv_cwd)
	ZEND_FE(uv_cpu_info, arginfo_uv_cpu_info)
	ZEND_FE(uv_signal_init, arginfo_uv_signal_init)
	ZEND_FE(uv_signal_start, arginfo_uv_signal_start)
	ZEND_FE(uv_signal_stop, arginfo_uv_signal_stop)
	ZEND_FE(uv_spawn, arginfo_uv_spawn)
	ZEND_FE(uv_process_kill, arginfo_uv_process_kill)
	ZEND_FE(uv_process_get_pid, arginfo_uv_process_get_pid)
	ZEND_FE(uv_kill, arginfo_uv_kill)
	ZEND_FE(uv_pipe_init, arginfo_uv_pipe_init)
	ZEND_FE(uv_pipe_open, arginfo_uv_pipe_open)
	ZEND_FE(uv_pipe_bind, arginfo_uv_pipe_bind)
	ZEND_FE(uv_pipe_connect, arginfo_uv_pipe_connect)
	ZEND_FE(uv_pipe_pending_instances, arginfo_uv_pipe_pending_instances)
	ZEND_FE(uv_stdio_new, arginfo_uv_stdio_new)
	ZEND_FE(uv_async_init, arginfo_uv_async_init)
	ZEND_FE(uv_async_send, arginfo_uv_async_send)
	ZEND_FE(uv_queue_work, arginfo_uv_queue_work)
	ZEND_FE(uv_idle_init, arginfo_uv_idle_init)
	ZEND_FE(uv_idle_start, arginfo_uv_idle_start)
	ZEND_FE(uv_idle_stop, arginfo_uv_idle_stop)
	ZEND_FE(uv_prepare_init, arginfo_uv_prepare_init)
	ZEND_FE(uv_prepare_start, arginfo_uv_prepare_start)
	ZEND_FE(uv_prepare_stop, arginfo_uv_prepare_stop)
	ZEND_FE(uv_check_init, arginfo_uv_check_init)
	ZEND_FE(uv_check_start, arginfo_uv_check_start)
	ZEND_FE(uv_check_stop, arginfo_uv_check_stop)
	ZEND_FE(uv_last_error, arginfo_uv_last_error)
	ZEND_FE(uv_err_name, arginfo_uv_err_name)
	ZEND_FE(uv_strerror, arginfo_uv_strerror)
	ZEND_FE(uv_update_time, arginfo_uv_update_time)
	ZEND_FE(uv_ref, arginfo_uv_ref)
	ZEND_FE(uv_unref, arginfo_uv_unref)
	ZEND_FE(uv_now, arginfo_uv_now)
	ZEND_FE(uv_loop_delete, arginfo_uv_loop_delete)
	ZEND_FE(uv_tcp_bind, arginfo_uv_tcp_bind)
	ZEND_FE(uv_tcp_bind6, arginfo_uv_tcp_bind6)
	ZEND_FE(uv_write2, arginfo_uv_write2)
	ZEND_FE(uv_tcp_nodelay, arginfo_uv_tcp_nodelay)
	ZEND_FE(uv_accept, arginfo_uv_accept)
	ZEND_FE(uv_listen, arginfo_uv_listen)
	ZEND_FE(uv_read_stop, arginfo_uv_read_stop)
	ZEND_FE(uv_ip4_addr, arginfo_uv_ip4_addr)
	ZEND_FE(uv_ip6_addr, arginfo_uv_ip6_addr)
	ZEND_FE(uv_tcp_connect, arginfo_uv_tcp_connect)
	ZEND_FE(uv_tcp_connect6, arginfo_uv_tcp_connect6)
	ZEND_FE(uv_timer_again, arginfo_uv_timer_again)
	ZEND_FE(uv_timer_set_repeat, arginfo_uv_timer_set_repeat)
	ZEND_FE(uv_timer_get_repeat, arginfo_uv_timer_get_repeat)
	ZEND_FE(uv_getaddrinfo, arginfo_uv_getaddrinfo)
	ZEND_FE(uv_ip4_name, arginfo_uv_ip4_name)
	ZEND_FE(uv_ip6_name, arginfo_uv_ip6_name)
	ZEND_FE(uv_tcp_init, arginfo_uv_tcp_init)
	ZEND_FE(uv_udp_init, arginfo_uv_udp_init)
	ZEND_FE(uv_udp_bind, arginfo_uv_udp_bind)
	ZEND_FE(uv_udp_bind6, arginfo_uv_udp_bind6)
	ZEND_FE(uv_udp_recv_start, arginfo_uv_udp_recv_start)
	ZEND_FE(uv_udp_recv_stop, arginfo_uv_udp_recv_stop)
	ZEND_FE(uv_udp_set_membership, arginfo_uv_udp_set_membership)
	ZEND_FE(uv_udp_set_multicast_loop, arginfo_uv_udp_set_multicast_loop)
	ZEND_FE(uv_udp_set_multicast_ttl, arginfo_uv_udp_set_multicast_ttl)
	ZEND_FE(uv_udp_set_broadcast, arginfo_uv_udp_set_broadcast)
	ZEND_FE(uv_udp_send, arginfo_uv_udp_send)
	ZEND_FE(uv_udp_send6, arginfo_uv_udp_send6)
	ZEND_FE(uv_is_readable, arginfo_uv_is_readable)
	ZEND_FE(uv_is_writable, arginfo_uv_is_writable)
	ZEND_FE(uv_walk, arginfo_uv_walk)
	ZEND_FE(uv_guess_handle, arginfo_uv_guess_handle)
	ZEND_FE(uv_loadavg, arginfo_uv_loadavg)
	ZEND_FE(uv_rwlock_init, arginfo_uv_rwlock_init)
	ZEND_FE(uv_rwlock_rdlock, arginfo_uv_rwlock_rdlock)
	ZEND_FE(uv_rwlock_tryrdlock, arginfo_uv_rwlock_tryrdlock)
	ZEND_FE(uv_rwlock_rdunlock, arginfo_uv_rwlock_rdunlock)
	ZEND_FE(uv_rwlock_wrlock, arginfo_uv_rwlock_wrlock)
	ZEND_FE(uv_rwlock_trywrlock, arginfo_uv_rwlock_trywrlock)
	ZEND_FE(uv_rwlock_wrunlock, arginfo_uv_rwlock_wrunlock)
	ZEND_FE(uv_mutex_init, arginfo_uv_mutex_init)
	ZEND_FE(uv_mutex_lock, arginfo_uv_mutex_lock)
	ZEND_FE(uv_mutex_trylock, arginfo_uv_mutex_trylock)
	ZEND_FE(uv_sem_init, arginfo_uv_sem_init)
	ZEND_FE(uv_sem_post, arginfo_uv_sem_post)
	ZEND_FE(uv_sem_wait, arginfo_uv_sem_wait)
	ZEND_FE(uv_sem_trywait, arginfo_uv_sem_trywait)
	ZEND_FE(uv_hrtime, arginfo_uv_hrtime)
	ZEND_FE(uv_fs_fsync, arginfo_uv_fs_fsync)
	ZEND_FE(uv_fs_ftruncate, arginfo_uv_fs_ftruncate)
	ZEND_FE(uv_fs_mkdir, arginfo_uv_fs_mkdir)
	ZEND_FE(uv_fs_rmdir, arginfo_uv_fs_rmdir)
	ZEND_FE(uv_fs_unlink, arginfo_uv_fs_unlink)
	ZEND_FE(uv_fs_rename, arginfo_uv_fs_rename)
	ZEND_FE(uv_fs_utime, arginfo_uv_fs_utime)
	ZEND_FE(uv_fs_futime, arginfo_uv_fs_futime)
	ZEND_FE(uv_fs_chmod, arginfo_uv_fs_chmod)
	ZEND_FE(uv_fs_fchmod, arginfo_uv_fs_fchmod)
	ZEND_FE(uv_fs_chown, arginfo_uv_fs_chown)
	ZEND_FE(uv_fs_fchown, arginfo_uv_fs_fchown)
	ZEND_FE(uv_fs_symlink, arginfo_uv_fs_symlink)
	ZEND_FE(uv_fs_link, arginfo_uv_fs_link)
	ZEND_FE(uv_fs_readlink, arginfo_uv_fs_readlink)
	ZEND_FE(uv_fs_readdir, arginfo_uv_fs_readdir)
	ZEND_FE(uv_fs_event_init, arginfo_uv_fs_event_init)
	ZEND_FE(uv_tty_init, arginfo_uv_tty_init)
	ZEND_FE(uv_tty_get_winsize, arginfo_uv_tty_get_winsize)
	ZEND_FE(uv_tty_set_mode, arginfo_uv_tty_set_mode)
	ZEND_FE(uv_tty_reset_mode, arginfo_uv_tty_reset_mode)
	ZEND_FE(uv_uptime, arginfo_uv_uptime)
	ZEND_FE(uv_get_free_memory, arginfo_uv_get_free_memory)
	ZEND_FE(uv_get_total_memory, arginfo_uv_get_total_memory)
	ZEND_FE(uv_interface_addresses, arginfo_uv_interface_addresses)
	ZEND_FE(uv_chdir, arginfo_uv_chdir)
	ZEND_FE(uv_tcp_getsockname, arginfo_uv_tcp_getsockname)
	ZEND_FE(uv_tcp_getpeername, arginfo_uv_tcp_getpeername)
	ZEND_FE(uv_udp_getsockname, arginfo_uv_udp_getsockname)
	ZEND_FE(uv_resident_set_memory, arginfo_uv_resident_set_memory)
	ZEND_FE(uv_handle_get_type, arginfo_uv_handle_get_type)
	ZEND_FE(uv_tcp_open, arginfo_uv_tcp_open)
	ZEND_FE(uv_udp_open, arginfo_uv_udp_open)
	ZEND_FE(uv_is_closing, arginfo_uv_is_closing)
	ZEND_FE(uv_run_once, arginfo_uv_run_once)
	ZEND_FE_END
};


static const zend_function_entry class_UV_methods[] = {
	ZEND_FE_END
};


static const zend_function_entry class_UVLoop_methods[] = {
	ZEND_FE_END
};


static const zend_function_entry class_UVStream_methods[] = {
	ZEND_FE_END
};


static const zend_function_entry class_UVTcp_methods[] = {
	ZEND_FE_END
};


static const zend_function_entry class_UVUdp_methods[] = {
	ZEND_FE_END
};


static const zend_function_entry class_UVPipe_methods[] = {
	ZEND_FE_END
};


static const zend_function_entry class_UVPoll_methods[] = {
	ZEND_FE_END
};


static const zend_function_entry class_UVTimer_methods[] = {
	ZEND_FE_END
};


static const zend_function_entry class_UVSignal_methods[] = {
	ZEND_FE_END
};


static const zend_function_entry class_UVProcess_methods[] = {
	ZEND_FE_END
};


static const zend_function_entry class_UVAsync_methods[] = {
	ZEND_FE_END
};


static const zend_function_entry class_UVTty_methods[] = {
	ZEND_FE_END
};


static const zend_function_entry class_UVIdle_methods[] = {
	ZEND_FE_END
};


static const zend_function_entry class_UVPrepare_methods[] = {
	ZEND_FE_END
};


static const zend_function_entry class_UVCheck_methods[] = {
	ZEND_FE_END
};


static const zend_function_entry class_UVStdio_methods[] = {
	ZEND_FE_END
};


static const zend_function_entry class_UVSockAddr_methods[] = {
	ZEND_FE_END
};


static const zend_function_entry class_UVSockAddrIPv4_methods[] = {
	ZEND_FE_END
};


static const zend_function_entry class_UVSockAddrIPv6_methods[] = {
	ZEND_FE_END
};


static const zend_function_entry class_UVLock_methods[] = {
	ZEND_FE_END
};


static const zend_function_entry class_UVFs_methods[] = {
	ZEND_FE_END
};


static const zend_function_entry class_UVFsEvent_methods[] = {
	ZEND_FE_END
};


static const zend_function_entry class_UVFsPoll_methods[] = {
	ZEND_FE_END
};


static const zend_function_entry class_UVWork_methods[] = {
	ZEND_FE_END
};


#if PHP_VERSION_ID >= 80300
static const zend_function_entry class_UVHandleType_methods[] = {
	ZEND_FE_END
};
#endif

static zend_class_entry *register_class_UV(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "UV", class_UV_methods);
	class_entry = zend_register_internal_class_ex(&ce, NULL);
	class_entry->ce_flags |= ZEND_ACC_ABSTRACT|ZEND_ACC_NO_DYNAMIC_PROPERTIES|ZEND_ACC_NOT_SERIALIZABLE;

	zval const_READABLE_value;
	ZVAL_LONG(&const_READABLE_value, UV_READABLE);
	zend_string *const_READABLE_name = zend_string_init_interned("READABLE", sizeof("READABLE") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_READABLE_name, &const_READABLE_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_READABLE_name, &const_READABLE_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_READABLE_name);

	zval const_WRITABLE_value;
	ZVAL_LONG(&const_WRITABLE_value, UV_WRITABLE);
	zend_string *const_WRITABLE_name = zend_string_init_interned("WRITABLE", sizeof("WRITABLE") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_WRITABLE_name, &const_WRITABLE_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_WRITABLE_name, &const_WRITABLE_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_WRITABLE_name);

	zval const_RUN_DEFAULT_value;
	ZVAL_LONG(&const_RUN_DEFAULT_value, UV_WRITABLE);
	zend_string *const_RUN_DEFAULT_name = zend_string_init_interned("RUN_DEFAULT", sizeof("RUN_DEFAULT") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_RUN_DEFAULT_name, &const_RUN_DEFAULT_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_RUN_DEFAULT_name, &const_RUN_DEFAULT_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_RUN_DEFAULT_name);

	zval const_RUN_ONCE_value;
	ZVAL_LONG(&const_RUN_ONCE_value, UV_RUN_DEFAULT);
	zend_string *const_RUN_ONCE_name = zend_string_init_interned("RUN_ONCE", sizeof("RUN_ONCE") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_RUN_ONCE_name, &const_RUN_ONCE_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_RUN_ONCE_name, &const_RUN_ONCE_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_RUN_ONCE_name);

	zval const_RUN_NOWAIT_value;
	ZVAL_LONG(&const_RUN_NOWAIT_value, UV_RUN_NOWAIT);
	zend_string *const_RUN_NOWAIT_name = zend_string_init_interned("RUN_NOWAIT", sizeof("RUN_NOWAIT") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_RUN_NOWAIT_name, &const_RUN_NOWAIT_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_RUN_NOWAIT_name, &const_RUN_NOWAIT_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_RUN_NOWAIT_name);

	zval const_CHANGE_value;
	ZVAL_LONG(&const_CHANGE_value, UV_CHANGE);
	zend_string *const_CHANGE_name = zend_string_init_interned("CHANGE", sizeof("CHANGE") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_CHANGE_name, &const_CHANGE_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_CHANGE_name, &const_CHANGE_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_CHANGE_name);

	zval const_RENAME_value;
	ZVAL_LONG(&const_RENAME_value, UV_RENAME);
	zend_string *const_RENAME_name = zend_string_init_interned("RENAME", sizeof("RENAME") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_RENAME_name, &const_RENAME_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_RENAME_name, &const_RENAME_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_RENAME_name);

	zval const_O_RDONLY_value;
	ZVAL_LONG(&const_O_RDONLY_value, O_RDONLY);
	zend_string *const_O_RDONLY_name = zend_string_init_interned("O_RDONLY", sizeof("O_RDONLY") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_O_RDONLY_name, &const_O_RDONLY_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_O_RDONLY_name, &const_O_RDONLY_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_O_RDONLY_name);

	zval const_O_WRONLY_value;
	ZVAL_LONG(&const_O_WRONLY_value, O_WRONLY);
	zend_string *const_O_WRONLY_name = zend_string_init_interned("O_WRONLY", sizeof("O_WRONLY") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_O_WRONLY_name, &const_O_WRONLY_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_O_WRONLY_name, &const_O_WRONLY_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_O_WRONLY_name);

	zval const_O_RDWR_value;
	ZVAL_LONG(&const_O_RDWR_value, O_RDWR);
	zend_string *const_O_RDWR_name = zend_string_init_interned("O_RDWR", sizeof("O_RDWR") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_O_RDWR_name, &const_O_RDWR_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_O_RDWR_name, &const_O_RDWR_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_O_RDWR_name);

	zval const_O_CREAT_value;
	ZVAL_LONG(&const_O_CREAT_value, O_CREAT);
	zend_string *const_O_CREAT_name = zend_string_init_interned("O_CREAT", sizeof("O_CREAT") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_O_CREAT_name, &const_O_CREAT_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_O_CREAT_name, &const_O_CREAT_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_O_CREAT_name);

	zval const_O_EXCL_value;
	ZVAL_LONG(&const_O_EXCL_value, O_EXCL);
	zend_string *const_O_EXCL_name = zend_string_init_interned("O_EXCL", sizeof("O_EXCL") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_O_EXCL_name, &const_O_EXCL_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_O_EXCL_name, &const_O_EXCL_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_O_EXCL_name);

	zval const_O_TRUNC_value;
	ZVAL_LONG(&const_O_TRUNC_value, O_TRUNC);
	zend_string *const_O_TRUNC_name = zend_string_init_interned("O_TRUNC", sizeof("O_TRUNC") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_O_TRUNC_name, &const_O_TRUNC_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_O_TRUNC_name, &const_O_TRUNC_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_O_TRUNC_name);

	zval const_O_APPEND_value;
	ZVAL_LONG(&const_O_APPEND_value, O_APPEND);
	zend_string *const_O_APPEND_name = zend_string_init_interned("O_APPEND", sizeof("O_APPEND") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_O_APPEND_name, &const_O_APPEND_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_O_APPEND_name, &const_O_APPEND_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_O_APPEND_name);

	zval const_O_NOCTTY_value;
	ZVAL_LONG(&const_O_NOCTTY_value, O_NOCTTY);
	zend_string *const_O_NOCTTY_name = zend_string_init_interned("O_NOCTTY", sizeof("O_NOCTTY") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_O_NOCTTY_name, &const_O_NOCTTY_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_O_NOCTTY_name, &const_O_NOCTTY_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_O_NOCTTY_name);

	zval const_S_IRWXU_value;
	ZVAL_LONG(&const_S_IRWXU_value, S_IRWXU);
	zend_string *const_S_IRWXU_name = zend_string_init_interned("S_IRWXU", sizeof("S_IRWXU") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_S_IRWXU_name, &const_S_IRWXU_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_S_IRWXU_name, &const_S_IRWXU_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_S_IRWXU_name);

	zval const_S_IRUSR_value;
	ZVAL_LONG(&const_S_IRUSR_value, S_IRUSR);
	zend_string *const_S_IRUSR_name = zend_string_init_interned("S_IRUSR", sizeof("S_IRUSR") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_S_IRUSR_name, &const_S_IRUSR_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_S_IRUSR_name, &const_S_IRUSR_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_S_IRUSR_name);

	zval const_S_IWUSR_value;
	ZVAL_LONG(&const_S_IWUSR_value, S_IWUSR);
	zend_string *const_S_IWUSR_name = zend_string_init_interned("S_IWUSR", sizeof("S_IWUSR") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_S_IWUSR_name, &const_S_IWUSR_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_S_IWUSR_name, &const_S_IWUSR_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_S_IWUSR_name);

	zval const_S_IXUSR_value;
	ZVAL_LONG(&const_S_IXUSR_value, S_IXUSR);
	zend_string *const_S_IXUSR_name = zend_string_init_interned("S_IXUSR", sizeof("S_IXUSR") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_S_IXUSR_name, &const_S_IXUSR_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_S_IXUSR_name, &const_S_IXUSR_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_S_IXUSR_name);

	zval const_S_IRWXG_value;
	ZVAL_LONG(&const_S_IRWXG_value, S_IRWXG);
	zend_string *const_S_IRWXG_name = zend_string_init_interned("S_IRWXG", sizeof("S_IRWXG") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_S_IRWXG_name, &const_S_IRWXG_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_S_IRWXG_name, &const_S_IRWXG_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_S_IRWXG_name);

	zval const_S_IRGRP_value;
	ZVAL_LONG(&const_S_IRGRP_value, S_IRGRP);
	zend_string *const_S_IRGRP_name = zend_string_init_interned("S_IRGRP", sizeof("S_IRGRP") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_S_IRGRP_name, &const_S_IRGRP_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_S_IRGRP_name, &const_S_IRGRP_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_S_IRGRP_name);

	zval const_S_IWGRP_value;
	ZVAL_LONG(&const_S_IWGRP_value, S_IWGRP);
	zend_string *const_S_IWGRP_name = zend_string_init_interned("S_IWGRP", sizeof("S_IWGRP") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_S_IWGRP_name, &const_S_IWGRP_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_S_IWGRP_name, &const_S_IWGRP_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_S_IWGRP_name);

	zval const_S_IXGRP_value;
	ZVAL_LONG(&const_S_IXGRP_value, S_IXGRP);
	zend_string *const_S_IXGRP_name = zend_string_init_interned("S_IXGRP", sizeof("S_IXGRP") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_S_IXGRP_name, &const_S_IXGRP_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_S_IXGRP_name, &const_S_IXGRP_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_S_IXGRP_name);

	zval const_S_IRWXO_value;
	ZVAL_LONG(&const_S_IRWXO_value, S_IRWXO);
	zend_string *const_S_IRWXO_name = zend_string_init_interned("S_IRWXO", sizeof("S_IRWXO") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_S_IRWXO_name, &const_S_IRWXO_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_S_IRWXO_name, &const_S_IRWXO_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_S_IRWXO_name);

	zval const_S_IROTH_value;
	ZVAL_LONG(&const_S_IROTH_value, S_IROTH);
	zend_string *const_S_IROTH_name = zend_string_init_interned("S_IROTH", sizeof("S_IROTH") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_S_IROTH_name, &const_S_IROTH_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_S_IROTH_name, &const_S_IROTH_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_S_IROTH_name);

	zval const_S_IWOTH_value;
	ZVAL_LONG(&const_S_IWOTH_value, S_IWOTH);
	zend_string *const_S_IWOTH_name = zend_string_init_interned("S_IWOTH", sizeof("S_IWOTH") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_S_IWOTH_name, &const_S_IWOTH_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_S_IWOTH_name, &const_S_IWOTH_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_S_IWOTH_name);

	zval const_S_IXOTH_value;
	ZVAL_LONG(&const_S_IXOTH_value, S_IXOTH);
	zend_string *const_S_IXOTH_name = zend_string_init_interned("S_IXOTH", sizeof("S_IXOTH") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_S_IXOTH_name, &const_S_IXOTH_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_S_IXOTH_name, &const_S_IXOTH_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_S_IXOTH_name);

	zval const_S_IFMT_value;
	ZVAL_LONG(&const_S_IFMT_value, S_IFMT);
	zend_string *const_S_IFMT_name = zend_string_init_interned("S_IFMT", sizeof("S_IFMT") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_S_IFMT_name, &const_S_IFMT_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_S_IFMT_name, &const_S_IFMT_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_S_IFMT_name);

	zval const_S_IFBLK_value;
	ZVAL_LONG(&const_S_IFBLK_value, S_IFBLK);
	zend_string *const_S_IFBLK_name = zend_string_init_interned("S_IFBLK", sizeof("S_IFBLK") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_S_IFBLK_name, &const_S_IFBLK_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_S_IFBLK_name, &const_S_IFBLK_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_S_IFBLK_name);

	zval const_S_IFCHR_value;
	ZVAL_LONG(&const_S_IFCHR_value, S_IFCHR);
	zend_string *const_S_IFCHR_name = zend_string_init_interned("S_IFCHR", sizeof("S_IFCHR") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_S_IFCHR_name, &const_S_IFCHR_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_S_IFCHR_name, &const_S_IFCHR_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_S_IFCHR_name);

	zval const_S_IFIFO_value;
	ZVAL_LONG(&const_S_IFIFO_value, S_IFIFO);
	zend_string *const_S_IFIFO_name = zend_string_init_interned("S_IFIFO", sizeof("S_IFIFO") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_S_IFIFO_name, &const_S_IFIFO_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_S_IFIFO_name, &const_S_IFIFO_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_S_IFIFO_name);

	zval const_S_IFREG_value;
	ZVAL_LONG(&const_S_IFREG_value, S_IFREG);
	zend_string *const_S_IFREG_name = zend_string_init_interned("S_IFREG", sizeof("S_IFREG") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_S_IFREG_name, &const_S_IFREG_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_S_IFREG_name, &const_S_IFREG_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_S_IFREG_name);

	zval const_S_IFDIR_value;
	ZVAL_LONG(&const_S_IFDIR_value, S_IFDIR);
	zend_string *const_S_IFDIR_name = zend_string_init_interned("S_IFDIR", sizeof("S_IFDIR") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_S_IFDIR_name, &const_S_IFDIR_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_S_IFDIR_name, &const_S_IFDIR_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_S_IFDIR_name);

	zval const_S_IFLNK_value;
	ZVAL_LONG(&const_S_IFLNK_value, S_IFLNK);
	zend_string *const_S_IFLNK_name = zend_string_init_interned("S_IFLNK", sizeof("S_IFLNK") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_S_IFLNK_name, &const_S_IFLNK_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_S_IFLNK_name, &const_S_IFLNK_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_S_IFLNK_name);

	zval const_S_IFSOCK_value;
	ZVAL_LONG(&const_S_IFSOCK_value, S_IFSOCK);
	zend_string *const_S_IFSOCK_name = zend_string_init_interned("S_IFSOCK", sizeof("S_IFSOCK") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_S_IFSOCK_name, &const_S_IFSOCK_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_S_IFSOCK_name, &const_S_IFSOCK_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_S_IFSOCK_name);

	zval const_AF_INET_value;
	ZVAL_LONG(&const_AF_INET_value, AF_INET);
	zend_string *const_AF_INET_name = zend_string_init_interned("AF_INET", sizeof("AF_INET") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_AF_INET_name, &const_AF_INET_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_AF_INET_name, &const_AF_INET_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_AF_INET_name);

	zval const_AF_INET6_value;
	ZVAL_LONG(&const_AF_INET6_value, AF_INET6);
	zend_string *const_AF_INET6_name = zend_string_init_interned("AF_INET6", sizeof("AF_INET6") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_AF_INET6_name, &const_AF_INET6_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_AF_INET6_name, &const_AF_INET6_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_AF_INET6_name);

	zval const_AF_UNSPEC_value;
	ZVAL_LONG(&const_AF_UNSPEC_value, AF_UNSPEC);
	zend_string *const_AF_UNSPEC_name = zend_string_init_interned("AF_UNSPEC", sizeof("AF_UNSPEC") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_AF_UNSPEC_name, &const_AF_UNSPEC_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_AF_UNSPEC_name, &const_AF_UNSPEC_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_AF_UNSPEC_name);

	zval const_LEAVE_GROUP_value;
	ZVAL_LONG(&const_LEAVE_GROUP_value, UV_LEAVE_GROUP);
	zend_string *const_LEAVE_GROUP_name = zend_string_init_interned("LEAVE_GROUP", sizeof("LEAVE_GROUP") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_LEAVE_GROUP_name, &const_LEAVE_GROUP_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_LEAVE_GROUP_name, &const_LEAVE_GROUP_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_LEAVE_GROUP_name);

	zval const_JOIN_GROUP_value;
	ZVAL_LONG(&const_JOIN_GROUP_value, UV_JOIN_GROUP);
	zend_string *const_JOIN_GROUP_name = zend_string_init_interned("JOIN_GROUP", sizeof("JOIN_GROUP") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_JOIN_GROUP_name, &const_JOIN_GROUP_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_JOIN_GROUP_name, &const_JOIN_GROUP_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_JOIN_GROUP_name);

	zval const_IGNORE_value;
	ZVAL_LONG(&const_IGNORE_value, UV_IGNORE);
	zend_string *const_IGNORE_name = zend_string_init_interned("IGNORE", sizeof("IGNORE") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_IGNORE_name, &const_IGNORE_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_IGNORE_name, &const_IGNORE_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_IGNORE_name);

	zval const_CREATE_PIPE_value;
	ZVAL_LONG(&const_CREATE_PIPE_value, UV_CREATE_PIPE);
	zend_string *const_CREATE_PIPE_name = zend_string_init_interned("CREATE_PIPE", sizeof("CREATE_PIPE") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_CREATE_PIPE_name, &const_CREATE_PIPE_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_CREATE_PIPE_name, &const_CREATE_PIPE_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_CREATE_PIPE_name);

	zval const_INHERIT_FD_value;
	ZVAL_LONG(&const_INHERIT_FD_value, UV_INHERIT_FD);
	zend_string *const_INHERIT_FD_name = zend_string_init_interned("INHERIT_FD", sizeof("INHERIT_FD") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_INHERIT_FD_name, &const_INHERIT_FD_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_INHERIT_FD_name, &const_INHERIT_FD_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_INHERIT_FD_name);

	zval const_INHERIT_STREAM_value;
	ZVAL_LONG(&const_INHERIT_STREAM_value, UV_INHERIT_STREAM);
	zend_string *const_INHERIT_STREAM_name = zend_string_init_interned("INHERIT_STREAM", sizeof("INHERIT_STREAM") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_INHERIT_STREAM_name, &const_INHERIT_STREAM_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_INHERIT_STREAM_name, &const_INHERIT_STREAM_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_INHERIT_STREAM_name);

	zval const_READABLE_PIPE_value;
	ZVAL_LONG(&const_READABLE_PIPE_value, UV_READABLE_PIPE);
	zend_string *const_READABLE_PIPE_name = zend_string_init_interned("READABLE_PIPE", sizeof("READABLE_PIPE") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_READABLE_PIPE_name, &const_READABLE_PIPE_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_READABLE_PIPE_name, &const_READABLE_PIPE_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_READABLE_PIPE_name);

	zval const_WRITABLE_PIPE_value;
	ZVAL_LONG(&const_WRITABLE_PIPE_value, UV_WRITABLE_PIPE);
	zend_string *const_WRITABLE_PIPE_name = zend_string_init_interned("WRITABLE_PIPE", sizeof("WRITABLE_PIPE") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_WRITABLE_PIPE_name, &const_WRITABLE_PIPE_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_WRITABLE_PIPE_name, &const_WRITABLE_PIPE_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_WRITABLE_PIPE_name);

	zval const_UV_INHERIT_FD_value;
	ZVAL_LONG(&const_UV_INHERIT_FD_value, UV_INHERIT_FD);
	zend_string *const_UV_INHERIT_FD_name = zend_string_init_interned("UV_INHERIT_FD", sizeof("UV_INHERIT_FD") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_UV_INHERIT_FD_name, &const_UV_INHERIT_FD_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_UV_INHERIT_FD_name, &const_UV_INHERIT_FD_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_UV_INHERIT_FD_name);

	zval const_OVERLAPPED_PIPE_value;
	ZVAL_LONG(&const_OVERLAPPED_PIPE_value, UV_OVERLAPPED_PIPE);
	zend_string *const_OVERLAPPED_PIPE_name = zend_string_init_interned("OVERLAPPED_PIPE", sizeof("OVERLAPPED_PIPE") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_OVERLAPPED_PIPE_name, &const_OVERLAPPED_PIPE_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_OVERLAPPED_PIPE_name, &const_OVERLAPPED_PIPE_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_OVERLAPPED_PIPE_name);

	zval const_UDP_IPV6ONLY_value;
	ZVAL_LONG(&const_UDP_IPV6ONLY_value, UV_UDP_IPV6ONLY);
	zend_string *const_UDP_IPV6ONLY_name = zend_string_init_interned("UDP_IPV6ONLY", sizeof("UDP_IPV6ONLY") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_UDP_IPV6ONLY_name, &const_UDP_IPV6ONLY_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_UDP_IPV6ONLY_name, &const_UDP_IPV6ONLY_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_UDP_IPV6ONLY_name);

	zval const_UDP_PARTIAL_value;
	ZVAL_LONG(&const_UDP_PARTIAL_value, UV_UDP_PARTIAL);
	zend_string *const_UDP_PARTIAL_name = zend_string_init_interned("UDP_PARTIAL", sizeof("UDP_PARTIAL") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_UDP_PARTIAL_name, &const_UDP_PARTIAL_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_UDP_PARTIAL_name, &const_UDP_PARTIAL_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_UDP_PARTIAL_name);

	zval const_PROCESS_SETUID_value;
	ZVAL_LONG(&const_PROCESS_SETUID_value, UV_PROCESS_SETUID);
	zend_string *const_PROCESS_SETUID_name = zend_string_init_interned("PROCESS_SETUID", sizeof("PROCESS_SETUID") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_PROCESS_SETUID_name, &const_PROCESS_SETUID_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_PROCESS_SETUID_name, &const_PROCESS_SETUID_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_PROCESS_SETUID_name);
	ZEND_ASSERT(UV_PROCESS_SETUID == 1);

	zval const_PROCESS_SETGID_value;
	ZVAL_LONG(&const_PROCESS_SETGID_value, UV_PROCESS_SETGID);
	zend_string *const_PROCESS_SETGID_name = zend_string_init_interned("PROCESS_SETGID", sizeof("PROCESS_SETGID") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_PROCESS_SETGID_name, &const_PROCESS_SETGID_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_PROCESS_SETGID_name, &const_PROCESS_SETGID_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_PROCESS_SETGID_name);
	ZEND_ASSERT(UV_PROCESS_SETGID == 2);

	zval const_PROCESS_WINDOWS_VERBATIM_ARGUMENTS_value;
	ZVAL_LONG(&const_PROCESS_WINDOWS_VERBATIM_ARGUMENTS_value, UV_PROCESS_WINDOWS_VERBATIM_ARGUMENTS);
	zend_string *const_PROCESS_WINDOWS_VERBATIM_ARGUMENTS_name = zend_string_init_interned("PROCESS_WINDOWS_VERBATIM_ARGUMENTS", sizeof("PROCESS_WINDOWS_VERBATIM_ARGUMENTS") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_PROCESS_WINDOWS_VERBATIM_ARGUMENTS_name, &const_PROCESS_WINDOWS_VERBATIM_ARGUMENTS_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_PROCESS_WINDOWS_VERBATIM_ARGUMENTS_name, &const_PROCESS_WINDOWS_VERBATIM_ARGUMENTS_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_PROCESS_WINDOWS_VERBATIM_ARGUMENTS_name);
	ZEND_ASSERT(UV_PROCESS_WINDOWS_VERBATIM_ARGUMENTS == 4);

	zval const_PROCESS_DETACHED_value;
	ZVAL_LONG(&const_PROCESS_DETACHED_value, UV_PROCESS_DETACHED);
	zend_string *const_PROCESS_DETACHED_name = zend_string_init_interned("PROCESS_DETACHED", sizeof("PROCESS_DETACHED") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_PROCESS_DETACHED_name, &const_PROCESS_DETACHED_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_PROCESS_DETACHED_name, &const_PROCESS_DETACHED_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_PROCESS_DETACHED_name);
	ZEND_ASSERT(UV_PROCESS_DETACHED == 8);

	zval const_PROCESS_WINDOWS_HIDE_value;
	ZVAL_LONG(&const_PROCESS_WINDOWS_HIDE_value, UV_PROCESS_WINDOWS_HIDE);
	zend_string *const_PROCESS_WINDOWS_HIDE_name = zend_string_init_interned("PROCESS_WINDOWS_HIDE", sizeof("PROCESS_WINDOWS_HIDE") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_PROCESS_WINDOWS_HIDE_name, &const_PROCESS_WINDOWS_HIDE_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_PROCESS_WINDOWS_HIDE_name, &const_PROCESS_WINDOWS_HIDE_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_PROCESS_WINDOWS_HIDE_name);
	ZEND_ASSERT(UV_PROCESS_WINDOWS_HIDE == 16);

	zval const_PROCESS_WINDOWS_HIDE_CONSOLE_value;
	ZVAL_LONG(&const_PROCESS_WINDOWS_HIDE_CONSOLE_value, UV_PROCESS_WINDOWS_HIDE_CONSOLE);
	zend_string *const_PROCESS_WINDOWS_HIDE_CONSOLE_name = zend_string_init_interned("PROCESS_WINDOWS_HIDE_CONSOLE", sizeof("PROCESS_WINDOWS_HIDE_CONSOLE") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_PROCESS_WINDOWS_HIDE_CONSOLE_name, &const_PROCESS_WINDOWS_HIDE_CONSOLE_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_PROCESS_WINDOWS_HIDE_CONSOLE_name, &const_PROCESS_WINDOWS_HIDE_CONSOLE_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_PROCESS_WINDOWS_HIDE_CONSOLE_name);
	ZEND_ASSERT(UV_PROCESS_WINDOWS_HIDE_CONSOLE == 32);

	zval const_PROCESS_WINDOWS_HIDE_GUI_value;
	ZVAL_LONG(&const_PROCESS_WINDOWS_HIDE_GUI_value, UV_PROCESS_WINDOWS_HIDE_GUI);
	zend_string *const_PROCESS_WINDOWS_HIDE_GUI_name = zend_string_init_interned("PROCESS_WINDOWS_HIDE_GUI", sizeof("PROCESS_WINDOWS_HIDE_GUI") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_PROCESS_WINDOWS_HIDE_GUI_name, &const_PROCESS_WINDOWS_HIDE_GUI_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_PROCESS_WINDOWS_HIDE_GUI_name, &const_PROCESS_WINDOWS_HIDE_GUI_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_PROCESS_WINDOWS_HIDE_GUI_name);
	ZEND_ASSERT(UV_PROCESS_WINDOWS_HIDE_GUI == 64);

	zval const_TTY_MODE_NORMAL_value;
	ZVAL_LONG(&const_TTY_MODE_NORMAL_value, UV_TTY_MODE_NORMAL);
	zend_string *const_TTY_MODE_NORMAL_name = zend_string_init_interned("TTY_MODE_NORMAL", sizeof("TTY_MODE_NORMAL") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_TTY_MODE_NORMAL_name, &const_TTY_MODE_NORMAL_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_TTY_MODE_NORMAL_name, &const_TTY_MODE_NORMAL_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_TTY_MODE_NORMAL_name);

	zval const_TTY_MODE_RAW_value;
	ZVAL_LONG(&const_TTY_MODE_RAW_value, UV_TTY_MODE_RAW);
	zend_string *const_TTY_MODE_RAW_name = zend_string_init_interned("TTY_MODE_RAW", sizeof("TTY_MODE_RAW") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_TTY_MODE_RAW_name, &const_TTY_MODE_RAW_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_TTY_MODE_RAW_name, &const_TTY_MODE_RAW_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_TTY_MODE_RAW_name);

	zval const_TTY_MODE_IO_value;
	ZVAL_LONG(&const_TTY_MODE_IO_value, UV_TTY_MODE_IO);
	zend_string *const_TTY_MODE_IO_name = zend_string_init_interned("TTY_MODE_IO", sizeof("TTY_MODE_IO") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_TTY_MODE_IO_name, &const_TTY_MODE_IO_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_TTY_MODE_IO_name, &const_TTY_MODE_IO_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_TTY_MODE_IO_name);

	zval const_SIGHUP_value;
	ZVAL_LONG(&const_SIGHUP_value, SIGHUP);
	zend_string *const_SIGHUP_name = zend_string_init_interned("SIGHUP", sizeof("SIGHUP") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_SIGHUP_name, &const_SIGHUP_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_SIGHUP_name, &const_SIGHUP_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_SIGHUP_name);

	zval const_SIGINT_value;
	ZVAL_LONG(&const_SIGINT_value, SIGINT);
	zend_string *const_SIGINT_name = zend_string_init_interned("SIGINT", sizeof("SIGINT") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_SIGINT_name, &const_SIGINT_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_SIGINT_name, &const_SIGINT_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_SIGINT_name);

	zval const_SIGQUIT_value;
	ZVAL_LONG(&const_SIGQUIT_value, SIGQUIT);
	zend_string *const_SIGQUIT_name = zend_string_init_interned("SIGQUIT", sizeof("SIGQUIT") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_SIGQUIT_name, &const_SIGQUIT_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_SIGQUIT_name, &const_SIGQUIT_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_SIGQUIT_name);

	zval const_SIGILL_value;
	ZVAL_LONG(&const_SIGILL_value, SIGILL);
	zend_string *const_SIGILL_name = zend_string_init_interned("SIGILL", sizeof("SIGILL") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_SIGILL_name, &const_SIGILL_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_SIGILL_name, &const_SIGILL_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_SIGILL_name);

	zval const_SIGTRAP_value;
	ZVAL_LONG(&const_SIGTRAP_value, SIGTRAP);
	zend_string *const_SIGTRAP_name = zend_string_init_interned("SIGTRAP", sizeof("SIGTRAP") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_SIGTRAP_name, &const_SIGTRAP_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_SIGTRAP_name, &const_SIGTRAP_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_SIGTRAP_name);

	zval const_SIGABRT_value;
	ZVAL_LONG(&const_SIGABRT_value, SIGABRT);
	zend_string *const_SIGABRT_name = zend_string_init_interned("SIGABRT", sizeof("SIGABRT") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_SIGABRT_name, &const_SIGABRT_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_SIGABRT_name, &const_SIGABRT_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_SIGABRT_name);

	zval const_SIGIOT_value;
	ZVAL_LONG(&const_SIGIOT_value, SIGIOT);
	zend_string *const_SIGIOT_name = zend_string_init_interned("SIGIOT", sizeof("SIGIOT") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_SIGIOT_name, &const_SIGIOT_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_SIGIOT_name, &const_SIGIOT_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_SIGIOT_name);

	zval const_SIGBUS_value;
	ZVAL_LONG(&const_SIGBUS_value, SIGBUS);
	zend_string *const_SIGBUS_name = zend_string_init_interned("SIGBUS", sizeof("SIGBUS") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_SIGBUS_name, &const_SIGBUS_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_SIGBUS_name, &const_SIGBUS_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_SIGBUS_name);

	zval const_SIGFPE_value;
	ZVAL_LONG(&const_SIGFPE_value, SIGFPE);
	zend_string *const_SIGFPE_name = zend_string_init_interned("SIGFPE", sizeof("SIGFPE") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_SIGFPE_name, &const_SIGFPE_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_SIGFPE_name, &const_SIGFPE_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_SIGFPE_name);

	zval const_SIGKILL_value;
	ZVAL_LONG(&const_SIGKILL_value, SIGKILL);
	zend_string *const_SIGKILL_name = zend_string_init_interned("SIGKILL", sizeof("SIGKILL") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_SIGKILL_name, &const_SIGKILL_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_SIGKILL_name, &const_SIGKILL_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_SIGKILL_name);

	zval const_SIGUSR1_value;
	ZVAL_LONG(&const_SIGUSR1_value, SIGUSR1);
	zend_string *const_SIGUSR1_name = zend_string_init_interned("SIGUSR1", sizeof("SIGUSR1") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_SIGUSR1_name, &const_SIGUSR1_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_SIGUSR1_name, &const_SIGUSR1_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_SIGUSR1_name);

	zval const_SIGUSR2_value;
	ZVAL_LONG(&const_SIGUSR2_value, SIGUSR2);
	zend_string *const_SIGUSR2_name = zend_string_init_interned("SIGUSR2", sizeof("SIGUSR2") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_SIGUSR2_name, &const_SIGUSR2_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_SIGUSR2_name, &const_SIGUSR2_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_SIGUSR2_name);

	zval const_SIGSEGV_value;
	ZVAL_LONG(&const_SIGSEGV_value, SIGSEGV);
	zend_string *const_SIGSEGV_name = zend_string_init_interned("SIGSEGV", sizeof("SIGSEGV") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_SIGSEGV_name, &const_SIGSEGV_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_SIGSEGV_name, &const_SIGSEGV_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_SIGSEGV_name);

	zval const_SIGPIPE_value;
	ZVAL_LONG(&const_SIGPIPE_value, SIGPIPE);
	zend_string *const_SIGPIPE_name = zend_string_init_interned("SIGPIPE", sizeof("SIGPIPE") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_SIGPIPE_name, &const_SIGPIPE_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_SIGPIPE_name, &const_SIGPIPE_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_SIGPIPE_name);

	zval const_SIGALRM_value;
	ZVAL_LONG(&const_SIGALRM_value, SIGALRM);
	zend_string *const_SIGALRM_name = zend_string_init_interned("SIGALRM", sizeof("SIGALRM") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_SIGALRM_name, &const_SIGALRM_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_SIGALRM_name, &const_SIGALRM_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_SIGALRM_name);

	zval const_SIGTERM_value;
	ZVAL_LONG(&const_SIGTERM_value, SIGTERM);
	zend_string *const_SIGTERM_name = zend_string_init_interned("SIGTERM", sizeof("SIGTERM") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_SIGTERM_name, &const_SIGTERM_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_SIGTERM_name, &const_SIGTERM_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_SIGTERM_name);

	zval const_SIGSTKFLT_value;
	ZVAL_LONG(&const_SIGSTKFLT_value, SIGSTKFLT);
	zend_string *const_SIGSTKFLT_name = zend_string_init_interned("SIGSTKFLT", sizeof("SIGSTKFLT") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_SIGSTKFLT_name, &const_SIGSTKFLT_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_SIGSTKFLT_name, &const_SIGSTKFLT_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_SIGSTKFLT_name);

	zval const_SIGCLD_value;
	ZVAL_LONG(&const_SIGCLD_value, SIGCLD);
	zend_string *const_SIGCLD_name = zend_string_init_interned("SIGCLD", sizeof("SIGCLD") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_SIGCLD_name, &const_SIGCLD_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_SIGCLD_name, &const_SIGCLD_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_SIGCLD_name);

	zval const_SIGCHLD_value;
	ZVAL_LONG(&const_SIGCHLD_value, SIGCHLD);
	zend_string *const_SIGCHLD_name = zend_string_init_interned("SIGCHLD", sizeof("SIGCHLD") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_SIGCHLD_name, &const_SIGCHLD_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_SIGCHLD_name, &const_SIGCHLD_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_SIGCHLD_name);

	zval const_SIGCONT_value;
	ZVAL_LONG(&const_SIGCONT_value, SIGCONT);
	zend_string *const_SIGCONT_name = zend_string_init_interned("SIGCONT", sizeof("SIGCONT") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_SIGCONT_name, &const_SIGCONT_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_SIGCONT_name, &const_SIGCONT_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_SIGCONT_name);

	zval const_SIGSTOP_value;
	ZVAL_LONG(&const_SIGSTOP_value, SIGSTOP);
	zend_string *const_SIGSTOP_name = zend_string_init_interned("SIGSTOP", sizeof("SIGSTOP") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_SIGSTOP_name, &const_SIGSTOP_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_SIGSTOP_name, &const_SIGSTOP_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_SIGSTOP_name);

	zval const_SIGTSTP_value;
	ZVAL_LONG(&const_SIGTSTP_value, SIGTSTP);
	zend_string *const_SIGTSTP_name = zend_string_init_interned("SIGTSTP", sizeof("SIGTSTP") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_SIGTSTP_name, &const_SIGTSTP_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_SIGTSTP_name, &const_SIGTSTP_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_SIGTSTP_name);

	zval const_SIGTTIN_value;
	ZVAL_LONG(&const_SIGTTIN_value, SIGTTIN);
	zend_string *const_SIGTTIN_name = zend_string_init_interned("SIGTTIN", sizeof("SIGTTIN") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_SIGTTIN_name, &const_SIGTTIN_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_SIGTTIN_name, &const_SIGTTIN_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_SIGTTIN_name);

	zval const_SIGTTOU_value;
	ZVAL_LONG(&const_SIGTTOU_value, SIGTTOU);
	zend_string *const_SIGTTOU_name = zend_string_init_interned("SIGTTOU", sizeof("SIGTTOU") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_SIGTTOU_name, &const_SIGTTOU_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_SIGTTOU_name, &const_SIGTTOU_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_SIGTTOU_name);

	zval const_SIGURG_value;
	ZVAL_LONG(&const_SIGURG_value, SIGURG);
	zend_string *const_SIGURG_name = zend_string_init_interned("SIGURG", sizeof("SIGURG") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_SIGURG_name, &const_SIGURG_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_SIGURG_name, &const_SIGURG_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_SIGURG_name);

	zval const_SIGXCPU_value;
	ZVAL_LONG(&const_SIGXCPU_value, SIGXCPU);
	zend_string *const_SIGXCPU_name = zend_string_init_interned("SIGXCPU", sizeof("SIGXCPU") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_SIGXCPU_name, &const_SIGXCPU_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_SIGXCPU_name, &const_SIGXCPU_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_SIGXCPU_name);

	zval const_SIGXFSZ_value;
	ZVAL_LONG(&const_SIGXFSZ_value, SIGXFSZ);
	zend_string *const_SIGXFSZ_name = zend_string_init_interned("SIGXFSZ", sizeof("SIGXFSZ") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_SIGXFSZ_name, &const_SIGXFSZ_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_SIGXFSZ_name, &const_SIGXFSZ_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_SIGXFSZ_name);

	zval const_SIGVTALRM_value;
	ZVAL_LONG(&const_SIGVTALRM_value, SIGVTALRM);
	zend_string *const_SIGVTALRM_name = zend_string_init_interned("SIGVTALRM", sizeof("SIGVTALRM") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_SIGVTALRM_name, &const_SIGVTALRM_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_SIGVTALRM_name, &const_SIGVTALRM_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_SIGVTALRM_name);

	zval const_SIGPROF_value;
	ZVAL_LONG(&const_SIGPROF_value, SIGPROF);
	zend_string *const_SIGPROF_name = zend_string_init_interned("SIGPROF", sizeof("SIGPROF") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_SIGPROF_name, &const_SIGPROF_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_SIGPROF_name, &const_SIGPROF_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_SIGPROF_name);

	zval const_SIGWINCH_value;
	ZVAL_LONG(&const_SIGWINCH_value, SIGWINCH);
	zend_string *const_SIGWINCH_name = zend_string_init_interned("SIGWINCH", sizeof("SIGWINCH") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_SIGWINCH_name, &const_SIGWINCH_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_SIGWINCH_name, &const_SIGWINCH_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_SIGWINCH_name);

	zval const_SIGPOLL_value;
	ZVAL_LONG(&const_SIGPOLL_value, SIGPOLL);
	zend_string *const_SIGPOLL_name = zend_string_init_interned("SIGPOLL", sizeof("SIGPOLL") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_SIGPOLL_name, &const_SIGPOLL_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_SIGPOLL_name, &const_SIGPOLL_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_SIGPOLL_name);

	zval const_SIGIO_value;
	ZVAL_LONG(&const_SIGIO_value, SIGIO);
	zend_string *const_SIGIO_name = zend_string_init_interned("SIGIO", sizeof("SIGIO") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_SIGIO_name, &const_SIGIO_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_SIGIO_name, &const_SIGIO_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_SIGIO_name);

	zval const_SIGPWR_value;
	ZVAL_LONG(&const_SIGPWR_value, SIGPWR);
	zend_string *const_SIGPWR_name = zend_string_init_interned("SIGPWR", sizeof("SIGPWR") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_SIGPWR_name, &const_SIGPWR_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_SIGPWR_name, &const_SIGPWR_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_SIGPWR_name);

	zval const_SIGSYS_value;
	ZVAL_LONG(&const_SIGSYS_value, SIGSYS);
	zend_string *const_SIGSYS_name = zend_string_init_interned("SIGSYS", sizeof("SIGSYS") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_SIGSYS_name, &const_SIGSYS_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_SIGSYS_name, &const_SIGSYS_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_SIGSYS_name);

	zval const_SIGBABY_value;
	ZVAL_LONG(&const_SIGBABY_value, SIGSYS);
	zend_string *const_SIGBABY_name = zend_string_init_interned("SIGBABY", sizeof("SIGBABY") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_SIGBABY_name, &const_SIGBABY_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_SIGBABY_name, &const_SIGBABY_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_SIGBABY_name);

	zval const_UV_UNKNOWN_HANDLE_value;
	ZVAL_LONG(&const_UV_UNKNOWN_HANDLE_value, UV_UNKNOWN_HANDLE);
	zend_string *const_UV_UNKNOWN_HANDLE_name = zend_string_init_interned("UV_UNKNOWN_HANDLE", sizeof("UV_UNKNOWN_HANDLE") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_UV_UNKNOWN_HANDLE_name, &const_UV_UNKNOWN_HANDLE_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_UV_UNKNOWN_HANDLE_name, &const_UV_UNKNOWN_HANDLE_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_UV_UNKNOWN_HANDLE_name);

	zval const_IS_UV_ASYNC_value;
	ZVAL_LONG(&const_IS_UV_ASYNC_value, IS_UV_ASYNC);
	zend_string *const_IS_UV_ASYNC_name = zend_string_init_interned("IS_UV_ASYNC", sizeof("IS_UV_ASYNC") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_IS_UV_ASYNC_name, &const_IS_UV_ASYNC_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_IS_UV_ASYNC_name, &const_IS_UV_ASYNC_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_IS_UV_ASYNC_name);

	zval const_IS_UV_CHECK_value;
	ZVAL_LONG(&const_IS_UV_CHECK_value, IS_UV_CHECK);
	zend_string *const_IS_UV_CHECK_name = zend_string_init_interned("IS_UV_CHECK", sizeof("IS_UV_CHECK") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_IS_UV_CHECK_name, &const_IS_UV_CHECK_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_IS_UV_CHECK_name, &const_IS_UV_CHECK_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_IS_UV_CHECK_name);

	zval const_IS_UV_FS_EVENT_value;
	ZVAL_LONG(&const_IS_UV_FS_EVENT_value, IS_UV_FS_EVENT);
	zend_string *const_IS_UV_FS_EVENT_name = zend_string_init_interned("IS_UV_FS_EVENT", sizeof("IS_UV_FS_EVENT") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_IS_UV_FS_EVENT_name, &const_IS_UV_FS_EVENT_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_IS_UV_FS_EVENT_name, &const_IS_UV_FS_EVENT_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_IS_UV_FS_EVENT_name);

	zval const_IS_UV_FS_POLL_value;
	ZVAL_LONG(&const_IS_UV_FS_POLL_value, IS_UV_FS_POLL);
	zend_string *const_IS_UV_FS_POLL_name = zend_string_init_interned("IS_UV_FS_POLL", sizeof("IS_UV_FS_POLL") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_IS_UV_FS_POLL_name, &const_IS_UV_FS_POLL_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_IS_UV_FS_POLL_name, &const_IS_UV_FS_POLL_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_IS_UV_FS_POLL_name);

	zval const_IS_UV_HANDLE_value;
	ZVAL_LONG(&const_IS_UV_HANDLE_value, IS_UV_HANDLE);
	zend_string *const_IS_UV_HANDLE_name = zend_string_init_interned("IS_UV_HANDLE", sizeof("IS_UV_HANDLE") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_IS_UV_HANDLE_name, &const_IS_UV_HANDLE_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_IS_UV_HANDLE_name, &const_IS_UV_HANDLE_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_IS_UV_HANDLE_name);

	zval const_IS_UV_IDLE_value;
	ZVAL_LONG(&const_IS_UV_IDLE_value, IS_UV_IDLE);
	zend_string *const_IS_UV_IDLE_name = zend_string_init_interned("IS_UV_IDLE", sizeof("IS_UV_IDLE") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_IS_UV_IDLE_name, &const_IS_UV_IDLE_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_IS_UV_IDLE_name, &const_IS_UV_IDLE_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_IS_UV_IDLE_name);

	zval const_IS_UV_PIPE_value;
	ZVAL_LONG(&const_IS_UV_PIPE_value, IS_UV_PIPE);
	zend_string *const_IS_UV_PIPE_name = zend_string_init_interned("IS_UV_PIPE", sizeof("IS_UV_PIPE") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_IS_UV_PIPE_name, &const_IS_UV_PIPE_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_IS_UV_PIPE_name, &const_IS_UV_PIPE_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_IS_UV_PIPE_name);

	zval const_IS_UV_POLL_value;
	ZVAL_LONG(&const_IS_UV_POLL_value, IS_UV_POLL);
	zend_string *const_IS_UV_POLL_name = zend_string_init_interned("IS_UV_POLL", sizeof("IS_UV_POLL") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_IS_UV_POLL_name, &const_IS_UV_POLL_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_IS_UV_POLL_name, &const_IS_UV_POLL_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_IS_UV_POLL_name);

	zval const_IS_UV_PREPARE_value;
	ZVAL_LONG(&const_IS_UV_PREPARE_value, IS_UV_PREPARE);
	zend_string *const_IS_UV_PREPARE_name = zend_string_init_interned("IS_UV_PREPARE", sizeof("IS_UV_PREPARE") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_IS_UV_PREPARE_name, &const_IS_UV_PREPARE_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_IS_UV_PREPARE_name, &const_IS_UV_PREPARE_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_IS_UV_PREPARE_name);

	zval const_IS_UV_PROCESS_value;
	ZVAL_LONG(&const_IS_UV_PROCESS_value, IS_UV_PROCESS);
	zend_string *const_IS_UV_PROCESS_name = zend_string_init_interned("IS_UV_PROCESS", sizeof("IS_UV_PROCESS") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_IS_UV_PROCESS_name, &const_IS_UV_PROCESS_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_IS_UV_PROCESS_name, &const_IS_UV_PROCESS_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_IS_UV_PROCESS_name);

	zval const_IS_UV_STREAM_value;
	ZVAL_LONG(&const_IS_UV_STREAM_value, IS_UV_STREAM);
	zend_string *const_IS_UV_STREAM_name = zend_string_init_interned("IS_UV_STREAM", sizeof("IS_UV_STREAM") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_IS_UV_STREAM_name, &const_IS_UV_STREAM_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_IS_UV_STREAM_name, &const_IS_UV_STREAM_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_IS_UV_STREAM_name);

	zval const_IS_UV_TCP_value;
	ZVAL_LONG(&const_IS_UV_TCP_value, IS_UV_TCP);
	zend_string *const_IS_UV_TCP_name = zend_string_init_interned("IS_UV_TCP", sizeof("IS_UV_TCP") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_IS_UV_TCP_name, &const_IS_UV_TCP_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_IS_UV_TCP_name, &const_IS_UV_TCP_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_IS_UV_TCP_name);

	zval const_IS_UV_TIMER_value;
	ZVAL_LONG(&const_IS_UV_TIMER_value, IS_UV_TIMER);
	zend_string *const_IS_UV_TIMER_name = zend_string_init_interned("IS_UV_TIMER", sizeof("IS_UV_TIMER") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_IS_UV_TIMER_name, &const_IS_UV_TIMER_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_IS_UV_TIMER_name, &const_IS_UV_TIMER_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_IS_UV_TIMER_name);

	zval const_IS_UV_TTY_value;
	ZVAL_LONG(&const_IS_UV_TTY_value, IS_UV_TTY);
	zend_string *const_IS_UV_TTY_name = zend_string_init_interned("IS_UV_TTY", sizeof("IS_UV_TTY") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_IS_UV_TTY_name, &const_IS_UV_TTY_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_IS_UV_TTY_name, &const_IS_UV_TTY_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_IS_UV_TTY_name);

	zval const_IS_UV_UDP_value;
	ZVAL_LONG(&const_IS_UV_UDP_value, IS_UV_UDP);
	zend_string *const_IS_UV_UDP_name = zend_string_init_interned("IS_UV_UDP", sizeof("IS_UV_UDP") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_IS_UV_UDP_name, &const_IS_UV_UDP_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_IS_UV_UDP_name, &const_IS_UV_UDP_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_IS_UV_UDP_name);

	zval const_IS_UV_SIGNAL_value;
	ZVAL_LONG(&const_IS_UV_SIGNAL_value, IS_UV_SIGNAL);
	zend_string *const_IS_UV_SIGNAL_name = zend_string_init_interned("IS_UV_SIGNAL", sizeof("IS_UV_SIGNAL") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_IS_UV_SIGNAL_name, &const_IS_UV_SIGNAL_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_IS_UV_SIGNAL_name, &const_IS_UV_SIGNAL_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_IS_UV_SIGNAL_name);

	zval const_UV_FILE_value;
	ZVAL_LONG(&const_UV_FILE_value, UV_FILE);
	zend_string *const_UV_FILE_name = zend_string_init_interned("UV_FILE", sizeof("UV_FILE") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_UV_FILE_name, &const_UV_FILE_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_UV_FILE_name, &const_UV_FILE_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_UV_FILE_name);

	zval const_IS_UV_WORK_value;
	ZVAL_LONG(&const_IS_UV_WORK_value, IS_UV_WORK);
	zend_string *const_IS_UV_WORK_name = zend_string_init_interned("IS_UV_WORK", sizeof("IS_UV_WORK") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_IS_UV_WORK_name, &const_IS_UV_WORK_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_IS_UV_WORK_name, &const_IS_UV_WORK_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_IS_UV_WORK_name);

	zval const_IS_UV_ADDRINFO_value;
	ZVAL_LONG(&const_IS_UV_ADDRINFO_value, IS_UV_ADDRINFO);
	zend_string *const_IS_UV_ADDRINFO_name = zend_string_init_interned("IS_UV_ADDRINFO", sizeof("IS_UV_ADDRINFO") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_IS_UV_ADDRINFO_name, &const_IS_UV_ADDRINFO_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_IS_UV_ADDRINFO_name, &const_IS_UV_ADDRINFO_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_IS_UV_ADDRINFO_name);

	zval const_IS_UV_LOOP_value;
	ZVAL_LONG(&const_IS_UV_LOOP_value, IS_UV_LOOP);
	zend_string *const_IS_UV_LOOP_name = zend_string_init_interned("IS_UV_LOOP", sizeof("IS_UV_LOOP") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_IS_UV_LOOP_name, &const_IS_UV_LOOP_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_IS_UV_LOOP_name, &const_IS_UV_LOOP_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_IS_UV_LOOP_name);

	zval const_HANDLE_TYPE_MAX_value;
	ZVAL_LONG(&const_HANDLE_TYPE_MAX_value, UV_HANDLE_TYPE_MAX);
	zend_string *const_HANDLE_TYPE_MAX_name = zend_string_init_interned("HANDLE_TYPE_MAX", sizeof("HANDLE_TYPE_MAX") - 1, 1);
#if (PHP_VERSION_ID >= 80300)
	zend_declare_typed_class_constant(class_entry, const_HANDLE_TYPE_MAX_name, &const_HANDLE_TYPE_MAX_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
#else
	zend_declare_class_constant_ex(class_entry, const_HANDLE_TYPE_MAX_name, &const_HANDLE_TYPE_MAX_value, ZEND_ACC_PUBLIC, NULL);
#endif
	zend_string_release(const_HANDLE_TYPE_MAX_name);

	return class_entry;
}

static zend_class_entry *register_class_UVLoop(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "UVLoop", class_UVLoop_methods);
	class_entry = zend_register_internal_class_ex(&ce, NULL);
	class_entry->ce_flags |= ZEND_ACC_FINAL|ZEND_ACC_NO_DYNAMIC_PROPERTIES|ZEND_ACC_NOT_SERIALIZABLE;

	return class_entry;
}

static zend_class_entry *register_class_UVStream(zend_class_entry *class_entry_UV)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "UVStream", class_UVStream_methods);
	class_entry = zend_register_internal_class_ex(&ce, class_entry_UV);
	class_entry->ce_flags |= ZEND_ACC_NO_DYNAMIC_PROPERTIES|ZEND_ACC_NOT_SERIALIZABLE;

	return class_entry;
}

static zend_class_entry *register_class_UVTcp(zend_class_entry *class_entry_UVStream)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "UVTcp", class_UVTcp_methods);
	class_entry = zend_register_internal_class_ex(&ce, class_entry_UVStream);
	class_entry->ce_flags |= ZEND_ACC_FINAL|ZEND_ACC_NO_DYNAMIC_PROPERTIES|ZEND_ACC_NOT_SERIALIZABLE;

	return class_entry;
}

static zend_class_entry *register_class_UVUdp(zend_class_entry *class_entry_UV)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "UVUdp", class_UVUdp_methods);
	class_entry = zend_register_internal_class_ex(&ce, class_entry_UV);
	class_entry->ce_flags |= ZEND_ACC_FINAL|ZEND_ACC_NO_DYNAMIC_PROPERTIES|ZEND_ACC_NOT_SERIALIZABLE;

	return class_entry;
}

static zend_class_entry *register_class_UVPipe(zend_class_entry *class_entry_UVStream)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "UVPipe", class_UVPipe_methods);
	class_entry = zend_register_internal_class_ex(&ce, class_entry_UVStream);
	class_entry->ce_flags |= ZEND_ACC_FINAL|ZEND_ACC_NO_DYNAMIC_PROPERTIES|ZEND_ACC_NOT_SERIALIZABLE;

	return class_entry;
}

static zend_class_entry *register_class_UVPoll(zend_class_entry *class_entry_UV)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "UVPoll", class_UVPoll_methods);
	class_entry = zend_register_internal_class_ex(&ce, class_entry_UV);
	class_entry->ce_flags |= ZEND_ACC_FINAL|ZEND_ACC_NO_DYNAMIC_PROPERTIES|ZEND_ACC_NOT_SERIALIZABLE;

	return class_entry;
}

static zend_class_entry *register_class_UVTimer(zend_class_entry *class_entry_UV)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "UVTimer", class_UVTimer_methods);
	class_entry = zend_register_internal_class_ex(&ce, class_entry_UV);
	class_entry->ce_flags |= ZEND_ACC_FINAL|ZEND_ACC_NO_DYNAMIC_PROPERTIES|ZEND_ACC_NOT_SERIALIZABLE;

	return class_entry;
}

static zend_class_entry *register_class_UVSignal(zend_class_entry *class_entry_UV)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "UVSignal", class_UVSignal_methods);
	class_entry = zend_register_internal_class_ex(&ce, class_entry_UV);
	class_entry->ce_flags |= ZEND_ACC_FINAL|ZEND_ACC_NO_DYNAMIC_PROPERTIES|ZEND_ACC_NOT_SERIALIZABLE;

	return class_entry;
}

static zend_class_entry *register_class_UVProcess(zend_class_entry *class_entry_UV)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "UVProcess", class_UVProcess_methods);
	class_entry = zend_register_internal_class_ex(&ce, class_entry_UV);
	class_entry->ce_flags |= ZEND_ACC_FINAL|ZEND_ACC_NO_DYNAMIC_PROPERTIES|ZEND_ACC_NOT_SERIALIZABLE;

	return class_entry;
}

static zend_class_entry *register_class_UVAsync(zend_class_entry *class_entry_UV)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "UVAsync", class_UVAsync_methods);
	class_entry = zend_register_internal_class_ex(&ce, class_entry_UV);
	class_entry->ce_flags |= ZEND_ACC_FINAL|ZEND_ACC_NO_DYNAMIC_PROPERTIES|ZEND_ACC_NOT_SERIALIZABLE;

	return class_entry;
}

static zend_class_entry *register_class_UVTty(zend_class_entry *class_entry_UVStream)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "UVTty", class_UVTty_methods);
	class_entry = zend_register_internal_class_ex(&ce, class_entry_UVStream);
	class_entry->ce_flags |= ZEND_ACC_FINAL|ZEND_ACC_NO_DYNAMIC_PROPERTIES|ZEND_ACC_NOT_SERIALIZABLE;

	return class_entry;
}

static zend_class_entry *register_class_UVIdle(zend_class_entry *class_entry_UV)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "UVIdle", class_UVIdle_methods);
	class_entry = zend_register_internal_class_ex(&ce, class_entry_UV);
	class_entry->ce_flags |= ZEND_ACC_FINAL|ZEND_ACC_NO_DYNAMIC_PROPERTIES|ZEND_ACC_NOT_SERIALIZABLE;

	return class_entry;
}

static zend_class_entry *register_class_UVPrepare(zend_class_entry *class_entry_UV)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "UVPrepare", class_UVPrepare_methods);
	class_entry = zend_register_internal_class_ex(&ce, class_entry_UV);
	class_entry->ce_flags |= ZEND_ACC_FINAL|ZEND_ACC_NO_DYNAMIC_PROPERTIES|ZEND_ACC_NOT_SERIALIZABLE;

	return class_entry;
}

static zend_class_entry *register_class_UVCheck(zend_class_entry *class_entry_UV)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "UVCheck", class_UVCheck_methods);
	class_entry = zend_register_internal_class_ex(&ce, class_entry_UV);
	class_entry->ce_flags |= ZEND_ACC_FINAL|ZEND_ACC_NO_DYNAMIC_PROPERTIES|ZEND_ACC_NOT_SERIALIZABLE;

	return class_entry;
}

static zend_class_entry *register_class_UVStdio(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "UVStdio", class_UVStdio_methods);
	class_entry = zend_register_internal_class_ex(&ce, NULL);
	class_entry->ce_flags |= ZEND_ACC_FINAL|ZEND_ACC_NO_DYNAMIC_PROPERTIES|ZEND_ACC_NOT_SERIALIZABLE;

	return class_entry;
}

static zend_class_entry *register_class_UVSockAddr(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "UVSockAddr", class_UVSockAddr_methods);
	class_entry = zend_register_internal_class_ex(&ce, NULL);
	class_entry->ce_flags |= ZEND_ACC_ABSTRACT|ZEND_ACC_NO_DYNAMIC_PROPERTIES|ZEND_ACC_NOT_SERIALIZABLE;

	return class_entry;
}

static zend_class_entry *register_class_UVSockAddrIPv4(zend_class_entry *class_entry_UVSockAddr)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "UVSockAddrIPv4", class_UVSockAddrIPv4_methods);
	class_entry = zend_register_internal_class_ex(&ce, class_entry_UVSockAddr);
	class_entry->ce_flags |= ZEND_ACC_FINAL|ZEND_ACC_NO_DYNAMIC_PROPERTIES|ZEND_ACC_NOT_SERIALIZABLE;

	return class_entry;
}

static zend_class_entry *register_class_UVSockAddrIPv6(zend_class_entry *class_entry_UVSockAddr)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "UVSockAddrIPv6", class_UVSockAddrIPv6_methods);
	class_entry = zend_register_internal_class_ex(&ce, class_entry_UVSockAddr);
	class_entry->ce_flags |= ZEND_ACC_FINAL|ZEND_ACC_NO_DYNAMIC_PROPERTIES|ZEND_ACC_NOT_SERIALIZABLE;

	return class_entry;
}

static zend_class_entry *register_class_UVLock(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "UVLock", class_UVLock_methods);
	class_entry = zend_register_internal_class_ex(&ce, NULL);
	class_entry->ce_flags |= ZEND_ACC_FINAL|ZEND_ACC_NO_DYNAMIC_PROPERTIES|ZEND_ACC_NOT_SERIALIZABLE;

	return class_entry;
}

static zend_class_entry *register_class_UVFs(zend_class_entry *class_entry_UV)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "UVFs", class_UVFs_methods);
	class_entry = zend_register_internal_class_ex(&ce, class_entry_UV);
	class_entry->ce_flags |= ZEND_ACC_FINAL|ZEND_ACC_NO_DYNAMIC_PROPERTIES|ZEND_ACC_NOT_SERIALIZABLE;

	return class_entry;
}

static zend_class_entry *register_class_UVFsEvent(zend_class_entry *class_entry_UV)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "UVFsEvent", class_UVFsEvent_methods);
	class_entry = zend_register_internal_class_ex(&ce, class_entry_UV);
	class_entry->ce_flags |= ZEND_ACC_FINAL|ZEND_ACC_NO_DYNAMIC_PROPERTIES|ZEND_ACC_NOT_SERIALIZABLE;

	return class_entry;
}

static zend_class_entry *register_class_UVFsPoll(zend_class_entry *class_entry_UV)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "UVFsPoll", class_UVFsPoll_methods);
	class_entry = zend_register_internal_class_ex(&ce, class_entry_UV);
	class_entry->ce_flags |= ZEND_ACC_FINAL|ZEND_ACC_NO_DYNAMIC_PROPERTIES|ZEND_ACC_NOT_SERIALIZABLE;

	return class_entry;
}

static zend_class_entry *register_class_UVWork(zend_class_entry *class_entry_UV)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "UVWork", class_UVWork_methods);
	class_entry = zend_register_internal_class_ex(&ce, class_entry_UV);
	class_entry->ce_flags |= ZEND_ACC_FINAL|ZEND_ACC_NO_DYNAMIC_PROPERTIES|ZEND_ACC_NOT_SERIALIZABLE;

	return class_entry;
}

#if PHP_VERSION_ID >= 80300
static zend_class_entry *register_class_UVHandleType(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("UVHandleType", IS_LONG, class_UVHandleType_methods);

	zval enum_case_IS_UV_ASYNC_value;
	ZVAL_LONG(&enum_case_IS_UV_ASYNC_value, IS_UV_ASYNC);
	zend_enum_add_case_cstr(class_entry, "IS_UV_ASYNC", &enum_case_IS_UV_ASYNC_value);

	zval enum_case_IS_UV_CHECK_value;
	ZVAL_LONG(&enum_case_IS_UV_CHECK_value, IS_UV_CHECK);
	zend_enum_add_case_cstr(class_entry, "IS_UV_CHECK", &enum_case_IS_UV_CHECK_value);

	zval enum_case_IS_UV_FS_EVENT_value;
	ZVAL_LONG(&enum_case_IS_UV_FS_EVENT_value, IS_UV_FS_EVENT);
	zend_enum_add_case_cstr(class_entry, "IS_UV_FS_EVENT", &enum_case_IS_UV_FS_EVENT_value);

	zval enum_case_IS_UV_FS_POLL_value;
	ZVAL_LONG(&enum_case_IS_UV_FS_POLL_value, IS_UV_FS_POLL);
	zend_enum_add_case_cstr(class_entry, "IS_UV_FS_POLL", &enum_case_IS_UV_FS_POLL_value);

	zval enum_case_IS_UV_HANDLE_value;
	ZVAL_LONG(&enum_case_IS_UV_HANDLE_value, IS_UV_HANDLE);
	zend_enum_add_case_cstr(class_entry, "IS_UV_HANDLE", &enum_case_IS_UV_HANDLE_value);

	zval enum_case_IS_UV_IDLE_value;
	ZVAL_LONG(&enum_case_IS_UV_IDLE_value, IS_UV_IDLE);
	zend_enum_add_case_cstr(class_entry, "IS_UV_IDLE", &enum_case_IS_UV_IDLE_value);

	zval enum_case_IS_UV_PIPE_value;
	ZVAL_LONG(&enum_case_IS_UV_PIPE_value, IS_UV_PIPE);
	zend_enum_add_case_cstr(class_entry, "IS_UV_PIPE", &enum_case_IS_UV_PIPE_value);

	zval enum_case_IS_UV_POLL_value;
	ZVAL_LONG(&enum_case_IS_UV_POLL_value, IS_UV_POLL);
	zend_enum_add_case_cstr(class_entry, "IS_UV_POLL", &enum_case_IS_UV_POLL_value);

	zval enum_case_IS_UV_PREPARE_value;
	ZVAL_LONG(&enum_case_IS_UV_PREPARE_value, IS_UV_PREPARE);
	zend_enum_add_case_cstr(class_entry, "IS_UV_PREPARE", &enum_case_IS_UV_PREPARE_value);

	zval enum_case_IS_UV_PROCESS_value;
	ZVAL_LONG(&enum_case_IS_UV_PROCESS_value, IS_UV_PROCESS);
	zend_enum_add_case_cstr(class_entry, "IS_UV_PROCESS", &enum_case_IS_UV_PROCESS_value);

	zval enum_case_IS_UV_STREAM_value;
	ZVAL_LONG(&enum_case_IS_UV_STREAM_value, IS_UV_STREAM);
	zend_enum_add_case_cstr(class_entry, "IS_UV_STREAM", &enum_case_IS_UV_STREAM_value);

	zval enum_case_IS_UV_TCP_value;
	ZVAL_LONG(&enum_case_IS_UV_TCP_value, IS_UV_TCP);
	zend_enum_add_case_cstr(class_entry, "IS_UV_TCP", &enum_case_IS_UV_TCP_value);

	zval enum_case_IS_UV_TIMER_value;
	ZVAL_LONG(&enum_case_IS_UV_TIMER_value, IS_UV_TIMER);
	zend_enum_add_case_cstr(class_entry, "IS_UV_TIMER", &enum_case_IS_UV_TIMER_value);

	zval enum_case_IS_UV_TTY_value;
	ZVAL_LONG(&enum_case_IS_UV_TTY_value, IS_UV_TTY);
	zend_enum_add_case_cstr(class_entry, "IS_UV_TTY", &enum_case_IS_UV_TTY_value);

	zval enum_case_IS_UV_UDP_value;
	ZVAL_LONG(&enum_case_IS_UV_UDP_value, IS_UV_UDP);
	zend_enum_add_case_cstr(class_entry, "IS_UV_UDP", &enum_case_IS_UV_UDP_value);

	zval enum_case_IS_UV_SIGNAL_value;
	ZVAL_LONG(&enum_case_IS_UV_SIGNAL_value, IS_UV_SIGNAL);
	zend_enum_add_case_cstr(class_entry, "IS_UV_SIGNAL", &enum_case_IS_UV_SIGNAL_value);

	zval enum_case_UV_FILE_value;
	ZVAL_LONG(&enum_case_UV_FILE_value, UV_FILE);
	zend_enum_add_case_cstr(class_entry, "UV_FILE", &enum_case_UV_FILE_value);

	zval enum_case_IS_UV_WORK_value;
	ZVAL_LONG(&enum_case_IS_UV_WORK_value, IS_UV_WORK);
	zend_enum_add_case_cstr(class_entry, "IS_UV_WORK", &enum_case_IS_UV_WORK_value);

	zval enum_case_IS_UV_ADDRINFO_value;
	ZVAL_LONG(&enum_case_IS_UV_ADDRINFO_value, IS_UV_ADDRINFO);
	zend_enum_add_case_cstr(class_entry, "IS_UV_ADDRINFO", &enum_case_IS_UV_ADDRINFO_value);

	zval enum_case_IS_UV_LOOP_value;
	ZVAL_LONG(&enum_case_IS_UV_LOOP_value, IS_UV_LOOP);
	zend_enum_add_case_cstr(class_entry, "IS_UV_LOOP", &enum_case_IS_UV_LOOP_value);

	return class_entry;
}
#endif
