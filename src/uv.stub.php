<?php

/**
 * @generate-class-entries
 * @generate-function-entries
 * @generate-legacy-arginfo 80100|80200
 */

/**
 * @strict-properties
 * @not-serializable
 */
abstract class UV
{
    /**
     * This flag indicates an event that becomes active when the provided file
     * descriptor(usually a stream resource, or socket) is ready for reading.
     *
     * @var int
     * @cvalue UV_READABLE
     */
    public const int READABLE = UNKNOWN;

    /**
     * This flag indicates an event that becomes active when the provided file
     * descriptor(usually a stream resource, or socket) is ready for reading.
     *
     * @var int
     * @cvalue UV_WRITABLE
     */
    public const int WRITABLE = UNKNOWN;

    /**
     * Runs the event loop until there are no more active and referenced
     * handles or requests.
     * Mode used to run the loop with.
     *
     * @var int
     * @cvalue UV_WRITABLE
     */
    public const int RUN_DEFAULT = UNKNOWN;

    /**
     * Poll for i/o once. Note that this function blocks
     * if there are no pending callbacks.
     * Mode used to run the loop with.
     * @var int
     * @cvalue UV_RUN_DEFAULT
     */
    public const int RUN_ONCE = UNKNOWN;

    /**
     * Poll for i/o once but don’t block if there are no pending callbacks.
     * Mode used to run the loop with.
     *
     * @var int
     * @cvalue UV_RUN_NOWAIT
     */
    public const int RUN_NOWAIT = UNKNOWN;

    /**
     * FS Event monitor type
     *
     * @var int
     * @cvalue UV_CHANGE
     */
    public const int CHANGE = UNKNOWN;

    /**
     * FS Event monitor type
     *
     * @var int
     * @cvalue UV_RENAME
     */
    public const int RENAME = UNKNOWN;

    /**
     * Open the file for read-only access.
     *
     * @var int
     * @cvalue O_RDONLY
     */
    public const int O_RDONLY = UNKNOWN;

    /**
     * Open the file for write-only access.
     *
     * @var int
     * @cvalue O_WRONLY
     */
    public const int O_WRONLY = UNKNOWN;

    /**
     * Open the file for read-write access.
     *
     * @var int
     * @cvalue O_RDWR
     */
    public const int O_RDWR = UNKNOWN;

    /**
     * The file is created if it does not already exist.
     *
     * @var int
     * @cvalue O_CREAT
     */
    public const int O_CREAT = UNKNOWN;

    /**
     * If the O_CREAT flag is set and the file already exists,
     * fail the open.
     *
     * @var int
     * @cvalue O_EXCL
     */
    public const int O_EXCL = UNKNOWN;

    /**
     * If the file exists and is a regular file, and the file is
     * opened successfully for write access, its length shall be truncated to zero.
     *
     * @var int
     * @cvalue O_TRUNC
     */
    public const int O_TRUNC = UNKNOWN;

    /**
     * The file is opened in append mode. Before each write,
     * the file offset is positioned at the end of the file.
     *
     * @var int
     * @cvalue O_APPEND
     */
    public const int O_APPEND = UNKNOWN;

    /**
     * If the path identifies a terminal device, opening the path will not cause that
     * terminal to become the controlling terminal for the process (if the process does
     * not already have one).
     *
     * - Note O_NOCTTY is not supported on Windows.
     *
     * @var int
     * @cvalue O_NOCTTY
     */
    public const int O_NOCTTY = UNKNOWN;

    /**
     * read, write, execute/search by owner
     * @var int
     * @cvalue S_IRWXU
     */
    public const int S_IRWXU = UNKNOWN;

    /**
     * read permission, owner
     *
     * @var int
     * @cvalue S_IRUSR
     */
    public const int S_IRUSR = UNKNOWN;

    /**
     * write permission, owner
     *
     * @var int
     * @cvalue S_IWUSR
     */
    public const int S_IWUSR = UNKNOWN;

    /**
     * execute/search permission, owner
     *
     * @var int
     * @cvalue S_IXUSR
     */
    public const int S_IXUSR = UNKNOWN;

    /**
     * read, write, execute/search by group
     *
     * @var int
     * @cvalue S_IRWXG
     */
    public const int S_IRWXG = UNKNOWN;

    /**
     * read permission, group
     *
     * @var int
     * @cvalue S_IRGRP
     */
    public const int S_IRGRP = UNKNOWN;

    /**
     * write permission, group
     *
     * @var int
     * @cvalue S_IWGRP
     */
    public const int S_IWGRP = UNKNOWN;

    /**
     * execute/search permission, group
     *
     * @var int
     * @cvalue S_IXGRP
     */
    public const int S_IXGRP = UNKNOWN;

    /**
     * read, write, execute/search by others
     *
     * @var int
     * @cvalue S_IRWXO
     */
    public const int S_IRWXO = UNKNOWN;

    /**
     * read permission, others
     *
     * @var int
     * @cvalue S_IROTH
     */
    public const int S_IROTH = UNKNOWN;

    /**
     * write permission, others
     *
     * @var int
     * @cvalue S_IWOTH
     */
    public const int S_IWOTH = UNKNOWN;

    /**
     * execute/search permission, others
     *
     * @var int
     * @cvalue S_IXOTH
     */
    public const int S_IXOTH = UNKNOWN;

    /**
     * bit mask type of file
     *
     * @var int
     * @cvalue S_IFMT
     */
    public const int S_IFMT = UNKNOWN;

