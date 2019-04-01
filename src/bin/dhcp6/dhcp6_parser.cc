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
#define yylex   parser6_lex



#include "dhcp6_parser.h"


// Unqualified %code blocks.
#line 34 "dhcp6_parser.yy" // lalr1.cc:435

#include <dhcp6/parser_context.h>

#line 51 "dhcp6_parser.cc" // lalr1.cc:435


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
#if PARSER6_DEBUG

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

#else // !PARSER6_DEBUG

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Symbol)  YYUSE (Symbol)
# define YY_REDUCE_PRINT(Rule)           static_cast<void> (0)
# define YY_STACK_PRINT()                static_cast<void> (0)

#endif // !PARSER6_DEBUG

#define yyerrok         (yyerrstatus_ = 0)
#define yyclearin       (yyla.clear ())

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)

#line 14 "dhcp6_parser.yy" // lalr1.cc:510
namespace isc { namespace dhcp {
#line 146 "dhcp6_parser.cc" // lalr1.cc:510

  /* Return YYSTR after stripping away unnecessary quotes and
     backslashes, so that it's suitable for yyerror.  The heuristic is
     that double-quoting is unnecessary unless the string contains an
     apostrophe, a comma, or backslash (other than backslash-backslash).
     YYSTR is taken from yytname.  */
  std::string
  Dhcp6Parser::yytnamerr_ (const char *yystr)
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
  Dhcp6Parser::Dhcp6Parser (isc::dhcp::Parser6Context& ctx_yyarg)
    :
#if PARSER6_DEBUG
      yydebug_ (false),
      yycdebug_ (&std::cerr),
#endif
      ctx (ctx_yyarg)
  {}

  Dhcp6Parser::~Dhcp6Parser ()
  {}

  Dhcp6Parser::syntax_error::~syntax_error () YY_NOEXCEPT YY_NOTHROW
  {}

  /*---------------.
  | Symbol types.  |
  `---------------*/



  // by_state.
  Dhcp6Parser::by_state::by_state () YY_NOEXCEPT
    : state (empty_state)
  {}

  Dhcp6Parser::by_state::by_state (const by_state& that) YY_NOEXCEPT
    : state (that.state)
  {}

  void
  Dhcp6Parser::by_state::clear () YY_NOEXCEPT
  {
    state = empty_state;
  }

  void
  Dhcp6Parser::by_state::move (by_state& that)
  {
    state = that.state;
    that.clear ();
  }

  Dhcp6Parser::by_state::by_state (state_type s) YY_NOEXCEPT
    : state (s)
  {}

  Dhcp6Parser::symbol_number_type
  Dhcp6Parser::by_state::type_get () const YY_NOEXCEPT
  {
    if (state == empty_state)
      return empty_symbol;
    else
      return yystos_[state];
  }

  Dhcp6Parser::stack_symbol_type::stack_symbol_type ()
  {}

  Dhcp6Parser::stack_symbol_type::stack_symbol_type (YY_RVREF (stack_symbol_type) that)
    : super_type (YY_MOVE (that.state), YY_MOVE (that.location))
  {
    switch (that.type_get ())
    {
      case 196: // value
      case 200: // map_value
      case 255: // db_type
      case 348: // hr_mode
      case 484: // duid_type
      case 519: // ncr_protocol_value
      case 526: // replace_client_name_value
        value.YY_MOVE_OR_COPY< ElementPtr > (YY_MOVE (that.value));
        break;

      case 178: // "boolean"
        value.YY_MOVE_OR_COPY< bool > (YY_MOVE (that.value));
        break;

      case 177: // "floating point"
        value.YY_MOVE_OR_COPY< double > (YY_MOVE (that.value));
        break;

      case 176: // "integer"
        value.YY_MOVE_OR_COPY< int64_t > (YY_MOVE (that.value));
        break;

      case 175: // "constant string"
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

  Dhcp6Parser::stack_symbol_type::stack_symbol_type (state_type s, YY_MOVE_REF (symbol_type) that)
    : super_type (s, YY_MOVE (that.location))
  {
    switch (that.type_get ())
    {
      case 196: // value
      case 200: // map_value
      case 255: // db_type
      case 348: // hr_mode
      case 484: // duid_type
      case 519: // ncr_protocol_value
      case 526: // replace_client_name_value
        value.move< ElementPtr > (YY_MOVE (that.value));
        break;

      case 178: // "boolean"
        value.move< bool > (YY_MOVE (that.value));
        break;

      case 177: // "floating point"
        value.move< double > (YY_MOVE (that.value));
        break;

      case 176: // "integer"
        value.move< int64_t > (YY_MOVE (that.value));
        break;

      case 175: // "constant string"
        value.move< std::string > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

    // that is emptied.
    that.type = empty_symbol;
  }

#if YY_CPLUSPLUS < 201103L
  Dhcp6Parser::stack_symbol_type&
  Dhcp6Parser::stack_symbol_type::operator= (stack_symbol_type& that)
  {
    state = that.state;
    switch (that.type_get ())
    {
      case 196: // value
      case 200: // map_value
      case 255: // db_type
      case 348: // hr_mode
      case 484: // duid_type
      case 519: // ncr_protocol_value
      case 526: // replace_client_name_value
        value.move< ElementPtr > (that.value);
        break;

      case 178: // "boolean"
        value.move< bool > (that.value);
        break;

      case 177: // "floating point"
        value.move< double > (that.value);
        break;

      case 176: // "integer"
        value.move< int64_t > (that.value);
        break;

      case 175: // "constant string"
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
  Dhcp6Parser::yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const
  {
    if (yymsg)
      YY_SYMBOL_PRINT (yymsg, yysym);
  }

#if PARSER6_DEBUG
  template <typename Base>
  void
  Dhcp6Parser::yy_print_ (std::ostream& yyo,
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
      case 175: // "constant string"
#line 254 "dhcp6_parser.yy" // lalr1.cc:676
        { yyoutput << yysym.value.template as < std::string > (); }
#line 404 "dhcp6_parser.cc" // lalr1.cc:676
        break;

      case 176: // "integer"
#line 254 "dhcp6_parser.yy" // lalr1.cc:676
        { yyoutput << yysym.value.template as < int64_t > (); }
#line 410 "dhcp6_parser.cc" // lalr1.cc:676
        break;

      case 177: // "floating point"
#line 254 "dhcp6_parser.yy" // lalr1.cc:676
        { yyoutput << yysym.value.template as < double > (); }
#line 416 "dhcp6_parser.cc" // lalr1.cc:676
        break;

      case 178: // "boolean"
#line 254 "dhcp6_parser.yy" // lalr1.cc:676
        { yyoutput << yysym.value.template as < bool > (); }
#line 422 "dhcp6_parser.cc" // lalr1.cc:676
        break;

      case 196: // value
#line 254 "dhcp6_parser.yy" // lalr1.cc:676
        { yyoutput << yysym.value.template as < ElementPtr > (); }
#line 428 "dhcp6_parser.cc" // lalr1.cc:676
        break;

      case 200: // map_value
#line 254 "dhcp6_parser.yy" // lalr1.cc:676
        { yyoutput << yysym.value.template as < ElementPtr > (); }
#line 434 "dhcp6_parser.cc" // lalr1.cc:676
        break;

      case 255: // db_type
#line 254 "dhcp6_parser.yy" // lalr1.cc:676
        { yyoutput << yysym.value.template as < ElementPtr > (); }
#line 440 "dhcp6_parser.cc" // lalr1.cc:676
        break;

      case 348: // hr_mode
#line 254 "dhcp6_parser.yy" // lalr1.cc:676
        { yyoutput << yysym.value.template as < ElementPtr > (); }
#line 446 "dhcp6_parser.cc" // lalr1.cc:676
        break;

      case 484: // duid_type
#line 254 "dhcp6_parser.yy" // lalr1.cc:676
        { yyoutput << yysym.value.template as < ElementPtr > (); }
#line 452 "dhcp6_parser.cc" // lalr1.cc:676
        break;

      case 519: // ncr_protocol_value
#line 254 "dhcp6_parser.yy" // lalr1.cc:676
        { yyoutput << yysym.value.template as < ElementPtr > (); }
#line 458 "dhcp6_parser.cc" // lalr1.cc:676
        break;

      case 526: // replace_client_name_value
#line 254 "dhcp6_parser.yy" // lalr1.cc:676
        { yyoutput << yysym.value.template as < ElementPtr > (); }
#line 464 "dhcp6_parser.cc" // lalr1.cc:676
        break;

      default:
        break;
    }
    yyo << ')';
  }
#endif

  void
  Dhcp6Parser::yypush_ (const char* m, YY_MOVE_REF (stack_symbol_type) sym)
  {
    if (m)
      YY_SYMBOL_PRINT (m, sym);
    yystack_.push (YY_MOVE (sym));
  }

  void
  Dhcp6Parser::yypush_ (const char* m, state_type s, YY_MOVE_REF (symbol_type) sym)
  {
#if 201103L <= YY_CPLUSPLUS
    yypush_ (m, stack_symbol_type (s, std::move (sym)));
#else
    stack_symbol_type ss (s, sym);
    yypush_ (m, ss);
#endif
  }

  void
  Dhcp6Parser::yypop_ (int n)
  {
    yystack_.pop (n);
  }

#if PARSER6_DEBUG
  std::ostream&
  Dhcp6Parser::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  Dhcp6Parser::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  Dhcp6Parser::debug_level_type
  Dhcp6Parser::debug_level () const
  {
    return yydebug_;
  }

  void
  Dhcp6Parser::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif // PARSER6_DEBUG

  Dhcp6Parser::state_type
  Dhcp6Parser::yy_lr_goto_state_ (state_type yystate, int yysym)
  {
    int yyr = yypgoto_[yysym - yyntokens_] + yystate;
    if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
      return yytable_[yyr];
    else
      return yydefgoto_[yysym - yyntokens_];
  }

  bool
  Dhcp6Parser::yy_pact_value_is_default_ (int yyvalue)
  {
    return yyvalue == yypact_ninf_;
  }

  bool
  Dhcp6Parser::yy_table_value_is_error_ (int yyvalue)
  {
    return yyvalue == yytable_ninf_;
  }

  int
  Dhcp6Parser::operator() ()
  {
    return parse ();
  }

  int
  Dhcp6Parser::parse ()
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
      case 196: // value
      case 200: // map_value
      case 255: // db_type
      case 348: // hr_mode
      case 484: // duid_type
      case 519: // ncr_protocol_value
      case 526: // replace_client_name_value
        yylhs.value.emplace< ElementPtr > ();
        break;

      case 178: // "boolean"
        yylhs.value.emplace< bool > ();
        break;

      case 177: // "floating point"
        yylhs.value.emplace< double > ();
        break;

      case 176: // "integer"
        yylhs.value.emplace< int64_t > ();
        break;

      case 175: // "constant string"
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
#line 263 "dhcp6_parser.yy" // lalr1.cc:919
    { ctx.ctx_ = ctx.NO_KEYWORD; }
#line 730 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 4:
#line 264 "dhcp6_parser.yy" // lalr1.cc:919
    { ctx.ctx_ = ctx.CONFIG; }
#line 736 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 6:
#line 265 "dhcp6_parser.yy" // lalr1.cc:919
    { ctx.ctx_ = ctx.DHCP6; }
#line 742 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 8:
#line 266 "dhcp6_parser.yy" // lalr1.cc:919
    { ctx.ctx_ = ctx.INTERFACES_CONFIG; }
#line 748 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 10:
#line 267 "dhcp6_parser.yy" // lalr1.cc:919
    { ctx.ctx_ = ctx.SUBNET6; }
#line 754 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 12:
#line 268 "dhcp6_parser.yy" // lalr1.cc:919
    { ctx.ctx_ = ctx.POOLS; }
#line 760 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 14:
#line 269 "dhcp6_parser.yy" // lalr1.cc:919
    { ctx.ctx_ = ctx.PD_POOLS; }
#line 766 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 16:
#line 270 "dhcp6_parser.yy" // lalr1.cc:919
    { ctx.ctx_ = ctx.RESERVATIONS; }
#line 772 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 18:
#line 271 "dhcp6_parser.yy" // lalr1.cc:919
    { ctx.ctx_ = ctx.DHCP6; }
#line 778 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 20:
#line 272 "dhcp6_parser.yy" // lalr1.cc:919
    { ctx.ctx_ = ctx.OPTION_DEF; }
#line 784 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 22:
#line 273 "dhcp6_parser.yy" // lalr1.cc:919
    { ctx.ctx_ = ctx.OPTION_DATA; }
#line 790 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 24:
#line 274 "dhcp6_parser.yy" // lalr1.cc:919
    { ctx.ctx_ = ctx.HOOKS_LIBRARIES; }
#line 796 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 26:
#line 275 "dhcp6_parser.yy" // lalr1.cc:919
    { ctx.ctx_ = ctx.DHCP_DDNS; }
#line 802 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 28:
#line 276 "dhcp6_parser.yy" // lalr1.cc:919
    { ctx.ctx_ = ctx.LOGGING; }
#line 808 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 30:
#line 277 "dhcp6_parser.yy" // lalr1.cc:919
    { ctx.ctx_ = ctx.CONFIG_CONTROL; }
#line 814 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 32:
#line 285 "dhcp6_parser.yy" // lalr1.cc:919
    { yylhs.value.as < ElementPtr > () = ElementPtr(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location))); }
#line 820 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 33:
#line 286 "dhcp6_parser.yy" // lalr1.cc:919
    { yylhs.value.as < ElementPtr > () = ElementPtr(new DoubleElement(yystack_[0].value.as < double > (), ctx.loc2pos(yystack_[0].location))); }
#line 826 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 34:
#line 287 "dhcp6_parser.yy" // lalr1.cc:919
    { yylhs.value.as < ElementPtr > () = ElementPtr(new BoolElement(yystack_[0].value.as < bool > (), ctx.loc2pos(yystack_[0].location))); }
#line 832 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 35:
#line 288 "dhcp6_parser.yy" // lalr1.cc:919
    { yylhs.value.as < ElementPtr > () = ElementPtr(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location))); }
#line 838 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 36:
#line 289 "dhcp6_parser.yy" // lalr1.cc:919
    { yylhs.value.as < ElementPtr > () = ElementPtr(new NullElement(ctx.loc2pos(yystack_[0].location))); }
#line 844 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 37:
#line 290 "dhcp6_parser.yy" // lalr1.cc:919
    { yylhs.value.as < ElementPtr > () = ctx.stack_.back(); ctx.stack_.pop_back(); }
#line 850 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 38:
#line 291 "dhcp6_parser.yy" // lalr1.cc:919
    { yylhs.value.as < ElementPtr > () = ctx.stack_.back(); ctx.stack_.pop_back(); }
#line 856 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 39:
#line 294 "dhcp6_parser.yy" // lalr1.cc:919
    {
    // Push back the JSON value on the stack
    ctx.stack_.push_back(yystack_[0].value.as < ElementPtr > ());
}
#line 865 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 40:
#line 299 "dhcp6_parser.yy" // lalr1.cc:919
    {
    // This code is executed when we're about to start parsing
    // the content of the map
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.push_back(m);
}
#line 876 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 41:
#line 304 "dhcp6_parser.yy" // lalr1.cc:919
    {
    // map parsing completed. If we ever want to do any wrap up
    // (maybe some sanity checking), this would be the best place
    // for it.
}
#line 886 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 42:
#line 310 "dhcp6_parser.yy" // lalr1.cc:919
    { yylhs.value.as < ElementPtr > () = ctx.stack_.back(); ctx.stack_.pop_back(); }
#line 892 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 45:
#line 317 "dhcp6_parser.yy" // lalr1.cc:919
    {
                  // map containing a single entry
                  ctx.stack_.back()->set(yystack_[2].value.as < std::string > (), yystack_[0].value.as < ElementPtr > ());
                  }
#line 901 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 46:
#line 321 "dhcp6_parser.yy" // lalr1.cc:919
    {
                  // map consisting of a shorter map followed by
                  // comma and string:value
                  ctx.stack_.back()->set(yystack_[2].value.as < std::string > (), yystack_[0].value.as < ElementPtr > ());
                  }
#line 911 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 47:
#line 328 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr l(new ListElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.push_back(l);
}
#line 920 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 48:
#line 331 "dhcp6_parser.yy" // lalr1.cc:919
    {
    // list parsing complete. Put any sanity checking here
}
#line 928 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 51:
#line 339 "dhcp6_parser.yy" // lalr1.cc:919
    {
                  // List consisting of a single element.
                  ctx.stack_.back()->add(yystack_[0].value.as < ElementPtr > ());
                  }
#line 937 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 52:
#line 343 "dhcp6_parser.yy" // lalr1.cc:919
    {
                  // List ending with , and a value.
                  ctx.stack_.back()->add(yystack_[0].value.as < ElementPtr > ());
                  }
#line 946 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 53:
#line 350 "dhcp6_parser.yy" // lalr1.cc:919
    {
    // List parsing about to start
}
#line 954 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 54:
#line 352 "dhcp6_parser.yy" // lalr1.cc:919
    {
    // list parsing complete. Put any sanity checking here
    //ctx.stack_.pop_back();
}
#line 963 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 57:
#line 361 "dhcp6_parser.yy" // lalr1.cc:919
    {
                          ElementPtr s(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
                          ctx.stack_.back()->add(s);
                          }
#line 972 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 58:
#line 365 "dhcp6_parser.yy" // lalr1.cc:919
    {
                          ElementPtr s(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
                          ctx.stack_.back()->add(s);
                          }
#line 981 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 59:
#line 376 "dhcp6_parser.yy" // lalr1.cc:919
    {
    const std::string& where = ctx.contextName();
    const std::string& keyword = yystack_[1].value.as < std::string > ();
    error(yystack_[1].location,
          "got unexpected keyword \"" + keyword + "\" in " + where + " map.");
}
#line 992 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 60:
#line 386 "dhcp6_parser.yy" // lalr1.cc:919
    {
    // This code is executed when we're about to start parsing
    // the content of the map
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.push_back(m);
}
#line 1003 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 61:
#line 391 "dhcp6_parser.yy" // lalr1.cc:919
    {
    // map parsing completed. If we ever want to do any wrap up
    // (maybe some sanity checking), this would be the best place
    // for it.

    // Dhcp6 is required
    ctx.require("Dhcp6", ctx.loc2pos(yystack_[3].location), ctx.loc2pos(yystack_[0].location));
}
#line 1016 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 70:
#line 414 "dhcp6_parser.yy" // lalr1.cc:919
    {
    // This code is executed when we're about to start parsing
    // the content of the map
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("Dhcp6", m);
    ctx.stack_.push_back(m);
    ctx.enter(ctx.DHCP6);
}
#line 1029 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 71:
#line 421 "dhcp6_parser.yy" // lalr1.cc:919
    {
    // No global parameter is required
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 1039 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 72:
#line 429 "dhcp6_parser.yy" // lalr1.cc:919
    {
    // Parse the Dhcp6 map
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.push_back(m);
}
#line 1049 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 73:
#line 433 "dhcp6_parser.yy" // lalr1.cc:919
    {
    // No global parameter is required
    // parsing completed
}
#line 1058 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 110:
#line 480 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 1066 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 111:
#line 482 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr datadir(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("data-directory", datadir);
    ctx.leave();
}
#line 1076 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 112:
#line 488 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr prf(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("preferred-lifetime", prf);
}
#line 1085 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 113:
#line 493 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr prf(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("valid-lifetime", prf);
}
#line 1094 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 114:
#line 498 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr prf(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("renew-timer", prf);
}
#line 1103 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 115:
#line 503 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr prf(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("rebind-timer", prf);
}
#line 1112 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 116:
#line 508 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr dpp(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("decline-probation-period", dpp);
}
#line 1121 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 117:
#line 513 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 1129 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 118:
#line 515 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr stag(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("server-tag", stag);
    ctx.leave();
}
#line 1139 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 119:
#line 521 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr b(new BoolElement(yystack_[0].value.as < bool > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("enable-reconfiguration", b);
}
#line 1148 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 120:
#line 526 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr i(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("interfaces-config", i);
    ctx.stack_.push_back(i);
    ctx.enter(ctx.INTERFACES_CONFIG);
}
#line 1159 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 121:
#line 531 "dhcp6_parser.yy" // lalr1.cc:919
    {
    // No interfaces config param is required
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 1169 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 122:
#line 537 "dhcp6_parser.yy" // lalr1.cc:919
    {
    // Parse the interfaces-config map
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.push_back(m);
}
#line 1179 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 123:
#line 541 "dhcp6_parser.yy" // lalr1.cc:919
    {
    // No interfaces config param is required
    // parsing completed
}
#line 1188 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 131:
#line 557 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr l(new ListElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("interfaces", l);
    ctx.stack_.push_back(l);
    ctx.enter(ctx.NO_KEYWORD);
}
#line 1199 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 132:
#line 562 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 1208 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 133:
#line 567 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr b(new BoolElement(yystack_[0].value.as < bool > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("re-detect", b);
}
#line 1217 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 134:
#line 573 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr i(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("lease-database", i);
    ctx.stack_.push_back(i);
    ctx.enter(ctx.LEASE_DATABASE);
}
#line 1228 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 135:
#line 578 "dhcp6_parser.yy" // lalr1.cc:919
    {
    // The type parameter is required
    ctx.require("type", ctx.loc2pos(yystack_[2].location), ctx.loc2pos(yystack_[0].location));
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 1239 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 136:
#line 585 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr i(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("hosts-database", i);
    ctx.stack_.push_back(i);
    ctx.enter(ctx.HOSTS_DATABASE);
}
#line 1250 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 137:
#line 590 "dhcp6_parser.yy" // lalr1.cc:919
    {
    // The type parameter is required
    ctx.require("type", ctx.loc2pos(yystack_[2].location), ctx.loc2pos(yystack_[0].location));
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 1261 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 138:
#line 597 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr l(new ListElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("hosts-databases", l);
    ctx.stack_.push_back(l);
    ctx.enter(ctx.HOSTS_DATABASE);
}
#line 1272 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 139:
#line 602 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 1281 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 144:
#line 615 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->add(m);
    ctx.stack_.push_back(m);
}
#line 1291 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 145:
#line 619 "dhcp6_parser.yy" // lalr1.cc:919
    {
    // The type parameter is required
    ctx.require("type", ctx.loc2pos(yystack_[3].location), ctx.loc2pos(yystack_[0].location));
    ctx.stack_.pop_back();
}
#line 1301 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 168:
#line 651 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.DATABASE_TYPE);
}
#line 1309 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 169:
#line 653 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.back()->set("type", yystack_[0].value.as < ElementPtr > ());
    ctx.leave();
}
#line 1318 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 170:
#line 658 "dhcp6_parser.yy" // lalr1.cc:919
    { yylhs.value.as < ElementPtr > () = ElementPtr(new StringElement("memfile", ctx.loc2pos(yystack_[0].location))); }
