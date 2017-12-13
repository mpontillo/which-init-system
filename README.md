# which-init-system

Simple C program which will prints out the executable file currently running
the init system (PID 1).

Requires root access to read the `/proc/1/exe` link. The Makefile currently creates
a setuid binary for this purpose.
