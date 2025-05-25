//
// Created by andrea on 20/05/25.
//

#include "DataTypes.hpp"



Statement prepare(StatementType statementType, std::string statement) {

    return Statement{statementType, statement};
}
