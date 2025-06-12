//
// Created by andrea on 07/06/25.
//

#include "schema.h"
#include "Utils.h"
#include <string>
#include <bits/shared_ptr_base.h>

/**
 *
 */

#define COLUMN_NAME_SIZE 32
#define COLUMN_SIZE 255


typedef struct {
    std::uint32_t table_id;
    std::string table_name;

    class Column {
    private:
        uid_t col_uid = Utils::generate_random();
        std::string col_name;

        bool c_is_pk;
        std::__shared_ptr<Column> col_fk_referenceto;

        /***
         * IDFK how to define ts fn
         */
        std::byte col_values[];

    };

    class Row {
        private:
        uid_t row_uid = Utils::generate_random();
        std::byte value[];
    };
} Table;

/*
explicit schema(std::string new_schema_name)
    : schema_name(new_schema_name) {
    table_id = set_uid();
}*/


