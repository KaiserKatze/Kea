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
      case 55: // value
      case 58: // map_value
        value.YY_MOVE_OR_COPY< ElementPtr > (YY_MOVE (that.value));
        break;

      case 46: // "boolean"
        value.YY_MOVE_OR_COPY< bool > (YY_MOVE (that.value));
        break;

      case 45: // "floating point"
        value.YY_MOVE_OR_COPY< double > (YY_MOVE (that.value));
        break;

      case 44: // "integer"
        value.YY_MOVE_OR_COPY< int64_t > (YY_MOVE (that.value));
        break;

      case 43: // "constant string"
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
      case 55: // value
      case 58: // map_value
        value.move< ElementPtr > (YY_MOVE (that.value));
        break;

      case 46: // "boolean"
        value.move< bool > (YY_MOVE (that.value));
        break;

      case 45: // "floating point"
        value.move< double > (YY_MOVE (that.value));
        break;

      case 44: // "integer"
        value.move< int64_t > (YY_MOVE (that.value));
        break;

      case 43: // "constant string"
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
      case 55: // value
      case 58: // map_value
        value.move< ElementPtr > (that.value);
        break;

      case 46: // "boolean"
        value.move< bool > (that.value);
        break;

      case 45: // "floating point"
        value.move< double > (that.value);
        break;

      case 44: // "integer"
        value.move< int64_t > (that.value);
        break;

      case 43: // "constant string"
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
      case 43: // "constant string"
#line 105 "slaac_parser.yy" // lalr1.cc:676
        { yyoutput << yysym.value.template as < std::string > (); }
#line 389 "slaac_parser.cc" // lalr1.cc:676
        break;

      case 44: // "integer"
#line 105 "slaac_parser.yy" // lalr1.cc:676
        { yyoutput << yysym.value.template as < int64_t > (); }
#line 395 "slaac_parser.cc" // lalr1.cc:676
        break;

      case 45: // "floating point"
#line 105 "slaac_parser.yy" // lalr1.cc:676
        { yyoutput << yysym.value.template as < double > (); }
#line 401 "slaac_parser.cc" // lalr1.cc:676
        break;

      case 46: // "boolean"
#line 105 "slaac_parser.yy" // lalr1.cc:676
        { yyoutput << yysym.value.template as < bool > (); }
#line 407 "slaac_parser.cc" // lalr1.cc:676
        break;

      case 55: // value
#line 105 "slaac_parser.yy" // lalr1.cc:676
        { yyoutput << yysym.value.template as < ElementPtr > (); }
#line 413 "slaac_parser.cc" // lalr1.cc:676
        break;

      case 58: // map_value
#line 105 "slaac_parser.yy" // lalr1.cc:676
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
      case 55: // value
      case 58: // map_value
        yylhs.value.emplace< ElementPtr > ();
        break;

      case 46: // "boolean"
        yylhs.value.emplace< bool > ();
        break;

      case 45: // "floating point"
        yylhs.value.emplace< double > ();
        break;

      case 44: // "integer"
        yylhs.value.emplace< int64_t > ();
        break;

      case 43: // "constant string"
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
#line 116 "slaac_parser.yy" // lalr1.cc:919
    { ctx.ctx_ = ctx.NO_KEYWORDS; }
#line 680 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 4:
#line 117 "slaac_parser.yy" // lalr1.cc:919
    { ctx.ctx_ = ctx.CONFIG; }
#line 686 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 6:
#line 118 "slaac_parser.yy" // lalr1.cc:919
    { ctx.ctx_ = ctx.SLAAC; }
#line 692 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 8:
#line 126 "slaac_parser.yy" // lalr1.cc:919
    {
    // Parse the Slaac map
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.push_back(m);
}
#line 702 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 9:
#line 130 "slaac_parser.yy" // lalr1.cc:919
    {
    // parsing completed
}
#line 710 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 10:
#line 137 "slaac_parser.yy" // lalr1.cc:919
    {
    // Push back the JSON value on the stack
    ctx.stack_.push_back(yystack_[0].value.as < ElementPtr > ());
}
#line 719 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 11:
#line 143 "slaac_parser.yy" // lalr1.cc:919
    { yylhs.value.as < ElementPtr > () = ElementPtr(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location))); }
