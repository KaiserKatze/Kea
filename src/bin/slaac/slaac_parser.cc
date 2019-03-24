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
      case 48: // value
      case 51: // map_value
        value.YY_MOVE_OR_COPY< ElementPtr > (YY_MOVE (that.value));
        break;

      case 39: // "boolean"
        value.YY_MOVE_OR_COPY< bool > (YY_MOVE (that.value));
        break;

      case 38: // "floating point"
        value.YY_MOVE_OR_COPY< double > (YY_MOVE (that.value));
        break;

      case 37: // "integer"
        value.YY_MOVE_OR_COPY< int64_t > (YY_MOVE (that.value));
        break;

      case 36: // "constant string"
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
      case 48: // value
      case 51: // map_value
        value.move< ElementPtr > (YY_MOVE (that.value));
        break;

      case 39: // "boolean"
        value.move< bool > (YY_MOVE (that.value));
        break;

      case 38: // "floating point"
        value.move< double > (YY_MOVE (that.value));
        break;

      case 37: // "integer"
        value.move< int64_t > (YY_MOVE (that.value));
        break;

      case 36: // "constant string"
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
      case 48: // value
      case 51: // map_value
        value.move< ElementPtr > (that.value);
        break;

      case 39: // "boolean"
        value.move< bool > (that.value);
        break;

      case 38: // "floating point"
        value.move< double > (that.value);
        break;

      case 37: // "integer"
        value.move< int64_t > (that.value);
        break;

      case 36: // "constant string"
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
      case 36: // "constant string"
#line 97 "slaac_parser.yy" // lalr1.cc:676
        { yyoutput << yysym.value.template as < std::string > (); }
#line 389 "slaac_parser.cc" // lalr1.cc:676
        break;

      case 37: // "integer"
#line 97 "slaac_parser.yy" // lalr1.cc:676
        { yyoutput << yysym.value.template as < int64_t > (); }
#line 395 "slaac_parser.cc" // lalr1.cc:676
        break;

      case 38: // "floating point"
#line 97 "slaac_parser.yy" // lalr1.cc:676
        { yyoutput << yysym.value.template as < double > (); }
#line 401 "slaac_parser.cc" // lalr1.cc:676
        break;

      case 39: // "boolean"
#line 97 "slaac_parser.yy" // lalr1.cc:676
        { yyoutput << yysym.value.template as < bool > (); }
#line 407 "slaac_parser.cc" // lalr1.cc:676
        break;

      case 48: // value
#line 97 "slaac_parser.yy" // lalr1.cc:676
        { yyoutput << yysym.value.template as < ElementPtr > (); }
#line 413 "slaac_parser.cc" // lalr1.cc:676
        break;

      case 51: // map_value
#line 97 "slaac_parser.yy" // lalr1.cc:676
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
      case 48: // value
      case 51: // map_value
        yylhs.value.emplace< ElementPtr > ();
        break;

      case 39: // "boolean"
        yylhs.value.emplace< bool > ();
        break;

      case 38: // "floating point"
        yylhs.value.emplace< double > ();
        break;

      case 37: // "integer"
        yylhs.value.emplace< int64_t > ();
        break;

      case 36: // "constant string"
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
#line 108 "slaac_parser.yy" // lalr1.cc:919
    { ctx.ctx_ = ctx.NO_KEYWORDS; }
#line 680 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 4:
#line 109 "slaac_parser.yy" // lalr1.cc:919
    { ctx.ctx_ = ctx.CONFIG; }
#line 686 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 6:
#line 110 "slaac_parser.yy" // lalr1.cc:919
    { ctx.ctx_ = ctx.SLAAC; }
#line 692 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 8:
#line 118 "slaac_parser.yy" // lalr1.cc:919
    {
    // Parse the Slaac map
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.push_back(m);
}
#line 702 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 9:
#line 122 "slaac_parser.yy" // lalr1.cc:919
    {
    // parsing completed
}
#line 710 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 10:
#line 129 "slaac_parser.yy" // lalr1.cc:919
    {
    // Push back the JSON value on the stack
    ctx.stack_.push_back(yystack_[0].value.as < ElementPtr > ());
}
#line 719 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 11:
#line 135 "slaac_parser.yy" // lalr1.cc:919
    { yylhs.value.as < ElementPtr > () = ElementPtr(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location))); }