    /**
     * block special file type
     *
     * @var int
     * @cvalue S_IFBLK
     */
    public const int S_IFBLK = UNKNOWN;

    /**
     * character special file type
     *
     * @var int
     * @cvalue S_IFCHR
     */
    public const int S_IFCHR = UNKNOWN;

    /**
     * FIFO special file type
     *
     * @var int
     * @cvalue S_IFIFO
     */
    public const int S_IFIFO = UNKNOWN;

    /**
     * regular file type
     *
     * @var int
     * @cvalue S_IFREG
     */
    public const int S_IFREG = UNKNOWN;

    /**
     * directory file type
     * @var int
     * @cvalue S_IFDIR
     */
    public const int S_IFDIR = UNKNOWN;

    /**
     * symbolic link file type
     *
     * @var int
     * @cvalue S_IFLNK
     */
    public const int S_IFLNK = UNKNOWN;

    /**
     * socket file type
     *
     * @var int
     * @cvalue S_IFSOCK
     */
    public const int S_IFSOCK = UNKNOWN;

    /**
     * @var int
     * @cvalue AF_INET
     */
    public const int AF_INET = UNKNOWN;

    /**
     * @var int
     * @cvalue AF_INET6
     */
    public const int AF_INET6 = UNKNOWN;

    /**
     * @var int
     * @cvalue AF_UNSPEC
     */
    public const int AF_UNSPEC = UNKNOWN;

    /**
     * @var int
     * @cvalue UV_LEAVE_GROUP
     */
    public const int LEAVE_GROUP = UNKNOWN;

    /**
     * @var int
     * @cvalue UV_JOIN_GROUP
     */
    public const int JOIN_GROUP = UNKNOWN;

    /**
     * Flags specifying how a stdio should be transmitted to the child process.
     *
     * @var int
     * @cvalue UV_IGNORE
     */
    public const int IGNORE         = UNKNOWN;

    /**
     * Flags specifying how a stdio should be transmitted to the child process.
     *
     * @var int
     * @cvalue UV_CREATE_PIPE
     */
    public const int CREATE_PIPE    = UNKNOWN;

    /**
     * Flags specifying how a stdio should be transmitted to the child process.
     *
     * @var int
     * @cvalue UV_INHERIT_FD
     */
    public const int INHERIT_FD     = UNKNOWN;

    /**
     * Flags specifying how a stdio should be transmitted to the child process.
     *
     * @var int
     * @cvalue UV_INHERIT_STREAM
     */
    public const int INHERIT_STREAM = UNKNOWN;

    /**
     * When `UV::CREATE_PIPE` is specified, `UV::READABLE_PIPE` and `UV::WRITABLE_PIPE`
     * determine the direction of flow, from the child process' perspective. Both
     * flags may be specified to create a duplex data stream.
     *
     * @var int
     * @cvalue UV_READABLE_PIPE
     */
    public const int READABLE_PIPE  = UNKNOWN;

    /**
     * @var int
     * @cvalue UV_WRITABLE_PIPE
     */
    public const int WRITABLE_PIPE  = UNKNOWN;

    /**
     * @var int
     * @cvalue UV_INHERIT_FD
     */
    public const int UV_INHERIT_FD = UNKNOWN;

    /**
     * Open the child pipe handle in overlapped mode on Windows.
     * On Unix it is silently ignored.
     *
     * @var int
     * @cvalue UV_OVERLAPPED_PIPE
     */
    public const int OVERLAPPED_PIPE   = UNKNOWN;

    /**
     * Disables dual stack mode.
     *
     * @var int
     * @cvalue UV_UDP_IPV6ONLY
     */
    public const int UDP_IPV6ONLY = UNKNOWN;

    /**
     * Indicates message was truncated because read buffer was too small. The
     * remainder was discarded by the OS. Used in uv_udp_recv_cb.
     *
     * @var int
     * @cvalue UV_UDP_PARTIAL
     */
    public const int UDP_PARTIAL = UNKNOWN;

    /**
     * Set the child process' user id.
     *
     * @var int
     * @cvalue UV_PROCESS_SETUID
     */
    public const int PROCESS_SETUID = (1 << 0);

    /**
     * Set the child process' group id.
     *
     * @var int
     * @cvalue UV_PROCESS_SETGID
     */
    public const int PROCESS_SETGID = (1 << 1);

    /**
     * Do not wrap any arguments in quotes, or perform any other escaping, when
     * converting the argument list into a command line string. This option is
     * only meaningful on Windows systems. On Unix it is silently ignored.
     *
     * @var int
     * @cvalue UV_PROCESS_WINDOWS_VERBATIM_ARGUMENTS
     */
    public const int PROCESS_WINDOWS_VERBATIM_ARGUMENTS = (1 << 2);

    /**
     * Spawn the child process in a detached state - this will make it a process
     * group leader, and will effectively enable the child to keep running after
     * the parent exits. Note that the child process will still keep the
     * parent's event loop alive unless the parent process calls uv_unref() on
     * the child's process handle.
     *
     * @var int
     * @cvalue UV_PROCESS_DETACHED
     */
    public const int PROCESS_DETACHED = (1 << 3);

    /**
     * Hide the subprocess window that would normally be created. This option is
     * only meaningful on Windows systems. On Unix it is silently ignored.
     *
     * @var int
     * @cvalue UV_PROCESS_WINDOWS_HIDE
     */
    public const int PROCESS_WINDOWS_HIDE = (1 << 4);

