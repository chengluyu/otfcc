#ifndef CARYLL_INCLUDE_TABLE_LTSH_H
#define CARYLL_INCLUDE_TABLE_LTSH_H

#include "table-common.h"

typedef struct {
	uint16_t version;
	glyphid_t numGlyphs;
	uint8_t *yPels;
} table_LTSH;

#endif