#line 725 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 12:
#line 136 "slaac_parser.yy" // lalr1.cc:919
    { yylhs.value.as < ElementPtr > () = ElementPtr(new DoubleElement(yystack_[0].value.as < double > (), ctx.loc2pos(yystack_[0].location))); }
#line 731 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 13:
#line 137 "slaac_parser.yy" // lalr1.cc:919
    { yylhs.value.as < ElementPtr > () = ElementPtr(new BoolElement(yystack_[0].value.as < bool > (), ctx.loc2pos(yystack_[0].location))); }
#line 737 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 14:
#line 138 "slaac_parser.yy" // lalr1.cc:919
    { yylhs.value.as < ElementPtr > () = ElementPtr(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location))); }
#line 743 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 15:
#line 139 "slaac_parser.yy" // lalr1.cc:919
    { yylhs.value.as < ElementPtr > () = ElementPtr(new NullElement(ctx.loc2pos(yystack_[0].location))); }
#line 749 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 16:
#line 140 "slaac_parser.yy" // lalr1.cc:919
    { yylhs.value.as < ElementPtr > () = ctx.stack_.back(); ctx.stack_.pop_back(); }
#line 755 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 17:
#line 141 "slaac_parser.yy" // lalr1.cc:919
    { yylhs.value.as < ElementPtr > () = ctx.stack_.back(); ctx.stack_.pop_back(); }
#line 761 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 18:
#line 145 "slaac_parser.yy" // lalr1.cc:919
    {
    // This code is executed when we're about to start parsing
    // the content of the map
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.push_back(m);
}
#line 772 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 19:
#line 150 "slaac_parser.yy" // lalr1.cc:919
    {
    // map parsing completed. If we ever want to do any wrap up
    // (maybe some sanity checking), this would be the best place
    // for it.
}
#line 782 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 20:
#line 156 "slaac_parser.yy" // lalr1.cc:919
    { yylhs.value.as < ElementPtr > () = ctx.stack_.back(); ctx.stack_.pop_back(); }
#line 788 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 23:
#line 170 "slaac_parser.yy" // lalr1.cc:919
    {
                  // map containing a single entry
                  ctx.stack_.back()->set(yystack_[2].value.as < std::string > (), yystack_[0].value.as < ElementPtr > ());
                  }
#line 797 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 24:
#line 174 "slaac_parser.yy" // lalr1.cc:919
    {
                  // map consisting of a shorter map followed by
                  // comma and string:value
                  ctx.stack_.back()->set(yystack_[2].value.as < std::string > (), yystack_[0].value.as < ElementPtr > ());
                  }
