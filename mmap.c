#ifdef HAVE_CONFIG_H
#include "config.h"
#endif
#include "php.h"
#include "php_mmap.h"

#include <fcntl.h>
#include <sys/types.h>
#include <sys/mman.h>

static zend_function_entry mmap_functions[] = {
    PHP_FE(mmap_open, NULL)
    {NULL, NULL, NULL}
};

zend_module_entry mmap_module_entry = {
#if ZEND_MODULE_API_NO >= 20010901
    STANDARD_MODULE_HEADER,
#endif
    PHP_MMAP_EXTNAME,
    mmap_functions,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
#if ZEND_MODULE_API_NO >= 20010901
    PHP_MMAP_VERSION,
#endif
    STANDARD_MODULE_PROPERTIES
};

#ifdef COMPILE_DL_MMAP
ZEND_GET_MODULE(mmap)
#endif


php_stream_ops mmap_ops = {
	NULL, 
	NULL, 
	NULL



size_t mmap_write(php_stream * stream, char *buf, size_t count TSRMLS_DC) {
	if(wrote == 0) {
	}

size_t mmap_read(php_stream *stream, char *buf, size_t count TSRMLS_DC) {
	if(to_read == 0) {
	}
}


int mmap_seek(php_stream *stream, off_t offset, int whence, off_t *newoffset TSRMLS_DC) {
	switch(whence) {
			}
				*newoffset = (off_t) -1;
			return 0;
			}
			return 0;
		default:
	}


		munmap(data->base_pos, data->len);
	efree(data); 
	return 0;
PHP_FUNCTION(mmap_open) {
	long filename_len; 
	long block_size; 
	long offset; 
	int fd;
		return;
	}
	
	}
	data->base_pos = mpos;
	php_stream_to_zval(stream, return_value);