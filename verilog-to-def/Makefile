SUBDIR = module/lef/5.8-p027 module/def/5.8-p027 
HASHDIR = module/sparsehash
OPENSTADIR = module/OpenSTA
REPLACEDIR = src

all: prep hash sta
	$(MAKE) -C $(REPLACEDIR);

prep: 
	for dir in $(SUBDIR); do \
		$(MAKE) -C $$dir; \
	done

hash:
	cd $(HASHDIR) && mkdir -p install-sp && \
		./configure --prefix=$(CURDIR)/$(HASHDIR)/install-sp && \
		$(MAKE) && \
		$(MAKE) install;

sta: 
	cd $(OPENSTADIR) && mkdir -p install-sp && \
		libtoolize && ./bootstrap && \
		./configure --prefix=$(CURDIR)/$(OPENSTADIR)/install-sp && \
		$(MAKE) && \
		$(MAKE)	install;

clean:
	for dir in $(SUBDIR); do \
		$(MAKE) -C $$dir clean; \
	done;
	cd $(OPENSTADIR) && $(MAKE) distclean && rm -rf install-sp > /dev/null 2>&1; true
	cd $(HASHDIR) && $(MAKE) distclean && rm -rf install > /dev/null 2&>1; true
	$(MAKE) -C $(REPLACEDIR) clean;

.PHONY: test
test:
	@sh test/test.sh
