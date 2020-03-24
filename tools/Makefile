CC := gcc
CFLAGS := -I . -Wall -Wextra -pedantic -std=c99 -O3 -s
PROGRAMS := n64graphics mio0 n64cksum iplfontutil


n64graphics_SOURCES := n64graphics.c
n64graphics_CFLAGS  := -DN64GRAPHICS_STANDALONE

mio0_SOURCES := libmio0.c
mio0_CFLAGS := -DMIO0_STANDALONE

n64cksum_SOURCES := n64cksum.c libmio0.c libsm64.c utils.c

iplfontutil_SOURCES := iplfontutil.c

all: $(PROGRAMS)

clean:
	$(RM) $(PROGRAMS)

define COMPILE =
$(1): $($1_SOURCES)
	$(CC) $(CFLAGS) $($1_CFLAGS) $$^ -o $$@
endef

$(foreach p,$(PROGRAMS),$(eval $(call COMPILE,$(p))))