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
      case 54: // value
      case 57: // map_value
        value.YY_MOVE_OR_COPY< ElementPtr > (YY_MOVE (that.value));
        break;

      case 45: // "boolean"
        value.YY_MOVE_OR_COPY< bool > (YY_MOVE (that.value));
        break;

      case 44: // "floating point"
        value.YY_MOVE_OR_COPY< double > (YY_MOVE (that.value));
        break;

      case 43: // "integer"
        value.YY_MOVE_OR_COPY< int64_t > (YY_MOVE (that.value));
        break;

      case 42: // "constant string"
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
      case 54: // value
      case 57: // map_value
        value.move< ElementPtr > (YY_MOVE (that.value));
        break;

      case 45: // "boolean"
        value.move< bool > (YY_MOVE (that.value));
        break;

      case 44: // "floating point"
        value.move< double > (YY_MOVE (that.value));
        break;

      case 43: // "integer"
        value.move< int64_t > (YY_MOVE (that.value));
        break;

      case 42: // "constant string"
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
      case 54: // value
      case 57: // map_value
        value.move< ElementPtr > (that.value);
        break;

      case 45: // "boolean"
        value.move< bool > (that.value);
        break;

      case 44: // "floating point"
        value.move< double > (that.value);
        break;

      case 43: // "integer"
        value.move< int64_t > (that.value);
        break;

      case 42: // "constant string"
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
      case 42: // "constant string"
#line 104 "slaac_parser.yy" // lalr1.cc:676
        { yyoutput << yysym.value.template as < std::string > (); }
#line 389 "slaac_parser.cc" // lalr1.cc:676
        break;

      case 43: // "integer"
#line 104 "slaac_parser.yy" // lalr1.cc:676
        { yyoutput << yysym.value.template as < int64_t > (); }
#line 395 "slaac_parser.cc" // lalr1.cc:676
        break;

      case 44: // "floating point"
#line 104 "slaac_parser.yy" // lalr1.cc:676
        { yyoutput << yysym.value.template as < double > (); }
#line 401 "slaac_parser.cc" // lalr1.cc:676
        break;

      case 45: // "boolean"
#line 104 "slaac_parser.yy" // lalr1.cc:676
        { yyoutput << yysym.value.template as < bool > (); }
#line 407 "slaac_parser.cc" // lalr1.cc:676
        break;

      case 54: // value
#line 104 "slaac_parser.yy" // lalr1.cc:676
        { yyoutput << yysym.value.template as < ElementPtr > (); }
#line 413 "slaac_parser.cc" // lalr1.cc:676
        break;

      case 57: // map_value
#line 104 "slaac_parser.yy" // lalr1.cc:676
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
      case 54: // value
      case 57: // map_value
        yylhs.value.emplace< ElementPtr > ();
        break;

      case 45: // "boolean"
        yylhs.value.emplace< bool > ();
        break;

      case 44: // "floating point"
        yylhs.value.emplace< double > ();
        break;

      case 43: // "integer"
        yylhs.value.emplace< int64_t > ();
        break;

      case 42: // "constant string"
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
#line 115 "slaac_parser.yy" // lalr1.cc:919
    { ctx.ctx_ = ctx.NO_KEYWORDS; }
#line 680 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 4:
#line 116 "slaac_parser.yy" // lalr1.cc:919
    { ctx.ctx_ = ctx.CONFIG; }
#line 686 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 6:
#line 117 "slaac_parser.yy" // lalr1.cc:919
    { ctx.ctx_ = ctx.SLAAC; }
#line 692 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 8:
#line 125 "slaac_parser.yy" // lalr1.cc:919
    {
    // Parse the Slaac map
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.push_back(m);
}
#line 702 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 9:
#line 129 "slaac_parser.yy" // lalr1.cc:919
    {
    // parsing completed
}
#line 710 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 10:
#line 136 "slaac_parser.yy" // lalr1.cc:919
    {
    // Push back the JSON value on the stack
    ctx.stack_.push_back(yystack_[0].value.as < ElementPtr > ());
}
#line 719 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 11:
#line 142 "slaac_parser.yy" // lalr1.cc:919
    { yylhs.value.as < ElementPtr > () = ElementPtr(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location))); }