#line 1324 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 171:
#line 659 "dhcp6_parser.yy" // lalr1.cc:919
    { yylhs.value.as < ElementPtr > () = ElementPtr(new StringElement("mysql", ctx.loc2pos(yystack_[0].location))); }
#line 1330 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 172:
#line 660 "dhcp6_parser.yy" // lalr1.cc:919
    { yylhs.value.as < ElementPtr > () = ElementPtr(new StringElement("postgresql", ctx.loc2pos(yystack_[0].location))); }
#line 1336 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 173:
#line 661 "dhcp6_parser.yy" // lalr1.cc:919
    { yylhs.value.as < ElementPtr > () = ElementPtr(new StringElement("cql", ctx.loc2pos(yystack_[0].location))); }
#line 1342 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 174:
#line 664 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 1350 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 175:
#line 666 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr user(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("user", user);
    ctx.leave();
}
#line 1360 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 176:
#line 672 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 1368 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 177:
#line 674 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr pwd(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("password", pwd);
    ctx.leave();
}
#line 1378 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 178:
#line 680 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 1386 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 179:
#line 682 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr h(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("host", h);
    ctx.leave();
}
#line 1396 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 180:
#line 688 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr p(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("port", p);
}
#line 1405 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 181:
#line 693 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 1413 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 182:
#line 695 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr name(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("name", name);
    ctx.leave();
}
#line 1423 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 183:
#line 701 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr n(new BoolElement(yystack_[0].value.as < bool > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("persist", n);
}
#line 1432 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 184:
#line 706 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr n(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("lfc-interval", n);
}
#line 1441 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 185:
#line 711 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr n(new BoolElement(yystack_[0].value.as < bool > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("readonly", n);
}
#line 1450 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 186:
#line 716 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr n(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("connect-timeout", n);
}
#line 1459 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 187:
#line 721 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr n(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("reconnect-wait-time", n);
}
#line 1468 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 188:
#line 726 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr n(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("request-timeout", n);
}
#line 1477 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 189:
#line 731 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr n(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("tcp-keepalive", n);
}
#line 1486 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 190:
#line 736 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr n(new BoolElement(yystack_[0].value.as < bool > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("tcp-nodelay", n);
}
#line 1495 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 191:
#line 741 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 1503 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 192:
#line 743 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr cp(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("contact-points", cp);
    ctx.leave();
}
#line 1513 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 193:
#line 749 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr n(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("max-reconnect-tries", n);
}
#line 1522 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 194:
#line 754 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 1530 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 195:
#line 756 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr ks(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("keyspace", ks);
    ctx.leave();
}
#line 1540 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 196:
#line 762 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 1548 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 197:
#line 764 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr c(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("consistency", c);
    ctx.leave();
}
#line 1558 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 198:
#line 770 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 1566 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 199:
#line 772 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr c(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("serial-consistency", c);
    ctx.leave();
}
#line 1576 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 200:
#line 778 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("sanity-checks", m);
    ctx.stack_.push_back(m);
    ctx.enter(ctx.SANITY_CHECKS);
}
#line 1587 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 201:
#line 783 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 1596 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 205:
#line 793 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 1604 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 206:
#line 795 "dhcp6_parser.yy" // lalr1.cc:919
    {

    if ( (string(yystack_[0].value.as < std::string > ()) == "none") ||
         (string(yystack_[0].value.as < std::string > ()) == "warn") ||
         (string(yystack_[0].value.as < std::string > ()) == "fix") ||
         (string(yystack_[0].value.as < std::string > ()) == "fix-del") ||
         (string(yystack_[0].value.as < std::string > ()) == "del")) {
        ElementPtr user(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
        ctx.stack_.back()->set("lease-checks", user);
        ctx.leave();
    } else {
        error(yystack_[0].location, "Unsupported 'lease-checks value: " + string(yystack_[0].value.as < std::string > ()) +
              ", supported values are: none, warn, fix, fix-del, del");
    }
}
#line 1624 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 207:
#line 811 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr l(new ListElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("mac-sources", l);
    ctx.stack_.push_back(l);
    ctx.enter(ctx.MAC_SOURCES);
}
#line 1635 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 208:
#line 816 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 1644 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 213:
#line 829 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr duid(new StringElement("duid", ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->add(duid);
}
#line 1653 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 214:
#line 834 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr duid(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->add(duid);
}
#line 1662 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 215:
#line 839 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr l(new ListElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("host-reservation-identifiers", l);
    ctx.stack_.push_back(l);
    ctx.enter(ctx.HOST_RESERVATION_IDENTIFIERS);
}
#line 1673 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 216:
#line 844 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 1682 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 222:
#line 858 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr hwaddr(new StringElement("hw-address", ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->add(hwaddr);
}
#line 1691 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 223:
#line 863 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr flex_id(new StringElement("flex-id", ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->add(flex_id);
}
#line 1700 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 224:
#line 870 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr l(new ListElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("relay-supplied-options", l);
    ctx.stack_.push_back(l);
    ctx.enter(ctx.NO_KEYWORD);
}
#line 1711 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 225:
#line 875 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 1720 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 226:
#line 880 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr l(new ListElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("hooks-libraries", l);
    ctx.stack_.push_back(l);
    ctx.enter(ctx.HOOKS_LIBRARIES);
}
#line 1731 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 227:
#line 885 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 1740 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 232:
#line 898 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->add(m);
    ctx.stack_.push_back(m);
}
#line 1750 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 233:
#line 902 "dhcp6_parser.yy" // lalr1.cc:919
    {
    // The library hooks parameter is required
    ctx.require("library", ctx.loc2pos(yystack_[3].location), ctx.loc2pos(yystack_[0].location));
    ctx.stack_.pop_back();
}
#line 1760 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 234:
#line 908 "dhcp6_parser.yy" // lalr1.cc:919
    {
    // Parse the hooks-libraries list entry map
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.push_back(m);
}
#line 1770 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 235:
#line 912 "dhcp6_parser.yy" // lalr1.cc:919
    {
    // The library hooks parameter is required
    ctx.require("library", ctx.loc2pos(yystack_[3].location), ctx.loc2pos(yystack_[0].location));
    // parsing completed
}
#line 1780 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 241:
#line 927 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 1788 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 242:
#line 929 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr lib(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("library", lib);
    ctx.leave();
}
#line 1798 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 243:
#line 935 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 1806 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 244:
#line 937 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.back()->set("parameters", yystack_[0].value.as < ElementPtr > ());
    ctx.leave();
}
#line 1815 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 245:
#line 943 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("expired-leases-processing", m);
    ctx.stack_.push_back(m);
    ctx.enter(ctx.EXPIRED_LEASES_PROCESSING);
}
#line 1826 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 246:
#line 948 "dhcp6_parser.yy" // lalr1.cc:919
    {
    // No expired lease parameter is required
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 1836 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 255:
#line 966 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr value(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("reclaim-timer-wait-time", value);
}
#line 1845 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 256:
#line 971 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr value(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("flush-reclaimed-timer-wait-time", value);
}
#line 1854 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 257:
#line 976 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr value(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("hold-reclaimed-time", value);
}
#line 1863 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 258:
#line 981 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr value(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("max-reclaim-leases", value);
}
#line 1872 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 259:
#line 986 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr value(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("max-reclaim-time", value);
}
#line 1881 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 260:
#line 991 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr value(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("unwarned-reclaim-cycles", value);
}
#line 1890 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 261:
#line 999 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr l(new ListElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("subnet6", l);
    ctx.stack_.push_back(l);
    ctx.enter(ctx.SUBNET6);
}
#line 1901 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 262:
#line 1004 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 1910 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 267:
#line 1024 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->add(m);
    ctx.stack_.push_back(m);
}
#line 1920 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 268:
#line 1028 "dhcp6_parser.yy" // lalr1.cc:919
    {
    // Once we reached this place, the subnet parsing is now complete.
    // If we want to, we can implement default values here.
    // In particular we can do things like this:
    // if (!ctx.stack_.back()->get("interface")) {
    //     ctx.stack_.back()->set("interface", StringElement("loopback"));
    // }
    //
    // We can also stack up one level (Dhcp6) and copy over whatever
    // global parameters we want to:
    // if (!ctx.stack_.back()->get("renew-timer")) {
    //     ElementPtr renew = ctx_stack_[...].get("renew-timer");
    //     if (renew) {
    //         ctx.stack_.back()->set("renew-timer", renew);
    //     }
    // }

    // The subnet subnet6 parameter is required
    ctx.require("subnet", ctx.loc2pos(yystack_[3].location), ctx.loc2pos(yystack_[0].location));
    ctx.stack_.pop_back();
}
#line 1946 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 269:
#line 1050 "dhcp6_parser.yy" // lalr1.cc:919
    {
    // Parse the subnet6 list entry map
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.push_back(m);
}
#line 1956 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 270:
#line 1054 "dhcp6_parser.yy" // lalr1.cc:919
    {
    // The subnet subnet6 parameter is required
    ctx.require("subnet", ctx.loc2pos(yystack_[3].location), ctx.loc2pos(yystack_[0].location));
    // parsing completed
}
#line 1966 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 293:
#line 1088 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 1974 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 294:
#line 1090 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr subnet(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("subnet", subnet);
    ctx.leave();
}
#line 1984 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 295:
#line 1096 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 1992 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 296:
#line 1098 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr iface(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("interface", iface);
    ctx.leave();
}
#line 2002 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 297:
#line 1104 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 2010 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 298:
#line 1106 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr iface(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("interface-id", iface);
    ctx.leave();
}
#line 2020 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 299:
#line 1112 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 2028 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 300:
#line 1114 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr cls(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("client-class", cls);
    ctx.leave();
}
#line 2038 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 301:
#line 1120 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr c(new ListElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("require-client-classes", c);
    ctx.stack_.push_back(c);
    ctx.enter(ctx.NO_KEYWORD);
}
#line 2049 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 302:
#line 1125 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 2058 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 303:
#line 1130 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.RESERVATION_MODE);
}
#line 2066 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 304:
#line 1132 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.back()->set("reservation-mode", yystack_[0].value.as < ElementPtr > ());
    ctx.leave();
}
#line 2075 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 305:
#line 1137 "dhcp6_parser.yy" // lalr1.cc:919
    { yylhs.value.as < ElementPtr > () = ElementPtr(new StringElement("disabled", ctx.loc2pos(yystack_[0].location))); }
