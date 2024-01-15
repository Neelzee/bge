#pragma once

#include <type_traits>

struct BDSLType {};

struct BDSLi32 : BDSLType {};

struct BDSLf32 : BDSLType {};

struct BDSLBool : BDSLType {};

struct BDSLCard : BDSLType {};

struct BDSLBoard : BDSLType {};

struct BDSLTile : BDSLType {};

struct BDSLPlayer : BDSLType {};

template<typename T>
requires std::is_base_of<BDSLType, T>::value
struct BDSLList : BDSLType {};

