//
// Created by andrea on 05/07/25.
//

#ifndef SIMPLE_R_W_OP_SMALL_DB_H
#define SIMPLE_R_W_OP_SMALL_DB_H
#include <string>
#include <vector>


class Simple_R_W_Op_Small_DB {

    typedef struct {
        std::string table_name;
        std::vector<mock_column> columns;
    } mock_table;

    typedef struct {
        std::string column_name;
        std::string column_value;
    } mock_column;

public:
    /**
     * single table, single column, single row
     */
    Simple_R_W_Op_Small_DB() {
        mock_column mc;
        mc.column_name = "singleton mock col";
        mc.column_value = "value";
        mock_table mt;
        mt.table_name = "singleton mock table";
        mt.columns.push_back(mc);
    };

    /**
     * single column, multiple rows (basically a list)
     * @param row_values
     * @param col_name
     */
    Simple_R_W_Op_Small_DB(std::vector<std::string> row_values, std::string col_name) {
        mock_table mt;
        mock_column mc;
        mc.column_name = col_name;
        for (std::string row_value : row_values) {
            mc.column_value.append(row_value);
        }
    }

    ~Simple_R_W_Op_Small_DB();

};



#endif //SIMPLE_R_W_OP_SMALL_DB_H