#line 725 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 12:
#line 143 "slaac_parser.yy" // lalr1.cc:919
    { yylhs.value.as < ElementPtr > () = ElementPtr(new DoubleElement(yystack_[0].value.as < double > (), ctx.loc2pos(yystack_[0].location))); }
#line 731 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 13:
#line 144 "slaac_parser.yy" // lalr1.cc:919
    { yylhs.value.as < ElementPtr > () = ElementPtr(new BoolElement(yystack_[0].value.as < bool > (), ctx.loc2pos(yystack_[0].location))); }
#line 737 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 14:
#line 145 "slaac_parser.yy" // lalr1.cc:919
    { yylhs.value.as < ElementPtr > () = ElementPtr(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location))); }
#line 743 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 15:
#line 146 "slaac_parser.yy" // lalr1.cc:919
    { yylhs.value.as < ElementPtr > () = ElementPtr(new NullElement(ctx.loc2pos(yystack_[0].location))); }
#line 749 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 16:
#line 147 "slaac_parser.yy" // lalr1.cc:919
    { yylhs.value.as < ElementPtr > () = ctx.stack_.back(); ctx.stack_.pop_back(); }
#line 755 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 17:
#line 148 "slaac_parser.yy" // lalr1.cc:919
    { yylhs.value.as < ElementPtr > () = ctx.stack_.back(); ctx.stack_.pop_back(); }
#line 761 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 18:
#line 152 "slaac_parser.yy" // lalr1.cc:919
    {
    // This code is executed when we're about to start parsing
    // the content of the map
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.push_back(m);
}
#line 772 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 19:
#line 157 "slaac_parser.yy" // lalr1.cc:919
    {
    // map parsing completed. If we ever want to do any wrap up
    // (maybe some sanity checking), this would be the best place
    // for it.
}
#line 782 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 20:
#line 163 "slaac_parser.yy" // lalr1.cc:919
    { yylhs.value.as < ElementPtr > () = ctx.stack_.back(); ctx.stack_.pop_back(); }
#line 788 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 23:
#line 177 "slaac_parser.yy" // lalr1.cc:919
    {
                  // map containing a single entry
                  ctx.stack_.back()->set(yystack_[2].value.as < std::string > (), yystack_[0].value.as < ElementPtr > ());
                  }
#line 797 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 24:
#line 181 "slaac_parser.yy" // lalr1.cc:919
    {
                  // map consisting of a shorter map followed by
                  // comma and string:value
                  ctx.stack_.back()->set(yystack_[2].value.as < std::string > (), yystack_[0].value.as < ElementPtr > ());
                  }