#line 2081 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 306:
#line 1138 "dhcp6_parser.yy" // lalr1.cc:919
    { yylhs.value.as < ElementPtr > () = ElementPtr(new StringElement("out-of-pool", ctx.loc2pos(yystack_[0].location))); }
#line 2087 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 307:
#line 1139 "dhcp6_parser.yy" // lalr1.cc:919
    { yylhs.value.as < ElementPtr > () = ElementPtr(new StringElement("global", ctx.loc2pos(yystack_[0].location))); }
#line 2093 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 308:
#line 1140 "dhcp6_parser.yy" // lalr1.cc:919
    { yylhs.value.as < ElementPtr > () = ElementPtr(new StringElement("all", ctx.loc2pos(yystack_[0].location))); }
#line 2099 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 309:
#line 1143 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr id(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("id", id);
}
#line 2108 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 310:
#line 1148 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr rc(new BoolElement(yystack_[0].value.as < bool > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("rapid-commit", rc);
}
#line 2117 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 311:
#line 1156 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr l(new ListElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("shared-networks", l);
    ctx.stack_.push_back(l);
    ctx.enter(ctx.SHARED_NETWORK);
}
#line 2128 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 312:
#line 1161 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 2137 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 317:
#line 1176 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->add(m);
    ctx.stack_.push_back(m);
}
#line 2147 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 318:
#line 1180 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.pop_back();
}
#line 2155 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 338:
#line 1211 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr l(new ListElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("option-def", l);
    ctx.stack_.push_back(l);
    ctx.enter(ctx.OPTION_DEF);
}
#line 2166 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 339:
#line 1216 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 2175 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 340:
#line 1224 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.push_back(m);
}
#line 2184 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 341:
#line 1227 "dhcp6_parser.yy" // lalr1.cc:919
    {
    // parsing completed
}
#line 2192 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 346:
#line 1243 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->add(m);
    ctx.stack_.push_back(m);
}
#line 2202 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 347:
#line 1247 "dhcp6_parser.yy" // lalr1.cc:919
    {
    // The name, code and type option def parameters are required.
    ctx.require("name", ctx.loc2pos(yystack_[3].location), ctx.loc2pos(yystack_[0].location));
    ctx.require("code", ctx.loc2pos(yystack_[3].location), ctx.loc2pos(yystack_[0].location));
    ctx.require("type", ctx.loc2pos(yystack_[3].location), ctx.loc2pos(yystack_[0].location));
    ctx.stack_.pop_back();
}
#line 2214 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 348:
#line 1258 "dhcp6_parser.yy" // lalr1.cc:919
    {
    // Parse the option-def list entry map
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.push_back(m);
}
#line 2224 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 349:
#line 1262 "dhcp6_parser.yy" // lalr1.cc:919
    {
    // The name, code and type option def parameters are required.
    ctx.require("name", ctx.loc2pos(yystack_[3].location), ctx.loc2pos(yystack_[0].location));
    ctx.require("code", ctx.loc2pos(yystack_[3].location), ctx.loc2pos(yystack_[0].location));
    ctx.require("type", ctx.loc2pos(yystack_[3].location), ctx.loc2pos(yystack_[0].location));
    // parsing completed
}
#line 2236 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 365:
#line 1294 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr code(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("code", code);
}
#line 2245 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 367:
#line 1301 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 2253 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 368:
#line 1303 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr prf(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("type", prf);
    ctx.leave();
}
#line 2263 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 369:
#line 1309 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 2271 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 370:
#line 1311 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr rtypes(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("record-types", rtypes);
    ctx.leave();
}
#line 2281 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 371:
#line 1317 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 2289 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 372:
#line 1319 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr space(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("space", space);
    ctx.leave();
}
#line 2299 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 374:
#line 1327 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 2307 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 375:
#line 1329 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr encap(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("encapsulate", encap);
    ctx.leave();
}
#line 2317 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 376:
#line 1335 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr array(new BoolElement(yystack_[0].value.as < bool > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("array", array);
}
#line 2326 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 377:
#line 1344 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr l(new ListElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("option-data", l);
    ctx.stack_.push_back(l);
    ctx.enter(ctx.OPTION_DATA);
}
#line 2337 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 378:
#line 1349 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 2346 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 383:
#line 1368 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->add(m);
    ctx.stack_.push_back(m);
}
#line 2356 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 384:
#line 1372 "dhcp6_parser.yy" // lalr1.cc:919
    {
    /// @todo: the code or name parameters are required.
    ctx.stack_.pop_back();
}
#line 2365 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 385:
#line 1380 "dhcp6_parser.yy" // lalr1.cc:919
    {
    // Parse the option-data list entry map
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.push_back(m);
}
#line 2375 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 386:
#line 1384 "dhcp6_parser.yy" // lalr1.cc:919
    {
    /// @todo: the code or name parameters are required.
    // parsing completed
}
#line 2384 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 401:
#line 1417 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 2392 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 402:
#line 1419 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr data(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("data", data);
    ctx.leave();
}
#line 2402 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 405:
#line 1429 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr space(new BoolElement(yystack_[0].value.as < bool > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("csv-format", space);
}
#line 2411 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 406:
#line 1434 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr persist(new BoolElement(yystack_[0].value.as < bool > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("always-send", persist);
}
#line 2420 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 407:
#line 1442 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr l(new ListElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("pools", l);
    ctx.stack_.push_back(l);
    ctx.enter(ctx.POOLS);
}
#line 2431 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 408:
#line 1447 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 2440 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 413:
#line 1462 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->add(m);
    ctx.stack_.push_back(m);
}
#line 2450 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 414:
#line 1466 "dhcp6_parser.yy" // lalr1.cc:919
    {
    // The pool parameter is required.
    ctx.require("pool", ctx.loc2pos(yystack_[3].location), ctx.loc2pos(yystack_[0].location));
    ctx.stack_.pop_back();
}
#line 2460 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 415:
#line 1472 "dhcp6_parser.yy" // lalr1.cc:919
    {
    // Parse the pool list entry map
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.push_back(m);
}
#line 2470 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 416:
#line 1476 "dhcp6_parser.yy" // lalr1.cc:919
    {
    // The pool parameter is required.
    ctx.require("pool", ctx.loc2pos(yystack_[3].location), ctx.loc2pos(yystack_[0].location));
}
#line 2479 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 426:
#line 1494 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 2487 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 427:
#line 1496 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr pool(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("pool", pool);
    ctx.leave();
}
#line 2497 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 428:
#line 1502 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 2505 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 429:
#line 1504 "dhcp6_parser.yy" // lalr1.cc:919
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
#line 2532 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 430:
#line 1527 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 2540 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 431:
#line 1529 "dhcp6_parser.yy" // lalr1.cc:919
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
#line 2569 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 432:
#line 1557 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr l(new ListElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("pd-pools", l);
    ctx.stack_.push_back(l);
    ctx.enter(ctx.PD_POOLS);
}
#line 2580 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 433:
#line 1562 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 2589 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 438:
#line 1577 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->add(m);
    ctx.stack_.push_back(m);
}
#line 2599 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 439:
#line 1581 "dhcp6_parser.yy" // lalr1.cc:919
    {
    // The prefix, prefix len and delegated len parameters are required.
    ctx.require("prefix", ctx.loc2pos(yystack_[3].location), ctx.loc2pos(yystack_[0].location));
    ctx.require("prefix-len", ctx.loc2pos(yystack_[3].location), ctx.loc2pos(yystack_[0].location));
    ctx.require("delegated-len", ctx.loc2pos(yystack_[3].location), ctx.loc2pos(yystack_[0].location));
    ctx.stack_.pop_back();
}
#line 2611 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 440:
#line 1589 "dhcp6_parser.yy" // lalr1.cc:919
    {
    // Parse the pd-pool list entry map
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.push_back(m);
}
#line 2621 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 441:
#line 1593 "dhcp6_parser.yy" // lalr1.cc:919
    {
    // The prefix, prefix len and delegated len parameters are required.
    ctx.require("prefix", ctx.loc2pos(yystack_[3].location), ctx.loc2pos(yystack_[0].location));
    ctx.require("prefix-len", ctx.loc2pos(yystack_[3].location), ctx.loc2pos(yystack_[0].location));
    ctx.require("delegated-len", ctx.loc2pos(yystack_[3].location), ctx.loc2pos(yystack_[0].location));
    // parsing completed
}
#line 2633 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 455:
#line 1618 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 2641 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 456:
#line 1620 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr prf(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("prefix", prf);
    ctx.leave();
}
#line 2651 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 457:
#line 1626 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr prf(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("prefix-len", prf);
}
#line 2660 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 458:
#line 1631 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 2668 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 459:
#line 1633 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr prf(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("excluded-prefix", prf);
    ctx.leave();
}
#line 2678 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 460:
#line 1639 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr prf(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("excluded-prefix-len", prf);
}
#line 2687 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 461:
#line 1644 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr deleg(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("delegated-len", deleg);
}
#line 2696 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 462:
#line 1652 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr l(new ListElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("reservations", l);
    ctx.stack_.push_back(l);
    ctx.enter(ctx.RESERVATIONS);
}
#line 2707 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 463:
#line 1657 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 2716 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 468:
#line 1670 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->add(m);
    ctx.stack_.push_back(m);
}
#line 2726 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 469:
#line 1674 "dhcp6_parser.yy" // lalr1.cc:919
    {
    /// @todo: an identifier parameter is required.
    ctx.stack_.pop_back();
}
#line 2735 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 470:
#line 1679 "dhcp6_parser.yy" // lalr1.cc:919
    {
    // Parse the reservations list entry map
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.push_back(m);
}
#line 2745 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 471:
#line 1683 "dhcp6_parser.yy" // lalr1.cc:919
    {
    /// @todo: an identifier parameter is required.
    // parsing completed
}
#line 2754 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 487:
#line 1710 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr l(new ListElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("ip-addresses", l);
    ctx.stack_.push_back(l);
    ctx.enter(ctx.NO_KEYWORD);
}
#line 2765 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 488:
#line 1715 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 2774 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 489:
#line 1720 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr l(new ListElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("prefixes", l);
    ctx.stack_.push_back(l);
    ctx.enter(ctx.NO_KEYWORD);
}
#line 2785 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 490:
#line 1725 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 2794 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 491:
#line 1730 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 2802 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 492:
#line 1732 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr d(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("duid", d);
    ctx.leave();
}
#line 2812 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 493:
#line 1738 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 2820 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 494:
#line 1740 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr hw(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("hw-address", hw);
    ctx.leave();
}
#line 2830 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 495:
#line 1746 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 2838 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 496:
#line 1748 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr host(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("hostname", host);
    ctx.leave();
}
#line 2848 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 497:
#line 1754 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 2856 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 498:
#line 1756 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr hw(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("flex-id", hw);
    ctx.leave();
}
#line 2866 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 499:
#line 1762 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr c(new ListElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("client-classes", c);
    ctx.stack_.push_back(c);
    ctx.enter(ctx.NO_KEYWORD);
}
#line 2877 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 500:
#line 1767 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 2886 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 501:
#line 1775 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("relay", m);
    ctx.stack_.push_back(m);
    ctx.enter(ctx.RELAY);
}
#line 2897 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 502:
#line 1780 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 2906 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 505:
#line 1789 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 2914 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 506:
#line 1791 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr addr(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("ip-address", addr);
    ctx.leave();
}
#line 2924 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 507:
#line 1800 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr l(new ListElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("client-classes", l);
    ctx.stack_.push_back(l);
    ctx.enter(ctx.CLIENT_CLASSES);
}
#line 2935 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 508:
#line 1805 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 2944 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 511:
#line 1814 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->add(m);
    ctx.stack_.push_back(m);
}
#line 2954 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 512:
#line 1818 "dhcp6_parser.yy" // lalr1.cc:919
    {
    // The name client class parameter is required.
    ctx.require("name", ctx.loc2pos(yystack_[3].location), ctx.loc2pos(yystack_[0].location));
    ctx.stack_.pop_back();
}
#line 2964 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 525:
#line 1843 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 2972 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 526:
#line 1845 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr test(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("test", test);
    ctx.leave();
}
#line 2982 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 527:
#line 1851 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr b(new BoolElement(yystack_[0].value.as < bool > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("only-if-required", b);
}
#line 2991 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 528:
#line 1859 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("server-id", m);
    ctx.stack_.push_back(m);
    ctx.enter(ctx.SERVER_ID);
}
#line 3002 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 529:
#line 1864 "dhcp6_parser.yy" // lalr1.cc:919
    {
    // The type parameter is required.
    ctx.require("type", ctx.loc2pos(yystack_[2].location), ctx.loc2pos(yystack_[0].location));
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 3013 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 541:
#line 1886 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.DUID_TYPE);
}
#line 3021 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 542:
#line 1888 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.back()->set("type", yystack_[0].value.as < ElementPtr > ());
    ctx.leave();
}
#line 3030 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 543:
#line 1893 "dhcp6_parser.yy" // lalr1.cc:919
    { yylhs.value.as < ElementPtr > () = ElementPtr(new StringElement("LLT", ctx.loc2pos(yystack_[0].location))); }
#line 3036 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 544:
#line 1894 "dhcp6_parser.yy" // lalr1.cc:919
    { yylhs.value.as < ElementPtr > () = ElementPtr(new StringElement("EN", ctx.loc2pos(yystack_[0].location))); }
#line 3042 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 545:
#line 1895 "dhcp6_parser.yy" // lalr1.cc:919
    { yylhs.value.as < ElementPtr > () = ElementPtr(new StringElement("LL", ctx.loc2pos(yystack_[0].location))); }
#line 3048 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 546:
#line 1898 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr htype(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("htype", htype);
}
#line 3057 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 547:
#line 1903 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 3065 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 548:
#line 1905 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr id(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("identifier", id);
    ctx.leave();
}
#line 3075 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 549:
#line 1911 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr time(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("time", time);
}
#line 3084 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 550:
#line 1916 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr time(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("enterprise-id", time);
}
#line 3093 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 551:
#line 1923 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr time(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("dhcp4o6-port", time);
}
#line 3102 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 552:
#line 1930 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("control-socket", m);
    ctx.stack_.push_back(m);
    ctx.enter(ctx.CONTROL_SOCKET);
}
#line 3113 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 553:
#line 1935 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 3122 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 561:
#line 1951 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 3130 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 562:
#line 1953 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr stype(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("socket-type", stype);
    ctx.leave();
}
#line 3140 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 563:
#line 1959 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 3148 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 564:
#line 1961 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr name(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("socket-name", name);
    ctx.leave();
}
#line 3158 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 565:
#line 1969 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 3166 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 566:
#line 1971 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr qc = yystack_[0].value.as < ElementPtr > ();
    ctx.stack_.back()->set("dhcp-queue-control", qc);

    // Doing this manually, because dhcp-queue-control
    // content is otherwise arbitrary
    if (!qc->contains("enable-queue")) {
        std::stringstream msg;
        msg << "'enable-queue' is required: ";
        msg  << "(" << qc->getPosition().str() << ")";
        error(yystack_[3].location, msg.str());
    }

    // queue-enable is mandatory
    ConstElementPtr enable_queue = qc->get("enable-queue");
    if (enable_queue->getType() != Element::boolean) {
        std::stringstream msg;
        msg << "'enable-queue' must be boolean: ";
        msg  << "(" << qc->getPosition().str() << ")";
        error(yystack_[3].location, msg.str());
     }

    // if queue-type is supplied make sure it's a string
    if (qc->contains("queue-type")) {
        ConstElementPtr queue_type = qc->get("queue-type");
        if (queue_type->getType() != Element::string) {
            std::stringstream msg;
            msg << "'queue-type' must be a string: ";
            msg  << "(" << qc->getPosition().str() << ")";
            error(yystack_[3].location, msg.str());
        }
    }

    ctx.leave();
}
#line 3206 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 567:
#line 2009 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("dhcp-ddns", m);
    ctx.stack_.push_back(m);
    ctx.enter(ctx.DHCP_DDNS);
}
#line 3217 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 568:
#line 2014 "dhcp6_parser.yy" // lalr1.cc:919
    {
    // The enable updates DHCP DDNS parameter is required.
    ctx.require("enable-updates", ctx.loc2pos(yystack_[2].location), ctx.loc2pos(yystack_[0].location));
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 3228 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 569:
#line 2021 "dhcp6_parser.yy" // lalr1.cc:919
    {
    // Parse the dhcp-ddns map
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.push_back(m);
}
#line 3238 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 570:
#line 2025 "dhcp6_parser.yy" // lalr1.cc:919
    {
    // The enable updates DHCP DDNS parameter is required.
    ctx.require("enable-updates", ctx.loc2pos(yystack_[3].location), ctx.loc2pos(yystack_[0].location));
    // parsing completed
}
#line 3248 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 591:
#line 2055 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr b(new BoolElement(yystack_[0].value.as < bool > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("enable-updates", b);
}
#line 3257 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 592:
#line 2060 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 3265 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 593:
#line 2062 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr s(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("qualifying-suffix", s);
    ctx.leave();
}
#line 3275 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 594:
#line 2068 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 3283 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 595:
#line 2070 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr s(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("server-ip", s);
    ctx.leave();
}
#line 3293 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 596:
#line 2076 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr i(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("server-port", i);
}
#line 3302 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 597:
#line 2081 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 3310 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 598:
#line 2083 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr s(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("sender-ip", s);
    ctx.leave();
}
#line 3320 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 599:
#line 2089 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr i(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("sender-port", i);
}
#line 3329 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 600:
#line 2094 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr i(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("max-queue-size", i);
}
#line 3338 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 601:
#line 2099 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NCR_PROTOCOL);
}
#line 3346 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 602:
#line 2101 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.back()->set("ncr-protocol", yystack_[0].value.as < ElementPtr > ());
    ctx.leave();
}
#line 3355 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 603:
#line 2107 "dhcp6_parser.yy" // lalr1.cc:919
    { yylhs.value.as < ElementPtr > () = ElementPtr(new StringElement("UDP", ctx.loc2pos(yystack_[0].location))); }
