//
// Created by andrea on 07/06/25.
//

#include "schema.h"
#include "Utils.h"
#include <cstdint>
#include <string>

/**
 *
 */

#define COLUMN_USERNAME_SIZE 32
#define COLUMN_EMAIL_SIZE 255


typedef struct {
    std::uint32_t table_id;
    std::string schema_name;

    template<typename... Types>
    class Column {
    private:
        template<typename... Types>
        class ColumnnElement {
        private:
            // Class Members for Each Type
        public:
            // Constructor and Methods
        };
    };
} Table;

/*
explicit schema(std::string new_schema_name)
    : schema_name(new_schema_name) {
    table_id = set_uid();
}*/

uint32_t set_uid() {
    return Utils::generate_random();
}
