all: vuln.c server.c
	$(CC) $(CFLAGS) $(CPPFLAGS) vuln.c -o vuln
	$(CC) $(CFLAGS) $(CPPFLAGS) server.c -o server