    /**
     * Hide the subprocess console window that would normally be created. This
     * option is only meaningful on Windows systems. On Unix it is silently
     * ignored.
     *
     * @var int
     * @cvalue UV_PROCESS_WINDOWS_HIDE_CONSOLE
     */
    public const int PROCESS_WINDOWS_HIDE_CONSOLE = (1 << 5);

    /**
     * Hide the subprocess GUI window that would normally be created. This
     * option is only meaningful on Windows systems. On Unix it is silently
     * ignored.
     *
     * @var int
     * @cvalue UV_PROCESS_WINDOWS_HIDE_GUI
     */
    public const int PROCESS_WINDOWS_HIDE_GUI = (1 << 6);

    /**
     * Initial/normal terminal mode
     *
     * @var int
     * @cvalue UV_TTY_MODE_NORMAL
     */
    public const int TTY_MODE_NORMAL = UNKNOWN;

    /**
     * Raw input mode (On Windows, ENABLE_WINDOW_INPUT is also enabled)
     *
     * @var int
     * @cvalue UV_TTY_MODE_RAW
     */
    public const int TTY_MODE_RAW = UNKNOWN;

    /**
     * Binary-safe I/O mode for IPC (Unix-only)
     *
     * @var int
     * @cvalue UV_TTY_MODE_IO
     */
    public const int TTY_MODE_IO = UNKNOWN;

    /**
     * The SIGHUP signal is sent to a process when its controlling terminal is closed. It was originally designed to
     * notify the process of a serial line drop (a hangup). In modern systems, this signal usually means that the
     * controlling pseudo or virtual terminal has been closed. Many daemons will reload their configuration files and
     * reopen their logfiles instead of exiting when receiving this signal. nohup is a command to make a command ignore
     * the signal.
     *
     * @var int
     * @cvalue SIGHUP
     */
    public const int SIGHUP = UNKNOWN;

    /**
     * The SIGINT signal is sent to a process by its controlling terminal when a user wishes to interrupt the process.
     * This is typically initiated by pressing Ctrl-C, but on some systems, the "delete" character or "break" key can be
     * used.
     *
     * @var int
     * @cvalue SIGINT
     */
    public const int SIGINT = UNKNOWN;

    /**
     * The SIGQUIT signal is sent to a process by its controlling terminal when the user requests that the process quit
     * and perform a core dump.
     *
     * @var int
     * @cvalue SIGQUIT
     */
    public const int SIGQUIT = UNKNOWN;

    /**
     * The SIGILL signal is sent to a process when it attempts to execute an illegal, malformed, unknown, or privileged
     * instruction.
     *
     * @var int
     * @cvalue SIGILL
     */
    public const int SIGILL = UNKNOWN;

    /**
     * The SIGTRAP signal is sent to a process when an exception (or trap) occurs: a condition that a debugger has
     * requested to be informed of — for example, when a particular function is executed, or when a particular variable
     * changes value.
     *
     * @var int
     * @cvalue SIGTRAP
     */
    public const int SIGTRAP = UNKNOWN;

    /**
     * The SIGABRT signal is sent to a process to tell it to abort, i.e. to terminate. The signal is usually initiated
     * by the process itself when it calls abort function of the C Standard Library, but it can be sent to the process
     * from outside like any other signal.
     *
     * @var int
     * @cvalue SIGABRT
     */
    public const int SIGABRT = UNKNOWN;

    /**
     * The SIGIOT signal is sent to a process when it attempts to perform an I/O operation that is blocking.
     *
     * @var int
     * @cvalue SIGIOT
     */
    public const int SIGIOT = UNKNOWN;

    /**
     * The SIGBUS signal is sent to a process when it causes a bus error. The conditions that lead to the signal being
     * sent are, for example, incorrect memory access alignment or non-existent physical address.
     *
     * @var int
     * @cvalue SIGBUS
     */
    public const int SIGBUS = UNKNOWN;

    /**
     * The SIGFPE signal is sent to a process when it causes a floating-point error (such as division by zero).
     *
     * @var int
     * @cvalue SIGFPE
     */
    public const int SIGFPE = UNKNOWN;

    /**
     * The SIGKILL signal is sent to a process to cause it to terminate immediately (kill). In contrast to SIGTERM and
     * SIGINT, this signal cannot be caught or ignored, and the receiving process cannot perform any clean-up upon
     * receiving this signal.
     *
     * @var int
     * @cvalue SIGKILL
     */
    public const int SIGKILL = UNKNOWN;

    /**
     * The SIGUSR1 signal is sent to a process to indicate user-defined conditions.
     *
     * @var int
     * @cvalue SIGUSR1
     */
    public const int SIGUSR1 = UNKNOWN;

    /**
     * The SIGUSR1 signa2 is sent to a process to indicate user-defined conditions.
     *
     * @var int
     * @cvalue SIGUSR2
     */
    public const int SIGUSR2 = UNKNOWN;

    /**
     * The SIGSEGV signal is sent to a process when it makes an invalid virtual memory reference, or segmentation fault,
     * i.e. when it performs a segmentation violation.
     *
     * @var int
     * @cvalue SIGSEGV
     */
    public const int SIGSEGV = UNKNOWN;

    /**
     * The SIGPIPE signal is sent to a process when it attempts to write to a pipe without a process connected to the
     * other end.
     *
     * @var int
     * @cvalue SIGPIPE
     */
    public const int SIGPIPE = UNKNOWN;