#line 3361 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 604:
#line 2108 "dhcp6_parser.yy" // lalr1.cc:919
    { yylhs.value.as < ElementPtr > () = ElementPtr(new StringElement("TCP", ctx.loc2pos(yystack_[0].location))); }
#line 3367 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 605:
#line 2111 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NCR_FORMAT);
}
#line 3375 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 606:
#line 2113 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr json(new StringElement("JSON", ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("ncr-format", json);
    ctx.leave();
}
#line 3385 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 607:
#line 2119 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr b(new BoolElement(yystack_[0].value.as < bool > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("override-no-update", b);
}
#line 3394 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 608:
#line 2124 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr b(new BoolElement(yystack_[0].value.as < bool > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("override-client-update", b);
}
#line 3403 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 609:
#line 2129 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.REPLACE_CLIENT_NAME);
}
#line 3411 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 610:
#line 2131 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.back()->set("replace-client-name", yystack_[0].value.as < ElementPtr > ());
    ctx.leave();
}
#line 3420 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 611:
#line 2137 "dhcp6_parser.yy" // lalr1.cc:919
    {
      yylhs.value.as < ElementPtr > () = ElementPtr(new StringElement("when-present", ctx.loc2pos(yystack_[0].location)));
      }
#line 3428 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 612:
#line 2140 "dhcp6_parser.yy" // lalr1.cc:919
    {
      yylhs.value.as < ElementPtr > () = ElementPtr(new StringElement("never", ctx.loc2pos(yystack_[0].location)));
      }
#line 3436 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 613:
#line 2143 "dhcp6_parser.yy" // lalr1.cc:919
    {
      yylhs.value.as < ElementPtr > () = ElementPtr(new StringElement("always", ctx.loc2pos(yystack_[0].location)));
      }
#line 3444 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 614:
#line 2146 "dhcp6_parser.yy" // lalr1.cc:919
    {
      yylhs.value.as < ElementPtr > () = ElementPtr(new StringElement("when-not-present", ctx.loc2pos(yystack_[0].location)));
      }
#line 3452 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 615:
#line 2149 "dhcp6_parser.yy" // lalr1.cc:919
    {
      error(yystack_[0].location, "boolean values for the replace-client-name are "
                "no longer supported");
      }
#line 3461 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 616:
#line 2155 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 3469 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 617:
#line 2157 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr s(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("generated-prefix", s);
    ctx.leave();
}
#line 3479 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 618:
#line 2163 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 3487 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 619:
#line 2165 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr s(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("hostname-char-set", s);
    ctx.leave();
}
#line 3497 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 620:
#line 2171 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 3505 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 621:
#line 2173 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr s(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("hostname-char-replacement", s);
    ctx.leave();
}
#line 3515 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 622:
#line 2181 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 3523 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 623:
#line 2183 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.back()->set("Dhcp4", yystack_[0].value.as < ElementPtr > ());
    ctx.leave();
}
#line 3532 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 624:
#line 2188 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 3540 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 625:
#line 2190 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.back()->set("DhcpDdns", yystack_[0].value.as < ElementPtr > ());
    ctx.leave();
}
#line 3549 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 626:
#line 2195 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 3557 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 627:
#line 2197 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.back()->set("Control-agent", yystack_[0].value.as < ElementPtr > ());
    ctx.leave();
}
#line 3566 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 628:
#line 2204 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr i(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("config-control", i);
    ctx.stack_.push_back(i);
    ctx.enter(ctx.CONFIG_CONTROL);
}
#line 3577 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 629:
#line 2209 "dhcp6_parser.yy" // lalr1.cc:919
    {
    // No config control params are required
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 3587 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 630:
#line 2215 "dhcp6_parser.yy" // lalr1.cc:919
    {
    // Parse the config-control map
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.push_back(m);
}
#line 3597 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 631:
#line 2219 "dhcp6_parser.yy" // lalr1.cc:919
    {
    // No config_control params are required
    // parsing completed
}
#line 3606 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 636:
#line 2234 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr l(new ListElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("config-databases", l);
    ctx.stack_.push_back(l);
    ctx.enter(ctx.CONFIG_DATABASE);
}
#line 3617 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 637:
#line 2239 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 3626 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 638:
#line 2244 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr value(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("config-fetch-wait-time", value);
}
#line 3635 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 639:
#line 2254 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("Logging", m);
    ctx.stack_.push_back(m);
    ctx.enter(ctx.LOGGING);
}
#line 3646 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 640:
#line 2259 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 3655 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 641:
#line 2264 "dhcp6_parser.yy" // lalr1.cc:919
    {
    // Parse the Logging map
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.push_back(m);
}
#line 3665 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 642:
#line 2268 "dhcp6_parser.yy" // lalr1.cc:919
    {
    // parsing completed
}
#line 3673 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 646:
#line 2284 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr l(new ListElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("loggers", l);
    ctx.stack_.push_back(l);
    ctx.enter(ctx.LOGGERS);
}
#line 3684 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 647:
#line 2289 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 3693 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 650:
#line 2301 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr l(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->add(l);
    ctx.stack_.push_back(l);
}
#line 3703 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 651:
#line 2305 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.pop_back();
}
#line 3711 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 661:
#line 2322 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr dl(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("debuglevel", dl);
}
#line 3720 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 662:
#line 2327 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 3728 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 663:
#line 2329 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr sev(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("severity", sev);
    ctx.leave();
}
#line 3738 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 664:
#line 2335 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr l(new ListElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("output_options", l);
    ctx.stack_.push_back(l);
    ctx.enter(ctx.OUTPUT_OPTIONS);
}
#line 3749 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 665:
#line 2340 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 3758 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 668:
#line 2349 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->add(m);
    ctx.stack_.push_back(m);
}
#line 3768 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 669:
#line 2353 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.pop_back();
}
#line 3776 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 676:
#line 2367 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 3784 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 677:
#line 2369 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr sev(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("output", sev);
    ctx.leave();
}
#line 3794 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 678:
#line 2375 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr flush(new BoolElement(yystack_[0].value.as < bool > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("flush", flush);
}
#line 3803 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 679:
#line 2380 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr maxsize(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("maxsize", maxsize);
}
#line 3812 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 680:
#line 2385 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr maxver(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("maxver", maxver);
}
#line 3821 "dhcp6_parser.cc" // lalr1.cc:919
    break;


