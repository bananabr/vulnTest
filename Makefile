all: vuln.c
        $(CC) $(CFLAGS) $(CPPFLAGS) vuln.c -o vuln