    /**
     * The SIGALRM, SIGVTALRM and SIGPROF signal is sent to a process when the time limit specified in a call to a
     * preceding alarm setting function (such as setitimer) elapses. SIGALRM is sent when real or clock time elapses.
     * SIGVTALRM is sent when CPU time used by the process elapses. SIGPROF is sent when CPU time used by the process
     * and by the system on behalf of the process elapses.
     *
     * @var int
     * @cvalue SIGALRM
     */
    public const int SIGALRM = UNKNOWN;

    /**
     * The SIGTERM signal is sent to a process to request its termination. Unlike the SIGKILL signal, it can be caught
     * and interpreted or ignored by the process. This allows the process to perform nice termination releasing
     * resources and saving state if appropriate. SIGINT is nearly identical to SIGTERM.
     *
     * @var int
     * @cvalue SIGTERM
     */
    public const int SIGTERM = UNKNOWN;

    /**
     * The SIGSTKFLT signal is sent to a process when it fails to allocate a stack segment.
     *
     * @var int
     * @cvalue SIGSTKFLT
     */
    public const int SIGSTKFLT = UNKNOWN;

    /**
     * The SIGCLD signal is sent to a process when a child process terminates or is interrupted. One common usage of
     * the signal is to instruct the operating system to clean up the resources used by a child process after its
     * termination without an explicit call to the wait system call.
     *
     * @var int
     * @cvalue SIGCLD
     */
    public const int SIGCLD = UNKNOWN;

    /**
     * The SIGCHLD signal is sent to a process when a child process terminates, is interrupted, or resumes after being
     * interrupted. One common usage of the signal is to instruct the operating system to clean up the resources used by
     * a child process after its termination without an explicit call to the wait system call.
     *
     * @var int
     * @cvalue SIGCHLD
     */
    public const int SIGCHLD = UNKNOWN;

    /**
     * The SIGCONT signal instructs the operating system to continue (restart) a process previously paused by the
     * SIGSTOP or SIGTSTP signal. One important use of this signal is in job control in the Unix shell.
     *
     * @var int
     * @cvalue SIGCONT
     */
    public const int SIGCONT = UNKNOWN;

    /**
     * The SIGSTOP signal instructs the operating system to stop a process for later resumption.
     *
     * @var int
     * @cvalue SIGSTOP
     */
    public const int SIGSTOP = UNKNOWN;

    /**
     * The SIGTSTP signal is sent to a process by its controlling terminal to request it to stop (terminal stop). It is
     * commonly initiated by the user pressing Ctrl+Z. Unlike SIGSTOP, the process can register a signal handler for or
     * ignore the signal.
     *
     * @var int
     * @cvalue SIGTSTP
     */
    public const int SIGTSTP = UNKNOWN;

    /**
     * The SIGTTIN signal is sent to a process when it attempts to read in from the tty while in the background.
     * Typically, this signal is received only by processes under job control; daemons do not have controlling
     *
     * @var int
     * @cvalue SIGTTIN
     */
    public const int SIGTTIN = UNKNOWN;

    /**
     * The SIGTTOU signal is sent to a process when it attempts to write out from the tty while in the background.
     * Typically, this signal is received only by processes under job control; daemons do not have controlling
     *
     * @var int
     * @cvalue SIGTTOU
     */
    public const int SIGTTOU = UNKNOWN;

    /**
     * The SIGURG signal is sent to a process when a socket has urgent or out-of-band data available to read.
     *
     * @var int
     * @cvalue SIGURG
     */
    public const int SIGURG = UNKNOWN;

    /**
     * The SIGXCPU signal is sent to a process when it has used up the CPU for a duration that exceeds a certain
     * predetermined user-settable value. The arrival of a SIGXCPU signal provides the receiving process a chance to
     * quickly save any intermediate results and to exit gracefully, before it is terminated by the operating system
     * using the SIGKILL signal.
     *
     * @var int
     * @cvalue SIGXCPU
     */
    public const int SIGXCPU = UNKNOWN;

    /**
     * The SIGXFSZ signal is sent to a process when it grows a file larger than the maximum allowed size
     *
     * @var int
     * @cvalue SIGXFSZ
     */
    public const int SIGXFSZ = UNKNOWN;

    /**
     * The SIGVTALRM signal is sent to a process when the time limit specified in a call to a preceding alarm setting
     * function (such as setitimer) elapses. SIGVTALRM is sent when CPU time used by the process elapses.
     *
     * @var int
     * @cvalue SIGVTALRM
     */
    public const int SIGVTALRM = UNKNOWN;

    /**
     * The SIGPROF signal is sent to a process when the time limit specified in a call to a preceding alarm setting
     * function (such as setitimer) elapses. SIGPROF is sent when CPU time used by the process and by the system on
     * behalf of the process elapses.
     *
     * @var int
     * @cvalue SIGPROF
     */
    public const int SIGPROF = UNKNOWN;

    /**
     * The SIGWINCH signal is sent to a process when its controlling terminal changes its size (a window change).
     *
     * @var int
     * @cvalue SIGWINCH
     */
    public const int SIGWINCH = UNKNOWN;

    /**
     * The SIGPOLL signal is sent when an event occurred on an explicitly watched file descriptor. Using it effectively
     * leads to making asynchronous I/O requests since the kernel will poll the descriptor in place of the caller. It
     * provides an alternative to active polling.
     *
     * @var int
     * @cvalue SIGPOLL
     */
    public const int SIGPOLL = UNKNOWN;

