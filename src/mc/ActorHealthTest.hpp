/**
 * @file  ActorHealthTest.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "FilterTest.hpp"
#include "Json.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class ActorHealthTest : public FilterTest {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORHEALTHTEST
public:
    class ActorHealthTest& operator=(class ActorHealthTest const &) = delete;
    ActorHealthTest(class ActorHealthTest const &) = delete;
    ActorHealthTest() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ActorHealthTest();
    /**
     * @vftbl  2
     * @symbol  ?evaluate\@ActorHealthTest\@\@UEBA_NAEBUFilterContext\@\@\@Z
     */
    virtual bool evaluate(struct FilterContext const &) const;
    /**
     * @vftbl  4
     * @symbol  ?getName\@ActorHealthTest\@\@UEBA?AV?$basic_string_span\@$$CBD$0?0\@gsl\@\@XZ
     */
    virtual class gsl::basic_string_span<char const, -1> getName() const;

};