#line 3825 "dhcp6_parser.cc" // lalr1.cc:919
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
  Dhcp6Parser::error (const syntax_error& yyexc)
  {
    error (yyexc.location, yyexc.what ());
  }

  // Generate an error message.
  std::string
  Dhcp6Parser::yysyntax_error_ (state_type yystate, const symbol_type& yyla) const
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


  const short Dhcp6Parser::yypact_ninf_ = -840;

  const signed char Dhcp6Parser::yytable_ninf_ = -1;

  const short
  Dhcp6Parser::yypact_[] =
  {
     371,  -840,  -840,  -840,  -840,  -840,  -840,  -840,  -840,  -840,
    -840,  -840,  -840,  -840,  -840,  -840,    45,    55,    42,    50,
      56,    68,    78,    92,   105,   128,   159,   166,   174,   200,
     257,   264,  -840,  -840,  -840,  -840,  -840,  -840,  -840,  -840,
    -840,  -840,  -840,  -840,  -840,  -840,  -840,  -840,  -840,  -840,
    -840,  -840,  -840,  -840,  -840,  -840,  -840,  -840,  -840,  -840,
    -840,  -840,  -840,  -840,  -840,  -840,  -840,  -840,  -840,  -840,
    -840,  -840,    55,   -48,    28,    59,    23,   235,    86,    48,
     120,   103,    27,   285,   -13,   382,   124,   175,  -840,   288,
     299,   300,   305,   319,  -840,  -840,  -840,  -840,  -840,   316,
    -840,    81,  -840,  -840,  -840,  -840,  -840,  -840,  -840,  -840,
    -840,  -840,  -840,  -840,   328,   332,   344,   350,   356,  -840,
     360,  -840,  -840,  -840,  -840,  -840,  -840,  -840,  -840,  -840,
    -840,  -840,  -840,  -840,  -840,  -840,  -840,   368,  -840,  -840,
    -840,  -840,    93,  -840,  -840,  -840,  -840,  -840,  -840,  -840,
    -840,  -840,  -840,  -840,  -840,  -840,  -840,  -840,  -840,  -840,
    -840,  -840,  -840,  -840,  -840,  -840,  -840,  -840,  -840,  -840,
    -840,  -840,  -840,  -840,  -840,  -840,  -840,  -840,   372,  -840,
     131,  -840,  -840,  -840,  -840,  -840,  -840,  -840,  -840,  -840,
    -840,   388,   389,  -840,  -840,  -840,  -840,  -840,  -840,  -840,
    -840,   143,  -840,  -840,  -840,  -840,  -840,  -840,  -840,  -840,
    -840,  -840,  -840,  -840,  -840,  -840,  -840,  -840,  -840,  -840,
    -840,  -840,  -840,   145,  -840,  -840,  -840,  -840,  -840,   394,
    -840,   399,   407,  -840,  -840,  -840,  -840,  -840,  -840,   147,
    -840,  -840,  -840,  -840,  -840,  -840,  -840,  -840,  -840,  -840,
    -840,  -840,  -840,  -840,  -840,  -840,  -840,   315,   355,  -840,
    -840,  -840,  -840,  -840,  -840,  -840,  -840,   339,  -840,  -840,
     409,  -840,  -840,  -840,   410,  -840,  -840,   359,   383,  -840,
    -840,  -840,  -840,  -840,  -840,  -840,  -840,  -840,  -840,  -840,
    -840,  -840,   417,   426,  -840,  -840,  -840,  -840,   423,   393,
    -840,  -840,  -840,  -840,  -840,  -840,  -840,  -840,  -840,  -840,
    -840,  -840,   155,  -840,  -840,  -840,   429,  -840,  -840,   435,
    -840,   436,   437,  -840,  -840,   439,   446,  -840,  -840,  -840,
    -840,  -840,  -840,  -840,   157,  -840,  -840,  -840,  -840,  -840,
    -840,  -840,  -840,  -840,  -840,  -840,  -840,  -840,  -840,  -840,
    -840,  -840,   189,  -840,  -840,  -840,   447,   196,  -840,  -840,
    -840,  -840,    55,    55,  -840,   280,   452,   453,   454,   455,
     457,  -840,    28,  -840,   460,   463,   466,   467,   468,   469,
     298,   301,   302,   304,   306,   471,   307,   472,   475,   479,
     482,   483,   484,   485,   486,   487,   489,   490,   491,   492,
     493,   494,   495,   324,   497,   498,   502,    59,  -840,   503,
     346,    23,  -840,   517,   518,   521,   522,   523,   373,   369,
     544,   546,   547,   235,  -840,   548,    86,  -840,   549,   378,
     555,   384,   385,    48,  -840,   558,   559,   560,   561,   562,
     564,   565,  -840,   120,  -840,   566,   569,   400,   571,   573,
     574,   401,  -840,    27,   577,   404,   405,  -840,   285,   581,
     582,    97,  -840,   411,   583,   584,   414,   587,   416,   418,
     589,   591,   419,   420,   592,   595,   596,   597,   382,  -840,
     598,   124,  -840,   599,   428,   175,  -840,  -840,  -840,   605,
     603,   604,    55,    55,    55,  -840,   438,   607,   608,   609,
     610,   613,  -840,  -840,  -840,  -840,  -840,   444,  -840,   615,
     616,   617,   618,   448,   327,   619,   621,   622,   623,   624,
     625,   627,   628,   629,   630,  -840,   631,   618,   632,  -840,
     635,  -840,  -840,   636,   637,   459,   470,   473,  -840,  -840,
     635,   474,   639,  -840,   476,  -840,   477,  -840,   478,  -840,
    -840,  -840,   635,   635,   635,   480,   481,   488,   496,  -840,
     499,   500,  -840,   501,   504,   505,  -840,  -840,   506,  -840,
    -840,  -840,   507,    55,  -840,  -840,   508,   509,  -840,   510,
    -840,  -840,    88,   513,  -840,  -840,   -19,   511,   512,   514,
    -840,   638,  -840,   642,  -840,  -840,    55,    59,   124,  -840,
    -840,  -840,  -840,   175,    23,   216,   216,   643,  -840,   650,
     651,   652,  -840,  -840,  -840,  -840,  -840,  -840,  -840,  -840,
     653,   -55,    55,   186,   525,   654,   655,   657,   317,    51,
     195,  -840,   382,  -840,  -840,   658,   659,  -840,  -840,  -840,
    -840,  -840,   -50,  -840,  -840,  -840,  -840,  -840,  -840,  -840,
    -840,  -840,  -840,  -840,  -840,  -840,  -840,  -840,  -840,  -840,
    -840,  -840,  -840,  -840,  -840,  -840,  -840,  -840,  -840,  -840,
    -840,  -840,  -840,  -840,  -840,  -840,  -840,   660,   643,  -840,
     217,   221,   233,   259,  -840,  -840,  -840,  -840,   640,   664,
     665,   666,   668,  -840,   669,   673,  -840,  -840,  -840,   674,
     684,   686,  -840,   260,  -840,  -840,  -840,  -840,  -840,  -840,
    -840,  -840,  -840,  -840,  -840,  -840,  -840,  -840,  -840,  -840,
    -840,  -840,  -840,  -840,   267,  -840,   685,   626,  -840,  -840,
     687,   689,  -840,  -840,   688,   692,  -840,  -840,   690,   694,
    -840,  -840,   693,   695,  -840,  -840,  -840,    70,  -840,  -840,
    -840,   696,  -840,  -840,  -840,    89,  -840,  -840,  -840,  -840,
     269,  -840,  -840,  -840,   171,  -840,  -840,   697,   698,  -840,
    -840,   699,   701,  -840,   702,   703,   704,   705,   706,   707,
     281,  -840,  -840,  -840,  -840,  -840,  -840,  -840,  -840,  -840,
     708,   709,   710,  -840,  -840,  -840,  -840,   283,  -840,  -840,
    -840,  -840,  -840,  -840,  -840,  -840,  -840,  -840,  -840,   293,
    -840,  -840,  -840,   311,   540,  -840,   711,   713,  -840,  -840,
     712,   716,  -840,  -840,  -840,   714,  -840,  -840,   232,  -840,
     715,  -840,  -840,  -840,  -840,   719,   720,   721,   722,   524,
     542,   551,   550,   553,   726,   556,   557,   727,   730,   731,
     563,   567,   568,   216,  -840,  -840,   216,  -840,   643,   235,
    -840,   650,    27,  -840,   651,   285,  -840,   652,   392,  -840,
     653,   -55,  -840,  -840,   186,  -840,   732,   525,  -840,   169,
     654,  -840,   120,  -840,   655,   -13,  -840,   657,   572,   575,
     576,   578,   579,   580,   317,  -840,   733,   734,   585,   586,
     588,    51,  -840,   736,   737,   195,  -840,  -840,  -840,   738,
     739,    86,  -840,   658,    48,  -840,   659,   741,  -840,   140,
     660,  -840,  -840,   424,   590,   593,   594,  -840,  -840,  -840,
    -840,  -840,   600,  -840,  -840,   601,   602,   606,  -840,  -840,
    -840,  -840,   313,  -840,   322,  -840,   742,  -840,   745,  -840,
    -840,  -840,  -840,  -840,  -840,  -840,  -840,  -840,  -840,  -840,
    -840,  -840,  -840,   323,  -840,  -840,  -840,  -840,  -840,  -840,
    -840,  -840,   611,  -840,  -840,   743,  -840,  -840,  -840,  -840,
    -840,   749,   746,  -840,  -840,  -840,  -840,  -840,   750,  -840,
     326,  -840,  -840,  -840,  -840,  -840,  -840,  -840,  -840,   303,
     612,  -840,  -840,  -840,  -840,   644,   645,  -840,  -840,   667,
     342,  -840,   343,  -840,   671,  -840,   755,  -840,  -840,  -840,
    -840,  -840,   354,  -840,  -840,  -840,  -840,  -840,  -840,  -840,
    -840,  -840,  -840,  -840,  -840,  -840,  -840,  -840,  -840,  -840,
    -840,  -840,  -840,  -840,   392,  -840,  -840,   756,   634,  -840,
     169,  -840,  -840,  -840,  -840,  -840,  -840,  -840,  -840,  -840,
    -840,  -840,  -840,  -840,   759,   614,   762,   140,  -840,  -840,
     675,  -840,  -840,   765,  -840,   676,  -840,  -840,   760,  -840,
    -840,   297,  -840,   -23,   760,  -840,  -840,   767,   768,   769,
     363,  -840,  -840,  -840,  -840,  -840,  -840,   770,   656,   663,
     678,   -23,  -840,   677,  -840,  -840,  -840,  -840,  -840
  };

  const unsigned short
  Dhcp6Parser::yydefact_[] =
  {
       0,     2,     4,     6,     8,    10,    12,    14,    16,    18,
      20,    22,    24,    26,    28,    30,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     1,    47,    40,    36,    35,    32,    33,    34,
      39,     3,    37,    38,    60,     5,    72,     7,   122,     9,
     269,    11,   415,    13,   440,    15,   470,    17,   340,    19,
     348,    21,   385,    23,   234,    25,   569,    27,   641,    29,
     630,    31,    49,    43,     0,     0,     0,     0,     0,     0,
     472,     0,   350,   387,     0,     0,     0,     0,    51,     0,
      50,     0,     0,    44,    70,   639,   622,   624,   626,     0,
      69,     0,    62,    64,    66,    67,    68,    65,   110,   628,
     120,   134,   136,   138,     0,     0,     0,     0,     0,   117,
       0,   261,   338,   377,   428,   430,   303,   311,   207,   224,
     215,   200,   507,   462,   226,   245,   528,     0,   552,   565,
     567,   109,     0,    74,    76,    77,    78,    79,    80,    81,
     106,   107,    84,    85,    86,    87,   103,    88,    90,    89,
      94,    95,    82,   108,    83,    92,    93,   101,   102,   104,
      91,    96,    97,    98,    99,   100,   105,   131,     0,   130,
       0,   124,   126,   127,   128,   129,   407,   432,   293,   295,
     297,     0,     0,   301,   299,   501,   292,   273,   274,   275,
     276,     0,   271,   280,   281,   282,   285,   286,   288,   283,
     284,   277,   278,   290,   291,   279,   287,   289,   426,   425,
     421,   422,   420,     0,   417,   419,   423,   424,   455,     0,
     458,     0,     0,   454,   448,   449,   447,   452,   453,     0,
     442,   444,   445,   450,   451,   446,   499,   487,   489,   491,
     493,   495,   497,   486,   483,   484,   485,     0,   473,   474,
     478,   479,   476,   480,   481,   482,   477,     0,   367,   181,
       0,   371,   369,   374,     0,   363,   364,     0,   351,   352,
     354,   366,   355,   356,   357,   373,   358,   359,   360,   361,
     362,   401,     0,     0,   399,   400,   403,   404,     0,   388,
     389,   391,   392,   393,   394,   395,   396,   397,   398,   241,
     243,   238,     0,   236,   239,   240,     0,   592,   594,     0,
     597,     0,     0,   601,   605,     0,     0,   609,   616,   618,
     620,   590,   588,   589,     0,   571,   573,   574,   575,   576,
     577,   578,   579,   580,   581,   582,   583,   584,   585,   586,
     587,   646,     0,   643,   645,   636,     0,     0,   632,   634,
     635,    48,     0,     0,    41,     0,     0,     0,     0,     0,
       0,    59,     0,    61,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    73,     0,
       0,     0,   123,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   270,     0,     0,   416,     0,     0,
       0,     0,     0,     0,   441,     0,     0,     0,     0,     0,
       0,     0,   471,     0,   341,     0,     0,     0,     0,     0,
       0,     0,   349,     0,     0,     0,     0,   386,     0,     0,
       0,     0,   235,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   570,
       0,     0,   642,     0,     0,     0,   631,    52,    45,     0,
       0,     0,     0,     0,     0,    63,     0,     0,     0,     0,
       0,     0,   112,   113,   114,   115,   116,     0,   119,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   551,     0,     0,     0,    75,
       0,   133,   125,     0,     0,     0,     0,     0,   309,   310,
       0,     0,     0,   272,     0,   418,     0,   457,     0,   460,
     461,   443,     0,     0,     0,     0,     0,     0,     0,   475,
       0,     0,   365,     0,     0,     0,   376,   353,     0,   405,
     406,   390,     0,     0,   237,   591,     0,     0,   596,     0,
     599,   600,     0,     0,   607,   608,     0,     0,     0,     0,
     572,     0,   644,     0,   638,   633,     0,     0,     0,   623,
     625,   627,   111,     0,     0,     0,     0,   140,   118,   263,
     342,   379,    42,   429,   431,   305,   306,   307,   308,   304,
     313,     0,    49,     0,     0,     0,   464,   228,     0,     0,
       0,   566,     0,    53,   132,   409,   434,   294,   296,   298,
     302,   300,     0,   427,   456,   459,   500,   488,   490,   492,
     494,   496,   498,   368,   182,   372,   370,   375,   402,   242,
     244,   593,   595,   598,   603,   604,   602,   606,   611,   612,
     613,   614,   615,   610,   617,   619,   621,     0,   140,    46,
       0,     0,     0,     0,   168,   174,   176,   178,     0,     0,
       0,     0,     0,   191,     0,     0,   194,   196,   198,     0,
       0,     0,   167,     0,   146,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   160,   161,   162,   163,   158,
     159,   164,   165,   166,     0,   144,     0,   141,   142,   267,
       0,   264,   265,   346,     0,   343,   344,   383,     0,   380,
     381,   317,     0,   314,   315,   213,   214,     0,   209,   211,
     212,     0,   222,   223,   219,     0,   217,   220,   221,   205,
       0,   202,   204,   511,     0,   509,   468,     0,   465,   466,
     232,     0,   229,   230,     0,     0,     0,     0,     0,     0,
       0,   247,   249,   250,   251,   252,   253,   254,   541,   547,
       0,     0,     0,   540,   537,   538,   539,     0,   530,   532,
     535,   533,   534,   536,   561,   563,   560,   558,   559,     0,
     554,   556,   557,     0,    55,   413,     0,   410,   411,   438,
       0,   435,   436,   505,   504,     0,   503,   650,     0,   648,
       0,    71,   640,   629,   121,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   135,   137,     0,   139,     0,     0,
     262,     0,   350,   339,     0,   387,   378,     0,     0,   312,
       0,     0,   208,   225,     0,   216,     0,     0,   201,   513,
       0,   508,   472,   463,     0,     0,   227,     0,     0,     0,
       0,     0,     0,     0,     0,   246,     0,     0,     0,     0,
       0,     0,   529,     0,     0,     0,   553,   568,    57,     0,
      56,     0,   408,     0,     0,   433,     0,     0,   502,     0,
       0,   647,   637,     0,     0,     0,     0,   180,   183,   184,
     185,   186,     0,   193,   187,     0,     0,     0,   188,   189,
     190,   147,     0,   143,     0,   266,     0,   345,     0,   382,
     337,   332,   334,   325,   326,   321,   322,   323,   324,   330,
     331,   329,   333,     0,   319,   327,   335,   336,   328,   316,
     210,   218,     0,   203,   525,     0,   523,   524,   520,   521,
     522,     0,   514,   515,   517,   518,   519,   510,     0,   467,
       0,   231,   255,   256,   257,   258,   259,   260,   248,     0,
       0,   546,   549,   550,   531,     0,     0,   555,    54,     0,
       0,   412,     0,   437,     0,   664,     0,   662,   660,   654,
     658,   659,     0,   652,   656,   657,   655,   649,   170,   171,
     172,   173,   169,   175,   177,   179,   192,   195,   197,   199,
     145,   268,   347,   384,     0,   318,   206,     0,     0,   512,
       0,   469,   233,   543,   544,   545,   542,   548,   562,   564,
      58,   414,   439,   506,     0,     0,     0,     0,   651,   320,
       0,   527,   516,     0,   661,     0,   653,   526,     0,   663,
     668,     0,   666,     0,     0,   665,   676,     0,     0,     0,
       0,   670,   672,   673,   674,   675,   667,     0,     0,     0,
       0,     0,   669,     0,   678,   679,   680,   671,   677
  };

  const short
  Dhcp6Parser::yypgoto_[] =
  {
    -840,  -840,  -840,  -840,  -840,  -840,  -840,  -840,  -840,  -840,
    -840,  -840,  -840,  -840,  -840,  -840,  -840,    11,  -840,  -462,
    -840,   108,  -840,  -840,  -840,  -840,   156,  -840,  -358,  -840,
    -840,  -840,   -74,  -840,  -840,  -840,   408,  -840,  -840,  -840,
    -840,   182,   375,  -840,  -840,   -62,   -46,   -45,   -43,  -840,
    -840,  -840,  -840,  -840,  -840,  -840,  -840,   179,   391,  -840,
    -840,  -840,  -840,  -840,  -840,  -840,  -840,  -840,   106,  -840,
     -65,  -840,  -580,   -53,  -840,  -840,  -840,  -840,  -840,  -840,
    -840,  -840,  -840,  -840,   -70,  -840,  -613,  -840,  -840,  -840,
    -840,  -840,  -840,  -840,  -840,  -840,  -840,  -840,  -840,  -840,
    -840,  -840,  -840,  -840,  -840,  -840,   -59,  -840,  -840,  -840,
    -840,  -840,   -68,  -600,  -840,  -840,  -840,  -840,   -44,  -840,
    -840,  -840,  -840,  -840,  -840,  -840,  -840,   -72,  -840,  -840,
    -840,   -57,   398,  -840,  -840,  -840,  -840,  -840,  -840,  -840,
     -61,  -840,  -840,  -840,  -840,  -840,  -840,  -839,  -840,  -840,
    -840,    -1,  -840,  -840,  -840,   -30,   440,  -840,  -840,  -838,
    -840,  -835,  -840,   -36,  -840,   -32,  -840,   -42,  -840,  -840,
    -840,  -832,  -840,  -840,  -840,  -840,    -8,  -840,  -840,  -180,
     784,  -840,  -840,  -840,  -840,  -840,     2,  -840,  -840,  -840,
       5,  -840,   421,  -840,   -76,  -840,  -840,  -840,  -840,  -840,
     -69,  -840,  -840,  -840,  -840,  -840,   -11,  -840,  -840,  -840,
       3,  -840,  -840,  -840,     4,  -840,   415,  -840,  -840,  -840,
    -840,  -840,  -840,  -840,  -840,  -840,  -840,  -840,   -41,  -840,
    -840,  -840,   -35,   458,  -840,  -840,   -58,  -840,   -24,  -840,
    -840,  -840,  -840,  -840,   -33,  -840,  -840,  -840,   -34,   456,
    -840,  -840,  -840,  -840,  -840,  -840,  -840,   -60,  -840,  -840,
    -840,     1,  -840,  -840,  -840,     6,  -840,   443,   249,  -840,
    -840,  -840,  -840,  -840,  -840,  -840,  -840,  -840,  -840,  -840,
    -840,  -840,  -831,  -840,  -840,  -840,  -840,  -840,  -840,  -840,
      12,  -840,  -840,  -840,  -157,  -840,  -840,  -840,  -840,  -840,
    -840,  -840,    -7,  -840,  -840,  -840,  -840,  -840,  -840,  -840,
    -840,  -840,  -840,  -840,  -840,    -9,  -840,  -840,  -840,  -840,
    -840,  -840,  -840,  -840,  -840,  -840,   265,   427,  -840,  -840,
    -840,  -840,  -840,  -840,  -840,  -840,  -840,  -840,  -840,  -840,
    -840,  -840,  -840,  -840,  -840,  -840,  -840,  -840,  -840,  -840,
    -840,  -840,  -840,  -840,  -840,  -840,  -840,  -840,  -840,  -840,
    -840,  -840,  -840,  -840,   295,   422,  -840,  -840,  -840,  -840,
    -840,  -840,  -840,   308,   430,  -840,  -840,  -840,   -21,  -840,
    -840,  -166,  -840,  -840,  -840,  -840,  -840,  -840,  -182,  -840,
    -840,  -197,  -840,  -840,  -840,  -840,  -840
  };

  const short
  Dhcp6Parser::yydefgoto_[] =
  {
      -1,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    88,    41,    42,
      73,   613,    92,    93,    43,    72,    89,    90,   634,   814,
     909,   910,   702,    45,    74,   101,   102,   103,   366,    47,
      75,   142,   143,   144,   374,   145,   146,   147,   148,   149,
     150,   385,   151,   152,   376,    49,    76,   180,   181,   182,
     409,   183,   153,   377,   154,   378,   155,   379,   726,   727,
     728,   856,   703,   704,   705,   835,  1032,   706,   836,   707,
     837,   708,   838,   709,   710,   446,   711,   712,   713,   714,
     715,   716,   717,   718,   719,   844,   720,   721,   847,   722,
     848,   723,   849,   156,   397,   760,   761,   762,   876,   157,
     394,   747,   748,   749,   750,   158,   396,   755,   756,   757,
     758,   159,   395,   160,   400,   771,   772,   773,   885,    65,
      84,   312,   313,   314,   459,   315,   460,   161,   401,   780,
     781,   782,   783,   784,   785,   786,   787,   162,   387,   730,
     731,   732,   859,    51,    77,   201,   202,   203,   415,   204,
     416,   205,   417,   206,   421,   207,   420,   163,   392,   619,
     209,   210,   164,   393,   742,   743,   744,   868,   963,   964,
     165,   388,    59,    81,   734,   735,   736,   862,    61,    82,
     277,   278,   279,   280,   281,   282,   283,   445,   284,   449,
     285,   448,   286,   287,   450,   288,   166,   389,   738,   739,
     740,   865,    63,    83,   298,   299,   300,   301,   302,   454,
     303,   304,   305,   306,   212,   413,   816,   817,   818,   911,
      53,    78,   223,   224,   225,   425,   167,   390,   168,   391,
     215,   414,   820,   821,   822,   914,    55,    79,   239,   240,
     241,   428,   242,   243,   430,   244,   245,   169,   399,   767,
     768,   769,   882,    57,    80,   257,   258,   259,   260,   436,
     261,   437,   262,   438,   263,   439,   264,   440,   265,   441,
     266,   435,   217,   422,   825,   826,   917,   170,   398,   764,
     765,   879,   981,   982,   983,   984,   985,  1047,   986,   171,
     402,   797,   798,   799,   896,  1056,   800,   801,   897,   802,
     803,   172,   173,   404,   809,   810,   811,   903,   812,   904,
     174,   405,   175,   406,    67,    85,   334,   335,   336,   337,
     464,   338,   465,   339,   340,   467,   341,   342,   343,   470,
     666,   344,   471,   345,   346,   347,   474,   673,   348,   475,
     349,   476,   350,   477,   104,   368,   105,   369,   106,   370,
     176,   375,    71,    87,   357,   358,   359,   483,   360,   107,
     367,    69,    86,   352,   353,   354,   480,   828,   829,   919,
    1022,  1023,  1024,  1025,  1066,  1026,  1064,  1081,  1082,  1083,
    1090,  1091,  1092,  1097,  1093,  1094,  1095
  };

  const unsigned short
  Dhcp6Parser::yytable_[] =
  {
     100,   141,   179,   196,   219,   233,   253,   296,   275,   294,
     311,   331,   276,   295,   297,   197,   794,   216,   184,   213,
     226,   237,   255,   754,   289,   307,   724,   332,    40,   956,
     957,   198,   199,   958,   200,   208,   962,   968,    94,   177,
     178,   745,   220,   234,   247,    32,   221,   235,   268,    44,
     612,   823,   185,   214,   227,   238,   256,    46,   290,   308,
      33,   333,    34,    48,    35,   612,   211,   222,   236,   254,
     108,   109,   788,   871,   110,    50,   872,   111,   112,   113,
     269,   689,   270,   271,   372,    52,   272,   273,   274,   373,
     309,   310,   874,   124,   125,   875,   407,   124,   125,    54,
     123,   408,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,    56,   228,   229,   230,   231,   232,   124,   125,
     746,   124,   125,   668,   669,   670,   671,    91,  1086,   124,
     125,  1087,  1088,  1089,   411,    58,   126,   193,   123,   412,
     194,   127,   128,   129,   130,   131,   423,   132,   426,   218,
     433,   424,   133,   427,   122,   434,   124,   125,   461,   672,
     478,   134,    99,   462,   135,   479,    60,   789,   790,   791,
     792,   136,   123,    62,   880,   193,    95,   881,   194,   137,
     138,    64,   640,   139,   140,    96,    97,    98,   355,   356,
     124,   125,   481,   269,   646,   647,   648,   482,    99,   485,
     309,   310,    99,    99,   486,   956,   957,    66,   246,   958,
     124,   125,   962,   968,   247,   248,   249,   250,   251,   252,
     407,   123,   269,    99,   481,   831,    99,   664,   665,   832,
      36,    37,    38,    39,    99,   920,   485,   684,   921,   124,
     125,   833,   685,   686,   687,   688,   689,   690,   691,   692,
     693,   694,   695,   696,   697,   698,   699,   700,   701,   974,
     975,    99,   411,   853,    68,   124,   125,   834,   854,   269,
     853,    70,   877,   351,   754,   855,   942,   878,   114,   115,
     116,   117,   745,   752,   894,   753,   901,   123,   794,   895,
    1015,   902,  1016,  1017,   361,    99,   905,   186,   100,   187,
    1084,   906,   362,  1085,   363,   124,   125,   188,   189,   190,
     191,   192,   126,   364,   478,    99,   853,   804,   805,   907,
     371,  1040,   365,   442,   193,   423,  1044,   194,   133,   461,
    1041,  1045,   380,   141,  1052,   195,   381,   179,   269,   291,
     270,   271,   292,   293,    99,   426,   433,   444,   382,   196,
    1061,  1062,   219,   184,   383,   124,   125,  1067,   443,   233,
     384,   197,  1068,   216,   386,   213,  1101,   452,   226,   253,
      99,  1102,   403,   487,   488,   237,   410,   198,   199,   275,
     200,   208,   296,   276,   294,   255,   453,   185,   295,   297,
     220,    99,   418,   419,   221,   289,   458,   234,   429,   214,
     307,   235,   227,   431,   331,   615,   616,   617,   618,   238,
      99,   432,   211,   447,   451,   222,  1053,  1054,  1055,   256,
     332,   455,   236,   774,   775,   776,   777,   778,   779,   290,
     456,   457,   254,   463,   308,   114,   115,   116,   117,   466,
     468,   469,   121,   472,   123,   269,  1028,  1029,  1030,  1031,
     473,   484,   124,   125,   333,   489,   490,   491,   492,   493,
      99,   494,   124,   125,   496,   189,   190,   497,   192,   126,
     498,   499,   500,   501,   502,   507,   509,   503,   504,   510,
     505,   193,   506,   511,   194,   508,   512,   513,   514,   515,
     516,   517,   195,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   599,   600,   601,   528,   530,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   533,   534,   141,   531,   535,   536,   537,   329,   330,
     179,     1,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,   184,   539,   540,   538,
     541,   542,   544,   546,   547,   793,   806,    99,   331,   548,
     549,   550,   552,   553,   554,   555,   556,    99,   557,   558,
     560,   795,   807,   561,   332,   563,   562,   564,   565,   566,
     185,   568,   569,   570,   660,   572,   573,   576,   577,   575,
     578,   579,   580,   582,   581,   583,   586,   584,   585,   587,
     588,   589,   591,   593,   594,   796,   808,   679,   333,   596,
     597,   598,   759,   602,   603,   604,   605,   606,   607,   608,
     609,   610,   611,   614,   620,    34,   621,   622,   623,   858,
     625,   624,   626,   627,   637,   631,   628,   629,   630,   632,
     633,   635,   636,   677,   839,   638,   642,   678,   639,   641,
     725,   643,   644,   645,   667,   649,   650,   729,   733,   737,
     741,   763,   766,   651,   770,   815,   819,   827,   840,   841,
     842,   652,   843,   845,   653,   654,   655,   846,   850,   656,
     657,   658,   659,   661,   662,   663,   674,   675,   851,   676,
     852,   857,   861,   860,   863,   864,   866,   867,   870,   869,
     927,   884,   873,   883,   887,   886,   888,   889,   890,   891,
     892,   893,   898,   899,   900,   908,   913,   912,   915,   916,
     928,   922,   918,   923,   924,   925,   926,   929,   930,   931,
     932,   935,   933,   934,   936,   937,   972,   999,  1000,   938,
    1005,  1006,  1009,   939,  1008,  1014,   940,  1048,   992,  1050,
    1042,   993,   994,  1043,   995,   996,   997,  1049,  1051,  1065,
    1070,  1001,  1002,  1073,  1003,  1033,  1075,  1080,  1034,  1035,
    1078,  1098,  1099,  1100,  1103,  1036,  1037,  1038,   751,   680,
     495,  1039,   529,   683,   830,   196,  1046,  1057,   275,   296,
    1074,   294,   276,   943,   950,   295,   297,   197,   955,   216,
     941,   213,   532,   970,   289,   976,   951,   307,   253,   977,
     966,   311,  1071,   198,   199,   991,   200,   208,   973,  1058,
    1059,   979,   952,   953,   255,   954,   961,   793,   990,   944,
     971,   806,   959,   998,  1104,   214,   960,   219,   290,  1105,
     233,   308,  1060,   795,   967,  1018,  1063,   807,   211,  1019,
    1077,  1079,  1108,   226,  1106,   980,   237,   965,   256,   574,
     945,  1020,   969,   543,  1069,   267,   947,   946,   978,   948,
     949,   254,  1011,   571,   567,   220,  1010,   796,   234,   221,
    1012,   808,   235,  1013,   545,   989,   559,   227,   988,   551,
     238,   824,   987,  1072,  1004,  1021,  1007,   813,   682,  1027,
     222,  1076,  1096,   236,  1107,   590,   681,   595,     0,     0,
       0,   592,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     950,     0,     0,     0,   955,     0,   976,     0,     0,     0,
     977,     0,   951,     0,     0,     0,   966,     0,     0,     0,
       0,     0,   979,  1018,     0,     0,     0,  1019,   952,   953,
       0,   954,   961,     0,     0,     0,     0,     0,   959,  1020,
       0,     0,   960,     0,     0,     0,     0,     0,     0,     0,
     967,     0,     0,     0,     0,     0,   980,     0,     0,     0,
       0,     0,     0,   965,     0,     0,     0,     0,     0,   978,
       0,     0,     0,  1021
  };

  const short
  Dhcp6Parser::yycheck_[] =
  {
      74,    75,    76,    77,    78,    79,    80,    83,    82,    83,
      84,    85,    82,    83,    83,    77,   629,    77,    76,    77,
      78,    79,    80,   623,    82,    83,   606,    85,    17,   868,
     868,    77,    77,   868,    77,    77,   868,   868,    10,    16,
      17,    96,    78,    79,    94,     0,    78,    79,    21,     7,
     512,   101,    76,    77,    78,    79,    80,     7,    82,    83,
       5,    85,     7,     7,     9,   527,    77,    78,    79,    80,
      11,    12,    21,     3,    15,     7,     6,    18,    19,    20,
      53,    30,    55,    56,     3,     7,    59,    60,    61,     8,
     103,   104,     3,    70,    71,     6,     3,    70,    71,     7,
      52,     8,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,     7,    65,    66,    67,    68,    69,    70,    71,
     175,    70,    71,   142,   143,   144,   145,   175,   151,    70,
      71,   154,   155,   156,     3,     7,    77,    89,    52,     8,
      92,    82,    83,    84,    85,    86,     3,    88,     3,    63,
       3,     8,    93,     8,    51,     8,    70,    71,     3,   178,
       3,   102,   175,     8,   105,     8,     7,   116,   117,   118,
     119,   112,    52,     7,     3,    89,   148,     6,    92,   120,
     121,     7,   540,   124,   125,   157,   158,   159,    13,    14,
      70,    71,     3,    53,   552,   553,   554,     8,   175,     3,
     103,   104,   175,   175,     8,  1044,  1044,     7,    88,  1044,
      70,    71,  1044,  1044,    94,    95,    96,    97,    98,    99,
       3,    52,    53,   175,     3,     8,   175,   139,   140,     8,
     175,   176,   177,   178,   175,     3,     3,    21,     6,    70,
      71,     8,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    90,
      91,   175,     3,     3,     7,    70,    71,     8,     8,    53,
       3,     7,     3,   149,   874,     8,   856,     8,    43,    44,
      45,    46,    96,    97,     3,    99,     3,    52,   901,     8,
     150,     8,   152,   153,     6,   175,     3,    62,   372,    64,
       3,     8,     3,     6,     4,    70,    71,    72,    73,    74,
      75,    76,    77,     8,     3,   175,     3,   122,   123,     8,
       4,     8,     3,     8,    89,     3,     3,    92,    93,     3,
       8,     8,     4,   407,     8,   100,     4,   411,    53,    54,
      55,    56,    57,    58,   175,     3,     3,     8,     4,   423,
       8,     8,   426,   411,     4,    70,    71,     3,     3,   433,
       4,   423,     8,   423,     4,   423,     3,     8,   426,   443,
     175,     8,     4,   362,   363,   433,     4,   423,   423,   453,
     423,   423,   458,   453,   458,   443,     3,   411,   458,   458,
     426,   175,     4,     4,   426,   453,     3,   433,     4,   423,
     458,   433,   426,     4,   478,    78,    79,    80,    81,   433,
     175,     4,   423,     4,     4,   426,   113,   114,   115,   443,
     478,     4,   433,   106,   107,   108,   109,   110,   111,   453,
       4,     8,   443,     4,   458,    43,    44,    45,    46,     4,
       4,     4,    50,     4,    52,    53,    22,    23,    24,    25,
       4,     4,    70,    71,   478,   175,     4,     4,     4,     4,
     175,     4,    70,    71,     4,    73,    74,     4,    76,    77,
       4,     4,     4,     4,   176,     4,     4,   176,   176,     4,
     176,    89,   176,     4,    92,   178,     4,     4,     4,     4,
       4,     4,   100,     4,     4,     4,     4,     4,     4,     4,
     176,     4,     4,   492,   493,   494,     4,     4,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,     4,     4,   597,   178,     4,     4,     4,   146,   147,
     604,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   604,   178,     4,   176,
       4,     4,     4,     4,   176,   629,   630,   175,   632,     4,
     176,   176,     4,     4,     4,     4,     4,   175,     4,     4,
       4,   629,   630,     4,   632,     4,   176,     4,     4,   178,
     604,     4,   178,   178,   573,     4,     4,     4,     4,   178,
     176,     4,   176,     4,   176,     4,     4,   178,   178,     4,
       4,     4,     4,     4,   176,   629,   630,   596,   632,     4,
       7,     7,    87,   175,     7,     7,     7,     7,     5,   175,
       5,     5,     5,   175,     5,     7,     5,     5,     5,     3,
       5,     7,     5,     5,   175,   527,     7,     7,     7,     7,
       5,     5,     5,     5,     4,   175,     7,     5,   175,   175,
       7,   175,   175,   175,   141,   175,   175,     7,     7,     7,
       7,     7,     7,   175,     7,     7,     7,     7,     4,     4,
       4,   175,     4,     4,   175,   175,   175,     4,     4,   175,
     175,   175,   175,   175,   175,   175,   175,   175,     4,   175,
       4,     6,     3,     6,     6,     3,     6,     3,     3,     6,
     176,     3,     6,     6,     3,     6,     4,     4,     4,     4,
       4,     4,     4,     4,     4,   175,     3,     6,     6,     3,
     178,     6,     8,     4,     4,     4,     4,   176,   178,   176,
       4,     4,   176,   176,     4,     4,     4,     4,     4,   176,
       4,     4,     3,   176,     6,     4,   178,     4,   176,     3,
       8,   176,   176,     8,   176,   176,   176,     8,     8,     4,
       4,   176,   176,     4,   176,   175,     4,     7,   175,   175,
       5,     4,     4,     4,     4,   175,   175,   175,   622,   597,
     372,   175,   407,   604,   678,   859,   175,   175,   862,   865,
     176,   865,   862,   858,   868,   865,   865,   859,   868,   859,
     853,   859,   411,   871,   862,   879,   868,   865,   882,   879,
     868,   885,   178,   859,   859,   887,   859,   859,   877,   175,
     175,   879,   868,   868,   882,   868,   868,   901,   885,   859,
     874,   905,   868,   894,   178,   859,   868,   911,   862,   176,
     914,   865,   175,   901,   868,   919,   175,   905,   859,   919,
     175,   175,   175,   911,   176,   879,   914,   868,   882,   461,
     861,   919,   870,   423,  1044,    81,   864,   862,   879,   865,
     867,   882,   913,   458,   453,   911,   911,   901,   914,   911,
     914,   905,   914,   916,   426,   884,   443,   911,   882,   433,
     914,   642,   880,  1050,   901,   919,   905,   632,   603,   920,
     911,  1067,  1084,   914,  1101,   478,   598,   485,    -1,    -1,
      -1,   481,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1044,    -1,    -1,    -1,  1044,    -1,  1050,    -1,    -1,    -1,
    1050,    -1,  1044,    -1,    -1,    -1,  1044,    -1,    -1,    -1,
      -1,    -1,  1050,  1067,    -1,    -1,    -1,  1067,  1044,  1044,
      -1,  1044,  1044,    -1,    -1,    -1,    -1,    -1,  1044,  1067,
      -1,    -1,  1044,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1044,    -1,    -1,    -1,    -1,    -1,  1050,    -1,    -1,    -1,
      -1,    -1,    -1,  1044,    -1,    -1,    -1,    -1,    -1,  1050,
      -1,    -1,    -1,  1067
  };

  const unsigned short
  Dhcp6Parser::yystos_[] =
  {
       0,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,     0,     5,     7,     9,   175,   176,   177,   178,
     196,   197,   198,   203,     7,   212,     7,   218,     7,   234,
       7,   332,     7,   409,     7,   425,     7,   442,     7,   361,
       7,   367,     7,   391,     7,   308,     7,   503,     7,   550,
       7,   541,   204,   199,   213,   219,   235,   333,   410,   426,
     443,   362,   368,   392,   309,   504,   551,   542,   196,   205,
     206,   175,   201,   202,    10,   148,   157,   158,   159,   175,
     211,   214,   215,   216,   533,   535,   537,   548,    11,    12,
      15,    18,    19,    20,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    70,    71,    77,    82,    83,    84,
      85,    86,    88,    93,   102,   105,   112,   120,   121,   124,
     125,   211,   220,   221,   222,   224,   225,   226,   227,   228,
     229,   231,   232,   241,   243,   245,   282,   288,   294,   300,
     302,   316,   326,   346,   351,   359,   385,   415,   417,   436,
     466,   478,   490,   491,   499,   501,   539,    16,    17,   211,
     236,   237,   238,   240,   415,   417,    62,    64,    72,    73,
      74,    75,    76,    89,    92,   100,   211,   224,   225,   226,
     227,   334,   335,   336,   338,   340,   342,   344,   346,   349,
     350,   385,   403,   415,   417,   419,   436,   461,    63,   211,
     342,   344,   385,   411,   412,   413,   415,   417,    65,    66,
      67,    68,    69,   211,   342,   344,   385,   415,   417,   427,
     428,   429,   431,   432,   434,   435,    88,    94,    95,    96,
      97,    98,    99,   211,   385,   415,   417,   444,   445,   446,
     447,   449,   451,   453,   455,   457,   459,   359,    21,    53,
      55,    56,    59,    60,    61,   211,   263,   369,   370,   371,
     372,   373,   374,   375,   377,   379,   381,   382,   384,   415,
     417,    54,    57,    58,   211,   263,   373,   379,   393,   394,
     395,   396,   397,   399,   400,   401,   402,   415,   417,   103,
     104,   211,   310,   311,   312,   314,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   146,
     147,   211,   415,   417,   505,   506,   507,   508,   510,   512,
     513,   515,   516,   517,   520,   522,   523,   524,   527,   529,
     531,   149,   552,   553,   554,    13,    14,   543,   544,   545,
     547,     6,     3,     4,     8,     3,   217,   549,   534,   536,
     538,     4,     3,     8,   223,   540,   233,   242,   244,   246,
       4,     4,     4,     4,     4,   230,     4,   327,   360,   386,
     416,   418,   347,   352,   289,   301,   295,   283,   467,   437,
     303,   317,   479,     4,   492,   500,   502,     3,     8,   239,
       4,     3,     8,   404,   420,   337,   339,   341,     4,     4,
     345,   343,   462,     3,     8,   414,     3,     8,   430,     4,
     433,     4,     4,     3,     8,   460,   448,   450,   452,   454,
     456,   458,     8,     3,     8,   376,   264,     4,   380,   378,
     383,     4,     8,     3,   398,     4,     4,     8,     3,   313,
     315,     3,     8,     4,   509,   511,     4,   514,     4,     4,
     518,   521,     4,     4,   525,   528,   530,   532,     3,     8,
     555,     3,     8,   546,     4,     3,     8,   196,   196,   175,
       4,     4,     4,     4,     4,   215,     4,     4,     4,     4,
       4,     4,   176,   176,   176,   176,   176,     4,   178,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,   176,     4,     4,     4,   221,
       4,   178,   237,     4,     4,     4,     4,     4,   176,   178,
       4,     4,     4,   335,     4,   412,     4,   176,     4,   176,
     176,   428,     4,     4,     4,     4,     4,     4,     4,   446,
       4,     4,   176,     4,     4,     4,   178,   371,     4,   178,
     178,   395,     4,     4,   311,   178,     4,     4,   176,     4,
     176,   176,     4,     4,   178,   178,     4,     4,     4,     4,
     506,     4,   553,     4,   176,   544,     4,     7,     7,   196,
     196,   196,   175,     7,     7,     7,     7,     5,   175,     5,
       5,     5,   198,   200,   175,    78,    79,    80,    81,   348,
       5,     5,     5,     5,     7,     5,     5,     5,     7,     7,
       7,   200,     7,     5,   207,     5,     5,   175,   175,   175,
     207,   175,     7,   175,   175,   175,   207,   207,   207,   175,
     175,   175,   175,   175,   175,   175,   175,   175,   175,   175,
     196,   175,   175,   175,   139,   140,   519,   141,   142,   143,
     144,   145,   178,   526,   175,   175,   175,     5,     5,   196,
     220,   552,   543,   236,    21,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,   211,   251,   252,   253,   256,   258,   260,   262,
     263,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     275,   276,   278,   280,   251,     7,   247,   248,   249,     7,
     328,   329,   330,     7,   363,   364,   365,     7,   387,   388,
     389,     7,   353,   354,   355,    96,   175,   290,   291,   292,
     293,   205,    97,    99,   292,   296,   297,   298,   299,    87,
     284,   285,   286,     7,   468,   469,     7,   438,   439,   440,
       7,   304,   305,   306,   106,   107,   108,   109,   110,   111,
     318,   319,   320,   321,   322,   323,   324,   325,    21,   116,
     117,   118,   119,   211,   265,   415,   417,   480,   481,   482,
     485,   486,   488,   489,   122,   123,   211,   415,   417,   493,
     494,   495,   497,   505,   208,     7,   405,   406,   407,     7,
     421,   422,   423,   101,   447,   463,   464,     7,   556,   557,
     247,     8,     8,     8,     8,   254,   257,   259,   261,     4,
       4,     4,     4,     4,   274,     4,     4,   277,   279,   281,
       4,     4,     4,     3,     8,     8,   250,     6,     3,   331,
       6,     3,   366,     6,     3,   390,     6,     3,   356,     6,
       3,     3,     6,     6,     3,     6,   287,     3,     8,   470,
       3,     6,   441,     6,     3,   307,     6,     3,     4,     4,
       4,     4,     4,     4,     3,     8,   483,   487,     4,     4,
       4,     3,     8,   496,   498,     3,     8,     8,   175,   209,
     210,   408,     6,     3,   424,     6,     3,   465,     8,   558,
       3,     6,     6,     4,     4,     4,     4,   176,   178,   176,
     178,   176,     4,   176,   176,     4,     4,     4,   176,   176,
     178,   252,   251,   249,   334,   330,   369,   365,   393,   389,
     211,   224,   225,   226,   227,   263,   326,   338,   340,   342,
     344,   346,   350,   357,   358,   385,   415,   417,   461,   355,
     291,   297,     4,   285,    90,    91,   211,   263,   385,   415,
     417,   471,   472,   473,   474,   475,   477,   469,   444,   440,
     310,   306,   176,   176,   176,   176,   176,   176,   319,     4,
       4,   176,   176,   176,   481,     4,     4,   494,     6,     3,
     411,   407,   427,   423,     4,   150,   152,   153,   211,   263,
     415,   417,   559,   560,   561,   562,   564,   557,    22,    23,
      24,    25,   255,   175,   175,   175,   175,   175,   175,   175,
       8,     8,     8,     8,     3,     8,   175,   476,     4,     8,
       3,     8,     8,   113,   114,   115,   484,   175,   175,   175,
     175,     8,     8,   175,   565,     4,   563,     3,     8,   358,
       4,   178,   473,     4,   176,     4,   560,   175,     5,   175,
       7,   566,   567,   568,     3,     6,   151,   154,   155,   156,
     569,   570,   571,   573,   574,   575,   567,   572,     4,     4,
       4,     3,     8,     4,   178,   176,   176,   570,   175
  };

  const unsigned short
  Dhcp6Parser::yyr1_[] =
  {
       0,   179,   181,   180,   182,   180,   183,   180,   184,   180,
     185,   180,   186,   180,   187,   180,   188,   180,   189,   180,
     190,   180,   191,   180,   192,   180,   193,   180,   194,   180,
     195,   180,   196,   196,   196,   196,   196,   196,   196,   197,
     199,   198,   200,   201,   201,   202,   202,   204,   203,   205,
     205,   206,   206,   208,   207,   209,   209,   210,   210,   211,
     213,   212,   214,   214,   215,   215,   215,   215,   215,   215,
     217,   216,   219,   218,   220,   220,   221,   221,   221,   221,
     221,   221,   221,   221,   221,   221,   221,   221,   221,   221,
     221,   221,   221,   221,   221,   221,   221,   221,   221,   221,
     221,   221,   221,   221,   221,   221,   221,   221,   221,   221,
     223,   222,   224,   225,   226,   227,   228,   230,   229,   231,
     233,   232,   235,   234,   236,   236,   237,   237,   237,   237,
     237,   239,   238,   240,   242,   241,   244,   243,   246,   245,
     247,   247,   248,   248,   250,   249,   251,   251,   252,   252,
     252,   252,   252,   252,   252,   252,   252,   252,   252,   252,
     252,   252,   252,   252,   252,   252,   252,   252,   254,   253,
     255,   255,   255,   255,   257,   256,   259,   258,   261,   260,
     262,   264,   263,   265,   266,   267,   268,   269,   270,   271,
     272,   274,   273,   275,   277,   276,   279,   278,   281,   280,
     283,   282,   284,   284,   285,   287,   286,   289,   288,   290,
     290,   291,   291,   292,   293,   295,   294,   296,   296,   297,
     297,   297,   298,   299,   301,   300,   303,   302,   304,   304,
     305,   305,   307,   306,   309,   308,   310,   310,   310,   311,
     311,   313,   312,   315,   314,   317,   316,   318,   318,   319,
     319,   319,   319,   319,   319,   320,   321,   322,   323,   324,
     325,   327,   326,   328,   328,   329,   329,   331,   330,   333,
     332,   334,   334,   335,   335,   335,   335,   335,   335,   335,
     335,   335,   335,   335,   335,   335,   335,   335,   335,   335,
     335,   335,   335,   337,   336,   339,   338,   341,   340,   343,
     342,   345,   344,   347,   346,   348,   348,   348,   348,   349,
     350,   352,   351,   353,   353,   354,   354,   356,   355,   357,
     357,   358,   358,   358,   358,   358,   358,   358,   358,   358,
     358,   358,   358,   358,   358,   358,   358,   358,   360,   359,
     362,   361,   363,   363,   364,   364,   366,   365,   368,   367,
     369,   369,   370,   370,   371,   371,   371,   371,   371,   371,
     371,   371,   371,   371,   372,   373,   374,   376,   375,   378,
     377,   380,   379,   381,   383,   382,   384,   386,   385,   387,
     387,   388,   388,   390,   389,   392,   391,   393,   393,   394,
     394,   395,   395,   395,   395,   395,   395,   395,   395,   395,
     396,   398,   397,   399,   400,   401,   402,   404,   403,   405,
     405,   406,   406,   408,   407,   410,   409,   411,   411,   412,
     412,   412,   412,   412,   412,   412,   414,   413,   416,   415,
     418,   417,   420,   419,   421,   421,   422,   422,   424,   423,
     426,   425,   427,   427,   428,   428,   428,   428,   428,   428,
     428,   428,   428,   428,   428,   430,   429,   431,   433,   432,
     434,   435,   437,   436,   438,   438,   439,   439,   441,   440,
     443,   442,   444,   444,   445,   445,   446,   446,   446,   446,
     446,   446,   446,   446,   446,   446,   446,   448,   447,   450,
     449,   452,   451,   454,   453,   456,   455,   458,   457,   460,
     459,   462,   461,   463,   463,   465,   464,   467,   466,   468,
     468,   470,   469,   471,   471,   472,   472,   473,   473,   473,
     473,   473,   473,   473,   474,   476,   475,   477,   479,   478,
     480,   480,   481,   481,   481,   481,   481,   481,   481,   481,
     481,   483,   482,   484,   484,   484,   485,   487,   486,   488,
     489,   490,   492,   491,   493,   493,   494,   494,   494,   494,
     494,   496,   495,   498,   497,   500,   499,   502,   501,   504,
     503,   505,   505,   506,   506,   506,   506,   506,   506,   506,
     506,   506,   506,   506,   506,   506,   506,   506,   506,   506,
     506,   507,   509,   508,   511,   510,   512,   514,   513,   515,
     516,   518,   517,   519,   519,   521,   520,   522,   523,   525,
     524,   526,   526,   526,   526,   526,   528,   527,   530,   529,
     532,   531,   534,   533,   536,   535,   538,   537,   540,   539,
     542,   541,   543,   543,   544,   544,   546,   545,   547,   549,
     548,   551,   550,   552,   552,   553,   555,   554,   556,   556,
     558,   557,   559,   559,   560,   560,   560,   560,   560,   560,
     560,   561,   563,   562,   565,   564,   566,   566,   568,   567,
     569,   569,   570,   570,   570,   570,   572,   571,   573,   574,
     575
  };

  const unsigned char
  Dhcp6Parser::yyr2_[] =
  {
       0,     2,     0,     3,     0,     3,     0,     3,     0,     3,
       0,     3,     0,     3,     0,     3,     0,     3,     0,     3,
       0,     3,     0,     3,     0,     3,     0,     3,     0,     3,
       0,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     4,     1,     0,     1,     3,     5,     0,     4,     0,
       1,     1,     3,     0,     4,     0,     1,     1,     3,     2,
       0,     4,     1,     3,     1,     1,     1,     1,     1,     1,
       0,     6,     0,     4,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     4,     3,     3,     3,     3,     3,     0,     4,     3,
       0,     6,     0,     4,     1,     3,     1,     1,     1,     1,
       1,     0,     4,     3,     0,     6,     0,     6,     0,     6,
       0,     1,     1,     3,     0,     4,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     4,
       1,     1,     1,     1,     0,     4,     0,     4,     0,     4,
       3,     0,     4,     3,     3,     3,     3,     3,     3,     3,
       3,     0,     4,     3,     0,     4,     0,     4,     0,     4,
       0,     6,     1,     3,     1,     0,     4,     0,     6,     1,
       3,     1,     1,     1,     1,     0,     6,     1,     3,     1,
       1,     1,     1,     1,     0,     6,     0,     6,     0,     1,
       1,     3,     0,     4,     0,     4,     1,     3,     1,     1,
       1,     0,     4,     0,     4,     0,     6,     1,     3,     1,
       1,     1,     1,     1,     1,     3,     3,     3,     3,     3,
       3,     0,     6,     0,     1,     1,     3,     0,     4,     0,
       4,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     4,     0,     4,     0,     4,     0,
       4,     0,     4,     0,     4,     1,     1,     1,     1,     3,
       3,     0,     6,     0,     1,     1,     3,     0,     4,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     6,
       0,     4,     0,     1,     1,     3,     0,     4,     0,     4,
       0,     1,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     0,     4,     0,
       4,     0,     4,     1,     0,     4,     3,     0,     6,     0,
       1,     1,     3,     0,     4,     0,     4,     0,     1,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     4,     1,     1,     3,     3,     0,     6,     0,
       1,     1,     3,     0,     4,     0,     4,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     0,     4,     0,     4,
       0,     4,     0,     6,     0,     1,     1,     3,     0,     4,
       0,     4,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     4,     3,     0,     4,
       3,     3,     0,     6,     0,     1,     1,     3,     0,     4,
       0,     4,     0,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     4,     0,
       4,     0,     4,     0,     4,     0,     4,     0,     4,     0,
       4,     0,     6,     1,     1,     0,     4,     0,     6,     1,
       3,     0,     4,     0,     1,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     4,     3,     0,     6,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     4,     1,     1,     1,     3,     0,     4,     3,
       3,     3,     0,     6,     1,     3,     1,     1,     1,     1,
       1,     0,     4,     0,     4,     0,     4,     0,     6,     0,
       4,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     0,     4,     0,     4,     3,     0,     4,     3,
       3,     0,     4,     1,     1,     0,     4,     3,     3,     0,
       4,     1,     1,     1,     1,     1,     0,     4,     0,     4,
       0,     4,     0,     4,     0,     4,     0,     4,     0,     6,
       0,     4,     1,     3,     1,     1,     0,     6,     3,     0,
       6,     0,     4,     1,     3,     1,     0,     6,     1,     3,
       0,     4,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     3,     0,     4,     0,     6,     1,     3,     0,     4,
       1,     3,     1,     1,     1,     1,     0,     4,     3,     3,
       3
  };



  // YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
  // First, the terminals, then, starting at \a yyntokens_, nonterminals.
  const char*
  const Dhcp6Parser::yytname_[] =
  {
  "\"end of file\"", "error", "$undefined", "\",\"", "\":\"", "\"[\"",
  "\"]\"", "\"{\"", "\"}\"", "\"null\"", "\"Dhcp6\"", "\"data-directory\"",
  "\"config-control\"", "\"config-databases\"",
  "\"config-fetch-wait-time\"", "\"interfaces-config\"", "\"interfaces\"",
  "\"re-detect\"", "\"lease-database\"", "\"hosts-database\"",
  "\"hosts-databases\"", "\"type\"", "\"memfile\"", "\"mysql\"",
  "\"postgresql\"", "\"cql\"", "\"user\"", "\"password\"", "\"host\"",
  "\"port\"", "\"persist\"", "\"lfc-interval\"", "\"readonly\"",
  "\"connect-timeout\"", "\"contact-points\"", "\"max-reconnect-tries\"",
  "\"reconnect-wait-time\"", "\"keyspace\"", "\"consistency\"",
  "\"serial-consistency\"", "\"request-timeout\"", "\"tcp-keepalive\"",
  "\"tcp-nodelay\"", "\"preferred-lifetime\"", "\"valid-lifetime\"",
  "\"renew-timer\"", "\"rebind-timer\"", "\"decline-probation-period\"",
  "\"server-tag\"", "\"enable-reconfiguration\"", "\"subnet6\"",
  "\"option-def\"", "\"option-data\"", "\"name\"", "\"data\"", "\"code\"",
  "\"space\"", "\"csv-format\"", "\"always-send\"", "\"record-types\"",
  "\"encapsulate\"", "\"array\"", "\"pools\"", "\"pool\"", "\"pd-pools\"",
  "\"prefix\"", "\"prefix-len\"", "\"excluded-prefix\"",
  "\"excluded-prefix-len\"", "\"delegated-len\"", "\"user-context\"",
  "\"comment\"", "\"subnet\"", "\"interface\"", "\"interface-id\"",
  "\"id\"", "\"rapid-commit\"", "\"reservation-mode\"", "\"disabled\"",
  "\"out-of-pool\"", "\"global\"", "\"all\"", "\"shared-networks\"",
  "\"mac-sources\"", "\"relay-supplied-options\"",
  "\"host-reservation-identifiers\"", "\"sanity-checks\"",
  "\"lease-checks\"", "\"client-classes\"", "\"require-client-classes\"",
  "\"test\"", "\"only-if-required\"", "\"client-class\"",
  "\"reservations\"", "\"ip-addresses\"", "\"prefixes\"", "\"duid\"",
  "\"hw-address\"", "\"hostname\"", "\"flex-id\"", "\"relay\"",
  "\"ip-address\"", "\"hooks-libraries\"", "\"library\"", "\"parameters\"",
  "\"expired-leases-processing\"", "\"reclaim-timer-wait-time\"",
  "\"flush-reclaimed-timer-wait-time\"", "\"hold-reclaimed-time\"",
  "\"max-reclaim-leases\"", "\"max-reclaim-time\"",
  "\"unwarned-reclaim-cycles\"", "\"server-id\"", "\"LLT\"", "\"EN\"",
  "\"LL\"", "\"identifier\"", "\"htype\"", "\"time\"", "\"enterprise-id\"",
  "\"dhcp4o6-port\"", "\"control-socket\"", "\"socket-type\"",
  "\"socket-name\"", "\"dhcp-queue-control\"", "\"dhcp-ddns\"",
  "\"enable-updates\"", "\"qualifying-suffix\"", "\"server-ip\"",
  "\"server-port\"", "\"sender-ip\"", "\"sender-port\"",
  "\"max-queue-size\"", "\"ncr-protocol\"", "\"ncr-format\"",
  "\"override-no-update\"", "\"override-client-update\"",
  "\"replace-client-name\"", "\"generated-prefix\"", "\"UDP\"", "\"TCP\"",
  "\"JSON\"", "\"when-present\"", "\"never\"", "\"always\"",
  "\"when-not-present\"", "\"hostname-char-set\"",
  "\"hostname-char-replacement\"", "\"Logging\"", "\"loggers\"",
  "\"output_options\"", "\"output\"", "\"debuglevel\"", "\"severity\"",
  "\"flush\"", "\"maxsize\"", "\"maxver\"", "\"Dhcp4\"", "\"DhcpDdns\"",
  "\"Control-agent\"", "TOPLEVEL_JSON", "TOPLEVEL_DHCP6", "SUB_DHCP6",
  "SUB_INTERFACES6", "SUB_SUBNET6", "SUB_POOL6", "SUB_PD_POOL",
  "SUB_RESERVATION", "SUB_OPTION_DEFS", "SUB_OPTION_DEF",
  "SUB_OPTION_DATA", "SUB_HOOKS_LIBRARY", "SUB_DHCP_DDNS", "SUB_LOGGING",
  "SUB_CONFIG_CONTROL", "\"constant string\"", "\"integer\"",
  "\"floating point\"", "\"boolean\"", "$accept", "start", "$@1", "$@2",
  "$@3", "$@4", "$@5", "$@6", "$@7", "$@8", "$@9", "$@10", "$@11", "$@12",
  "$@13", "$@14", "$@15", "value", "sub_json", "map2", "$@16", "map_value",
  "map_content", "not_empty_map", "list_generic", "$@17", "list_content",
  "not_empty_list", "list_strings", "$@18", "list_strings_content",
  "not_empty_list_strings", "unknown_map_entry", "syntax_map", "$@19",
  "global_objects", "global_object", "dhcp6_object", "$@20", "sub_dhcp6",
  "$@21", "global_params", "global_param", "data_directory", "$@22",
  "preferred_lifetime", "valid_lifetime", "renew_timer", "rebind_timer",
  "decline_probation_period", "server_tag", "$@23",
  "enable_reconfiguration", "interfaces_config", "$@24", "sub_interfaces6",
  "$@25", "interfaces_config_params", "interfaces_config_param",
  "interfaces_list", "$@26", "re_detect", "lease_database", "$@27",
  "hosts_database", "$@28", "hosts_databases", "$@29", "database_list",
  "not_empty_database_list", "database", "$@30", "database_map_params",
  "database_map_param", "database_type", "$@31", "db_type", "user", "$@32",
  "password", "$@33", "host", "$@34", "port", "name", "$@35", "persist",
  "lfc_interval", "readonly", "connect_timeout", "reconnect_wait_time",
  "request_timeout", "tcp_keepalive", "tcp_nodelay", "contact_points",
  "$@36", "max_reconnect_tries", "keyspace", "$@37", "consistency", "$@38",
  "serial_consistency", "$@39", "sanity_checks", "$@40",
  "sanity_checks_params", "sanity_checks_param", "lease_checks", "$@41",
  "mac_sources", "$@42", "mac_sources_list", "mac_sources_value",
  "duid_id", "string_id", "host_reservation_identifiers", "$@43",
  "host_reservation_identifiers_list", "host_reservation_identifier",
  "hw_address_id", "flex_id", "relay_supplied_options", "$@44",
  "hooks_libraries", "$@45", "hooks_libraries_list",
  "not_empty_hooks_libraries_list", "hooks_library", "$@46",
  "sub_hooks_library", "$@47", "hooks_params", "hooks_param", "library",
  "$@48", "parameters", "$@49", "expired_leases_processing", "$@50",
  "expired_leases_params", "expired_leases_param",
  "reclaim_timer_wait_time", "flush_reclaimed_timer_wait_time",
  "hold_reclaimed_time", "max_reclaim_leases", "max_reclaim_time",
  "unwarned_reclaim_cycles", "subnet6_list", "$@51",
  "subnet6_list_content", "not_empty_subnet6_list", "subnet6", "$@52",
  "sub_subnet6", "$@53", "subnet6_params", "subnet6_param", "subnet",
  "$@54", "interface", "$@55", "interface_id", "$@56", "client_class",
  "$@57", "require_client_classes", "$@58", "reservation_mode", "$@59",
  "hr_mode", "id", "rapid_commit", "shared_networks", "$@60",
  "shared_networks_content", "shared_networks_list", "shared_network",
  "$@61", "shared_network_params", "shared_network_param",
  "option_def_list", "$@62", "sub_option_def_list", "$@63",
  "option_def_list_content", "not_empty_option_def_list",
  "option_def_entry", "$@64", "sub_option_def", "$@65",
  "option_def_params", "not_empty_option_def_params", "option_def_param",
  "option_def_name", "code", "option_def_code", "option_def_type", "$@66",
  "option_def_record_types", "$@67", "space", "$@68", "option_def_space",
  "option_def_encapsulate", "$@69", "option_def_array", "option_data_list",
  "$@70", "option_data_list_content", "not_empty_option_data_list",
  "option_data_entry", "$@71", "sub_option_data", "$@72",
  "option_data_params", "not_empty_option_data_params",
  "option_data_param", "option_data_name", "option_data_data", "$@73",
  "option_data_code", "option_data_space", "option_data_csv_format",
  "option_data_always_send", "pools_list", "$@74", "pools_list_content",
  "not_empty_pools_list", "pool_list_entry", "$@75", "sub_pool6", "$@76",
  "pool_params", "pool_param", "pool_entry", "$@77", "user_context",
  "$@78", "comment", "$@79", "pd_pools_list", "$@80",
  "pd_pools_list_content", "not_empty_pd_pools_list", "pd_pool_entry",
  "$@81", "sub_pd_pool", "$@82", "pd_pool_params", "pd_pool_param",
  "pd_prefix", "$@83", "pd_prefix_len", "excluded_prefix", "$@84",
  "excluded_prefix_len", "pd_delegated_len", "reservations", "$@85",
  "reservations_list", "not_empty_reservations_list", "reservation",
  "$@86", "sub_reservation", "$@87", "reservation_params",
  "not_empty_reservation_params", "reservation_param", "ip_addresses",
  "$@88", "prefixes", "$@89", "duid", "$@90", "hw_address", "$@91",
  "hostname", "$@92", "flex_id_value", "$@93",
  "reservation_client_classes", "$@94", "relay", "$@95", "relay_map",
  "ip_address", "$@96", "client_classes", "$@97", "client_classes_list",
  "client_class_entry", "$@98", "client_class_params",
  "not_empty_client_class_params", "client_class_param",
  "client_class_name", "client_class_test", "$@99", "only_if_required",
  "server_id", "$@100", "server_id_params", "server_id_param",
  "server_id_type", "$@101", "duid_type", "htype", "identifier", "$@102",
  "time", "enterprise_id", "dhcp4o6_port", "control_socket", "$@103",
  "control_socket_params", "control_socket_param", "socket_type", "$@104",
  "socket_name", "$@105", "dhcp_queue_control", "$@106", "dhcp_ddns",
  "$@107", "sub_dhcp_ddns", "$@108", "dhcp_ddns_params", "dhcp_ddns_param",
  "enable_updates", "qualifying_suffix", "$@109", "server_ip", "$@110",
  "server_port", "sender_ip", "$@111", "sender_port", "max_queue_size",
  "ncr_protocol", "$@112", "ncr_protocol_value", "ncr_format", "$@113",
  "override_no_update", "override_client_update", "replace_client_name",
  "$@114", "replace_client_name_value", "generated_prefix", "$@115",
  "hostname_char_set", "$@116", "hostname_char_replacement", "$@117",
  "dhcp4_json_object", "$@118", "dhcpddns_json_object", "$@119",
  "control_agent_json_object", "$@120", "config_control", "$@121",
  "sub_config_control", "$@122", "config_control_params",
  "config_control_param", "config_databases", "$@123",
  "config_fetch_wait_time", "logging_object", "$@124", "sub_logging",
  "$@125", "logging_params", "logging_param", "loggers", "$@126",
  "loggers_entries", "logger_entry", "$@127", "logger_params",
  "logger_param", "debuglevel", "severity", "$@128", "output_options_list",
  "$@129", "output_options_list_content", "output_entry", "$@130",
  "output_params_list", "output_params", "output", "$@131", "flush",
  "maxsize", "maxver", YY_NULLPTR
  };

