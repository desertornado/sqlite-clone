//
// Created by andrea on 25/06/25.
//

#ifndef DATABASE_H
#define DATABASE_H
#include <memory>
#include <string>
#include <vector>

#include "DBDataTypes/schema.h"
#include "DBDataTypes/Utils.h"

class DataBase {
private:
    typedef struct {
        uint8_t db_id;
        std::string db_name;
        std::pmr::vector<std::unique_ptr<schema> > schemas;
        std::string db_path;
        std::string connection_protocol;
        std::string connection_host;
        uint16_t connection_port;
    } data_base;

    std::shared_ptr<data_base> db;

public:
    DataBase(const data_base &filled_data) {
        // TBD, excpetion maybe? Custom one?

        if (filled_data.db_path.empty() || filled_data.db_name.empty() || filled_data.schemas.at(0) == nullptr)
            throw new std::exception;

        std::shared_ptr<data_base> new_db = std::shared_ptr<data_base>();

        if (filled_data.db_name.data())
            new_db->data_base->db_name = filled_data.db_name;
        else
            throw new std::exception;

        if (filled_data.schemas.data())
            new_db->data_base->schemas = filled_data.schemas;
        else
            throw new std::exception;


        //normal flow will use some antipattern to achieve faster memory usage
        new_db = std::shared_ptr<data_base>();
        new_db.get()->db_name = filled_data.db_name;
        db = std::make_shared<data_base>(filled_data);
    };

    ~DataBase() {
    };
};

#endif //DATABASE_H
