#ifndef HERBARY_STD_DEFINE_STAIC_ASSERT_H_INCLUDED
#define HERBARY_STD_DEFINE_STAIC_ASSERT_H_INCLUDED

#undef HERBARY_STD_DEFINE_STAIC_ASSERT_H_INCLUDED_BOOL
#define HERBARY_STD_DEFINE_STAIC_ASSERT_H_INCLUDED_BOOL 1

#include "herbary/std/define/_Static_assert.h" // IWYU pragma: keep

#ifndef static_assert
#define static_assert _Static_assert
#endif // static_assert

#endif // HERBARY_STD_DEFINE_STAIC_ASSERT_H_INCLUDED