#line 807 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 25:
#line 188 "slaac_parser.yy" // lalr1.cc:919
    {
    ElementPtr l(new ListElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.push_back(l);
}
#line 816 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 26:
#line 191 "slaac_parser.yy" // lalr1.cc:919
    {
}
#line 823 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 29:
#line 198 "slaac_parser.yy" // lalr1.cc:919
    {
                  // List consisting of a single element.
                  ctx.stack_.back()->add(yystack_[0].value.as < ElementPtr > ());
                  }
#line 832 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 30:
#line 202 "slaac_parser.yy" // lalr1.cc:919
    {
                  // List ending with , and a value.
                  ctx.stack_.back()->add(yystack_[0].value.as < ElementPtr > ());
                  }
#line 841 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 31:
#line 209 "slaac_parser.yy" // lalr1.cc:919
    {
    // List parsing about to start
}
#line 849 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 32:
#line 211 "slaac_parser.yy" // lalr1.cc:919
    {
    // list parsing complete. Put any sanity checking here
    //ctx.stack_.pop_back();
}
#line 858 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 35:
#line 220 "slaac_parser.yy" // lalr1.cc:919
    {
                          ElementPtr s(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
                          ctx.stack_.back()->add(s);
                          }
#line 867 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 36:
#line 224 "slaac_parser.yy" // lalr1.cc:919
    {
                          ElementPtr s(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
                          ctx.stack_.back()->add(s);
                          }
#line 876 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 37:
#line 237 "slaac_parser.yy" // lalr1.cc:919
    {
    const std::string& where = ctx.contextName();
    const std::string& keyword = yystack_[1].value.as < std::string > ();
    error(yystack_[1].location,
          "got unexpected keyword \"" + keyword + "\" in " + where + " map.");
}
#line 887 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 38:
#line 245 "slaac_parser.yy" // lalr1.cc:919
    {
    // This code is executed when we're about to start parsing
    // the content of the map
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.push_back(m);
}
#line 898 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 39:
#line 250 "slaac_parser.yy" // lalr1.cc:919
    {
    // map parsing completed. If we ever want to do any wrap up
    // (maybe some sanity checking), this would be the best place
    // for it.
}
#line 908 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 40:
#line 257 "slaac_parser.yy" // lalr1.cc:919
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
#line 924 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 41:
#line 267 "slaac_parser.yy" // lalr1.cc:919
    {
    // Ok, we're done with parsing Slaac. Let's take the map
    // off the stack.
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 935 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 61:
#line 301 "slaac_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORDS);
}
#line 943 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 62:
#line 303 "slaac_parser.yy" // lalr1.cc:919
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
#line 970 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 63:
#line 326 "slaac_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORDS);
}
#line 978 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 64:
#line 328 "slaac_parser.yy" // lalr1.cc:919
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
#line 1007 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 65:
#line 353 "slaac_parser.yy" // lalr1.cc:919
    {
    ElementPtr i(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("interfaces-config", i);
    ctx.stack_.push_back(i);
    ctx.enter(ctx.INTERFACES_CONFIG);
}
#line 1018 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 66:
#line 358 "slaac_parser.yy" // lalr1.cc:919
    {
    // No interfaces config param is required
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 1028 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 71:
#line 372 "slaac_parser.yy" // lalr1.cc:919
    {
    ElementPtr l(new ListElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("interfaces", l);
    ctx.stack_.push_back(l);
    ctx.enter(ctx.NO_KEYWORDS);
}
#line 1039 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 72:
#line 377 "slaac_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 1048 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 73:
#line 382 "slaac_parser.yy" // lalr1.cc:919
    {
    ElementPtr hl(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("hop-limit", hl);
}
#line 1057 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 74:
#line 387 "slaac_parser.yy" // lalr1.cc:919
    {
    ElementPtr f(new BoolElement(yystack_[0].value.as < bool > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("managed-flag", f);
}
#line 1066 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 75:
#line 392 "slaac_parser.yy" // lalr1.cc:919
    {
    ElementPtr f(new BoolElement(yystack_[0].value.as < bool > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("other-flag", f);
}
#line 1075 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 76:
#line 397 "slaac_parser.yy" // lalr1.cc:919
    {
    ElementPtr rl(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("router-lifetime", rl);
}
#line 1084 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 77:
#line 402 "slaac_parser.yy" // lalr1.cc:919
    {
    ElementPtr rt(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("reachable-time", rt);
}
#line 1093 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 78:
#line 407 "slaac_parser.yy" // lalr1.cc:919
    {
    ElementPtr rt(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("retrans-timer", rt);
}
#line 1102 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 79:
#line 412 "slaac_parser.yy" // lalr1.cc:919
    {
    ElementPtr lla(new BoolElement(yystack_[0].value.as < bool > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("source-ll-address", lla);
}
#line 1111 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 80:
#line 417 "slaac_parser.yy" // lalr1.cc:919
    {
    ElementPtr mtu(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("mtu", mtu);
}
#line 1120 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 81:
#line 423 "slaac_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORDS);
}
#line 1128 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 82:
#line 425 "slaac_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.back()->set("universal-ra", yystack_[0].value.as < ElementPtr > ());
    ctx.leave();
}
#line 1137 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 83:
#line 430 "slaac_parser.yy" // lalr1.cc:919
    {
    ElementPtr l(new ListElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("prefix-infos", l);
    ctx.stack_.push_back(l);
    ctx.enter(ctx.PREFIX_INFOS);
}
#line 1148 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 84:
#line 435 "slaac_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 1157 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 89:
#line 448 "slaac_parser.yy" // lalr1.cc:919
    {
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->add(m);
    ctx.stack_.push_back(m);
}
#line 1167 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 90:
#line 452 "slaac_parser.yy" // lalr1.cc:919
    {
    // The prefix parameter is required
    ctx.require("prefix", ctx.loc2pos(yystack_[3].location), ctx.loc2pos(yystack_[0].location));
    ctx.stack_.pop_back();
}
#line 1177 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 101:
#line 472 "slaac_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORDS);
}
#line 1185 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 102:
#line 474 "slaac_parser.yy" // lalr1.cc:919
    {
    ElementPtr pref(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("prefix", pref);
    ctx.leave();
}
#line 1195 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 103:
#line 480 "slaac_parser.yy" // lalr1.cc:919
    {
    ElementPtr f(new BoolElement(yystack_[0].value.as < bool > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("on-link-flag", f);
}
#line 1204 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 104:
#line 485 "slaac_parser.yy" // lalr1.cc:919
    {
    ElementPtr f(new BoolElement(yystack_[0].value.as < bool > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("address-config-flag", f);
}
#line 1213 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 105:
#line 490 "slaac_parser.yy" // lalr1.cc:919
    {
    ElementPtr rl(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("valid-lifetime", rl);
}
#line 1222 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 106:
#line 495 "slaac_parser.yy" // lalr1.cc:919
    {
    ElementPtr rl(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("preferred-lifetime", rl);
}
#line 1231 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 107:
#line 504 "slaac_parser.yy" // lalr1.cc:919
    {
    ElementPtr l(new ListElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("loggers", l);
    ctx.stack_.push_back(l);
    ctx.enter(ctx.LOGGERS);
}
#line 1242 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 108:
#line 509 "slaac_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 1251 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 111:
#line 521 "slaac_parser.yy" // lalr1.cc:919
    {
    ElementPtr l(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->add(l);
    ctx.stack_.push_back(l);
}
#line 1261 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 112:
#line 525 "slaac_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.pop_back();
}
#line 1269 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 122:
#line 542 "slaac_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORDS);
}
#line 1277 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 123:
#line 544 "slaac_parser.yy" // lalr1.cc:919
    {
    ElementPtr name(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("name", name);
    ctx.leave();
}
#line 1287 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 124:
#line 550 "slaac_parser.yy" // lalr1.cc:919
    {
    ElementPtr dl(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("debuglevel", dl);
}
#line 1296 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 125:
#line 555 "slaac_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORDS);
}
#line 1304 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 126:
#line 557 "slaac_parser.yy" // lalr1.cc:919
    {
    ElementPtr sev(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("severity", sev);
    ctx.leave();
}
#line 1314 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 127:
#line 563 "slaac_parser.yy" // lalr1.cc:919
    {
    ElementPtr l(new ListElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("output_options", l);
    ctx.stack_.push_back(l);
    ctx.enter(ctx.OUTPUT_OPTIONS);
}
#line 1325 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 128:
#line 568 "slaac_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 1334 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 131:
#line 577 "slaac_parser.yy" // lalr1.cc:919
    {
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->add(m);
    ctx.stack_.push_back(m);
}
#line 1344 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 132:
#line 581 "slaac_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.pop_back();
}
#line 1352 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 139:
#line 595 "slaac_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORDS);
}
#line 1360 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 140:
#line 597 "slaac_parser.yy" // lalr1.cc:919
    {
    ElementPtr sev(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("output", sev);
    ctx.leave();
}
#line 1370 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 141:
#line 603 "slaac_parser.yy" // lalr1.cc:919
    {
    ElementPtr flush(new BoolElement(yystack_[0].value.as < bool > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("flush", flush);
}
#line 1379 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 142:
#line 608 "slaac_parser.yy" // lalr1.cc:919
    {
    ElementPtr maxsize(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("maxsize", maxsize);
}
#line 1388 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 143:
#line 613 "slaac_parser.yy" // lalr1.cc:919
    {
    ElementPtr maxver(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("maxver", maxver);
}
#line 1397 "slaac_parser.cc" // lalr1.cc:919
    break;


#line 1401 "slaac_parser.cc" // lalr1.cc:919
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


  const short SlaacParser::yypact_ninf_ = -137;

  const signed char SlaacParser::yytable_ninf_ = -1;

  const short
  SlaacParser::yypact_[] =
  {
      25,  -137,  -137,  -137,    12,     8,     4,     9,  -137,  -137,
    -137,  -137,  -137,  -137,  -137,  -137,  -137,  -137,  -137,  -137,
    -137,  -137,  -137,  -137,     8,   -20,    14,    74,  -137,    29,
      15,    27,    51,    64,  -137,    61,  -137,  -137,  -137,    66,
      67,    68,    69,    71,    72,    73,    75,  -137,  -137,  -137,
      76,  -137,    70,    78,  -137,  -137,  -137,  -137,  -137,  -137,
    -137,  -137,  -137,  -137,  -137,  -137,  -137,  -137,  -137,  -137,
       8,     8,  -137,    40,    79,  -137,    95,    96,    97,    59,
      58,    60,    63,    65,    77,    62,    80,   105,   106,   107,
    -137,  -137,    74,  -137,  -137,   108,   110,   111,    82,   112,
    -137,  -137,  -137,  -137,  -137,  -137,  -137,  -137,     8,   109,
     116,  -137,     8,    74,  -137,  -137,  -137,    -6,  -137,   115,
     118,  -137,   119,  -137,  -137,    11,  -137,  -137,  -137,   120,
     125,  -137,  -137,    -1,  -137,  -137,   126,    -6,  -137,    16,
    -137,   115,    -2,   118,  -137,   124,  -137,  -137,   127,   128,
     129,   130,  -137,  -137,  -137,    17,  -137,  -137,  -137,  -137,
    -137,  -137,  -137,  -137,  -137,   131,  -137,  -137,  -137,  -137,
      53,  -137,  -137,  -137,  -137,  -137,  -137,  -137,  -137,   132,
      92,    93,    98,    99,    16,  -137,   135,   136,   100,   140,
      -2,  -137,   103,   104,  -137,  -137,  -137,  -137,  -137,   113,
     142,  -137,   114,  -137,  -137,   143,   145,  -137,  -137,   144,
    -137,  -137,   117,  -137,    57,  -137,  -137,     1,   144,  -137,
    -137,   146,   148,   149,    54,  -137,  -137,  -137,  -137,  -137,
    -137,   150,   121,   122,   133,     1,  -137,   137,  -137,  -137,
    -137,  -137,  -137
  };

  const unsigned char
  SlaacParser::yydefact_[] =
  {
       0,     2,     4,     6,     0,     0,     0,     0,     1,    25,
      18,    15,    14,    11,    12,    13,     3,    10,    16,    17,
      38,     5,     8,     7,    27,    21,     0,    42,    29,     0,
      28,     0,     0,    22,    40,     0,    61,    63,    65,     0,
       0,     0,     0,     0,     0,     0,     0,    81,    83,   107,
       0,    60,     0,    43,    44,    58,    59,    46,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    47,    26,
       0,     0,    19,     0,     0,    39,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      37,     9,     0,    30,    23,     0,     0,     0,     0,     0,
      73,    74,    75,    76,    77,    78,    79,    80,     0,     0,
       0,    45,     0,    42,    20,    62,    64,     0,    82,    85,
       0,    24,     0,    71,    70,     0,    67,    69,    89,     0,
      86,    87,   111,     0,   109,    41,     0,     0,    66,     0,
      84,     0,     0,     0,   108,     0,    68,   101,     0,     0,
       0,     0,   100,    98,    99,     0,    91,    93,    94,    95,
      96,    97,    88,   122,   127,     0,   125,   121,   119,   120,
       0,   113,   115,   117,   118,   116,   110,    31,    72,     0,
       0,     0,     0,     0,     0,    90,     0,     0,     0,     0,
       0,   112,    33,     0,   103,   104,   105,   106,    92,     0,
       0,   124,     0,   114,    35,     0,    34,   102,   123,     0,
     126,    32,     0,   131,     0,   129,    36,     0,     0,   128,
     139,     0,     0,     0,     0,   133,   135,   136,   137,   138,
     130,     0,     0,     0,     0,     0,   132,     0,   141,   142,
     143,   134,   140
  };

  const short
  SlaacParser::yypgoto_[] =
  {
    -137,  -137,  -137,  -137,  -137,  -137,  -137,  -137,   -24,    18,
    -137,  -137,  -137,  -137,  -137,  -137,  -137,  -137,  -137,  -137,
    -137,  -137,  -116,  -137,  -137,  -137,  -137,     0,  -137,    81,
    -136,  -137,  -135,  -137,  -137,  -137,  -137,    20,  -137,  -137,
    -137,  -137,  -137,  -137,  -137,  -137,  -137,  -137,  -137,  -137,
    -137,  -137,  -137,  -137,    19,  -137,  -137,   -26,  -137,  -137,
    -137,  -137,  -137,  -137,  -137,  -137,  -137,    21,  -137,  -137,
     -29,  -137,  -137,  -137,  -137,  -137,  -137,  -137,  -137,   -56,
    -137,  -137,   -72,  -137,  -137,  -137,  -137,  -137
  };

  const short
  SlaacParser::yydefgoto_[] =
  {
      -1,     4,     5,     6,     7,    23,    27,    16,    17,    18,
      25,   115,    32,    33,    19,    24,    29,    30,   178,   192,
     205,   206,    51,    21,    26,    35,    74,    52,    53,    54,
      55,    76,    56,    77,    57,    78,   125,   126,   127,   136,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    87,
      67,    88,   129,   130,   131,   139,   155,   156,   157,   179,
     158,   159,   160,   161,    68,    89,   133,   134,   142,   170,
     171,   172,   186,   173,   174,   189,   175,   187,   214,   215,
     217,   224,   225,   226,   231,   227,   228,   229
  };

  const unsigned char
  SlaacParser::yytable_[] =
  {
      28,   124,   143,   153,   154,   144,   168,   169,   123,    36,
      37,    20,     8,     9,   137,    10,    22,    11,    70,   138,
     184,   124,    31,   152,    34,   185,   167,    36,    37,   163,
     164,    71,   165,   166,   220,    69,    50,   221,   222,   223,
      50,   147,   148,   149,   150,   151,    93,    94,   153,   154,
      12,    13,    14,    15,   168,   169,   190,   235,    50,    72,
     218,   191,   236,   219,     1,     2,     3,    73,   152,    75,
      79,    80,    81,    82,   167,    83,    84,    85,    91,    86,
      90,    92,    95,    96,   118,    36,    37,    38,   121,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    97,
      98,    99,   100,   101,    49,   102,   103,   106,   104,   108,
     109,   110,   112,   122,   119,   114,    50,   113,    10,   117,
     105,   120,   128,   107,   116,   132,   140,   135,   141,   177,
     145,   180,   181,   182,   183,   188,   193,   194,   195,   199,
     200,   196,   197,   201,   202,   204,   207,   209,   212,   211,
     232,   213,   233,   234,   237,   208,   210,   146,   198,   216,
     162,   203,   230,   241,   176,   239,   238,     0,     0,     0,
       0,     0,     0,   111,     0,     0,   240,     0,     0,   242
  };

  const short
  SlaacParser::yycheck_[] =
  {
      24,   117,     3,   139,   139,     6,   142,   142,    14,    11,
      12,     7,     0,     5,     3,     7,     7,     9,     3,     8,
       3,   137,    42,   139,    10,     8,   142,    11,    12,    31,
      32,     4,    34,    35,    33,     6,    42,    36,    37,    38,
      42,    25,    26,    27,    28,    29,    70,    71,   184,   184,
      42,    43,    44,    45,   190,   190,     3,     3,    42,     8,
       3,     8,     8,     6,    39,    40,    41,     3,   184,     8,
       4,     4,     4,     4,   190,     4,     4,     4,     8,     4,
       4,     3,    42,     4,   108,    11,    12,    13,   112,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,     4,
       4,     4,    43,    45,    30,    45,    43,    45,    43,     4,
       4,     4,     4,   113,     5,    97,    42,     7,     7,     7,
      43,     5,     7,    43,    42,     7,     6,     8,     3,     5,
       4,     4,     4,     4,     4,     4,     4,    45,    45,     4,
       4,    43,    43,    43,     4,    42,    42,     5,     3,     6,
       4,     7,     4,     4,     4,    42,    42,   137,   184,    42,
     141,   190,   218,   235,   143,    43,    45,    -1,    -1,    -1,
      -1,    -1,    -1,    92,    -1,    -1,    43,    -1,    -1,    42
  };

  const unsigned char
  SlaacParser::yystos_[] =
  {
       0,    39,    40,    41,    47,    48,    49,    50,     0,     5,
       7,     9,    42,    43,    44,    45,    53,    54,    55,    60,
       7,    69,     7,    51,    61,    56,    70,    52,    54,    62,
      63,    42,    58,    59,    10,    71,    11,    12,    13,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    30,
      42,    68,    73,    74,    75,    76,    78,    80,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    96,   110,     6,
       3,     4,     8,     3,    72,     8,    77,    79,    81,     4,
       4,     4,     4,     4,     4,     4,     4,    95,    97,   111,
       4,     8,     3,    54,    54,    42,     4,     4,     4,     4,
      43,    45,    45,    43,    43,    43,    45,    43,     4,     4,
       4,    75,     4,     7,    55,    57,    42,     7,    54,     5,
       5,    54,    73,    14,    68,    82,    83,    84,     7,    98,
      99,   100,     7,   112,   113,     8,    85,     3,     8,   101,
       6,     3,   114,     3,     6,     4,    83,    25,    26,    27,
      28,    29,    68,    76,    78,   102,   103,   104,   106,   107,
     108,   109,   100,    31,    32,    34,    35,    68,    76,    78,
     115,   116,   117,   119,   120,   122,   113,     5,    64,   105,
       4,     4,     4,     4,     3,     8,   118,   123,     4,   121,
       3,     8,    65,     4,    45,    45,    43,    43,   103,     4,
       4,    43,     4,   116,    42,    66,    67,    42,    42,     5,
      42,     6,     3,     7,   124,   125,    42,   126,     3,     6,
      33,    36,    37,    38,   127,   128,   129,   131,   132,   133,
     125,   130,     4,     4,     4,     3,     8,     4,    45,    43,
      43,   128,    42
  };

  const unsigned char
  SlaacParser::yyr1_[] =
  {
       0,    46,    48,    47,    49,    47,    50,    47,    52,    51,
      53,    54,    54,    54,    54,    54,    54,    54,    56,    55,
      57,    58,    58,    59,    59,    61,    60,    62,    62,    63,
      63,    65,    64,    66,    66,    67,    67,    68,    70,    69,
      72,    71,    73,    73,    74,    74,    75,    75,    75,    75,
      75,    75,    75,    75,    75,    75,    75,    75,    75,    75,
      75,    77,    76,    79,    78,    81,    80,    82,    82,    83,
      83,    85,    84,    86,    87,    88,    89,    90,    91,    92,
      93,    95,    94,    97,    96,    98,    98,    99,    99,   101,
     100,   102,   102,   103,   103,   103,   103,   103,   103,   103,
     103,   105,   104,   106,   107,   108,   109,   111,   110,   112,
     112,   114,   113,   115,   115,   116,   116,   116,   116,   116,
     116,   116,   118,   117,   119,   121,   120,   123,   122,   124,
     124,   126,   125,   127,   127,   128,   128,   128,   128,   130,
     129,   131,   132,   133
  };

  const unsigned char
  SlaacParser::yyr2_[] =
  {
       0,     2,     0,     3,     0,     3,     0,     3,     0,     4,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     4,
       1,     0,     1,     3,     5,     0,     4,     0,     1,     1,
       3,     0,     4,     0,     1,     1,     3,     2,     0,     4,
       0,     6,     0,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     4,     0,     4,     0,     6,     1,     3,     1,
       1,     0,     4,     3,     3,     3,     3,     3,     3,     3,
       3,     0,     4,     0,     6,     0,     1,     1,     3,     0,
       4,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     4,     3,     3,     3,     3,     0,     6,     1,
       3,     0,     4,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     0,     4,     3,     0,     4,     0,     6,     1,
       3,     0,     4,     1,     3,     1,     1,     1,     1,     0,
       4,     3,     3,     3
  };



  // YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
  // First, the terminals, then, starting at \a yyntokens_, nonterminals.
  const char*
  const SlaacParser::yytname_[] =
  {
  "\"end of file\"", "error", "$undefined", "\",\"", "\":\"", "\"[\"",
  "\"]\"", "\"{\"", "\"}\"", "\"null\"", "\"Slaac\"", "\"user-context\"",
  "\"comment\"", "\"interfaces-config\"", "\"interfaces\"",
  "\"hop-limit\"", "\"managed-flag\"", "\"other-flag\"",
  "\"router-lifetime\"", "\"reachable-time\"", "\"retrans-timer\"",
  "\"source-ll-address\"", "\"mtu\"", "\"universal-ra\"",
  "\"prefix-infos\"", "\"prefix\"", "\"on-link-flag\"",
  "\"address-config-flag\"", "\"valid-lifetime\"",
  "\"preferred-lifetime\"", "\"loggers\"", "\"name\"",
  "\"output_options\"", "\"output\"", "\"debuglevel\"", "\"severity\"",
  "\"flush\"", "\"maxsize\"", "\"maxver\"", "START_JSON", "START_SLAAC",
  "START_SUB_SLAAC", "\"constant string\"", "\"integer\"",
  "\"floating point\"", "\"boolean\"", "$accept", "start", "$@1", "$@2",
  "$@3", "sub_slaac", "$@4", "json", "value", "map", "$@5", "map_value",
  "map_content", "not_empty_map", "list_generic", "$@6", "list_content",
  "not_empty_list", "list_strings", "$@7", "list_strings_content",
  "not_empty_list_strings", "unknown_map_entry", "slaac_syntax_map", "$@8",
  "slaac_object", "$@9", "global_params", "not_empty_global_params",
  "global_param", "user_context", "$@10", "comment", "$@11",
  "interfaces_config", "$@12", "interfaces_config_params",
  "interfaces_config_param", "interfaces_list", "$@13", "hop_limit",
  "managed_flag", "other_flag", "router_lifetime", "reachable_time",
  "retrans_timer", "source_ll_address", "mtu", "universal_ra", "$@14",
  "prefix_infos", "$@15", "prefix_info_list", "not_empty_prefix_info_list",
  "prefix_info", "$@16", "prefix_info_params", "prefix_info_param",
  "prefix", "$@17", "on_link_flag", "address_config_flag",
  "valid_lifetime", "preferred_lifetime", "loggers", "$@18",
  "loggers_entries", "logger_entry", "$@19", "logger_params",
  "logger_param", "name", "$@20", "debuglevel", "severity", "$@21",
  "output_options_list", "$@22", "output_options_list_content",
  "output_entry", "$@23", "output_params_list", "output_params", "output",
  "$@24", "flush", "maxsize", "maxver", YY_NULLPTR
  };

#if SLAAC_DEBUG
  const unsigned short
  SlaacParser::yyrline_[] =
  {
       0,   115,   115,   115,   116,   116,   117,   117,   125,   125,
     136,   142,   143,   144,   145,   146,   147,   148,   152,   152,
     163,   168,   169,   177,   181,   188,   188,   194,   195,   198,
     202,   209,   209,   216,   217,   220,   224,   237,   245,   245,
     257,   257,   274,   275,   278,   279,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
     298,   301,   301,   326,   326,   353,   353,   364,   365,   368,
     369,   372,   372,   382,   387,   392,   397,   402,   407,   412,
     417,   423,   423,   430,   430,   440,   441,   444,   445,   448,
     448,   458,   459,   462,   463,   464,   465,   466,   467,   468,
     469,   472,   472,   480,   485,   490,   495,   504,   504,   516,
     517,   521,   521,   529,   530,   533,   534,   535,   536,   537,
     538,   539,   542,   542,   550,   555,   555,   563,   563,   573,
     574,   577,   577,   585,   586,   589,   590,   591,   592,   595,
     595,   603,   608,   613
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
#line 1973 "slaac_parser.cc" // lalr1.cc:1242
#line 618 "slaac_parser.yy" // lalr1.cc:1243


void
isc::slaac::SlaacParser::error(const location_type& loc,
                               const std::string& what)
{
    ctx.error(loc, what);
}