#line 807 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 25:
#line 181 "slaac_parser.yy" // lalr1.cc:919
    {
    ElementPtr l(new ListElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.push_back(l);
}
#line 816 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 26:
#line 184 "slaac_parser.yy" // lalr1.cc:919
    {
}
#line 823 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 29:
#line 191 "slaac_parser.yy" // lalr1.cc:919
    {
                  // List consisting of a single element.
                  ctx.stack_.back()->add(yystack_[0].value.as < ElementPtr > ());
                  }
#line 832 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 30:
#line 195 "slaac_parser.yy" // lalr1.cc:919
    {
                  // List ending with , and a value.
                  ctx.stack_.back()->add(yystack_[0].value.as < ElementPtr > ());
                  }
#line 841 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 31:
#line 208 "slaac_parser.yy" // lalr1.cc:919
    {
    const std::string& where = ctx.contextName();
    const std::string& keyword = yystack_[1].value.as < std::string > ();
    error(yystack_[1].location,
          "got unexpected keyword \"" + keyword + "\" in " + where + " map.");
}
#line 852 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 32:
#line 216 "slaac_parser.yy" // lalr1.cc:919
    {
    // This code is executed when we're about to start parsing
    // the content of the map
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.push_back(m);
}
#line 863 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 33:
#line 221 "slaac_parser.yy" // lalr1.cc:919
    {
    // map parsing completed. If we ever want to do any wrap up
    // (maybe some sanity checking), this would be the best place
    // for it.
}
#line 873 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 37:
#line 237 "slaac_parser.yy" // lalr1.cc:919
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

  case 38:
#line 247 "slaac_parser.yy" // lalr1.cc:919
    {
    // Ok, we're done with parsing Slaac. Let's take the map
    // off the stack.
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 900 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 55:
#line 282 "slaac_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORDS);
}
#line 908 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 56:
#line 284 "slaac_parser.yy" // lalr1.cc:919
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

  case 57:
#line 307 "slaac_parser.yy" // lalr1.cc:919
    {
    ElementPtr i(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("interfaces-config", i);
    ctx.stack_.push_back(i);
    ctx.enter(ctx.INTERFACES_CONFIG);
}
#line 946 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 58:
#line 312 "slaac_parser.yy" // lalr1.cc:919
    {
    // No interfaces config param is required
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 956 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 65:
#line 328 "slaac_parser.yy" // lalr1.cc:919
    {
    ElementPtr l(new ListElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("interfaces", l);
    ctx.stack_.push_back(l);
    ctx.enter(ctx.NO_KEYWORDS);
}
#line 967 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 66:
#line 333 "slaac_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 976 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 67:
#line 339 "slaac_parser.yy" // lalr1.cc:919
    {
    // List parsing about to start
}
#line 984 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 68:
#line 341 "slaac_parser.yy" // lalr1.cc:919
    {
    // list parsing complete. Put any sanity checking here
    //ctx.stack_.pop_back();
}
#line 993 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 71:
#line 350 "slaac_parser.yy" // lalr1.cc:919
    {
                          ElementPtr s(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
                          ctx.stack_.back()->add(s);
                          }
#line 1002 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 72:
#line 354 "slaac_parser.yy" // lalr1.cc:919
    {
                          ElementPtr s(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
                          ctx.stack_.back()->add(s);
                          }
#line 1011 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 73:
#line 360 "slaac_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORDS);
}
#line 1019 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 74:
#line 362 "slaac_parser.yy" // lalr1.cc:919
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
#line 1048 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 75:
#line 387 "slaac_parser.yy" // lalr1.cc:919
    {
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("experimental", m);
    ctx.stack_.push_back(m);
    ctx.enter(ctx.EXPERIMENTAL);
}
#line 1059 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 76:
#line 392 "slaac_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 1068 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 80:
#line 402 "slaac_parser.yy" // lalr1.cc:919
    {
    ElementPtr n(new BoolElement(yystack_[0].value.as < bool > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("universal-ra", n);
}
#line 1077 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 81:
#line 408 "slaac_parser.yy" // lalr1.cc:919
    {
    ElementPtr hl(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("hop-limit", hl);
}
#line 1086 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 82:
#line 413 "slaac_parser.yy" // lalr1.cc:919
    {
    ElementPtr f(new BoolElement(yystack_[0].value.as < bool > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("managed-flag", f);
}
#line 1095 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 83:
#line 418 "slaac_parser.yy" // lalr1.cc:919
    {
    ElementPtr f(new BoolElement(yystack_[0].value.as < bool > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("other-flag", f);
}
#line 1104 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 84:
#line 423 "slaac_parser.yy" // lalr1.cc:919
    {
    ElementPtr rl(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("router-lifetime", rl);
}
#line 1113 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 85:
#line 428 "slaac_parser.yy" // lalr1.cc:919
    {
    ElementPtr rt(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("reachable-time", rt);
}
#line 1122 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 86:
#line 433 "slaac_parser.yy" // lalr1.cc:919
    {
    ElementPtr rt(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("retrans-timer", rt);
}
#line 1131 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 87:
#line 443 "slaac_parser.yy" // lalr1.cc:919
    {
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("Logging", m);
    ctx.stack_.push_back(m);
    ctx.enter(ctx.LOGGING);
}
#line 1142 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 88:
#line 448 "slaac_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 1151 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 92:
#line 465 "slaac_parser.yy" // lalr1.cc:919
    {
    ElementPtr l(new ListElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("loggers", l);
    ctx.stack_.push_back(l);
    ctx.enter(ctx.LOGGERS);
}
#line 1162 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 93:
#line 470 "slaac_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 1171 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 96:
#line 482 "slaac_parser.yy" // lalr1.cc:919
    {
    ElementPtr l(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->add(l);
    ctx.stack_.push_back(l);
}
#line 1181 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 97:
#line 486 "slaac_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.pop_back();
}
#line 1189 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 107:
#line 503 "slaac_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORDS);
}
#line 1197 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 108:
#line 505 "slaac_parser.yy" // lalr1.cc:919
    {
    ElementPtr name(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("name", name);
    ctx.leave();
}
#line 1207 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 109:
#line 511 "slaac_parser.yy" // lalr1.cc:919
    {
    ElementPtr dl(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("debuglevel", dl);
}
#line 1216 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 110:
#line 516 "slaac_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORDS);
}
#line 1224 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 111:
#line 518 "slaac_parser.yy" // lalr1.cc:919
    {
    ElementPtr sev(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("severity", sev);
    ctx.leave();
}
#line 1234 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 112:
#line 524 "slaac_parser.yy" // lalr1.cc:919
    {
    ElementPtr l(new ListElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("output_options", l);
    ctx.stack_.push_back(l);
    ctx.enter(ctx.OUTPUT_OPTIONS);
}
#line 1245 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 113:
#line 529 "slaac_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 1254 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 116:
#line 538 "slaac_parser.yy" // lalr1.cc:919
    {
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->add(m);
    ctx.stack_.push_back(m);
}
#line 1264 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 117:
#line 542 "slaac_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.pop_back();
}
#line 1272 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 124:
#line 556 "slaac_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORDS);
}
#line 1280 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 125:
#line 558 "slaac_parser.yy" // lalr1.cc:919
    {
    ElementPtr sev(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("output", sev);
    ctx.leave();
}
#line 1290 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 126:
#line 564 "slaac_parser.yy" // lalr1.cc:919
    {
    ElementPtr flush(new BoolElement(yystack_[0].value.as < bool > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("flush", flush);
}
#line 1299 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 127:
#line 569 "slaac_parser.yy" // lalr1.cc:919
    {
    ElementPtr maxsize(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("maxsize", maxsize);
}
#line 1308 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 128:
#line 574 "slaac_parser.yy" // lalr1.cc:919
    {
    ElementPtr maxver(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("maxver", maxver);
}
#line 1317 "slaac_parser.cc" // lalr1.cc:919
    break;


#line 1321 "slaac_parser.cc" // lalr1.cc:919
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


  const signed char SlaacParser::yypact_ninf_ = -106;

  const signed char SlaacParser::yytable_ninf_ = -1;

  const signed char
  SlaacParser::yypact_[] =
  {
       6,  -106,  -106,  -106,     5,    -1,    16,    24,  -106,  -106,
    -106,  -106,  -106,  -106,  -106,  -106,  -106,  -106,  -106,  -106,
    -106,  -106,  -106,  -106,    -1,    11,     2,    -4,  -106,    47,
      61,    73,    57,    68,  -106,    21,  -106,  -106,  -106,  -106,
    -106,  -106,    74,    75,    77,    78,    79,    80,  -106,    81,
    -106,    82,    83,  -106,  -106,  -106,  -106,  -106,  -106,  -106,
    -106,  -106,  -106,  -106,  -106,  -106,    -1,    -1,  -106,    51,
      84,     2,  -106,    85,    87,    88,    89,    62,    55,    56,
      63,    64,    65,    92,  -106,  -106,    -4,  -106,  -106,    93,
      91,  -106,    96,    97,    69,    99,  -106,  -106,  -106,  -106,
    -106,  -106,   100,  -106,    -1,    -4,     8,  -106,  -106,  -106,
      94,    90,  -106,   101,  -106,  -106,  -106,    22,  -106,  -106,
    -106,   104,    52,  -106,  -106,  -106,    58,  -106,  -106,  -106,
     107,     8,  -106,    76,    94,  -106,   108,    90,  -106,   111,
    -106,  -106,  -106,   112,  -106,  -106,  -106,   106,    86,  -106,
      66,  -106,  -106,   113,   115,    20,   106,  -106,  -106,    95,
    -106,  -106,   116,  -106,  -106,  -106,  -106,    59,  -106,  -106,
    -106,  -106,  -106,  -106,  -106,   117,   119,    98,   120,    20,
    -106,   102,   121,  -106,   103,  -106,  -106,   118,  -106,  -106,
      67,  -106,    27,   118,  -106,  -106,   123,   124,   125,    60,
    -106,  -106,  -106,  -106,  -106,  -106,   126,   105,   109,   110,
      27,  -106,   114,  -106,  -106,  -106,  -106,  -106
  };

  const unsigned char
  SlaacParser::yydefact_[] =
  {
       0,     2,     4,     6,     0,     0,     0,     0,     1,    25,
      18,    15,    14,    11,    12,    13,     3,    10,    16,    17,
      32,     5,     8,     7,    27,    21,     0,    39,    29,     0,
      28,     0,     0,    22,    37,     0,    34,    36,    57,    55,
      73,    75,     0,     0,     0,     0,     0,     0,    87,     0,
      54,     0,    40,    41,    52,    43,    53,    51,    45,    46,
      47,    48,    49,    50,    44,    26,     0,     0,    19,     0,
       0,     0,    33,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    31,     9,     0,    30,    23,     0,
       0,    35,     0,     0,     0,     0,    81,    82,    83,    84,
      85,    86,     0,    42,     0,    39,     0,    20,    56,    74,
       0,     0,    24,     0,    65,    64,    62,     0,    59,    61,
      63,     0,     0,    77,    79,    92,     0,    89,    91,    38,
       0,     0,    58,     0,     0,    76,     0,     0,    88,     0,
      60,    80,    78,     0,    90,    67,    66,     0,    69,    96,
       0,    94,    71,     0,    70,     0,     0,    93,    68,     0,
     107,   112,     0,   110,   106,   104,   105,     0,    98,   100,
     102,   103,   101,    95,    72,     0,     0,     0,     0,     0,
      97,     0,     0,   109,     0,    99,   108,     0,   111,   116,
       0,   114,     0,     0,   113,   124,     0,     0,     0,     0,
     118,   120,   121,   122,   123,   115,     0,     0,     0,     0,
       0,   117,     0,   126,   127,   128,   119,   125
  };

  const signed char
  SlaacParser::yypgoto_[] =
  {
    -106,  -106,  -106,  -106,  -106,  -106,  -106,  -106,   -24,    39,
    -106,  -106,  -106,  -106,  -106,  -106,  -106,  -106,  -105,  -106,
    -106,  -106,    70,  -106,  -106,    28,  -106,    48,  -104,  -106,
    -106,  -106,  -106,     9,  -106,  -106,  -106,  -106,  -106,  -106,
    -103,  -106,  -106,  -106,  -106,     3,  -106,  -106,  -106,  -106,
    -106,  -106,  -106,  -106,  -106,  -106,    12,  -106,  -106,  -106,
     -20,  -106,  -106,   -37,  -106,  -106,  -106,  -106,  -106,  -106,
    -106,  -106,   -50,  -106,  -106,   -65,  -106,  -106,  -106,  -106,
    -106
  };

  const short
  SlaacParser::yydefgoto_[] =
  {
      -1,     4,     5,     6,     7,    23,    27,    16,    17,    18,
      25,   108,    32,    33,    19,    24,    29,    30,    50,    21,
      26,    35,    36,    37,    70,    51,    52,    53,    54,    74,
      55,    73,   117,   118,   119,   130,   146,   148,   153,   154,
      56,    75,    57,    76,   122,   123,   124,    58,    59,    60,
      61,    62,    63,    64,    83,   126,   127,   128,   136,   150,
     151,   155,   167,   168,   169,   175,   170,   171,   178,   172,
     176,   190,   191,   192,   199,   200,   201,   206,   202,   203,
     204
  };

  const unsigned char
  SlaacParser::yytable_[] =
  {
      28,   115,   116,   120,     9,     8,    10,    38,    11,    39,
      40,    41,    34,    42,    43,    44,    45,    46,    47,    48,
     114,    39,    40,    20,    71,   131,   115,   116,   120,    72,
     132,    22,    49,    39,    40,    12,    13,    14,    15,     1,
       2,     3,    87,    88,    49,   160,   161,    31,   162,   163,
     164,   165,   166,    65,   195,   134,    49,   196,   197,   198,
     135,   137,   179,   210,    66,    68,   138,   180,   211,   156,
     193,    69,   157,   194,   164,   165,   166,    67,    77,    78,
     112,    79,    80,    81,    82,    84,    86,    89,    90,    92,
      85,    93,    94,    95,    97,    98,   102,   104,   105,    96,
      99,   100,   101,   106,    10,   109,   110,   111,   133,   129,
     121,   139,   143,   149,   125,   141,   145,   147,   159,   158,
     177,   181,   152,   182,   184,   189,   187,   207,   208,   209,
     212,   174,   107,   113,   103,   183,   173,   142,   186,   188,
     140,    91,   185,   205,   213,   216,   214,   215,     0,   144,
     217
  };

  const short
  SlaacParser::yycheck_[] =
  {
      24,   106,   106,   106,     5,     0,     7,    11,     9,    13,
      14,    15,    10,    17,    18,    19,    20,    21,    22,    23,
      12,    13,    14,     7,     3,     3,   131,   131,   131,     8,
       8,     7,    36,    13,    14,    36,    37,    38,    39,    33,
      34,    35,    66,    67,    36,    25,    26,    36,    28,    29,
     155,   155,   155,     6,    27,     3,    36,    30,    31,    32,
       8,     3,     3,     3,     3,     8,     8,     8,     8,     3,
       3,     3,     6,     6,   179,   179,   179,     4,     4,     4,
     104,     4,     4,     4,     4,     4,     3,    36,     4,     4,
       8,     4,     4,     4,    39,    39,     4,     4,     7,    37,
      37,    37,    37,     7,     7,    36,     7,     7,     4,     8,
      16,     4,     4,     7,    24,    39,     5,     5,     3,     6,
       4,     4,    36,     4,     4,     7,     5,     4,     4,     4,
       4,    36,    93,   105,    86,    37,   156,   134,    36,    36,
     131,    71,   179,   193,    39,   210,    37,    37,    -1,   137,
      36
  };

  const unsigned char
  SlaacParser::yystos_[] =
  {
       0,    33,    34,    35,    41,    42,    43,    44,     0,     5,
       7,     9,    36,    37,    38,    39,    47,    48,    49,    54,
       7,    59,     7,    45,    55,    50,    60,    46,    48,    56,
      57,    36,    52,    53,    10,    61,    62,    63,    11,    13,
      14,    15,    17,    18,    19,    20,    21,    22,    23,    36,
      58,    65,    66,    67,    68,    70,    80,    82,    87,    88,
      89,    90,    91,    92,    93,     6,     3,     4,     8,     3,
      64,     3,     8,    71,    69,    81,    83,     4,     4,     4,
       4,     4,     4,    94,     4,     8,     3,    48,    48,    36,
       4,    62,     4,     4,     4,     4,    37,    39,    39,    37,
      37,    37,     4,    67,     4,     7,     7,    49,    51,    36,
       7,     7,    48,    65,    12,    58,    68,    72,    73,    74,
      80,    16,    84,    85,    86,    24,    95,    96,    97,     8,
      75,     3,     8,     4,     3,     8,    98,     3,     8,     4,
      73,    39,    85,     4,    96,     5,    76,     5,    77,     7,
      99,   100,    36,    78,    79,   101,     3,     6,     6,     3,
      25,    26,    28,    29,    58,    68,    80,   102,   103,   104,
     106,   107,   109,   100,    36,   105,   110,     4,   108,     3,
       8,     4,     4,    37,     4,   103,    36,     5,    36,     7,
     111,   112,   113,     3,     6,    27,    30,    31,    32,   114,
     115,   116,   118,   119,   120,   112,   117,     4,     4,     4,
       3,     8,     4,    39,    37,    37,   115,    36
  };

  const unsigned char
  SlaacParser::yyr1_[] =
  {
       0,    40,    42,    41,    43,    41,    44,    41,    46,    45,
      47,    48,    48,    48,    48,    48,    48,    48,    50,    49,
      51,    52,    52,    53,    53,    55,    54,    56,    56,    57,
      57,    58,    60,    59,    61,    61,    62,    64,    63,    65,
      65,    66,    66,    67,    67,    67,    67,    67,    67,    67,
      67,    67,    67,    67,    67,    69,    68,    71,    70,    72,
      72,    73,    73,    73,    73,    75,    74,    77,    76,    78,
      78,    79,    79,    81,    80,    83,    82,    84,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    94,    93,    95,
      95,    96,    98,    97,    99,    99,   101,   100,   102,   102,
     103,   103,   103,   103,   103,   103,   103,   105,   104,   106,
     108,   107,   110,   109,   111,   111,   113,   112,   114,   114,
     115,   115,   115,   115,   117,   116,   118,   119,   120
  };

  const unsigned char
  SlaacParser::yyr2_[] =
  {
       0,     2,     0,     3,     0,     3,     0,     3,     0,     4,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     4,
       1,     0,     1,     3,     5,     0,     4,     0,     1,     1,
       3,     2,     0,     4,     1,     3,     1,     0,     6,     0,
       1,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     4,     0,     6,     1,
       3,     1,     1,     1,     1,     0,     4,     0,     4,     0,
       1,     1,     3,     0,     4,     0,     6,     1,     3,     1,
       3,     3,     3,     3,     3,     3,     3,     0,     6,     1,
       3,     1,     0,     6,     1,     3,     0,     4,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     0,     4,     3,
       0,     4,     0,     6,     1,     3,     0,     4,     1,     3,
       1,     1,     1,     1,     0,     4,     3,     3,     3
  };



  // YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
  // First, the terminals, then, starting at \a yyntokens_, nonterminals.
  const char*
  const SlaacParser::yytname_[] =
  {
  "\"end of file\"", "error", "$undefined", "\",\"", "\":\"", "\"[\"",
  "\"]\"", "\"{\"", "\"}\"", "\"null\"", "\"Slaac\"",
  "\"interfaces-config\"", "\"interfaces\"", "\"user-context\"",
  "\"comment\"", "\"experimental\"", "\"universal-ra\"", "\"hop-limit\"",
  "\"managed-flag\"", "\"other-flag\"", "\"router-lifetime\"",
  "\"reachable-time\"", "\"retrans-timer\"", "\"Logging\"", "\"loggers\"",
  "\"name\"", "\"output_options\"", "\"output\"", "\"debuglevel\"",
  "\"severity\"", "\"flush\"", "\"maxsize\"", "\"maxver\"", "START_JSON",
  "START_SLAAC", "START_SUB_SLAAC", "\"constant string\"", "\"integer\"",
  "\"floating point\"", "\"boolean\"", "$accept", "start", "$@1", "$@2",
  "$@3", "sub_slaac", "$@4", "json", "value", "map", "$@5", "map_value",
  "map_content", "not_empty_map", "list_generic", "$@6", "list_content",
  "not_empty_list", "unknown_map_entry", "slaac_syntax_map", "$@7",
  "global_objects", "global_object", "slaac_object", "$@8",
  "global_params", "not_empty_global_params", "global_param",
  "user_context", "$@9", "interfaces_config", "$@10",
  "interfaces_config_params", "interfaces_config_param", "interfaces_list",
  "$@11", "list_strings", "$@12", "list_strings_content",
  "not_empty_list_strings", "comment", "$@13", "experimental", "$@14",
  "experimental_params", "experimental_param", "universal_ra", "hop_limit",
  "managed_flag", "other_flag", "router_lifetime", "reachable_time",
  "retrans_timer", "logging_object", "$@15", "logging_params",
  "logging_param", "loggers", "$@16", "loggers_entries", "logger_entry",
  "$@17", "logger_params", "logger_param", "name", "$@18", "debuglevel",
  "severity", "$@19", "output_options_list", "$@20",
  "output_options_list_content", "output_entry", "$@21",
  "output_params_list", "output_params", "output", "$@22", "flush",
  "maxsize", "maxver", YY_NULLPTR
  };

#if SLAAC_DEBUG
  const unsigned short
  SlaacParser::yyrline_[] =
  {
       0,   108,   108,   108,   109,   109,   110,   110,   118,   118,
     129,   135,   136,   137,   138,   139,   140,   141,   145,   145,
     156,   161,   162,   170,   174,   181,   181,   187,   188,   191,
     195,   208,   216,   216,   228,   229,   233,   237,   237,   254,
     255,   258,   259,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   277,   278,   279,   282,   282,   307,   307,   318,
     319,   322,   323,   324,   325,   328,   328,   339,   339,   346,
     347,   350,   354,   360,   360,   387,   387,   397,   398,   400,
     402,   408,   413,   418,   423,   428,   433,   443,   443,   456,
     457,   461,   465,   465,   477,   478,   482,   482,   490,   491,
     494,   495,   496,   497,   498,   499,   500,   503,   503,   511,
     516,   516,   524,   524,   534,   535,   538,   538,   546,   547,
     550,   551,   552,   553,   556,   556,   564,   569,   574
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
#line 1870 "slaac_parser.cc" // lalr1.cc:1242
#line 579 "slaac_parser.yy" // lalr1.cc:1243


void
isc::slaac::SlaacParser::error(const location_type& loc,
                               const std::string& what)
{
    ctx.error(loc, what);
}