#if PARSER6_DEBUG
  const unsigned short
  Dhcp6Parser::yyrline_[] =
  {
       0,   263,   263,   263,   264,   264,   265,   265,   266,   266,
     267,   267,   268,   268,   269,   269,   270,   270,   271,   271,
     272,   272,   273,   273,   274,   274,   275,   275,   276,   276,
     277,   277,   285,   286,   287,   288,   289,   290,   291,   294,
     299,   299,   310,   313,   314,   317,   321,   328,   328,   335,
     336,   339,   343,   350,   350,   357,   358,   361,   365,   376,
     386,   386,   401,   402,   406,   407,   408,   409,   410,   411,
     414,   414,   429,   429,   438,   439,   444,   445,   446,   447,
     448,   449,   450,   451,   452,   453,   454,   455,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   467,
     468,   469,   470,   471,   472,   473,   474,   475,   476,   477,
     480,   480,   488,   493,   498,   503,   508,   513,   513,   521,
     526,   526,   537,   537,   546,   547,   550,   551,   552,   553,
     554,   557,   557,   567,   573,   573,   585,   585,   597,   597,
     607,   608,   611,   612,   615,   615,   625,   626,   629,   630,
     631,   632,   633,   634,   635,   636,   637,   638,   639,   640,
     641,   642,   643,   644,   645,   646,   647,   648,   651,   651,
     658,   659,   660,   661,   664,   664,   672,   672,   680,   680,
     688,   693,   693,   701,   706,   711,   716,   721,   726,   731,
     736,   741,   741,   749,   754,   754,   762,   762,   770,   770,
     778,   778,   788,   789,   791,   793,   793,   811,   811,   821,
     822,   825,   826,   829,   834,   839,   839,   849,   850,   853,
     854,   855,   858,   863,   870,   870,   880,   880,   890,   891,
     894,   895,   898,   898,   908,   908,   918,   919,   920,   923,
     924,   927,   927,   935,   935,   943,   943,   954,   955,   958,
     959,   960,   961,   962,   963,   966,   971,   976,   981,   986,
     991,   999,   999,  1012,  1013,  1016,  1017,  1024,  1024,  1050,
    1050,  1061,  1062,  1066,  1067,  1068,  1069,  1070,  1071,  1072,
    1073,  1074,  1075,  1076,  1077,  1078,  1079,  1080,  1081,  1082,
    1083,  1084,  1085,  1088,  1088,  1096,  1096,  1104,  1104,  1112,
    1112,  1120,  1120,  1130,  1130,  1137,  1138,  1139,  1140,  1143,
    1148,  1156,  1156,  1167,  1168,  1172,  1173,  1176,  1176,  1184,
    1185,  1188,  1189,  1190,  1191,  1192,  1193,  1194,  1195,  1196,
    1197,  1198,  1199,  1200,  1201,  1202,  1203,  1204,  1211,  1211,
    1224,  1224,  1233,  1234,  1237,  1238,  1243,  1243,  1258,  1258,
    1272,  1273,  1276,  1277,  1280,  1281,  1282,  1283,  1284,  1285,
    1286,  1287,  1288,  1289,  1292,  1294,  1299,  1301,  1301,  1309,
    1309,  1317,  1317,  1325,  1327,  1327,  1335,  1344,  1344,  1356,
    1357,  1362,  1363,  1368,  1368,  1380,  1380,  1392,  1393,  1398,
    1399,  1404,  1405,  1406,  1407,  1408,  1409,  1410,  1411,  1412,
    1415,  1417,  1417,  1425,  1427,  1429,  1434,  1442,  1442,  1454,
    1455,  1458,  1459,  1462,  1462,  1472,  1472,  1481,  1482,  1485,
    1486,  1487,  1488,  1489,  1490,  1491,  1494,  1494,  1502,  1502,
    1527,  1527,  1557,  1557,  1569,  1570,  1573,  1574,  1577,  1577,
    1589,  1589,  1601,  1602,  1605,  1606,  1607,  1608,  1609,  1610,
    1611,  1612,  1613,  1614,  1615,  1618,  1618,  1626,  1631,  1631,
    1639,  1644,  1652,  1652,  1662,  1663,  1666,  1667,  1670,  1670,
    1679,  1679,  1688,  1689,  1692,  1693,  1697,  1698,  1699,  1700,
    1701,  1702,  1703,  1704,  1705,  1706,  1707,  1710,  1710,  1720,
    1720,  1730,  1730,  1738,  1738,  1746,  1746,  1754,  1754,  1762,
    1762,  1775,  1775,  1785,  1786,  1789,  1789,  1800,  1800,  1810,
    1811,  1814,  1814,  1824,  1825,  1828,  1829,  1832,  1833,  1834,
    1835,  1836,  1837,  1838,  1841,  1843,  1843,  1851,  1859,  1859,
    1871,  1872,  1875,  1876,  1877,  1878,  1879,  1880,  1881,  1882,
    1883,  1886,  1886,  1893,  1894,  1895,  1898,  1903,  1903,  1911,
    1916,  1923,  1930,  1930,  1940,  1941,  1944,  1945,  1946,  1947,
    1948,  1951,  1951,  1959,  1959,  1969,  1969,  2009,  2009,  2021,
    2021,  2031,  2032,  2035,  2036,  2037,  2038,  2039,  2040,  2041,
    2042,  2043,  2044,  2045,  2046,  2047,  2048,  2049,  2050,  2051,
    2052,  2055,  2060,  2060,  2068,  2068,  2076,  2081,  2081,  2089,
    2094,  2099,  2099,  2107,  2108,  2111,  2111,  2119,  2124,  2129,
    2129,  2137,  2140,  2143,  2146,  2149,  2155,  2155,  2163,  2163,
    2171,  2171,  2181,  2181,  2188,  2188,  2195,  2195,  2204,  2204,
    2215,  2215,  2225,  2226,  2230,  2231,  2234,  2234,  2244,  2254,
    2254,  2264,  2264,  2275,  2276,  2280,  2284,  2284,  2296,  2297,
    2301,  2301,  2309,  2310,  2313,  2314,  2315,  2316,  2317,  2318,
    2319,  2322,  2327,  2327,  2335,  2335,  2345,  2346,  2349,  2349,
    2357,  2358,  2361,  2362,  2363,  2364,  2367,  2367,  2375,  2380,
    2385
  };

  // Print the state stack on the debug stream.
  void
  Dhcp6Parser::yystack_print_ ()
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
  Dhcp6Parser::yy_reduce_print_ (int yyrule)
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
#endif // PARSER6_DEBUG


#line 14 "dhcp6_parser.yy" // lalr1.cc:1242
} } // isc::dhcp
#line 5166 "dhcp6_parser.cc" // lalr1.cc:1242
#line 2390 "dhcp6_parser.yy" // lalr1.cc:1243


void
isc::dhcp::Dhcp6Parser::error(const location_type& loc,
                              const std::string& what)
{
    ctx.error(loc, what);
}