#line 725 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 12:
#line 144 "slaac_parser.yy" // lalr1.cc:919
    { yylhs.value.as < ElementPtr > () = ElementPtr(new DoubleElement(yystack_[0].value.as < double > (), ctx.loc2pos(yystack_[0].location))); }
#line 731 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 13:
#line 145 "slaac_parser.yy" // lalr1.cc:919
    { yylhs.value.as < ElementPtr > () = ElementPtr(new BoolElement(yystack_[0].value.as < bool > (), ctx.loc2pos(yystack_[0].location))); }
#line 737 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 14:
#line 146 "slaac_parser.yy" // lalr1.cc:919
    { yylhs.value.as < ElementPtr > () = ElementPtr(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location))); }
#line 743 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 15:
#line 147 "slaac_parser.yy" // lalr1.cc:919
    { yylhs.value.as < ElementPtr > () = ElementPtr(new NullElement(ctx.loc2pos(yystack_[0].location))); }
#line 749 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 16:
#line 148 "slaac_parser.yy" // lalr1.cc:919
    { yylhs.value.as < ElementPtr > () = ctx.stack_.back(); ctx.stack_.pop_back(); }
#line 755 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 17:
#line 149 "slaac_parser.yy" // lalr1.cc:919
    { yylhs.value.as < ElementPtr > () = ctx.stack_.back(); ctx.stack_.pop_back(); }
#line 761 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 18:
#line 153 "slaac_parser.yy" // lalr1.cc:919
    {
    // This code is executed when we're about to start parsing
    // the content of the map
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.push_back(m);
}
#line 772 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 19:
#line 158 "slaac_parser.yy" // lalr1.cc:919
    {
    // map parsing completed. If we ever want to do any wrap up
    // (maybe some sanity checking), this would be the best place
    // for it.
}
#line 782 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 20:
#line 164 "slaac_parser.yy" // lalr1.cc:919
    { yylhs.value.as < ElementPtr > () = ctx.stack_.back(); ctx.stack_.pop_back(); }
#line 788 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 23:
#line 178 "slaac_parser.yy" // lalr1.cc:919
    {
                  // map containing a single entry
                  ctx.stack_.back()->set(yystack_[2].value.as < std::string > (), yystack_[0].value.as < ElementPtr > ());
                  }
#line 797 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 24:
#line 182 "slaac_parser.yy" // lalr1.cc:919
    {
                  // map consisting of a shorter map followed by
                  // comma and string:value
                  ctx.stack_.back()->set(yystack_[2].value.as < std::string > (), yystack_[0].value.as < ElementPtr > ());
                  }