    /**
     * The SIGIO signal is sent to a process when an I/O request is available on a file descriptor. It is sent to all
     * processes that have registered a read interest on the file descriptor.
     * @var int
     * @cvalue SIGIO
     */
    public const int SIGIO = UNKNOWN;

    /**
     * The SIGPWR signal is sent to a process when the system experiences a power failure.
     *
     * @var int
     * @cvalue SIGPWR
     */
    public const int SIGPWR = UNKNOWN;

    /**
     * The SIGSYS signal is sent to a process when it passes a bad argument to a system call. In practice, this kind of
     * signal is rarely encountered since applications rely on libraries (e.g. libc) to make the call for them.
     *
     * @var int
     * @cvalue SIGSYS
     */
    public const int SIGSYS = UNKNOWN;

    /**
     * @var int
     * @cvalue SIGSYS
     */
    public const int SIGBABY = UNKNOWN;

    /**
     * The unknown handle
     * @var int
     * @cvalue UV_UNKNOWN_HANDLE
     */
    public const int UV_UNKNOWN_HANDLE = UNKNOWN;

    /**
     * The async handle
     * @var int
     * @cvalue IS_UV_ASYNC
     */
    public const int IS_UV_ASYNC = UNKNOWN;

    /**
     * The async handle
     * @var int
     * @cvalue IS_UV_CHECK
     */
    public const int IS_UV_CHECK = UNKNOWN;


    /**
     * The async handle
     * @var int
     * @cvalue IS_UV_FS_EVENT
     */
    public const int IS_UV_FS_EVENT = UNKNOWN;

    /**
     * The async handle
     * @var int
     * @cvalue IS_UV_FS_POLL
     */
    public const int IS_UV_FS_POLL = UNKNOWN;

    /**
     * The async handle
     * @var int
     * @cvalue IS_UV_HANDLE
     */
    public const int IS_UV_HANDLE = UNKNOWN;

    /**
     * The async handle
     * @var int
     * @cvalue IS_UV_IDLE
     */
    public const int IS_UV_IDLE = UNKNOWN;

    /**
     * The async handle
     * @var int
     * @cvalue IS_UV_PIPE
     */
    public const int IS_UV_PIPE = UNKNOWN;


    /**
     * The async handle
     * @var int
     * @cvalue IS_UV_POLL
     */
    public const int IS_UV_POLL = UNKNOWN;

    /**
     * The async handle
     * @var int
     * @cvalue IS_UV_PREPARE
     */
    public const int IS_UV_PREPARE = UNKNOWN;

    /**
     * The async handle
     * @var int
     * @cvalue IS_UV_PROCESS
     */
    public const int IS_UV_PROCESS = UNKNOWN;

    /**
     * The async handle
     * @var int
     * @cvalue IS_UV_STREAM
     */
    public const int IS_UV_STREAM = UNKNOWN;

    /**
     * The async handle
     * @var int
     * @cvalue IS_UV_TCP
     */
    public const int IS_UV_TCP = UNKNOWN;

    /**
     * The async handle
     * @var int
     * @cvalue IS_UV_TIMER
     */
    public const int IS_UV_TIMER = UNKNOWN;

    /**
     * The async handle
     * @var int
     * @cvalue IS_UV_TTY
     */
    public const int IS_UV_TTY = UNKNOWN;

    /**
     * The async handle
     * @var int
     * @cvalue IS_UV_UDP
     */
    public const int IS_UV_UDP = UNKNOWN;

    /**
     * The async handle
     * @var int
     * @cvalue IS_UV_SIGNAL
     */
    public const int IS_UV_SIGNAL = UNKNOWN;

    /**
     * The async handle
     * @var int
     * @cvalue UV_FILE
     */
    public const int UV_FILE = UNKNOWN;

    /**
     * The async handle
     * @var int
     * @cvalue IS_UV_WORK
     */
    public const int IS_UV_WORK = UNKNOWN;

    /**
     * The async handle
     * @var int
     * @cvalue IS_UV_ADDRINFO
     */
    public const int IS_UV_ADDRINFO = UNKNOWN;

    /**
     * The async handle
     * @var int
     * @cvalue IS_UV_LOOP
     */
    public const int IS_UV_LOOP = UNKNOWN;

    /**
     * The async handle
     * @var int
     * @cvalue UV_HANDLE_TYPE_MAX
     */
    public const int HANDLE_TYPE_MAX = UNKNOWN;
}

/**
 * @strict-properties
 * @not-serializable
 */
final class UVLoop {}

/**
 * @strict-properties
 * @not-serializable
 */
class UVStream extends UV {}

/**
 * @strict-properties
 * @not-serializable
 */
final class UVTcp extends UVStream {}

/**
 * @strict-properties
 * @not-serializable
 */
final class UVUdp extends UV {}

/**
 * @strict-properties
 * @not-serializable
 */
final class UVPipe extends UVStream {}

/**
 * @strict-properties
 * @not-serializable
 */
final class UVPoll extends UV {}

/**
 * @strict-properties
 * @not-serializable
 */
final class UVTimer extends UV {}

/**
 * @strict-properties
 * @not-serializable
 */
final class UVSignal extends UV {}

/**
 * @strict-properties
 * @not-serializable
 */
final class UVProcess extends UV {}

/**
 * @strict-properties
 * @not-serializable
 */
