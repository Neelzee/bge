#pragma once

#include <string>
#include <concepts>
#include <type_traits>

enum BDSLKeyWord {
  For,
  If,
  Else,
  Continue,
  Break,
  Return,
  Let,
};

enum BDSLDelimiter {
  Parentheses,
  CurlyBrackets,
  SquareBrackets,
};

enum BDSLDelimiterType {
  Open,
  Closed,
};

enum BDSLBoolOperator {
  And,
  Or,
  Neg,
  Gt,
  Lt,
  Gte,
  Lte,
};

enum BDSLNumericOperator {
  Add,
  Sub,
  Umin,
  Mult,
  Div,
  Mod
};

struct BDSLToken {
};

struct KeyWordToken : BDSLToken {
  BDSLKeyWord keyWord;

  explicit KeyWordToken(BDSLKeyWord keyWord);

  BDSLKeyWord getKeyWord() const;
};

struct DelimiterToken : BDSLToken {
  BDSLDelimiter delimiterToken;
  BDSLDelimiterType delimiterType;

  DelimiterToken(BDSLDelimiter delimiterToken, BDSLDelimiterType delimiterType);

  BDSLDelimiter getDelimiterToken() const;

  BDSLDelimiterType getDelimiterType() const;
};

struct SymbolToken : BDSLToken {
  std::string str;

  explicit SymbolToken(std::string str);

  const std::string &getStr() const;
};

struct AssignmentToken : BDSLToken {
};

struct BoolOperatorToken : BDSLToken {
  BDSLBoolOperator op;

  explicit BoolOperatorToken(BDSLBoolOperator op);

  BDSLBoolOperator getOp() const;
};

struct NumericOperatorToken : BDSLToken {
  BDSLNumericOperator op;

  explicit NumericOperatorToken(BDSLNumericOperator op);

  BDSLNumericOperator getOp() const;
};


template<typename T>
requires (std::is_arithmetic_v<T>)
struct NumericToken : BDSLToken {
  T val;

  explicit NumericToken(T val) : val(val) {}

  T getVal() const {
    return val;
  }
};


struct EndToken : BDSLToken {};