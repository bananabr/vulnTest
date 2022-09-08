all: vuln.c server.c fixed.c
	$(CC) $(CFLAGS) $(CPPFLAGS) vuln.c -o vuln
	$(CC) $(CFLAGS) $(CPPFLAGS) server.c -o server
	$(CC) $(CFLAGS) $(CPPFLAGS) fixed.c -o fixed