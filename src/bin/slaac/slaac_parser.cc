// A Bison parser, made by GNU Bison 3.3.2.

// Skeleton implementation for Bison LALR(1) parsers in C++

// Copyright (C) 2002-2015, 2018-2019 Free Software Foundation, Inc.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

// As a special exception, you may create a larger work that contains
// part or all of the Bison parser skeleton and distribute that work
// under terms of your choice, so long as that work isn't itself a
// parser generator using the skeleton or a modified version thereof
// as a parser skeleton.  Alternatively, if you modify or redistribute
// the parser skeleton itself, you may (at your option) remove this
// special exception, which will cause the skeleton and the resulting
// Bison output files to be licensed under the GNU General Public
// License without this special exception.

// This special exception was added by the Free Software Foundation in
// version 2.2 of Bison.

// Undocumented macros, especially those whose name start with YY_,
// are private implementation details.  Do not rely on them.


// Take the name prefix into account.
#define yylex   slaac_lex



#include "slaac_parser.h"


// Unqualified %code blocks.
#line 33 "slaac_parser.yy" // lalr1.cc:435

#include <slaac/parser_context.h>

#line 51 "slaac_parser.cc" // lalr1.cc:435


#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> // FIXME: INFRINGES ON USER NAME SPACE.
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

// Whether we are compiled with exception support.
#ifndef YY_EXCEPTIONS
# if defined __GNUC__ && !defined __EXCEPTIONS
#  define YY_EXCEPTIONS 0
# else
#  define YY_EXCEPTIONS 1
# endif
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K].location)
/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

# ifndef YYLLOC_DEFAULT
#  define YYLLOC_DEFAULT(Current, Rhs, N)                               \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).begin  = YYRHSLOC (Rhs, 1).begin;                   \
          (Current).end    = YYRHSLOC (Rhs, N).end;                     \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).begin = (Current).end = YYRHSLOC (Rhs, 0).end;      \
        }                                                               \
    while (false)
# endif


// Suppress unused-variable warnings by "using" E.
#define YYUSE(E) ((void) (E))

// Enable debugging if requested.
#if SLAAC_DEBUG

// A pseudo ostream that takes yydebug_ into account.
# define YYCDEBUG if (yydebug_) (*yycdebug_)

# define YY_SYMBOL_PRINT(Title, Symbol)         \
  do {                                          \
    if (yydebug_)                               \
    {                                           \
      *yycdebug_ << Title << ' ';               \
      yy_print_ (*yycdebug_, Symbol);           \
      *yycdebug_ << '\n';                       \
    }                                           \
  } while (false)

# define YY_REDUCE_PRINT(Rule)          \
  do {                                  \
    if (yydebug_)                       \
      yy_reduce_print_ (Rule);          \
  } while (false)

# define YY_STACK_PRINT()               \
  do {                                  \
    if (yydebug_)                       \
      yystack_print_ ();                \
  } while (false)

#else // !SLAAC_DEBUG

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Symbol)  YYUSE (Symbol)
# define YY_REDUCE_PRINT(Rule)           static_cast<void> (0)
# define YY_STACK_PRINT()                static_cast<void> (0)

#endif // !SLAAC_DEBUG

#define yyerrok         (yyerrstatus_ = 0)
#define yyclearin       (yyla.clear ())

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)

#line 14 "slaac_parser.yy" // lalr1.cc:510
namespace isc { namespace slaac {
#line 146 "slaac_parser.cc" // lalr1.cc:510

  /* Return YYSTR after stripping away unnecessary quotes and
     backslashes, so that it's suitable for yyerror.  The heuristic is
     that double-quoting is unnecessary unless the string contains an
     apostrophe, a comma, or backslash (other than backslash-backslash).
     YYSTR is taken from yytname.  */
  std::string
  SlaacParser::yytnamerr_ (const char *yystr)
  {
    if (*yystr == '"')
      {
        std::string yyr;
        char const *yyp = yystr;

        for (;;)
          switch (*++yyp)
            {
            case '\'':
            case ',':
              goto do_not_strip_quotes;

            case '\\':
              if (*++yyp != '\\')
                goto do_not_strip_quotes;
              else
                goto append;

            append:
            default:
              yyr += *yyp;
              break;

            case '"':
              return yyr;
            }
      do_not_strip_quotes: ;
      }

    return yystr;
  }


  /// Build a parser object.
  SlaacParser::SlaacParser (isc::slaac::ParserContext& ctx_yyarg)
    :
#if SLAAC_DEBUG
      yydebug_ (false),
      yycdebug_ (&std::cerr),
#endif
      ctx (ctx_yyarg)
  {}

  SlaacParser::~SlaacParser ()
  {}

  SlaacParser::syntax_error::~syntax_error () YY_NOEXCEPT YY_NOTHROW
  {}

  /*---------------.
  | Symbol types.  |
  `---------------*/



  // by_state.
  SlaacParser::by_state::by_state () YY_NOEXCEPT
    : state (empty_state)
  {}

  SlaacParser::by_state::by_state (const by_state& that) YY_NOEXCEPT
    : state (that.state)
  {}

  void
  SlaacParser::by_state::clear () YY_NOEXCEPT
  {
    state = empty_state;
  }

  void
  SlaacParser::by_state::move (by_state& that)
  {
    state = that.state;
    that.clear ();
  }

  SlaacParser::by_state::by_state (state_type s) YY_NOEXCEPT
    : state (s)
  {}

  SlaacParser::symbol_number_type
  SlaacParser::by_state::type_get () const YY_NOEXCEPT
  {
    if (state == empty_state)
      return empty_symbol;
    else
      return yystos_[state];
  }

  SlaacParser::stack_symbol_type::stack_symbol_type ()
  {}