final class UVAsync extends UV {}

/**
 * @strict-properties
 * @not-serializable
 */
final class UVTty extends UVStream {}

/**
 * @strict-properties
 * @not-serializable
 */
final class UVIdle extends UV {}

/**
 * @strict-properties
 * @not-serializable
 */
final class UVPrepare extends UV {}

/**
 * @strict-properties
 * @not-serializable
 */
final class UVCheck extends UV {}

/**
 * @strict-properties
 * @not-serializable
 */
final class UVStdio {}

/**
 * @strict-properties
 * @not-serializable
 */
abstract class UVSockAddr {}

/**
 * @strict-properties
 * @not-serializable
 */
final class UVSockAddrIPv4 extends UVSockAddr {}

/**
 * @strict-properties
 * @not-serializable
 */
final class UVSockAddrIPv6 extends UVSockAddr {}

/**
 * @strict-properties
 * @not-serializable
 */
final class UVLock {}

/**
 * @strict-properties
 * @not-serializable
 */
final class UVFs extends UV {}

/**
 * @strict-properties
 * @not-serializable
 */
final class UVFsEvent extends UV {}
/**
 * @strict-properties
 * @not-serializable
 */
final class UVFsPoll extends UV {}

/**
 * @strict-properties
 * @not-serializable
 */
final class UVWork extends UV {}

function uv_loop_new(): UVLoop {}

function uv_default_loop(): UVLoop {}

function uv_run(UVLoop $loop = null, int $mode = UV::RUN_DEFAULT): void {}

function uv_poll_start(UVPoll $poll, int $events, ?callable $callback = null): void {}

// function uv_poll_init_socket(UVLoop $loop, mixed $socket): UVPoll {}

function uv_poll_init(UVLoop $loop, mixed $fd): UVPoll {}

function uv_poll_stop(UVPoll $poll): void {}

function uv_close(UV $handle, ?callable $callback = null): void {}

function uv_shutdown(UVStream $handle, ?callable $callback = null): void {}

function uv_timer_init(UVLoop $loop = null): UVTimer {}

function uv_timer_start(UVTimer $timer, int $timeout, int $repeat, callable $callback = null): void {}

function uv_timer_stop(UVTimer $timer): void {}

function uv_stop(UVLoop $loop): void {}

function uv_write(UV $handle, string $data, callable $callback): void {}

function uv_read_start(UVStream $handle, callable $callback): void {}

function uv_fs_open(UVLoop $loop, string $path, int $flag, int $mode, callable $callback): void {}

function uv_fs_close(UVLoop $loop, mixed $fd, callable $callback): void {}

function uv_fs_read(UVLoop $loop, mixed $fd, int $offset, int $length, callable $callback): void {}

function uv_fs_write(UVLoop $loop, mixed $fd, string $buffer, int $offset = -1, callable $callback): void {}

function uv_fs_fdatasync(UVLoop $loop, mixed $fd, callable $callback): void {}

function uv_fs_scandir(UVLoop $loop, string $path, int $flags = 0, callable $callback): void {}

function uv_fs_stat(UVLoop $loop, string $path, callable $callback): void {}

function uv_fs_lstat(UVLoop $loop, string $path, callable $callback): void {}

function uv_fs_fstat(UVLoop $loop, mixed $fd, callable $callback): void {}

function uv_fs_sendfile(UVLoop $loop, mixed $out_fd, mixed $in_fd, int $offset, int $length, callable $callback): void {}

function uv_is_active(UV $handle): void {}

function uv_fs_poll_start(UVPoll $poll, callable $callback, string $path, int $interval): void {}

function uv_fs_poll_stop(UVPoll $poll): void {}

function uv_fs_poll_init(UVLoop $loop): UVPoll {}

function uv_exepath(): string {}

function uv_cwd(): string {}

function uv_cpu_info(): array {}

function uv_signal_init(UVLoop $loop = null): UVSignal {}

function uv_signal_start(UVSignal $handle, callable $callback, int $signal): void {}

function uv_signal_stop(UVSignal $handle): int {}

function uv_spawn(
    UVLoop $loop,
    string $command,
    array $args,
    array $stdio,
    string $cwd,
    array $env = array(),
    callable $callback,
    int $flags = 0,
    array $options = []
): UVProcess {}

function uv_process_kill(UVProcess $process, int $signal): void {}

function uv_process_get_pid(UVProcess $process): int {}

function uv_kill(int $pid, int $signal): void {}

function uv_pipe_init(UVLoop $loop, bool $ipc): UVPipe {}

function uv_pipe_open(UVPipe $handle, int $pipe): int|false {}

function uv_pipe_bind(UVPipe $handle, string $name): int {}

function uv_pipe_connect(UVPipe $handle, string $path, callable $callback): void {}

function uv_pipe_pending_instances(UVPipe $handle, int $count): void {}

function uv_stdio_new(UV $fd, int $flags): UVStdio {}

function uv_async_init(UVLoop $loop, callable $callback): UVAsync {}

function uv_async_send(UVAsync $handle): void {}

function uv_queue_work(UVLoop $loop, callable $callback, callable $after_callback): void {}

function uv_idle_init(UVLoop $loop = null): UVIdle {}

function uv_idle_start(UVIdle $idle, callable $callback): void {}

function uv_idle_stop(UVIdle $idle): void {}

function uv_prepare_init(UVLoop $loop = null): UVPrepare {}