#line 807 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 25:
#line 189 "slaac_parser.yy" // lalr1.cc:919
    {
    ElementPtr l(new ListElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.push_back(l);
}
#line 816 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 26:
#line 192 "slaac_parser.yy" // lalr1.cc:919
    {
}
#line 823 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 29:
#line 199 "slaac_parser.yy" // lalr1.cc:919
    {
                  // List consisting of a single element.
                  ctx.stack_.back()->add(yystack_[0].value.as < ElementPtr > ());
                  }
#line 832 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 30:
#line 203 "slaac_parser.yy" // lalr1.cc:919
    {
                  // List ending with , and a value.
                  ctx.stack_.back()->add(yystack_[0].value.as < ElementPtr > ());
                  }
#line 841 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 31:
#line 210 "slaac_parser.yy" // lalr1.cc:919
    {
    // List parsing about to start
}
#line 849 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 32:
#line 212 "slaac_parser.yy" // lalr1.cc:919
    {
    // list parsing complete. Put any sanity checking here
    //ctx.stack_.pop_back();
}
#line 858 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 35:
#line 221 "slaac_parser.yy" // lalr1.cc:919
    {
                          ElementPtr s(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
                          ctx.stack_.back()->add(s);
                          }
#line 867 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 36:
#line 225 "slaac_parser.yy" // lalr1.cc:919
    {
                          ElementPtr s(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
                          ctx.stack_.back()->add(s);
                          }
#line 876 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 37:
#line 238 "slaac_parser.yy" // lalr1.cc:919
    {
    const std::string& where = ctx.contextName();
    const std::string& keyword = yystack_[1].value.as < std::string > ();
    error(yystack_[1].location,
          "got unexpected keyword \"" + keyword + "\" in " + where + " map.");
}
#line 887 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 38:
#line 246 "slaac_parser.yy" // lalr1.cc:919
    {
    // This code is executed when we're about to start parsing
    // the content of the map
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.push_back(m);
}
#line 898 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 39:
#line 251 "slaac_parser.yy" // lalr1.cc:919
    {
    // map parsing completed. If we ever want to do any wrap up
    // (maybe some sanity checking), this would be the best place
    // for it.
}
#line 908 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 40:
#line 258 "slaac_parser.yy" // lalr1.cc:919
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
#line 268 "slaac_parser.yy" // lalr1.cc:919
    {
    // Ok, we're done with parsing Slaac. Let's take the map
    // off the stack.
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 935 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 61:
#line 302 "slaac_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORDS);
}
#line 943 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 62:
#line 304 "slaac_parser.yy" // lalr1.cc:919
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
#line 327 "slaac_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORDS);
}
#line 978 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 64:
#line 329 "slaac_parser.yy" // lalr1.cc:919
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
#line 354 "slaac_parser.yy" // lalr1.cc:919
    {
    ElementPtr i(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("interfaces-config", i);
    ctx.stack_.push_back(i);
    ctx.enter(ctx.INTERFACES_CONFIG);
}
#line 1018 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 66:
#line 359 "slaac_parser.yy" // lalr1.cc:919
    {
    // No interfaces config param is required
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 1028 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 73:
#line 375 "slaac_parser.yy" // lalr1.cc:919
    {
    ElementPtr l(new ListElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("interfaces", l);
    ctx.stack_.push_back(l);
    ctx.enter(ctx.NO_KEYWORDS);
}
#line 1039 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 74:
#line 380 "slaac_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 1048 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 75:
#line 385 "slaac_parser.yy" // lalr1.cc:919
    {
    ElementPtr hl(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("hop-limit", hl);
}
#line 1057 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 76:
#line 390 "slaac_parser.yy" // lalr1.cc:919
    {
    ElementPtr f(new BoolElement(yystack_[0].value.as < bool > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("managed-flag", f);
}
#line 1066 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 77:
#line 395 "slaac_parser.yy" // lalr1.cc:919
    {
    ElementPtr f(new BoolElement(yystack_[0].value.as < bool > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("other-flag", f);
}
#line 1075 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 78:
#line 400 "slaac_parser.yy" // lalr1.cc:919
    {
    ElementPtr rl(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("router-lifetime", rl);
}
#line 1084 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 79:
#line 405 "slaac_parser.yy" // lalr1.cc:919
    {
    ElementPtr rt(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("reachable-time", rt);
}
#line 1093 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 80:
#line 410 "slaac_parser.yy" // lalr1.cc:919
    {
    ElementPtr rt(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("retrans-timer", rt);
}
#line 1102 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 81:
#line 415 "slaac_parser.yy" // lalr1.cc:919
    {
    ElementPtr lla(new BoolElement(yystack_[0].value.as < bool > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("source-ll-address", lla);
}
#line 1111 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 82:
#line 420 "slaac_parser.yy" // lalr1.cc:919
    {
    ElementPtr mtu(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("mtu", mtu);
}
#line 1120 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 83:
#line 426 "slaac_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORDS);
}
#line 1128 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 84:
#line 428 "slaac_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.back()->set("universal-ra", yystack_[0].value.as < ElementPtr > ());
    ctx.leave();
}
#line 1137 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 85:
#line 433 "slaac_parser.yy" // lalr1.cc:919
    {
    ElementPtr l(new ListElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("prefix-infos", l);
    ctx.stack_.push_back(l);
}
#line 1147 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 86:
#line 437 "slaac_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 1156 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 91:
#line 450 "slaac_parser.yy" // lalr1.cc:919
    {
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->add(m);
    ctx.stack_.push_back(m);
}
#line 1166 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 92:
#line 454 "slaac_parser.yy" // lalr1.cc:919
    {
    // The prefix parameter is required
    ctx.require("prefix", ctx.loc2pos(yystack_[3].location), ctx.loc2pos(yystack_[0].location));
    ctx.stack_.pop_back();
}
#line 1176 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 103:
#line 474 "slaac_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORDS);
}
#line 1184 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 104:
#line 476 "slaac_parser.yy" // lalr1.cc:919
    {
    ElementPtr pref(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("prefix", pref);
    ctx.leave();
}
#line 1194 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 105:
#line 482 "slaac_parser.yy" // lalr1.cc:919
    {
    ElementPtr f(new BoolElement(yystack_[0].value.as < bool > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("on-link-flag", f);
}
#line 1203 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 106:
#line 487 "slaac_parser.yy" // lalr1.cc:919
    {
    ElementPtr f(new BoolElement(yystack_[0].value.as < bool > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("address-config-flag", f);
}
#line 1212 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 107:
#line 492 "slaac_parser.yy" // lalr1.cc:919
    {
    ElementPtr rl(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("valid-lifetime", rl);
}
#line 1221 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 108:
#line 497 "slaac_parser.yy" // lalr1.cc:919
    {
    ElementPtr rl(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("preferred-lifetime", rl);
}
#line 1230 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 109:
#line 507 "slaac_parser.yy" // lalr1.cc:919
    {
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("Logging", m);
    ctx.stack_.push_back(m);
    ctx.enter(ctx.LOGGING);
}
#line 1241 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 110:
#line 512 "slaac_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 1250 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 114:
#line 529 "slaac_parser.yy" // lalr1.cc:919
    {
    ElementPtr l(new ListElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("loggers", l);
    ctx.stack_.push_back(l);
    ctx.enter(ctx.LOGGERS);
}
#line 1261 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 115:
#line 534 "slaac_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 1270 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 118:
#line 546 "slaac_parser.yy" // lalr1.cc:919
    {
    ElementPtr l(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->add(l);
    ctx.stack_.push_back(l);
}
#line 1280 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 119:
#line 550 "slaac_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.pop_back();
}
#line 1288 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 129:
#line 567 "slaac_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORDS);
}
#line 1296 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 130:
#line 569 "slaac_parser.yy" // lalr1.cc:919
    {
    ElementPtr name(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("name", name);
    ctx.leave();
}
#line 1306 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 131:
#line 575 "slaac_parser.yy" // lalr1.cc:919
    {
    ElementPtr dl(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("debuglevel", dl);
}
#line 1315 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 132:
#line 580 "slaac_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORDS);
}
#line 1323 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 133:
#line 582 "slaac_parser.yy" // lalr1.cc:919
    {
    ElementPtr sev(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("severity", sev);
    ctx.leave();
}
#line 1333 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 134:
#line 588 "slaac_parser.yy" // lalr1.cc:919
    {
    ElementPtr l(new ListElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("output_options", l);
    ctx.stack_.push_back(l);
    ctx.enter(ctx.OUTPUT_OPTIONS);
}
#line 1344 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 135:
#line 593 "slaac_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 1353 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 138:
#line 602 "slaac_parser.yy" // lalr1.cc:919
    {
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->add(m);
    ctx.stack_.push_back(m);
}
#line 1363 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 139:
#line 606 "slaac_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.pop_back();
}
#line 1371 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 146:
#line 620 "slaac_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORDS);
}
#line 1379 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 147:
#line 622 "slaac_parser.yy" // lalr1.cc:919
    {
    ElementPtr sev(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("output", sev);
    ctx.leave();
}
#line 1389 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 148:
#line 628 "slaac_parser.yy" // lalr1.cc:919
    {
    ElementPtr flush(new BoolElement(yystack_[0].value.as < bool > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("flush", flush);
}
#line 1398 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 149:
#line 633 "slaac_parser.yy" // lalr1.cc:919
    {
    ElementPtr maxsize(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("maxsize", maxsize);
}
#line 1407 "slaac_parser.cc" // lalr1.cc:919
    break;

  case 150:
#line 638 "slaac_parser.yy" // lalr1.cc:919
    {
    ElementPtr maxver(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("maxver", maxver);
}
#line 1416 "slaac_parser.cc" // lalr1.cc:919
    break;


#line 1420 "slaac_parser.cc" // lalr1.cc:919
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


  const signed char SlaacParser::yypact_ninf_ = -118;

  const signed char SlaacParser::yytable_ninf_ = -1;

  const short
  SlaacParser::yypact_[] =
  {
      26,  -118,  -118,  -118,     8,    -2,    14,    15,  -118,  -118,
    -118,  -118,  -118,  -118,  -118,  -118,  -118,  -118,  -118,  -118,
    -118,  -118,  -118,  -118,    -2,   -13,    27,    93,  -118,    32,
      51,    53,    47,    66,  -118,    64,  -118,  -118,  -118,    69,
      70,    73,    74,    76,    77,    78,    79,  -118,  -118,  -118,
      80,  -118,    81,    82,  -118,  -118,  -118,  -118,  -118,  -118,
    -118,  -118,  -118,  -118,  -118,  -118,  -118,  -118,  -118,  -118,
      -2,    -2,  -118,    45,    83,  -118,    87,    88,    89,    52,
      48,    49,    54,    57,    58,    61,    75,   114,   116,   117,
    -118,  -118,    93,  -118,  -118,   118,    90,   119,    84,   121,
    -118,  -118,  -118,  -118,  -118,  -118,  -118,  -118,    -2,   120,
     122,  -118,    -2,    93,  -118,  -118,  -118,     2,  -118,   123,
     100,  -118,   124,  -118,  -118,  -118,  -118,     9,  -118,  -118,
    -118,   127,   131,  -118,  -118,    12,  -118,  -118,  -118,   133,
       2,  -118,     7,  -118,   123,   134,   100,  -118,   130,  -118,
    -118,   135,   136,   137,   138,  -118,  -118,  -118,    43,  -118,
    -118,  -118,  -118,  -118,  -118,  -118,   139,  -118,  -118,  -118,
     141,    97,   101,   102,   104,     7,  -118,   142,   107,   108,
    -118,  -118,  -118,  -118,  -118,  -118,    25,  -118,  -118,   146,
     150,  -118,    28,   142,  -118,  -118,   111,  -118,  -118,   151,
    -118,  -118,  -118,  -118,    44,  -118,  -118,  -118,  -118,  -118,
    -118,  -118,   152,   153,   115,   154,    28,  -118,   125,   155,
    -118,   126,  -118,  -118,   156,  -118,  -118,    50,  -118,   -28,
     156,  -118,  -118,   157,   158,   160,    62,  -118,  -118,  -118,
    -118,  -118,  -118,   161,   128,   129,   132,   -28,  -118,   140,
    -118,  -118,  -118,  -118,  -118
  };

  const unsigned char
  SlaacParser::yydefact_[] =
  {
       0,     2,     4,     6,     0,     0,     0,     0,     1,    25,
      18,    15,    14,    11,    12,    13,     3,    10,    16,    17,
      38,     5,     8,     7,    27,    21,     0,    42,    29,     0,
      28,     0,     0,    22,    40,     0,    61,    63,    65,     0,
       0,     0,     0,     0,     0,     0,     0,    83,    85,   109,
       0,    60,     0,    43,    44,    58,    59,    46,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    47,    26,
       0,     0,    19,     0,     0,    39,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      37,     9,     0,    30,    23,     0,     0,     0,     0,     0,
      75,    76,    77,    78,    79,    80,    81,    82,     0,     0,
       0,    45,     0,    42,    20,    62,    64,     0,    84,    87,
       0,    24,     0,    73,    72,    70,    71,     0,    67,    69,
      91,     0,    88,    89,   114,     0,   111,   113,    41,     0,
       0,    66,     0,    86,     0,     0,     0,   110,     0,    68,
     103,     0,     0,     0,     0,   102,   100,   101,     0,    93,
      95,    96,    97,    98,    99,    90,     0,   112,    31,    74,
       0,     0,     0,     0,     0,     0,    92,     0,    33,     0,
     105,   106,   107,   108,    94,   118,     0,   116,    35,     0,
      34,   104,     0,     0,   115,    32,     0,   129,   134,     0,
     132,   128,   126,   127,     0,   120,   122,   124,   125,   123,
     117,    36,     0,     0,     0,     0,     0,   119,     0,     0,
     131,     0,   121,   130,     0,   133,   138,     0,   136,     0,
       0,   135,   146,     0,     0,     0,     0,   140,   142,   143,
     144,   145,   137,     0,     0,     0,     0,     0,   139,     0,
     148,   149,   150,   141,   147
  };

  const signed char
  SlaacParser::yypgoto_[] =
  {
    -118,  -118,  -118,  -118,  -118,  -118,  -118,  -118,   -22,    85,
    -118,  -118,  -118,  -118,  -118,  -118,  -118,  -118,  -118,  -118,
    -118,  -118,  -117,  -118,  -118,  -118,  -118,    11,  -118,    86,
    -116,  -118,  -113,  -118,  -118,  -118,  -118,    30,  -118,  -118,
    -118,  -118,  -118,  -118,  -118,  -118,  -118,  -118,  -118,  -118,
    -118,  -118,  -118,  -118,    22,  -118,  -118,    -8,  -118,  -118,
    -118,  -118,  -118,  -118,  -118,  -118,  -118,    29,  -118,  -118,
    -118,   -21,  -118,  -118,   -45,  -118,  -118,  -118,  -118,  -118,
    -118,  -118,  -118,   -53,  -118,  -118,   -68,  -118,  -118,  -118,
    -118,  -118
  };

  const short
  SlaacParser::yydefgoto_[] =
  {
      -1,     4,     5,     6,     7,    23,    27,    16,    17,    18,
      25,   115,    32,    33,    19,    24,    29,    30,   169,   178,
     189,   190,    51,    21,    26,    35,    74,    52,    53,    54,
      55,    76,    56,    77,    57,    78,   127,   128,   129,   139,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    87,
      67,    88,   131,   132,   133,   142,   158,   159,   160,   170,
     161,   162,   163,   164,    68,    89,   135,   136,   137,   145,
     186,   187,   192,   204,   205,   206,   212,   207,   208,   215,
     209,   213,   227,   228,   229,   236,   237,   238,   243,   239,
     240,   241
  };

  const unsigned char
  SlaacParser::yytable_[] =
  {
     124,   125,    28,     9,   126,    10,   232,    11,     8,   233,
     234,   235,   140,    36,    37,   146,   123,   141,    36,    37,
     147,    20,    22,   124,   125,   155,   156,   126,   193,   157,
      31,   194,   150,   151,   152,   153,   154,    34,    69,    36,
      37,    12,    13,    14,    15,    50,   175,   216,    93,    94,
      50,   176,   217,   230,    70,    72,   231,    71,   155,   156,
     197,   198,   157,   199,   200,   247,     1,     2,     3,    73,
     248,    50,    75,    79,    80,   201,   202,    81,    82,   203,
      83,    84,    85,    86,    90,    92,   118,    96,    95,    91,
     121,    97,    98,    99,   101,   102,   100,   113,   103,   201,
     202,   104,   105,   203,    36,    37,    38,   106,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,   108,   107,
     109,   110,   112,    49,   122,   119,    10,   116,   117,   120,
     130,   134,   138,   143,   144,   168,    50,   148,   166,   171,
     172,   173,   174,   180,   177,   179,   182,   181,   183,   185,
     188,   191,   195,   196,   211,   214,   218,   219,   221,   220,
     224,   244,   245,   226,   246,   249,   165,   184,   223,   225,
     149,   222,   210,   251,   250,   167,   252,   242,   111,   253,
       0,     0,   114,   254
  };

  const short
  SlaacParser::yycheck_[] =
  {
     117,   117,    24,     5,   117,     7,    34,     9,     0,    37,
      38,    39,     3,    11,    12,     3,    14,     8,    11,    12,
       8,     7,     7,   140,   140,   142,   142,   140,     3,   142,
      43,     6,    25,    26,    27,    28,    29,    10,     6,    11,
      12,    43,    44,    45,    46,    43,     3,     3,    70,    71,
      43,     8,     8,     3,     3,     8,     6,     4,   175,   175,
      32,    33,   175,    35,    36,     3,    40,    41,    42,     3,
       8,    43,     8,     4,     4,   192,   192,     4,     4,   192,
       4,     4,     4,     4,     4,     3,   108,     4,    43,     8,
     112,     4,     4,     4,    46,    46,    44,     7,    44,   216,
     216,    44,    44,   216,    11,    12,    13,    46,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,     4,    44,
       4,     4,     4,    30,   113,     5,     7,    43,     7,     7,
       7,    31,     8,     6,     3,     5,    43,     4,     4,     4,
       4,     4,     4,    46,     5,     4,    44,    46,    44,     7,
      43,    43,     6,     3,    43,     4,     4,     4,     4,    44,
       5,     4,     4,     7,     4,     4,   144,   175,    43,    43,
     140,   216,   193,    44,    46,   146,    44,   230,    92,   247,
      -1,    -1,    97,    43
  };

  const unsigned char
  SlaacParser::yystos_[] =
  {
       0,    40,    41,    42,    48,    49,    50,    51,     0,     5,
       7,     9,    43,    44,    45,    46,    54,    55,    56,    61,
       7,    70,     7,    52,    62,    57,    71,    53,    55,    63,
      64,    43,    59,    60,    10,    72,    11,    12,    13,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    30,
      43,    69,    74,    75,    76,    77,    79,    81,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    97,   111,     6,
       3,     4,     8,     3,    73,     8,    78,    80,    82,     4,
       4,     4,     4,     4,     4,     4,     4,    96,    98,   112,
       4,     8,     3,    55,    55,    43,     4,     4,     4,     4,
      44,    46,    46,    44,    44,    44,    46,    44,     4,     4,
       4,    76,     4,     7,    56,    58,    43,     7,    55,     5,
       7,    55,    74,    14,    69,    77,    79,    83,    84,    85,
       7,    99,   100,   101,    31,   113,   114,   115,     8,    86,
       3,     8,   102,     6,     3,   116,     3,     8,     4,    84,
      25,    26,    27,    28,    29,    69,    77,    79,   103,   104,
     105,   107,   108,   109,   110,   101,     4,   114,     5,    65,
     106,     4,     4,     4,     4,     3,     8,     5,    66,     4,
      46,    46,    44,    44,   104,     7,   117,   118,    43,    67,
      68,    43,   119,     3,     6,     6,     3,    32,    33,    35,
      36,    69,    77,    79,   120,   121,   122,   124,   125,   127,
     118,    43,   123,   128,     4,   126,     3,     8,     4,     4,
      44,     4,   121,    43,     5,    43,     7,   129,   130,   131,
       3,     6,    34,    37,    38,    39,   132,   133,   134,   136,
     137,   138,   130,   135,     4,     4,     4,     3,     8,     4,
      46,    44,    44,   133,    43
  };

  const unsigned char
  SlaacParser::yyr1_[] =
  {
       0,    47,    49,    48,    50,    48,    51,    48,    53,    52,
      54,    55,    55,    55,    55,    55,    55,    55,    57,    56,
      58,    59,    59,    60,    60,    62,    61,    63,    63,    64,
      64,    66,    65,    67,    67,    68,    68,    69,    71,    70,
      73,    72,    74,    74,    75,    75,    76,    76,    76,    76,
      76,    76,    76,    76,    76,    76,    76,    76,    76,    76,
      76,    78,    77,    80,    79,    82,    81,    83,    83,    84,
      84,    84,    84,    86,    85,    87,    88,    89,    90,    91,
      92,    93,    94,    96,    95,    98,    97,    99,    99,   100,
     100,   102,   101,   103,   103,   104,   104,   104,   104,   104,
     104,   104,   104,   106,   105,   107,   108,   109,   110,   112,
     111,   113,   113,   114,   116,   115,   117,   117,   119,   118,
     120,   120,   121,   121,   121,   121,   121,   121,   121,   123,
     122,   124,   126,   125,   128,   127,   129,   129,   131,   130,
     132,   132,   133,   133,   133,   133,   135,   134,   136,   137,
     138
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
       1,     1,     1,     0,     4,     3,     3,     3,     3,     3,
       3,     3,     3,     0,     4,     0,     6,     0,     1,     1,
       3,     0,     4,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     4,     3,     3,     3,     3,     0,
       6,     1,     3,     1,     0,     6,     1,     3,     0,     4,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     0,
       4,     3,     0,     4,     0,     6,     1,     3,     0,     4,
       1,     3,     1,     1,     1,     1,     0,     4,     3,     3,
       3
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
  "\"preferred-lifetime\"", "\"Logging\"", "\"loggers\"", "\"name\"",
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
  "valid_lifetime", "preferred_lifetime", "logging_object", "$@18",
  "logging_params", "logging_param", "loggers", "$@19", "loggers_entries",
  "logger_entry", "$@20", "logger_params", "logger_param", "name", "$@21",
  "debuglevel", "severity", "$@22", "output_options_list", "$@23",
  "output_options_list_content", "output_entry", "$@24",
  "output_params_list", "output_params", "output", "$@25", "flush",
  "maxsize", "maxver", YY_NULLPTR
  };

#if SLAAC_DEBUG
  const unsigned short
  SlaacParser::yyrline_[] =
  {
       0,   116,   116,   116,   117,   117,   118,   118,   126,   126,
     137,   143,   144,   145,   146,   147,   148,   149,   153,   153,
     164,   169,   170,   178,   182,   189,   189,   195,   196,   199,
     203,   210,   210,   217,   218,   221,   225,   238,   246,   246,
     258,   258,   275,   276,   279,   280,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,   302,   302,   327,   327,   354,   354,   365,   366,   369,
     370,   371,   372,   375,   375,   385,   390,   395,   400,   405,
     410,   415,   420,   426,   426,   433,   433,   442,   443,   446,
     447,   450,   450,   460,   461,   464,   465,   466,   467,   468,
     469,   470,   471,   474,   474,   482,   487,   492,   497,   507,
     507,   520,   521,   525,   529,   529,   541,   542,   546,   546,
     554,   555,   558,   559,   560,   561,   562,   563,   564,   567,
     567,   575,   580,   580,   588,   588,   598,   599,   602,   602,
     610,   611,   614,   615,   616,   617,   620,   620,   628,   633,
     638
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
#line 2003 "slaac_parser.cc" // lalr1.cc:1242
#line 643 "slaac_parser.yy" // lalr1.cc:1243


void
isc::slaac::SlaacParser::error(const location_type& loc,
                               const std::string& what)
{
    ctx.error(loc, what);
}