  SlaacParser::stack_symbol_type::stack_symbol_type (YY_RVREF (stack_symbol_type) that)
    : super_type (YY_MOVE (that.state), YY_MOVE (that.location))
  {
    switch (that.type_get ())
    {
      case 38: // value
      case 41: // map_value
        value.YY_MOVE_OR_COPY< ElementPtr > (YY_MOVE (that.value));
        break;

      case 29: // "boolean"
        value.YY_MOVE_OR_COPY< bool > (YY_MOVE (that.value));
        break;

      case 28: // "floating point"
        value.YY_MOVE_OR_COPY< double > (YY_MOVE (that.value));
        break;

      case 27: // "integer"
        value.YY_MOVE_OR_COPY< int64_t > (YY_MOVE (that.value));
        break;

      case 26: // "constant string"
        value.YY_MOVE_OR_COPY< std::string > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

#if 201103L <= YY_CPLUSPLUS
    // that is emptied.
    that.state = empty_state;
#endif
  }

  SlaacParser::stack_symbol_type::stack_symbol_type (state_type s, YY_MOVE_REF (symbol_type) that)
    : super_type (s, YY_MOVE (that.location))
  {
    switch (that.type_get ())
    {
      case 38: // value
      case 41: // map_value
        value.move< ElementPtr > (YY_MOVE (that.value));
        break;

      case 29: // "boolean"
        value.move< bool > (YY_MOVE (that.value));
        break;

      case 28: // "floating point"
        value.move< double > (YY_MOVE (that.value));
        break;

      case 27: // "integer"
        value.move< int64_t > (YY_MOVE (that.value));
        break;

      case 26: // "constant string"
        value.move< std::string > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

    // that is emptied.
    that.type = empty_symbol;
  }

#if YY_CPLUSPLUS < 201103L
  SlaacParser::stack_symbol_type&
  SlaacParser::stack_symbol_type::operator= (stack_symbol_type& that)
  {
    state = that.state;
    switch (that.type_get ())
    {
      case 38: // value
      case 41: // map_value
        value.move< ElementPtr > (that.value);
        break;

      case 29: // "boolean"
        value.move< bool > (that.value);
        break;

      case 28: // "floating point"
        value.move< double > (that.value);
        break;

      case 27: // "integer"
        value.move< int64_t > (that.value);
        break;

      case 26: // "constant string"
        value.move< std::string > (that.value);
        break;

      default:
        break;
    }

    location = that.location;
    // that is emptied.
    that.state = empty_state;
    return *this;
  }
#endif

  template <typename Base>
  void
  SlaacParser::yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const
  {
    if (yymsg)
      YY_SYMBOL_PRINT (yymsg, yysym);
  }

#if SLAAC_DEBUG
  template <typename Base>
  void
  SlaacParser::yy_print_ (std::ostream& yyo,
                                     const basic_symbol<Base>& yysym) const
  {
    std::ostream& yyoutput = yyo;
    YYUSE (yyoutput);
    symbol_number_type yytype = yysym.type_get ();
#if defined __GNUC__ && ! defined __clang__ && ! defined __ICC && __GNUC__ * 100 + __GNUC_MINOR__ <= 408
    // Avoid a (spurious) G++ 4.8 warning about "array subscript is
    // below array bounds".
    if (yysym.empty ())
      std::abort ();
#endif
    yyo << (yytype < yyntokens_ ? "token" : "nterm")
        << ' ' << yytname_[yytype] << " ("
        << yysym.location << ": ";
    switch (yytype)
    {
      case 26: // "constant string"
#line 84 "slaac_parser.yy" // lalr1.cc:676
        { yyoutput << yysym.value.template as < std::string > (); }
#line 389 "slaac_parser.cc" // lalr1.cc:676
        break;

      case 27: // "integer"
#line 84 "slaac_parser.yy" // lalr1.cc:676
        { yyoutput << yysym.value.template as < int64_t > (); }
#line 395 "slaac_parser.cc" // lalr1.cc:676
        break;

      case 28: // "floating point"
#line 84 "slaac_parser.yy" // lalr1.cc:676
        { yyoutput << yysym.value.template as < double > (); }
#line 401 "slaac_parser.cc" // lalr1.cc:676
        break;

      case 29: // "boolean"
#line 84 "slaac_parser.yy" // lalr1.cc:676
        { yyoutput << yysym.value.template as < bool > (); }
#line 407 "slaac_parser.cc" // lalr1.cc:676
        break;

      case 38: // value
#line 84 "slaac_parser.yy" // lalr1.cc:676
        { yyoutput << yysym.value.template as < ElementPtr > (); }
#line 413 "slaac_parser.cc" // lalr1.cc:676
        break;

      case 41: // map_value
#line 84 "slaac_parser.yy" // lalr1.cc:676
        { yyoutput << yysym.value.template as < ElementPtr > (); }
#line 419 "slaac_parser.cc" // lalr1.cc:676
        break;

      default:
        break;
    }
    yyo << ')';
  }
#endif

  void
  SlaacParser::yypush_ (const char* m, YY_MOVE_REF (stack_symbol_type) sym)
  {
    if (m)
      YY_SYMBOL_PRINT (m, sym);
    yystack_.push (YY_MOVE (sym));
  }

  void
  SlaacParser::yypush_ (const char* m, state_type s, YY_MOVE_REF (symbol_type) sym)
  {
#if 201103L <= YY_CPLUSPLUS
    yypush_ (m, stack_symbol_type (s, std::move (sym)));
#else
    stack_symbol_type ss (s, sym);
    yypush_ (m, ss);
#endif
  }

  void
  SlaacParser::yypop_ (int n)
  {
    yystack_.pop (n);
  }

#if SLAAC_DEBUG
  std::ostream&
  SlaacParser::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  SlaacParser::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  SlaacParser::debug_level_type
  SlaacParser::debug_level () const
  {
    return yydebug_;
  }

  void
  SlaacParser::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif // SLAAC_DEBUG

  SlaacParser::state_type
  SlaacParser::yy_lr_goto_state_ (state_type yystate, int yysym)
  {
    int yyr = yypgoto_[yysym - yyntokens_] + yystate;
    if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
      return yytable_[yyr];
    else
      return yydefgoto_[yysym - yyntokens_];
  }

  bool
  SlaacParser::yy_pact_value_is_default_ (int yyvalue)
  {
    return yyvalue == yypact_ninf_;
  }

  bool
  SlaacParser::yy_table_value_is_error_ (int yyvalue)
  {
    return yyvalue == yytable_ninf_;
  }

  int
  SlaacParser::operator() ()
  {
    return parse ();
  }

  int
  SlaacParser::parse ()
  {
    // State.
    int yyn;
    /// Length of the RHS of the rule being reduced.
    int yylen = 0;

    // Error handling.
    int yynerrs_ = 0;
    int yyerrstatus_ = 0;

    /// The lookahead symbol.
    symbol_type yyla;

    /// The locations where the error started and ended.
    stack_symbol_type yyerror_range[3];

    /// The return value of parse ().
    int yyresult;

#if YY_EXCEPTIONS
    try
#endif // YY_EXCEPTIONS
      {
    YYCDEBUG << "Starting parse\n";


    /* Initialize the stack.  The initial state will be set in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystack_.clear ();
    yypush_ (YY_NULLPTR, 0, YY_MOVE (yyla));

  /*-----------------------------------------------.
  | yynewstate -- push a new symbol on the stack.  |
  `-----------------------------------------------*/
  yynewstate:
    YYCDEBUG << "Entering state " << yystack_[0].state << '\n';

    // Accept?
    if (yystack_[0].state == yyfinal_)
      YYACCEPT;

    goto yybackup;


  /*-----------.
  | yybackup.  |
  `-----------*/
  yybackup:
    // Try to take a decision without lookahead.
    yyn = yypact_[yystack_[0].state];
    if (yy_pact_value_is_default_ (yyn))
      goto yydefault;

    // Read a lookahead token.
    if (yyla.empty ())
      {
        YYCDEBUG << "Reading a token: ";
#if YY_EXCEPTIONS
        try
#endif // YY_EXCEPTIONS
          {
            symbol_type yylookahead (yylex (ctx));
            yyla.move (yylookahead);
          }
#if YY_EXCEPTIONS
        catch (const syntax_error& yyexc)
          {
            YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
            error (yyexc);
            goto yyerrlab1;
          }
#endif // YY_EXCEPTIONS
      }
    YY_SYMBOL_PRINT ("Next token is", yyla);

    /* If the proper action on seeing token YYLA.TYPE is to reduce or
       to detect an error, take that action.  */
    yyn += yyla.type_get ();
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yyla.type_get ())
      goto yydefault;

    // Reduce or error.
    yyn = yytable_[yyn];
    if (yyn <= 0)
      {
        if (yy_table_value_is_error_ (yyn))
          goto yyerrlab;
        yyn = -yyn;
        goto yyreduce;
      }

    // Count tokens shifted since error; after three, turn off error status.
    if (yyerrstatus_)
      --yyerrstatus_;

    // Shift the lookahead token.
    yypush_ ("Shifting", yyn, YY_MOVE (yyla));
    goto yynewstate;


  /*-----------------------------------------------------------.
  | yydefault -- do the default action for the current state.  |
  `-----------------------------------------------------------*/
  yydefault:
    yyn = yydefact_[yystack_[0].state];
    if (yyn == 0)
      goto yyerrlab;
    goto yyreduce;


  /*-----------------------------.
  | yyreduce -- do a reduction.  |
  `-----------------------------*/
  yyreduce:
    yylen = yyr2_[yyn];
    {
      stack_symbol_type yylhs;
      yylhs.state = yy_lr_goto_state_ (yystack_[yylen].state, yyr1_[yyn]);
      /* Variants are always initialized to an empty instance of the
         correct type. The default '$$ = $1' action is NOT applied
         when using variants.  */
      switch (yyr1_[yyn])
    {
      case 38: // value
      case 41: // map_value
        yylhs.value.emplace< ElementPtr > ();
        break;

      case 29: // "boolean"
        yylhs.value.emplace< bool > ();
        break;

      case 28: // "floating point"
        yylhs.value.emplace< double > ();
        break;

      case 27: // "integer"
        yylhs.value.emplace< int64_t > ();
        break;

      case 26: // "constant string"
        yylhs.value.emplace< std::string > ();
        break;

      default:
        break;
    }


      // Default location.
      {
        stack_type::slice range (yystack_, yylen);
        YYLLOC_DEFAULT (yylhs.location, range, yylen);
        yyerror_range[1].location = yylhs.location;
      }

      // Perform the reduction.
      YY_REDUCE_PRINT (yyn);
#if YY_EXCEPTIONS
      try
#endif // YY_EXCEPTIONS
        {
          switch (yyn)
            {
  case 2:
#line 95 "slaac_parser.yy" // lalr1.cc:919
    { ctx.ctx_ = ctx.NO_KEYWORDS; }
#line 680 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 4:
#line 96 "slaac_parser.yy" // lalr1.cc:919
    { ctx.ctx_ = ctx.CONFIG; }
#line 686 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 6:
#line 97 "slaac_parser.yy" // lalr1.cc:919
    { ctx.ctx_ = ctx.SLAAC; }
#line 692 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 8:
#line 105 "slaac_parser.yy" // lalr1.cc:919
    {
    // Parse the Slaac map
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.push_back(m);
}
#line 702 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 9:
#line 109 "slaac_parser.yy" // lalr1.cc:919
    {
    // parsing completed
}
#line 710 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 10:
#line 116 "slaac_parser.yy" // lalr1.cc:919
    {
    // Push back the JSON value on the stack
    ctx.stack_.push_back(yystack_[0].value.as < ElementPtr > ());
}
#line 719 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 11:
#line 122 "slaac_parser.yy" // lalr1.cc:919
    { yylhs.value.as < ElementPtr > () = ElementPtr(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location))); }
#line 725 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 12:
#line 123 "slaac_parser.yy" // lalr1.cc:919
    { yylhs.value.as < ElementPtr > () = ElementPtr(new DoubleElement(yystack_[0].value.as < double > (), ctx.loc2pos(yystack_[0].location))); }
#line 731 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 13:
#line 124 "slaac_parser.yy" // lalr1.cc:919
    { yylhs.value.as < ElementPtr > () = ElementPtr(new BoolElement(yystack_[0].value.as < bool > (), ctx.loc2pos(yystack_[0].location))); }
#line 737 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 14:
#line 125 "slaac_parser.yy" // lalr1.cc:919
    { yylhs.value.as < ElementPtr > () = ElementPtr(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location))); }
#line 743 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 15:
#line 126 "slaac_parser.yy" // lalr1.cc:919
    { yylhs.value.as < ElementPtr > () = ElementPtr(new NullElement(ctx.loc2pos(yystack_[0].location))); }
#line 749 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 16:
#line 127 "slaac_parser.yy" // lalr1.cc:919
    { yylhs.value.as < ElementPtr > () = ctx.stack_.back(); ctx.stack_.pop_back(); }
#line 755 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 17:
#line 128 "slaac_parser.yy" // lalr1.cc:919
    { yylhs.value.as < ElementPtr > () = ctx.stack_.back(); ctx.stack_.pop_back(); }
#line 761 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 18:
#line 132 "slaac_parser.yy" // lalr1.cc:919
    {
    // This code is executed when we're about to start parsing
    // the content of the map
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.push_back(m);
}
#line 772 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 19:
#line 137 "slaac_parser.yy" // lalr1.cc:919
    {
    // map parsing completed. If we ever want to do any wrap up
    // (maybe some sanity checking), this would be the best place
    // for it.
}
#line 782 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 20:
#line 143 "slaac_parser.yy" // lalr1.cc:919
    { yylhs.value.as < ElementPtr > () = ctx.stack_.back(); ctx.stack_.pop_back(); }
#line 788 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 23:
#line 157 "slaac_parser.yy" // lalr1.cc:919
    {
                  // map containing a single entry
                  ctx.stack_.back()->set(yystack_[2].value.as < std::string > (), yystack_[0].value.as < ElementPtr > ());
                  }
#line 797 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 24:
#line 161 "slaac_parser.yy" // lalr1.cc:919
    {
                  // map consisting of a shorter map followed by
                  // comma and string:value
                  ctx.stack_.back()->set(yystack_[2].value.as < std::string > (), yystack_[0].value.as < ElementPtr > ());
                  }
#line 807 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 25:
#line 168 "slaac_parser.yy" // lalr1.cc:919
    {
    ElementPtr l(new ListElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.push_back(l);
}
#line 816 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 26:
#line 171 "slaac_parser.yy" // lalr1.cc:919
    {
}
#line 823 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 29:
#line 178 "slaac_parser.yy" // lalr1.cc:919
    {
                  // List consisting of a single element.
                  ctx.stack_.back()->add(yystack_[0].value.as < ElementPtr > ());
                  }
#line 832 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 30:
#line 182 "slaac_parser.yy" // lalr1.cc:919
    {
                  // List ending with , and a value.
                  ctx.stack_.back()->add(yystack_[0].value.as < ElementPtr > ());
                  }
#line 841 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 31:
#line 195 "slaac_parser.yy" // lalr1.cc:919
    {
    const std::string& where = ctx.contextName();
    const std::string& keyword = yystack_[1].value.as < std::string > ();
    error(yystack_[1].location,
          "got unexpected keyword \"" + keyword + "\" in " + where + " map.");
}
#line 852 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 32:
#line 203 "slaac_parser.yy" // lalr1.cc:919
    {
    // This code is executed when we're about to start parsing
    // the content of the map
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.push_back(m);
}
#line 863 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 33:
#line 208 "slaac_parser.yy" // lalr1.cc:919
    {
    // map parsing completed. If we ever want to do any wrap up
    // (maybe some sanity checking), this would be the best place
    // for it.
}
#line 873 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 38:
#line 225 "slaac_parser.yy" // lalr1.cc:919
    {

    // Let's create a MapElement that will represent it, add it to the
    // top level map (that's already on the stack) and put the new map
    // on the stack as well, so child elements will be able to add
    // themselves to it.
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("Slaac", m);
    ctx.stack_.push_back(m);
    ctx.enter(ctx.SLAAC);
}
#line 889 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 39:
#line 235 "slaac_parser.yy" // lalr1.cc:919
    {
    // Ok, we're done with parsing Slaac. Let's take the map
    // off the stack.
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 900 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 47:
#line 258 "slaac_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORDS);
}
#line 908 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 48:
#line 260 "slaac_parser.yy" // lalr1.cc:919
    {
    ElementPtr parent = ctx.stack_.back();
    ElementPtr user_context = yystack_[0].value.as < ElementPtr > ();
    ConstElementPtr old = parent->get("user-context");

    // Handle already existing user context
    if (old) {
        // Check if it was a comment or a duplicate
        if ((old->size() != 1) || !old->contains("comment")) {
            std::stringstream msg;
            msg << "duplicate user-context entries (previous at "
                << old->getPosition().str() << ")";
            error(yystack_[3].location, msg.str());
        }
        // Merge the comment
        user_context->set("comment", old->get("comment"));
    }

    // Set the user context
    parent->set("user-context", user_context);
    ctx.leave();
}
#line 935 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 49:
#line 283 "slaac_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORDS);
}
#line 943 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 50:
#line 285 "slaac_parser.yy" // lalr1.cc:919
    {
    ElementPtr parent = ctx.stack_.back();
    ElementPtr user_context(new MapElement(ctx.loc2pos(yystack_[3].location)));
    ElementPtr comment(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    user_context->set("comment", comment);

    // Handle already existing user context
    ConstElementPtr old = parent->get("user-context");
    if (old) {
        // Check for duplicate comment
        if (old->contains("comment")) {
            std::stringstream msg;
            msg << "duplicate user-context/comment entries (previous at "
                << old->getPosition().str() << ")";
            error(yystack_[3].location, msg.str());
        }
        // Merge the user context in the comment
        merge(user_context, old);
    }

    // Set the user context
    parent->set("user-context", user_context);
    ctx.leave();
}
#line 972 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 51:
#line 315 "slaac_parser.yy" // lalr1.cc:919
    {
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("Logging", m);
    ctx.stack_.push_back(m);
    ctx.enter(ctx.LOGGING);
}
#line 983 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 52:
#line 320 "slaac_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 992 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 56:
#line 337 "slaac_parser.yy" // lalr1.cc:919
    {
    ElementPtr l(new ListElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("loggers", l);
    ctx.stack_.push_back(l);
    ctx.enter(ctx.LOGGERS);
}
#line 1003 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 57:
#line 342 "slaac_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 1012 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 60:
#line 354 "slaac_parser.yy" // lalr1.cc:919
    {
    ElementPtr l(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->add(l);
    ctx.stack_.push_back(l);
}
#line 1022 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 61:
#line 358 "slaac_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.pop_back();
}
#line 1030 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 71:
#line 375 "slaac_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORDS);
}
#line 1038 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 72:
#line 377 "slaac_parser.yy" // lalr1.cc:919
    {
    ElementPtr name(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("name", name);
    ctx.leave();
}
#line 1048 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 73:
#line 383 "slaac_parser.yy" // lalr1.cc:919
    {
    ElementPtr dl(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("debuglevel", dl);
}
#line 1057 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 74:
#line 388 "slaac_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORDS);
}
#line 1065 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 75:
#line 390 "slaac_parser.yy" // lalr1.cc:919
    {
    ElementPtr sev(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("severity", sev);
    ctx.leave();
}
#line 1075 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 76:
#line 396 "slaac_parser.yy" // lalr1.cc:919
    {
    ElementPtr l(new ListElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("output_options", l);
    ctx.stack_.push_back(l);
    ctx.enter(ctx.OUTPUT_OPTIONS);
}
#line 1086 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 77:
#line 401 "slaac_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 1095 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 80:
#line 410 "slaac_parser.yy" // lalr1.cc:919
    {
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->add(m);
    ctx.stack_.push_back(m);
}
#line 1105 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 81:
#line 414 "slaac_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.pop_back();
}
#line 1113 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 88:
#line 428 "slaac_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORDS);
}
#line 1121 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 89:
#line 430 "slaac_parser.yy" // lalr1.cc:919
    {
    ElementPtr sev(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("output", sev);
    ctx.leave();
}
#line 1131 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 90:
#line 436 "slaac_parser.yy" // lalr1.cc:919
    {
    ElementPtr flush(new BoolElement(yystack_[0].value.as < bool > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("flush", flush);
}
#line 1140 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 91:
#line 441 "slaac_parser.yy" // lalr1.cc:919
    {
    ElementPtr maxsize(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("maxsize", maxsize);
}
#line 1149 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 92:
#line 446 "slaac_parser.yy" // lalr1.cc:919
    {
    ElementPtr maxver(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("maxver", maxver);
}
#line 1158 "slaac_parser.cc" // lalr1.cc:919
    break;


#line 1162 "slaac_parser.cc" // lalr1.cc:919
            default:
              break;
            }
        }
#if YY_EXCEPTIONS
      catch (const syntax_error& yyexc)
        {
          YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
          error (yyexc);
          YYERROR;
        }
#endif // YY_EXCEPTIONS
      YY_SYMBOL_PRINT ("-> $$ =", yylhs);
      yypop_ (yylen);
      yylen = 0;
      YY_STACK_PRINT ();

      // Shift the result of the reduction.
      yypush_ (YY_NULLPTR, YY_MOVE (yylhs));
    }
    goto yynewstate;


  /*--------------------------------------.
  | yyerrlab -- here on detecting error.  |
  `--------------------------------------*/
  yyerrlab:
    // If not already recovering from an error, report this error.
    if (!yyerrstatus_)
      {
        ++yynerrs_;
        error (yyla.location, yysyntax_error_ (yystack_[0].state, yyla));
      }


    yyerror_range[1].location = yyla.location;
    if (yyerrstatus_ == 3)
      {
        /* If just tried and failed to reuse lookahead token after an
           error, discard it.  */

        // Return failure if at end of input.
        if (yyla.type_get () == yyeof_)
          YYABORT;
        else if (!yyla.empty ())
          {
            yy_destroy_ ("Error: discarding", yyla);
            yyla.clear ();
          }
      }

    // Else will try to reuse lookahead token after shifting the error token.
    goto yyerrlab1;


  /*---------------------------------------------------.
  | yyerrorlab -- error raised explicitly by YYERROR.  |
  `---------------------------------------------------*/
  yyerrorlab:
    /* Pacify compilers when the user code never invokes YYERROR and
       the label yyerrorlab therefore never appears in user code.  */
    if (false)
      YYERROR;

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYERROR.  */
    yypop_ (yylen);
    yylen = 0;
    goto yyerrlab1;


  /*-------------------------------------------------------------.
  | yyerrlab1 -- common code for both syntax error and YYERROR.  |
  `-------------------------------------------------------------*/
  yyerrlab1:
    yyerrstatus_ = 3;   // Each real token shifted decrements this.
    {
      stack_symbol_type error_token;
      for (;;)
        {
          yyn = yypact_[yystack_[0].state];
          if (!yy_pact_value_is_default_ (yyn))
            {
              yyn += yyterror_;
              if (0 <= yyn && yyn <= yylast_ && yycheck_[yyn] == yyterror_)
                {
                  yyn = yytable_[yyn];
                  if (0 < yyn)
                    break;
                }
            }

          // Pop the current state because it cannot handle the error token.
          if (yystack_.size () == 1)
            YYABORT;

          yyerror_range[1].location = yystack_[0].location;
          yy_destroy_ ("Error: popping", yystack_[0]);
          yypop_ ();
          YY_STACK_PRINT ();
        }

      yyerror_range[2].location = yyla.location;
      YYLLOC_DEFAULT (error_token.location, yyerror_range, 2);

      // Shift the error token.
      error_token.state = yyn;
      yypush_ ("Shifting", YY_MOVE (error_token));
    }
    goto yynewstate;


  /*-------------------------------------.
  | yyacceptlab -- YYACCEPT comes here.  |
  `-------------------------------------*/
  yyacceptlab:
    yyresult = 0;
    goto yyreturn;


  /*-----------------------------------.
  | yyabortlab -- YYABORT comes here.  |
  `-----------------------------------*/
  yyabortlab:
    yyresult = 1;
    goto yyreturn;


  /*-----------------------------------------------------.
  | yyreturn -- parsing is finished, return the result.  |
  `-----------------------------------------------------*/
  yyreturn:
    if (!yyla.empty ())
      yy_destroy_ ("Cleanup: discarding lookahead", yyla);

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYABORT or YYACCEPT.  */
    yypop_ (yylen);
    while (1 < yystack_.size ())
      {
        yy_destroy_ ("Cleanup: popping", yystack_[0]);
        yypop_ ();
      }

    return yyresult;
  }
#if YY_EXCEPTIONS
    catch (...)
      {
        YYCDEBUG << "Exception caught: cleaning lookahead and stack\n";
        // Do not try to display the values of the reclaimed symbols,
        // as their printers might throw an exception.
        if (!yyla.empty ())
          yy_destroy_ (YY_NULLPTR, yyla);

        while (1 < yystack_.size ())
          {
            yy_destroy_ (YY_NULLPTR, yystack_[0]);
            yypop_ ();
          }
        throw;
      }
#endif // YY_EXCEPTIONS
  }

  void
  SlaacParser::error (const syntax_error& yyexc)
  {
    error (yyexc.location, yyexc.what ());
  }

  // Generate an error message.
  std::string
  SlaacParser::yysyntax_error_ (state_type yystate, const symbol_type& yyla) const
  {
    // Number of reported tokens (one for the "unexpected", one per
    // "expected").
    size_t yycount = 0;
    // Its maximum.
    enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
    // Arguments of yyformat.
    char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];

    /* There are many possibilities here to consider:
       - If this state is a consistent state with a default action, then
         the only way this function was invoked is if the default action
         is an error action.  In that case, don't check for expected
         tokens because there are none.
       - The only way there can be no lookahead present (in yyla) is
         if this state is a consistent state with a default action.
         Thus, detecting the absence of a lookahead is sufficient to
         determine that there is no unexpected or expected token to
         report.  In that case, just report a simple "syntax error".
       - Don't assume there isn't a lookahead just because this state is
         a consistent state with a default action.  There might have
         been a previous inconsistent state, consistent state with a
         non-default action, or user semantic action that manipulated
         yyla.  (However, yyla is currently not documented for users.)
       - Of course, the expected token list depends on states to have
         correct lookahead information, and it depends on the parser not
         to perform extra reductions after fetching a lookahead from the
         scanner and before detecting a syntax error.  Thus, state
         merging (from LALR or IELR) and default reductions corrupt the
         expected token list.  However, the list is correct for
         canonical LR with one exception: it will still contain any
         token that will not be accepted due to an error action in a
         later state.
    */
    if (!yyla.empty ())
      {
        int yytoken = yyla.type_get ();
        yyarg[yycount++] = yytname_[yytoken];
        int yyn = yypact_[yystate];
        if (!yy_pact_value_is_default_ (yyn))
          {
            /* Start YYX at -YYN if negative to avoid negative indexes in
               YYCHECK.  In other words, skip the first -YYN actions for
               this state because they are default actions.  */
            int yyxbegin = yyn < 0 ? -yyn : 0;
            // Stay within bounds of both yycheck and yytname.
            int yychecklim = yylast_ - yyn + 1;
            int yyxend = yychecklim < yyntokens_ ? yychecklim : yyntokens_;
            for (int yyx = yyxbegin; yyx < yyxend; ++yyx)
              if (yycheck_[yyx + yyn] == yyx && yyx != yyterror_
                  && !yy_table_value_is_error_ (yytable_[yyx + yyn]))
                {
                  if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                    {
                      yycount = 1;
                      break;
                    }
                  else
                    yyarg[yycount++] = yytname_[yyx];
                }
          }
      }

    char const* yyformat = YY_NULLPTR;
    switch (yycount)
      {
#define YYCASE_(N, S)                         \
        case N:                               \
          yyformat = S;                       \
        break
      default: // Avoid compiler warnings.
        YYCASE_ (0, YY_("syntax error"));
        YYCASE_ (1, YY_("syntax error, unexpected %s"));
        YYCASE_ (2, YY_("syntax error, unexpected %s, expecting %s"));
        YYCASE_ (3, YY_("syntax error, unexpected %s, expecting %s or %s"));
        YYCASE_ (4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
        YYCASE_ (5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
      }

    std::string yyres;
    // Argument number.
    size_t yyi = 0;
    for (char const* yyp = yyformat; *yyp; ++yyp)
      if (yyp[0] == '%' && yyp[1] == 's' && yyi < yycount)
        {
          yyres += yytnamerr_ (yyarg[yyi++]);
          ++yyp;
        }
      else
        yyres += *yyp;
    return yyres;
  }


  const signed char SlaacParser::yypact_ninf_ = -88;

  const signed char SlaacParser::yytable_ninf_ = -1;

  const signed char
  SlaacParser::yypact_[] =
  {
      28,   -88,   -88,   -88,     2,    -4,    -3,    27,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,    -4,    -6,    30,     7,   -88,    39,
      46,    50,    47,    53,   -88,   -88,     3,   -88,   -88,   -88,
     -88,   -88,    54,   -88,    49,    56,   -88,   -88,   -88,   -88,
      -4,    -4,   -88,    35,    58,    59,    30,   -88,    60,    61,
     -88,   -88,     7,   -88,   -88,    62,    63,    64,   -88,    65,
      41,   -88,    -4,     7,    55,   -88,   -88,   -88,   -88,    52,
     -88,     9,   -88,   -88,   -88,    69,    55,   -88,    70,   -88,
      67,   -88,    38,   -88,    20,    67,   -88,   -88,   -88,    72,
     -88,   -88,   -88,   -88,    13,   -88,   -88,   -88,   -88,   -88,
     -88,    73,    74,    57,    75,    20,   -88,    42,    76,   -88,
      66,   -88,   -88,    78,   -88,   -88,    44,   -88,    -7,    78,
     -88,   -88,    79,    82,    83,    34,   -88,   -88,   -88,   -88,
     -88,   -88,    84,    51,    68,    71,    -7,   -88,    77,   -88,
     -88,   -88,   -88,   -88
  };

  const unsigned char
  SlaacParser::yydefact_[] =
  {
       0,     2,     4,     6,     0,     0,     0,     0,     1,    25,
      18,    15,    14,    11,    12,    13,     3,    10,    16,    17,
      32,     5,     8,     7,    27,    21,     0,    40,    29,     0,
      28,     0,     0,    22,    38,    51,     0,    34,    36,    37,
      47,    49,     0,    46,     0,    41,    42,    44,    45,    26,
       0,     0,    19,     0,     0,     0,     0,    33,     0,     0,
      31,     9,     0,    30,    23,     0,     0,     0,    35,     0,
       0,    43,     0,    40,     0,    20,    48,    50,    24,     0,
      56,     0,    53,    55,    39,     0,     0,    52,     0,    54,
       0,    60,     0,    58,     0,     0,    57,    71,    76,     0,
      74,    70,    68,    69,     0,    62,    64,    66,    67,    65,
      59,     0,     0,     0,     0,     0,    61,     0,     0,    73,
       0,    63,    72,     0,    75,    80,     0,    78,     0,     0,
      77,    88,     0,     0,     0,     0,    82,    84,    85,    86,
      87,    79,     0,     0,     0,     0,     0,    81,     0,    90,
      91,    92,    83,    89
  };

  const signed char
  SlaacParser::yypgoto_[] =
  {
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -24,    21,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -87,   -88,
     -88,   -88,    26,   -88,   -88,    16,   -88,    29,   -86,   -88,
     -85,   -88,   -88,   -88,   -88,     8,   -88,   -88,   -88,    -2,
     -88,   -88,   -19,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -32,   -88,   -88,   -47,   -88,   -88,   -88,   -88,   -88
  };

  const short
  SlaacParser::yydefgoto_[] =
  {
      -1,     4,     5,     6,     7,    23,    27,    16,    17,    18,
      25,    76,    32,    33,    19,    24,    29,    30,    43,    21,
      26,    36,    37,    38,    54,    44,    45,    46,    47,    58,
      48,    59,    39,    55,    81,    82,    83,    85,    92,    93,
      94,   104,   105,   106,   111,   107,   108,   114,   109,   112,
     126,   127,   128,   135,   136,   137,   142,   138,   139,   140
  };

  const unsigned char
  SlaacParser::yytable_[] =
  {
      28,     9,     8,    10,    20,    11,    56,   101,   102,   103,
     131,    57,    86,   132,   133,   134,   115,    87,    40,    41,
      31,   116,    12,    13,    14,    15,    63,    64,   101,   102,
     103,    40,    41,    42,    22,    97,    98,   146,    99,   100,
      34,    95,   147,    35,    96,    49,    42,   129,    78,    50,
     130,     1,     2,     3,    51,    52,    53,    61,    60,    62,
      84,    65,    66,    67,    69,    70,    72,    77,   122,    80,
      73,    74,    10,    88,    91,    90,   113,   117,   118,   120,
     149,   123,    68,   143,   119,   125,   144,   145,   148,    79,
      75,    71,   124,   110,    89,   150,   121,   141,   151,   152,
       0,     0,     0,   153
  };

  const short
  SlaacParser::yycheck_[] =
  {
      24,     5,     0,     7,     7,     9,     3,    94,    94,    94,
      17,     8,     3,    20,    21,    22,     3,     8,    11,    12,
      26,     8,    26,    27,    28,    29,    50,    51,   115,   115,
     115,    11,    12,    26,     7,    15,    16,     3,    18,    19,
      10,     3,     8,    13,     6,     6,    26,     3,    72,     3,
       6,    23,    24,    25,     4,     8,     3,     8,     4,     3,
       8,    26,     4,     4,     4,     4,     4,    26,    26,    14,
       7,     7,     7,     4,     7,     5,     4,     4,     4,     4,
      29,     5,    56,     4,    27,     7,     4,     4,     4,    73,
      69,    62,    26,    95,    86,    27,   115,   129,    27,   146,
      -1,    -1,    -1,    26
  };

  const unsigned char
  SlaacParser::yystos_[] =
  {
       0,    23,    24,    25,    31,    32,    33,    34,     0,     5,
       7,     9,    26,    27,    28,    29,    37,    38,    39,    44,
       7,    49,     7,    35,    45,    40,    50,    36,    38,    46,
      47,    26,    42,    43,    10,    13,    51,    52,    53,    62,
      11,    12,    26,    48,    55,    56,    57,    58,    60,     6,
       3,     4,     8,     3,    54,    63,     3,     8,    59,    61,
       4,     8,     3,    38,    38,    26,     4,     4,    52,     4,
       4,    57,     4,     7,     7,    39,    41,    26,    38,    55,
      14,    64,    65,    66,     8,    67,     3,     8,     4,    65,
       5,     7,    68,    69,    70,     3,     6,    15,    16,    18,
      19,    48,    58,    60,    71,    72,    73,    75,    76,    78,
      69,    74,    79,     4,    77,     3,     8,     4,     4,    27,
       4,    72,    26,     5,    26,     7,    80,    81,    82,     3,
       6,    17,    20,    21,    22,    83,    84,    85,    87,    88,
      89,    81,    86,     4,     4,     4,     3,     8,     4,    29,
      27,    27,    84,    26
  };

  const unsigned char
  SlaacParser::yyr1_[] =
  {
       0,    30,    32,    31,    33,    31,    34,    31,    36,    35,
      37,    38,    38,    38,    38,    38,    38,    38,    40,    39,
      41,    42,    42,    43,    43,    45,    44,    46,    46,    47,
      47,    48,    50,    49,    51,    51,    52,    52,    54,    53,
      55,    55,    56,    56,    57,    57,    57,    59,    58,    61,
      60,    63,    62,    64,    64,    65,    67,    66,    68,    68,
      70,    69,    71,    71,    72,    72,    72,    72,    72,    72,
      72,    74,    73,    75,    77,    76,    79,    78,    80,    80,
      82,    81,    83,    83,    84,    84,    84,    84,    86,    85,
      87,    88,    89
  };

  const unsigned char
  SlaacParser::yyr2_[] =
  {
       0,     2,     0,     3,     0,     3,     0,     3,     0,     4,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     4,
       1,     0,     1,     3,     5,     0,     4,     0,     1,     1,
       3,     2,     0,     4,     1,     3,     1,     1,     0,     6,
       0,     1,     1,     3,     1,     1,     1,     0,     4,     0,
       4,     0,     6,     1,     3,     1,     0,     6,     1,     3,
       0,     4,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     0,     4,     3,     0,     4,     0,     6,     1,     3,
       0,     4,     1,     3,     1,     1,     1,     1,     0,     4,
       3,     3,     3
  };



  // YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
  // First, the terminals, then, starting at \a yyntokens_, nonterminals.
  const char*
  const SlaacParser::yytname_[] =
  {
  "\"end of file\"", "error", "$undefined", "\",\"", "\":\"", "\"[\"",
  "\"]\"", "\"{\"", "\"}\"", "\"null\"", "\"Slaac\"", "\"user-context\"",
  "\"comment\"", "\"Logging\"", "\"loggers\"", "\"name\"",
  "\"output_options\"", "\"output\"", "\"debuglevel\"", "\"severity\"",
  "\"flush\"", "\"maxsize\"", "\"maxver\"", "START_JSON", "START_SLAAC",
  "START_SUB_SLAAC", "\"constant string\"", "\"integer\"",
  "\"floating point\"", "\"boolean\"", "$accept", "start", "$@1", "$@2",
  "$@3", "sub_slaac", "$@4", "json", "value", "map", "$@5", "map_value",
  "map_content", "not_empty_map", "list_generic", "$@6", "list_content",
  "not_empty_list", "unknown_map_entry", "slaac_syntax_map", "$@7",
  "global_objects", "global_object", "slaac_object", "$@8",
  "global_params", "not_empty_global_params", "global_param",
  "user_context", "$@9", "comment", "$@10", "logging_object", "$@11",
  "logging_params", "logging_param", "loggers", "$@12", "loggers_entries",
  "logger_entry", "$@13", "logger_params", "logger_param", "name", "$@14",
  "debuglevel", "severity", "$@15", "output_options_list", "$@16",
  "output_options_list_content", "output_entry", "$@17",
  "output_params_list", "output_params", "output", "$@18", "flush",
  "maxsize", "maxver", YY_NULLPTR
  };

#if SLAAC_DEBUG
  const unsigned short
  SlaacParser::yyrline_[] =
  {
       0,    95,    95,    95,    96,    96,    97,    97,   105,   105,
     116,   122,   123,   124,   125,   126,   127,   128,   132,   132,
     143,   148,   149,   157,   161,   168,   168,   174,   175,   178,
     182,   195,   203,   203,   215,   216,   220,   221,   225,   225,
     242,   243,   246,   247,   253,   254,   255,   258,   258,   283,
     283,   315,   315,   328,   329,   333,   337,   337,   349,   350,
     354,   354,   362,   363,   366,   367,   368,   369,   370,   371,
     372,   375,   375,   383,   388,   388,   396,   396,   406,   407,
     410,   410,   418,   419,   422,   423,   424,   425,   428,   428,
     436,   441,   446
  };

  // Print the state stack on the debug stream.
  void
  SlaacParser::yystack_print_ ()
  {
    *yycdebug_ << "Stack now";
    for (stack_type::const_iterator
           i = yystack_.begin (),
           i_end = yystack_.end ();
         i != i_end; ++i)
      *yycdebug_ << ' ' << i->state;
    *yycdebug_ << '\n';
  }

  // Report on the debug stream that the rule \a yyrule is going to be reduced.
  void
  SlaacParser::yy_reduce_print_ (int yyrule)
  {
    unsigned yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    // Print the symbols being reduced, and their result.
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
               << " (line " << yylno << "):\n";
    // The symbols being reduced.
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
                       yystack_[(yynrhs) - (yyi + 1)]);
  }
#endif // SLAAC_DEBUG


#line 14 "slaac_parser.yy" // lalr1.cc:1242
} } // isc::slaac
#line 1659 "slaac_parser.cc" // lalr1.cc:1242
#line 451 "slaac_parser.yy" // lalr1.cc:1243


void
isc::slaac::SlaacParser::error(const location_type& loc,
                               const std::string& what)
{
    ctx.error(loc, what);
}