function uv_prepare_start(UVPrepare $handle, callable $callback): void {}

function uv_prepare_stop(UVPrepare $handle): void {}

function uv_check_init(UVLoop $loop = null): UVCheck {}

function uv_check_start(UVCheck $handle, callable $callback): void {}

function uv_check_stop(UVCheck $handle): void {}

function uv_last_error(UVLoop $uv_loop = null): int {}

function uv_err_name(int $error_code): string {}

function uv_strerror(int $error_code): string {}

function uv_update_time(UVLoop $uv_loop): void {}

function uv_ref(UV $uv_handle): void {}

function uv_unref(UV $uv_t): void {}

function uv_now(UVLoop $uv_loop = null): int {}

function uv_loop_delete(UVLoop $uv_loop): void {}

function uv_tcp_bind(UVTcp $uv_tcp, UVSockAddr $uv_sockaddr): void {}

function uv_tcp_bind6(UVTcp $uv_tcp, UVSockAddr $uv_sockaddr): void {}

function uv_write2(UVStream $handle, string $data, UVTcp|UVPipe $send, callable $callback): void {}

function uv_tcp_nodelay(UVTcp $handle, bool $enable): void {}

function uv_accept(UVTcp|UVPipe $server, UVTcp|UVPipe $client): void {}

function uv_listen(UVTcp|UVPipe $handle, int $backlog, callable $callback): void {}

function uv_read_stop(UVStream $handle): void {}

function uv_ip4_addr(string $ipv4_addr, int $port): UVSockAddrIPv4 {}

function uv_ip6_addr(string $ipv6_addr, int $port): UVSockAddrIPv6 {}

function uv_tcp_connect(UVTcp $handle, UVSockAddrIPv4 $ipv4_addr, callable $callback): void {}

function uv_tcp_connect6(UVTcp $handle, UVSockAddrIPv6 $ipv6_addr, callable $callback): void {}

function uv_timer_again(UVTimer $timer): void {}

function uv_timer_set_repeat(UVTimer $timer, int $repeat): void {}

function uv_timer_get_repeat(UVTimer $timer): int {}

function uv_getaddrinfo(UVLoop $loop, callable $callback, string $node = null, string $service = null, array $hints = []): void {}

function uv_ip4_name(UVSockAddr $address): string {}

function uv_ip6_name(UVSockAddr $address): string {}

function uv_tcp_init(UVLoop $loop = null): UVTcp {}

function uv_udp_init(UVLoop $loop = null): UVUdp {}

function uv_udp_bind(UVUdp $handle, UVSockAddr $address, int $flags = 0): void {}

function uv_udp_bind6(UVUdp $handle, UVSockAddrIPv6 $address, int $flags = 0): void {}

function uv_udp_recv_start(UVUdp $handle, callable $callback): void {}

function uv_udp_recv_stop(UVUdp $handle): void {}

function uv_udp_set_membership(UVUdp $handle, string $multicast_addr, string $interface_addr, int $membership): int {}

function uv_udp_set_multicast_loop(UVUdp $handle, bool $enabled): void {}

function uv_udp_set_multicast_ttl(UVUdp $handle, int $ttl): void {}

function uv_udp_set_broadcast(UVUdp $handle, bool $enabled): void {}

function uv_udp_send(UVUdp $handle, string $data, UVSockAddr $uv_addr, callable $callback): void {}

function uv_udp_send6(UVUdp $handle, string $data, UVSockAddrIPv6 $uv_addr6, callable $callback): void {}

function uv_is_readable(UVStream $handle): bool {}

function uv_is_writable(UVStream $handle): bool {}

function uv_walk(UVLoop $loop, callable $closure, ?array $opaque = null): bool {}

function uv_guess_handle(UV $uv): int {}

function uv_loadavg(): array {}

function uv_rwlock_init(): UVLock {}

function uv_rwlock_rdlock(UVLock $handle): void {}

function uv_rwlock_tryrdlock(UVLock $handle): bool {}

function uv_rwlock_rdunlock(UVLock $handle): void {}

function uv_rwlock_wrlock(UVLock $handle): void {}

function uv_rwlock_trywrlock(UVLock $handle): bool {}

function uv_rwlock_wrunlock(UVLock $handle): boold {}

function uv_mutex_init(): UVLock {}

function uv_mutex_lock(UVLock $lock): void {}

function uv_mutex_trylock(UVLock $lock): bool {}

function uv_sem_init(int $value): UVLock {}

function uv_sem_post(UVLock $sem): void {}

function uv_sem_wait(UVLock $sem): void {}

function uv_sem_trywait(UVLock $sem): bool {}

function uv_hrtime(): int {}

function uv_fs_fsync(UVLoop $loop, resource $fd, callable $callback): void {}

function uv_fs_ftruncate(UVLoop $loop, resource $fd, int $offset, callable $callback): void {}

function uv_fs_mkdir(UVLoop $loop, string $path, int $mode, callable $callback): void {}

function uv_fs_rmdir(UVLoop $loop, string $path, callable $callback): void {}

function uv_fs_unlink(UVLoop $loop, string $path, callable $callback): void {}

function uv_fs_rename(UVLoop $loop, string $from, string $to, callable $callback): void {}

function uv_fs_utime(UVLoop $loop, string $path, int $utime, int $atime, callable $callback): void {}

function uv_fs_futime(UVLoop $loop, resource $fd, int $utime, int $atime, callable $callback): void {}

