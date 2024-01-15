//
// Created by nilsi on 15.01.2024.
//

#include "BDSLToken.h"

#include <utility>

SymbolToken::SymbolToken(std::string str) : str(std::move(str)) {}

const std::string &SymbolToken::getStr() const {
  return str;
}

DelimiterToken::DelimiterToken(BDSLDelimiter delimiterToken, BDSLDelimiterType delimiterType) : delimiterToken(
        delimiterToken), delimiterType(delimiterType) {}

BDSLDelimiter DelimiterToken::getDelimiterToken() const {
  return this->delimiterToken;
}

BDSLDelimiterType DelimiterToken::getDelimiterType() const {
  return this->delimiterType;
}

KeyWordToken::KeyWordToken(BDSLKeyWord keyWord) : keyWord(keyWord) {}

BDSLKeyWord KeyWordToken::getKeyWord() const {
  return this->keyWord;
}

BoolOperatorToken::BoolOperatorToken(BDSLBoolOperator op) : op(op) {}

BDSLBoolOperator BoolOperatorToken::getOp() const {
  return this->op;
}

NumericOperatorToken::NumericOperatorToken(BDSLNumericOperator op) : op(op) {}

BDSLNumericOperator NumericOperatorToken::getOp() const {
  return op;
}
