//
// Created by andrea on 05/07/25.
//

#ifndef SIMPLE_R_W_OP_SMALL_DB_H
#define SIMPLE_R_W_OP_SMALL_DB_H



class Simple_R_W_Op_Small_DB {

    typedef struct {
        std::string table_name;
        vector<mock_column> columns;
    } mock_table;

    typedef struct {
        std::string column_name;
        std:string column_value;
    } mock_column;

public:

};



#endif //SIMPLE_R_W_OP_SMALL_DB_H