function uv_fs_chmod(UVLoop $loop, string $path, int $mode, callable $callback): void {}

function uv_fs_fchmod(UVLoop $loop, resource $fd, int $mode, callable $callback): void {}

function uv_fs_chown(UVLoop $loop, string $path, int $uid, int $gid, callable $callback): void {}

function uv_fs_fchown(UVLoop $loop, resource $fd, int $uid, int $gid, callable $callback): void {}


function uv_fs_symlink(UVLoop $loop, string $from, string $to, int $flags, callable $callback): void {}
function uv_fs_link(UVLoop $loop, string $from, string $to, callable $callback): void {}

function uv_fs_readlink(UVLoop $loop, string $path, callable $callback): void {}

function uv_fs_readdir(UVLoop $loop, string $path, int $flags, callable $callback): void {}

function uv_fs_event_init(UVLoop $loop, string $path, callable $callback, int $flags = 0): UVFsEvent {}

function uv_tty_init(UVLoop $loop, resource $fd, int $readable): UVTty {}

function uv_tty_get_winsize(UVTty $tty, int &$width, int &$height): int {}

function uv_tty_set_mode(UVTty $tty, int $mode): int {}

function uv_tty_reset_mode(): void {}

function uv_uptime(): float {}

function uv_get_free_memory(): int {}

function uv_get_total_memory(): int {}

function uv_interface_addresses(): array {}

function uv_chdir(string $directory): bool {}

function uv_tcp_getsockname(UVTcp $uv_sock): array {}

function uv_tcp_getpeername(UVTcp $uv_sock): array {}

function uv_udp_getsockname(UVUdp $uv_sock): array {}

function uv_resident_set_memory(): int {}


#if PHP_VERSION_ID >= 80300

enum UVHandleType: int
{
    /**
     * The async handle
     * @var int
     * @cvalue IS_UV_ASYNC
     */
    case IS_UV_ASYNC = UV::IS_UV_ASYNC;

    /**
     * The async handle
     * @var int
     * @cvalue IS_UV_CHECK
     */
    case IS_UV_CHECK = UV::IS_UV_CHECK;


    /**
     * The async handle
     * @var int
     * @cvalue IS_UV_FS_EVENT
     */
    case IS_UV_FS_EVENT = UV::IS_UV_FS_EVENT;

    /**
     * The async handle
     * @var int
     * @cvalue IS_UV_FS_POLL
     */
    case IS_UV_FS_POLL = UV::IS_UV_FS_POLL;

    /**
     * The async handle
     * @var int
     * @cvalue IS_UV_HANDLE
     */
    case IS_UV_HANDLE = UV::IS_UV_HANDLE;

    /**
     * The async handle
     * @var int
     * @cvalue IS_UV_IDLE
     */
    case IS_UV_IDLE = UV::IS_UV_IDLE;

    /**
     * The async handle
     * @var int
     * @cvalue IS_UV_PIPE
     */
    case IS_UV_PIPE = UV::IS_UV_PIPE;


    /**
     * The async handle
     * @var int
     * @cvalue IS_UV_POLL
     */
    case IS_UV_POLL = UV::IS_UV_POLL;

    /**
     * The async handle
     * @var int
     * @cvalue IS_UV_PREPARE
     */
    case IS_UV_PREPARE = UV::IS_UV_PREPARE;

    /**
     * The async handle
     * @var int
     * @cvalue IS_UV_PROCESS
     */
    case IS_UV_PROCESS = UV::IS_UV_PROCESS;

    /**
     * The async handle
     * @var int
     * @cvalue IS_UV_STREAM
     */
    case IS_UV_STREAM = UV::IS_UV_STREAM;

    /**
     * The async handle
     * @var int
     * @cvalue IS_UV_TCP
     */
    case IS_UV_TCP = UV::IS_UV_TCP;

    /**
     * The async handle
     * @var int
     * @cvalue IS_UV_TIMER
     */
    case IS_UV_TIMER = UV::IS_UV_TIMER;

    /**
     * The async handle
     * @var int
     * @cvalue IS_UV_TTY
     */
    case IS_UV_TTY = UV::IS_UV_TTY;

    /**
     * The async handle
     * @var int
     * @cvalue IS_UV_UDP
     */
    case IS_UV_UDP = UV::IS_UV_UDP;

    /**
     * The async handle
     * @var int
     * @cvalue IS_UV_SIGNAL
     */
    case IS_UV_SIGNAL = UV::IS_UV_SIGNAL;

    /**
     * The async handle
     * @var int
     * @cvalue UV_FILE
     */
    case UV_FILE = UV::UV_FILE;

    /**
     * The async handle
     * @var int
     * @cvalue IS_UV_WORK
     */
    case IS_UV_WORK = UV::IS_UV_WORK;

    /**
     * The async handle
     * @var int
     * @cvalue IS_UV_ADDRINFO
     */
    case IS_UV_ADDRINFO = UV::IS_UV_ADDRINFO;

    /**
     * The async handle
     * @var int
     * @cvalue IS_UV_LOOP
     */
    case IS_UV_LOOP = UV::IS_UV_LOOP;
}

#endif

function uv_handle_get_type(UV $uv): int {}


function uv_tcp_open(UVTcp $handle, int $tcpfd): int|false {}

function uv_udp_open(UVUdp $handle, int $udpfd): int|false {}

function uv_is_closing(UV $handle): bool {}

function uv_run_once(?UVLoop $uv_loop = null): void {}
