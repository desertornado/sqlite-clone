//
// Created by andrea on 20/05/25.
//

#ifndef DATATYPES_H
#define DATATYPES_H
#include <bits/locale_facets_nonio.h>

typedef enum {
    SELECT_STATEMENT,
    INSERT_STATEMENT,
    UPDATE_STATEMENT,
    DELETE_STATEMENT,
    UNRECOGNIZED_STATEMENT
} StatementType;


typedef struct {
    StatementType type;
    std::string statement;
} Statement;


#endif //DATATYPES_H
