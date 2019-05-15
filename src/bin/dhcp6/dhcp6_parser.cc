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
      case 204: // value
      case 208: // map_value
      case 271: // db_type
      case 364: // hr_mode
      case 500: // duid_type
      case 535: // ncr_protocol_value
      case 542: // replace_client_name_value
        value.YY_MOVE_OR_COPY< ElementPtr > (YY_MOVE (that.value));
        break;

      case 186: // "boolean"
        value.YY_MOVE_OR_COPY< bool > (YY_MOVE (that.value));
        break;

      case 185: // "floating point"
        value.YY_MOVE_OR_COPY< double > (YY_MOVE (that.value));
        break;

      case 184: // "integer"
        value.YY_MOVE_OR_COPY< int64_t > (YY_MOVE (that.value));
        break;

      case 183: // "constant string"
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
      case 204: // value
      case 208: // map_value
      case 271: // db_type
      case 364: // hr_mode
      case 500: // duid_type
      case 535: // ncr_protocol_value
      case 542: // replace_client_name_value
        value.move< ElementPtr > (YY_MOVE (that.value));
        break;

      case 186: // "boolean"
        value.move< bool > (YY_MOVE (that.value));
        break;

      case 185: // "floating point"
        value.move< double > (YY_MOVE (that.value));
        break;

      case 184: // "integer"
        value.move< int64_t > (YY_MOVE (that.value));
        break;

      case 183: // "constant string"
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
      case 204: // value
      case 208: // map_value
      case 271: // db_type
      case 364: // hr_mode
      case 500: // duid_type
      case 535: // ncr_protocol_value
      case 542: // replace_client_name_value
        value.move< ElementPtr > (that.value);
        break;

      case 186: // "boolean"
        value.move< bool > (that.value);
        break;

      case 185: // "floating point"
        value.move< double > (that.value);
        break;

      case 184: // "integer"
        value.move< int64_t > (that.value);
        break;

      case 183: // "constant string"
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
      case 183: // "constant string"
#line 262 "dhcp6_parser.yy" // lalr1.cc:676
        { yyoutput << yysym.value.template as < std::string > (); }
#line 404 "dhcp6_parser.cc" // lalr1.cc:676
        break;

      case 184: // "integer"
#line 262 "dhcp6_parser.yy" // lalr1.cc:676
        { yyoutput << yysym.value.template as < int64_t > (); }
#line 410 "dhcp6_parser.cc" // lalr1.cc:676
        break;

      case 185: // "floating point"
#line 262 "dhcp6_parser.yy" // lalr1.cc:676
        { yyoutput << yysym.value.template as < double > (); }
#line 416 "dhcp6_parser.cc" // lalr1.cc:676
        break;

      case 186: // "boolean"
#line 262 "dhcp6_parser.yy" // lalr1.cc:676
        { yyoutput << yysym.value.template as < bool > (); }
#line 422 "dhcp6_parser.cc" // lalr1.cc:676
        break;

      case 204: // value
#line 262 "dhcp6_parser.yy" // lalr1.cc:676
        { yyoutput << yysym.value.template as < ElementPtr > (); }
#line 428 "dhcp6_parser.cc" // lalr1.cc:676
        break;

      case 208: // map_value
#line 262 "dhcp6_parser.yy" // lalr1.cc:676
        { yyoutput << yysym.value.template as < ElementPtr > (); }
#line 434 "dhcp6_parser.cc" // lalr1.cc:676
        break;

      case 271: // db_type
#line 262 "dhcp6_parser.yy" // lalr1.cc:676
        { yyoutput << yysym.value.template as < ElementPtr > (); }
#line 440 "dhcp6_parser.cc" // lalr1.cc:676
        break;

      case 364: // hr_mode
#line 262 "dhcp6_parser.yy" // lalr1.cc:676
        { yyoutput << yysym.value.template as < ElementPtr > (); }
#line 446 "dhcp6_parser.cc" // lalr1.cc:676
        break;

      case 500: // duid_type
#line 262 "dhcp6_parser.yy" // lalr1.cc:676
        { yyoutput << yysym.value.template as < ElementPtr > (); }
#line 452 "dhcp6_parser.cc" // lalr1.cc:676
        break;

      case 535: // ncr_protocol_value
#line 262 "dhcp6_parser.yy" // lalr1.cc:676
        { yyoutput << yysym.value.template as < ElementPtr > (); }
#line 458 "dhcp6_parser.cc" // lalr1.cc:676
        break;

      case 542: // replace_client_name_value
#line 262 "dhcp6_parser.yy" // lalr1.cc:676
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
      case 204: // value
      case 208: // map_value
      case 271: // db_type
      case 364: // hr_mode
      case 500: // duid_type
      case 535: // ncr_protocol_value
      case 542: // replace_client_name_value
        yylhs.value.emplace< ElementPtr > ();
        break;

      case 186: // "boolean"
        yylhs.value.emplace< bool > ();
        break;

      case 185: // "floating point"
        yylhs.value.emplace< double > ();
        break;

      case 184: // "integer"
        yylhs.value.emplace< int64_t > ();
        break;

      case 183: // "constant string"
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
#line 271 "dhcp6_parser.yy" // lalr1.cc:919
    { ctx.ctx_ = ctx.NO_KEYWORD; }
#line 730 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 4:
#line 272 "dhcp6_parser.yy" // lalr1.cc:919
    { ctx.ctx_ = ctx.CONFIG; }
#line 736 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 6:
#line 273 "dhcp6_parser.yy" // lalr1.cc:919
    { ctx.ctx_ = ctx.DHCP6; }
#line 742 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 8:
#line 274 "dhcp6_parser.yy" // lalr1.cc:919
    { ctx.ctx_ = ctx.INTERFACES_CONFIG; }
#line 748 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 10:
#line 275 "dhcp6_parser.yy" // lalr1.cc:919
    { ctx.ctx_ = ctx.SUBNET6; }
#line 754 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 12:
#line 276 "dhcp6_parser.yy" // lalr1.cc:919
    { ctx.ctx_ = ctx.POOLS; }
#line 760 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 14:
#line 277 "dhcp6_parser.yy" // lalr1.cc:919
    { ctx.ctx_ = ctx.PD_POOLS; }
#line 766 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 16:
#line 278 "dhcp6_parser.yy" // lalr1.cc:919
    { ctx.ctx_ = ctx.RESERVATIONS; }
#line 772 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 18:
#line 279 "dhcp6_parser.yy" // lalr1.cc:919
    { ctx.ctx_ = ctx.DHCP6; }
#line 778 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 20:
#line 280 "dhcp6_parser.yy" // lalr1.cc:919
    { ctx.ctx_ = ctx.OPTION_DEF; }
#line 784 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 22:
#line 281 "dhcp6_parser.yy" // lalr1.cc:919
    { ctx.ctx_ = ctx.OPTION_DATA; }
#line 790 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 24:
#line 282 "dhcp6_parser.yy" // lalr1.cc:919
    { ctx.ctx_ = ctx.HOOKS_LIBRARIES; }
#line 796 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 26:
#line 283 "dhcp6_parser.yy" // lalr1.cc:919
    { ctx.ctx_ = ctx.DHCP_DDNS; }
#line 802 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 28:
#line 284 "dhcp6_parser.yy" // lalr1.cc:919
    { ctx.ctx_ = ctx.LOGGING; }
#line 808 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 30:
#line 285 "dhcp6_parser.yy" // lalr1.cc:919
    { ctx.ctx_ = ctx.CONFIG_CONTROL; }
#line 814 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 32:
#line 293 "dhcp6_parser.yy" // lalr1.cc:919
    { yylhs.value.as < ElementPtr > () = ElementPtr(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location))); }
#line 820 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 33:
#line 294 "dhcp6_parser.yy" // lalr1.cc:919
    { yylhs.value.as < ElementPtr > () = ElementPtr(new DoubleElement(yystack_[0].value.as < double > (), ctx.loc2pos(yystack_[0].location))); }
#line 826 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 34:
#line 295 "dhcp6_parser.yy" // lalr1.cc:919
    { yylhs.value.as < ElementPtr > () = ElementPtr(new BoolElement(yystack_[0].value.as < bool > (), ctx.loc2pos(yystack_[0].location))); }
#line 832 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 35:
#line 296 "dhcp6_parser.yy" // lalr1.cc:919
    { yylhs.value.as < ElementPtr > () = ElementPtr(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location))); }
#line 838 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 36:
#line 297 "dhcp6_parser.yy" // lalr1.cc:919
    { yylhs.value.as < ElementPtr > () = ElementPtr(new NullElement(ctx.loc2pos(yystack_[0].location))); }
#line 844 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 37:
#line 298 "dhcp6_parser.yy" // lalr1.cc:919
    { yylhs.value.as < ElementPtr > () = ctx.stack_.back(); ctx.stack_.pop_back(); }
#line 850 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 38:
#line 299 "dhcp6_parser.yy" // lalr1.cc:919
    { yylhs.value.as < ElementPtr > () = ctx.stack_.back(); ctx.stack_.pop_back(); }
#line 856 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 39:
#line 302 "dhcp6_parser.yy" // lalr1.cc:919
    {
    // Push back the JSON value on the stack
    ctx.stack_.push_back(yystack_[0].value.as < ElementPtr > ());
}
#line 865 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 40:
#line 307 "dhcp6_parser.yy" // lalr1.cc:919
    {
    // This code is executed when we're about to start parsing
    // the content of the map
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.push_back(m);
}
#line 876 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 41:
#line 312 "dhcp6_parser.yy" // lalr1.cc:919
    {
    // map parsing completed. If we ever want to do any wrap up
    // (maybe some sanity checking), this would be the best place
    // for it.
}
#line 886 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 42:
#line 318 "dhcp6_parser.yy" // lalr1.cc:919
    { yylhs.value.as < ElementPtr > () = ctx.stack_.back(); ctx.stack_.pop_back(); }
#line 892 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 45:
#line 325 "dhcp6_parser.yy" // lalr1.cc:919
    {
                  // map containing a single entry
                  ctx.stack_.back()->set(yystack_[2].value.as < std::string > (), yystack_[0].value.as < ElementPtr > ());
                  }
#line 901 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 46:
#line 329 "dhcp6_parser.yy" // lalr1.cc:919
    {
                  // map consisting of a shorter map followed by
                  // comma and string:value
                  ctx.stack_.back()->set(yystack_[2].value.as < std::string > (), yystack_[0].value.as < ElementPtr > ());
                  }
#line 911 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 47:
#line 336 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr l(new ListElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.push_back(l);
}
#line 920 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 48:
#line 339 "dhcp6_parser.yy" // lalr1.cc:919
    {
    // list parsing complete. Put any sanity checking here
}
#line 928 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 51:
#line 347 "dhcp6_parser.yy" // lalr1.cc:919
    {
                  // List consisting of a single element.
                  ctx.stack_.back()->add(yystack_[0].value.as < ElementPtr > ());
                  }
#line 937 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 52:
#line 351 "dhcp6_parser.yy" // lalr1.cc:919
    {
                  // List ending with , and a value.
                  ctx.stack_.back()->add(yystack_[0].value.as < ElementPtr > ());
                  }
#line 946 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 53:
#line 358 "dhcp6_parser.yy" // lalr1.cc:919
    {
    // List parsing about to start
}
#line 954 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 54:
#line 360 "dhcp6_parser.yy" // lalr1.cc:919
    {
    // list parsing complete. Put any sanity checking here
    //ctx.stack_.pop_back();
}
#line 963 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 57:
#line 369 "dhcp6_parser.yy" // lalr1.cc:919
    {
                          ElementPtr s(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
                          ctx.stack_.back()->add(s);
                          }
#line 972 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 58:
#line 373 "dhcp6_parser.yy" // lalr1.cc:919
    {
                          ElementPtr s(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
                          ctx.stack_.back()->add(s);
                          }
#line 981 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 59:
#line 384 "dhcp6_parser.yy" // lalr1.cc:919
    {
    const std::string& where = ctx.contextName();
    const std::string& keyword = yystack_[1].value.as < std::string > ();
    error(yystack_[1].location,
          "got unexpected keyword \"" + keyword + "\" in " + where + " map.");
}
#line 992 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 60:
#line 394 "dhcp6_parser.yy" // lalr1.cc:919
    {
    // This code is executed when we're about to start parsing
    // the content of the map
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.push_back(m);
}
#line 1003 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 61:
#line 399 "dhcp6_parser.yy" // lalr1.cc:919
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
#line 422 "dhcp6_parser.yy" // lalr1.cc:919
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
#line 429 "dhcp6_parser.yy" // lalr1.cc:919
    {
    // No global parameter is required
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 1039 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 72:
#line 437 "dhcp6_parser.yy" // lalr1.cc:919
    {
    // Parse the Dhcp6 map
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.push_back(m);
}
#line 1049 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 73:
#line 441 "dhcp6_parser.yy" // lalr1.cc:919
    {
    // No global parameter is required
    // parsing completed
}
#line 1058 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 118:
#line 496 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 1066 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 119:
#line 498 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr datadir(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("data-directory", datadir);
    ctx.leave();
}
#line 1076 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 120:
#line 504 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr prf(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("preferred-lifetime", prf);
}
#line 1085 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 121:
#line 509 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr prf(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("default-preferred-lifetime", prf);
}
#line 1094 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 122:
#line 514 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr prf(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("min-preferred-lifetime", prf);
}
#line 1103 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 123:
#line 519 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr prf(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("max-preferred-lifetime", prf);
}
#line 1112 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 124:
#line 524 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr prf(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("valid-lifetime", prf);
}
#line 1121 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 125:
#line 529 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr prf(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("default-valid-lifetime", prf);
}
#line 1130 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 126:
#line 534 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr prf(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("min-valid-lifetime", prf);
}
#line 1139 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 127:
#line 539 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr prf(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("max-valid-lifetime", prf);
}
#line 1148 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 128:
#line 544 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr prf(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("renew-timer", prf);
}
#line 1157 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 129:
#line 549 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr prf(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("rebind-timer", prf);
}
#line 1166 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 130:
#line 554 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr ctt(new BoolElement(yystack_[0].value.as < bool > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("calculate-tee-times", ctt);
}
#line 1175 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 131:
#line 559 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr t1(new DoubleElement(yystack_[0].value.as < double > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("t1-percent", t1);
}
#line 1184 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 132:
#line 564 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr t2(new DoubleElement(yystack_[0].value.as < double > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("t2-percent", t2);
}
#line 1193 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 133:
#line 569 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr dpp(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("decline-probation-period", dpp);
}
#line 1202 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 134:
#line 574 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 1210 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 135:
#line 576 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr stag(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("server-tag", stag);
    ctx.leave();
}
#line 1220 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 136:
#line 582 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr i(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("interfaces-config", i);
    ctx.stack_.push_back(i);
    ctx.enter(ctx.INTERFACES_CONFIG);
}
#line 1231 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 137:
#line 587 "dhcp6_parser.yy" // lalr1.cc:919
    {
    // No interfaces config param is required
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 1241 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 138:
#line 593 "dhcp6_parser.yy" // lalr1.cc:919
    {
    // Parse the interfaces-config map
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.push_back(m);
}
#line 1251 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 139:
#line 597 "dhcp6_parser.yy" // lalr1.cc:919
    {
    // No interfaces config param is required
    // parsing completed
}
#line 1260 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 147:
#line 613 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr l(new ListElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("interfaces", l);
    ctx.stack_.push_back(l);
    ctx.enter(ctx.NO_KEYWORD);
}
#line 1271 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 148:
#line 618 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 1280 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 149:
#line 623 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr b(new BoolElement(yystack_[0].value.as < bool > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("re-detect", b);
}
#line 1289 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 150:
#line 629 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr i(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("lease-database", i);
    ctx.stack_.push_back(i);
    ctx.enter(ctx.LEASE_DATABASE);
}
#line 1300 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 151:
#line 634 "dhcp6_parser.yy" // lalr1.cc:919
    {
    // The type parameter is required
    ctx.require("type", ctx.loc2pos(yystack_[2].location), ctx.loc2pos(yystack_[0].location));
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 1311 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 152:
#line 641 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr i(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("hosts-database", i);
    ctx.stack_.push_back(i);
    ctx.enter(ctx.HOSTS_DATABASE);
}
#line 1322 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 153:
#line 646 "dhcp6_parser.yy" // lalr1.cc:919
    {
    // The type parameter is required
    ctx.require("type", ctx.loc2pos(yystack_[2].location), ctx.loc2pos(yystack_[0].location));
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 1333 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 154:
#line 653 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr l(new ListElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("hosts-databases", l);
    ctx.stack_.push_back(l);
    ctx.enter(ctx.HOSTS_DATABASE);
}
#line 1344 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 155:
#line 658 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 1353 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 160:
#line 671 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->add(m);
    ctx.stack_.push_back(m);
}
#line 1363 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 161:
#line 675 "dhcp6_parser.yy" // lalr1.cc:919
    {
    // The type parameter is required
    ctx.require("type", ctx.loc2pos(yystack_[3].location), ctx.loc2pos(yystack_[0].location));
    ctx.stack_.pop_back();
}
#line 1373 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 184:
#line 707 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.DATABASE_TYPE);
}
#line 1381 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 185:
#line 709 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.back()->set("type", yystack_[0].value.as < ElementPtr > ());
    ctx.leave();
}
#line 1390 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 186:
#line 714 "dhcp6_parser.yy" // lalr1.cc:919
    { yylhs.value.as < ElementPtr > () = ElementPtr(new StringElement("memfile", ctx.loc2pos(yystack_[0].location))); }
#line 1396 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 187:
#line 715 "dhcp6_parser.yy" // lalr1.cc:919
    { yylhs.value.as < ElementPtr > () = ElementPtr(new StringElement("mysql", ctx.loc2pos(yystack_[0].location))); }
#line 1402 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 188:
#line 716 "dhcp6_parser.yy" // lalr1.cc:919
    { yylhs.value.as < ElementPtr > () = ElementPtr(new StringElement("postgresql", ctx.loc2pos(yystack_[0].location))); }
#line 1408 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 189:
#line 717 "dhcp6_parser.yy" // lalr1.cc:919
    { yylhs.value.as < ElementPtr > () = ElementPtr(new StringElement("cql", ctx.loc2pos(yystack_[0].location))); }
#line 1414 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 190:
#line 720 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 1422 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 191:
#line 722 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr user(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("user", user);
    ctx.leave();
}
#line 1432 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 192:
#line 728 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 1440 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 193:
#line 730 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr pwd(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("password", pwd);
    ctx.leave();
}
#line 1450 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 194:
#line 736 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 1458 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 195:
#line 738 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr h(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("host", h);
    ctx.leave();
}
#line 1468 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 196:
#line 744 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr p(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("port", p);
}
#line 1477 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 197:
#line 749 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 1485 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 198:
#line 751 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr name(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("name", name);
    ctx.leave();
}
#line 1495 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 199:
#line 757 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr n(new BoolElement(yystack_[0].value.as < bool > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("persist", n);
}
#line 1504 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 200:
#line 762 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr n(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("lfc-interval", n);
}
#line 1513 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 201:
#line 767 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr n(new BoolElement(yystack_[0].value.as < bool > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("readonly", n);
}
#line 1522 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 202:
#line 772 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr n(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("connect-timeout", n);
}
#line 1531 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 203:
#line 777 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr n(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("reconnect-wait-time", n);
}
#line 1540 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 204:
#line 782 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr n(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("request-timeout", n);
}
#line 1549 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 205:
#line 787 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr n(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("tcp-keepalive", n);
}
#line 1558 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 206:
#line 792 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr n(new BoolElement(yystack_[0].value.as < bool > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("tcp-nodelay", n);
}
#line 1567 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 207:
#line 797 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 1575 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 208:
#line 799 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr cp(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("contact-points", cp);
    ctx.leave();
}
#line 1585 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 209:
#line 805 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr n(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("max-reconnect-tries", n);
}
#line 1594 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 210:
#line 810 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 1602 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 211:
#line 812 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr ks(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("keyspace", ks);
    ctx.leave();
}
#line 1612 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 212:
#line 818 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 1620 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 213:
#line 820 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr c(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("consistency", c);
    ctx.leave();
}
#line 1630 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 214:
#line 826 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 1638 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 215:
#line 828 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr c(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("serial-consistency", c);
    ctx.leave();
}
#line 1648 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 216:
#line 834 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("sanity-checks", m);
    ctx.stack_.push_back(m);
    ctx.enter(ctx.SANITY_CHECKS);
}
#line 1659 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 217:
#line 839 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 1668 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 221:
#line 849 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 1676 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 222:
#line 851 "dhcp6_parser.yy" // lalr1.cc:919
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
#line 1696 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 223:
#line 867 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr l(new ListElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("mac-sources", l);
    ctx.stack_.push_back(l);
    ctx.enter(ctx.MAC_SOURCES);
}
#line 1707 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 224:
#line 872 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 1716 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 229:
#line 885 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr duid(new StringElement("duid", ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->add(duid);
}
#line 1725 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 230:
#line 890 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr duid(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->add(duid);
}
#line 1734 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 231:
#line 895 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr l(new ListElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("host-reservation-identifiers", l);
    ctx.stack_.push_back(l);
    ctx.enter(ctx.HOST_RESERVATION_IDENTIFIERS);
}
#line 1745 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 232:
#line 900 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 1754 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 238:
#line 914 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr hwaddr(new StringElement("hw-address", ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->add(hwaddr);
}
#line 1763 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 239:
#line 919 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr flex_id(new StringElement("flex-id", ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->add(flex_id);
}
#line 1772 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 240:
#line 926 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr l(new ListElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("relay-supplied-options", l);
    ctx.stack_.push_back(l);
    ctx.enter(ctx.NO_KEYWORD);
}
#line 1783 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 241:
#line 931 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 1792 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 242:
#line 936 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr l(new ListElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("hooks-libraries", l);
    ctx.stack_.push_back(l);
    ctx.enter(ctx.HOOKS_LIBRARIES);
}
#line 1803 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 243:
#line 941 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 1812 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 248:
#line 954 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->add(m);
    ctx.stack_.push_back(m);
}
#line 1822 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 249:
#line 958 "dhcp6_parser.yy" // lalr1.cc:919
    {
    // The library hooks parameter is required
    ctx.require("library", ctx.loc2pos(yystack_[3].location), ctx.loc2pos(yystack_[0].location));
    ctx.stack_.pop_back();
}
#line 1832 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 250:
#line 964 "dhcp6_parser.yy" // lalr1.cc:919
    {
    // Parse the hooks-libraries list entry map
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.push_back(m);
}
#line 1842 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 251:
#line 968 "dhcp6_parser.yy" // lalr1.cc:919
    {
    // The library hooks parameter is required
    ctx.require("library", ctx.loc2pos(yystack_[3].location), ctx.loc2pos(yystack_[0].location));
    // parsing completed
}
#line 1852 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 257:
#line 983 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 1860 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 258:
#line 985 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr lib(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("library", lib);
    ctx.leave();
}
#line 1870 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 259:
#line 991 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 1878 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 260:
#line 993 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.back()->set("parameters", yystack_[0].value.as < ElementPtr > ());
    ctx.leave();
}
#line 1887 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 261:
#line 999 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("expired-leases-processing", m);
    ctx.stack_.push_back(m);
    ctx.enter(ctx.EXPIRED_LEASES_PROCESSING);
}
#line 1898 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 262:
#line 1004 "dhcp6_parser.yy" // lalr1.cc:919
    {
    // No expired lease parameter is required
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 1908 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 271:
#line 1022 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr value(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("reclaim-timer-wait-time", value);
}
#line 1917 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 272:
#line 1027 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr value(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("flush-reclaimed-timer-wait-time", value);
}
#line 1926 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 273:
#line 1032 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr value(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("hold-reclaimed-time", value);
}
#line 1935 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 274:
#line 1037 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr value(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("max-reclaim-leases", value);
}
#line 1944 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 275:
#line 1042 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr value(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("max-reclaim-time", value);
}
#line 1953 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 276:
#line 1047 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr value(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("unwarned-reclaim-cycles", value);
}
#line 1962 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 277:
#line 1055 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr l(new ListElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("subnet6", l);
    ctx.stack_.push_back(l);
    ctx.enter(ctx.SUBNET6);
}
#line 1973 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 278:
#line 1060 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 1982 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 283:
#line 1080 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->add(m);
    ctx.stack_.push_back(m);
}
#line 1992 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 284:
#line 1084 "dhcp6_parser.yy" // lalr1.cc:919
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
#line 2018 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 285:
#line 1106 "dhcp6_parser.yy" // lalr1.cc:919
    {
    // Parse the subnet6 list entry map
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.push_back(m);
}
#line 2028 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 286:
#line 1110 "dhcp6_parser.yy" // lalr1.cc:919
    {
    // The subnet subnet6 parameter is required
    ctx.require("subnet", ctx.loc2pos(yystack_[3].location), ctx.loc2pos(yystack_[0].location));
    // parsing completed
}
#line 2038 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 318:
#line 1153 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 2046 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 319:
#line 1155 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr subnet(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("subnet", subnet);
    ctx.leave();
}
#line 2056 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 320:
#line 1161 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 2064 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 321:
#line 1163 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr iface(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("interface", iface);
    ctx.leave();
}
#line 2074 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 322:
#line 1169 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 2082 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 323:
#line 1171 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr iface(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("interface-id", iface);
    ctx.leave();
}
#line 2092 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 324:
#line 1177 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 2100 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 325:
#line 1179 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr cls(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("client-class", cls);
    ctx.leave();
}
#line 2110 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 326:
#line 1185 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr c(new ListElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("require-client-classes", c);
    ctx.stack_.push_back(c);
    ctx.enter(ctx.NO_KEYWORD);
}
#line 2121 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 327:
#line 1190 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 2130 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 328:
#line 1195 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.RESERVATION_MODE);
}
#line 2138 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 329:
#line 1197 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.back()->set("reservation-mode", yystack_[0].value.as < ElementPtr > ());
    ctx.leave();
}
#line 2147 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 330:
#line 1202 "dhcp6_parser.yy" // lalr1.cc:919
    { yylhs.value.as < ElementPtr > () = ElementPtr(new StringElement("disabled", ctx.loc2pos(yystack_[0].location))); }
#line 2153 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 331:
#line 1203 "dhcp6_parser.yy" // lalr1.cc:919
    { yylhs.value.as < ElementPtr > () = ElementPtr(new StringElement("out-of-pool", ctx.loc2pos(yystack_[0].location))); }
#line 2159 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 332:
#line 1204 "dhcp6_parser.yy" // lalr1.cc:919
    { yylhs.value.as < ElementPtr > () = ElementPtr(new StringElement("global", ctx.loc2pos(yystack_[0].location))); }
#line 2165 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 333:
#line 1205 "dhcp6_parser.yy" // lalr1.cc:919
    { yylhs.value.as < ElementPtr > () = ElementPtr(new StringElement("all", ctx.loc2pos(yystack_[0].location))); }
#line 2171 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 334:
#line 1208 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr id(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("id", id);
}
#line 2180 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 335:
#line 1213 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr rc(new BoolElement(yystack_[0].value.as < bool > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("rapid-commit", rc);
}
#line 2189 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 336:
#line 1221 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr l(new ListElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("shared-networks", l);
    ctx.stack_.push_back(l);
    ctx.enter(ctx.SHARED_NETWORK);
}
#line 2200 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 337:
#line 1226 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 2209 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 342:
#line 1241 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->add(m);
    ctx.stack_.push_back(m);
}
#line 2219 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 343:
#line 1245 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.pop_back();
}
#line 2227 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 372:
#line 1285 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr l(new ListElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("option-def", l);
    ctx.stack_.push_back(l);
    ctx.enter(ctx.OPTION_DEF);
}
#line 2238 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 373:
#line 1290 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 2247 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 374:
#line 1298 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.push_back(m);
}
#line 2256 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 375:
#line 1301 "dhcp6_parser.yy" // lalr1.cc:919
    {
    // parsing completed
}
#line 2264 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 380:
#line 1317 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->add(m);
    ctx.stack_.push_back(m);
}
#line 2274 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 381:
#line 1321 "dhcp6_parser.yy" // lalr1.cc:919
    {
    // The name, code and type option def parameters are required.
    ctx.require("name", ctx.loc2pos(yystack_[3].location), ctx.loc2pos(yystack_[0].location));
    ctx.require("code", ctx.loc2pos(yystack_[3].location), ctx.loc2pos(yystack_[0].location));
    ctx.require("type", ctx.loc2pos(yystack_[3].location), ctx.loc2pos(yystack_[0].location));
    ctx.stack_.pop_back();
}
#line 2286 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 382:
#line 1332 "dhcp6_parser.yy" // lalr1.cc:919
    {
    // Parse the option-def list entry map
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.push_back(m);
}
#line 2296 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 383:
#line 1336 "dhcp6_parser.yy" // lalr1.cc:919
    {
    // The name, code and type option def parameters are required.
    ctx.require("name", ctx.loc2pos(yystack_[3].location), ctx.loc2pos(yystack_[0].location));
    ctx.require("code", ctx.loc2pos(yystack_[3].location), ctx.loc2pos(yystack_[0].location));
    ctx.require("type", ctx.loc2pos(yystack_[3].location), ctx.loc2pos(yystack_[0].location));
    // parsing completed
}
#line 2308 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 399:
#line 1368 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr code(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("code", code);
}
#line 2317 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 401:
#line 1375 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 2325 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 402:
#line 1377 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr prf(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("type", prf);
    ctx.leave();
}
#line 2335 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 403:
#line 1383 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 2343 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 404:
#line 1385 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr rtypes(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("record-types", rtypes);
    ctx.leave();
}
#line 2353 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 405:
#line 1391 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 2361 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 406:
#line 1393 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr space(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("space", space);
    ctx.leave();
}
#line 2371 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 408:
#line 1401 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 2379 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 409:
#line 1403 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr encap(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("encapsulate", encap);
    ctx.leave();
}
#line 2389 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 410:
#line 1409 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr array(new BoolElement(yystack_[0].value.as < bool > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("array", array);
}
#line 2398 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 411:
#line 1418 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr l(new ListElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("option-data", l);
    ctx.stack_.push_back(l);
    ctx.enter(ctx.OPTION_DATA);
}
#line 2409 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 412:
#line 1423 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 2418 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 417:
#line 1442 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->add(m);
    ctx.stack_.push_back(m);
}
#line 2428 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 418:
#line 1446 "dhcp6_parser.yy" // lalr1.cc:919
    {
    /// @todo: the code or name parameters are required.
    ctx.stack_.pop_back();
}
#line 2437 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 419:
#line 1454 "dhcp6_parser.yy" // lalr1.cc:919
    {
    // Parse the option-data list entry map
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.push_back(m);
}
#line 2447 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 420:
#line 1458 "dhcp6_parser.yy" // lalr1.cc:919
    {
    /// @todo: the code or name parameters are required.
    // parsing completed
}
#line 2456 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 435:
#line 1491 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 2464 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 436:
#line 1493 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr data(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("data", data);
    ctx.leave();
}
#line 2474 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 439:
#line 1503 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr space(new BoolElement(yystack_[0].value.as < bool > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("csv-format", space);
}
#line 2483 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 440:
#line 1508 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr persist(new BoolElement(yystack_[0].value.as < bool > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("always-send", persist);
}
#line 2492 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 441:
#line 1516 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr l(new ListElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("pools", l);
    ctx.stack_.push_back(l);
    ctx.enter(ctx.POOLS);
}
#line 2503 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 442:
#line 1521 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 2512 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 447:
#line 1536 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->add(m);
    ctx.stack_.push_back(m);
}
#line 2522 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 448:
#line 1540 "dhcp6_parser.yy" // lalr1.cc:919
    {
    // The pool parameter is required.
    ctx.require("pool", ctx.loc2pos(yystack_[3].location), ctx.loc2pos(yystack_[0].location));
    ctx.stack_.pop_back();
}
#line 2532 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 449:
#line 1546 "dhcp6_parser.yy" // lalr1.cc:919
    {
    // Parse the pool list entry map
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.push_back(m);
}
#line 2542 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 450:
#line 1550 "dhcp6_parser.yy" // lalr1.cc:919
    {
    // The pool parameter is required.
    ctx.require("pool", ctx.loc2pos(yystack_[3].location), ctx.loc2pos(yystack_[0].location));
}
#line 2551 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 460:
#line 1568 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 2559 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 461:
#line 1570 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr pool(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("pool", pool);
    ctx.leave();
}
#line 2569 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 462:
#line 1576 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 2577 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 463:
#line 1578 "dhcp6_parser.yy" // lalr1.cc:919
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
#line 2604 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 464:
#line 1601 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 2612 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 465:
#line 1603 "dhcp6_parser.yy" // lalr1.cc:919
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
#line 2641 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 466:
#line 1631 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr l(new ListElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("pd-pools", l);
    ctx.stack_.push_back(l);
    ctx.enter(ctx.PD_POOLS);
}
#line 2652 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 467:
#line 1636 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 2661 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 472:
#line 1651 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->add(m);
    ctx.stack_.push_back(m);
}
#line 2671 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 473:
#line 1655 "dhcp6_parser.yy" // lalr1.cc:919
    {
    // The prefix, prefix len and delegated len parameters are required.
    ctx.require("prefix", ctx.loc2pos(yystack_[3].location), ctx.loc2pos(yystack_[0].location));
    ctx.require("prefix-len", ctx.loc2pos(yystack_[3].location), ctx.loc2pos(yystack_[0].location));
    ctx.require("delegated-len", ctx.loc2pos(yystack_[3].location), ctx.loc2pos(yystack_[0].location));
    ctx.stack_.pop_back();
}
#line 2683 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 474:
#line 1663 "dhcp6_parser.yy" // lalr1.cc:919
    {
    // Parse the pd-pool list entry map
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.push_back(m);
}
#line 2693 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 475:
#line 1667 "dhcp6_parser.yy" // lalr1.cc:919
    {
    // The prefix, prefix len and delegated len parameters are required.
    ctx.require("prefix", ctx.loc2pos(yystack_[3].location), ctx.loc2pos(yystack_[0].location));
    ctx.require("prefix-len", ctx.loc2pos(yystack_[3].location), ctx.loc2pos(yystack_[0].location));
    ctx.require("delegated-len", ctx.loc2pos(yystack_[3].location), ctx.loc2pos(yystack_[0].location));
    // parsing completed
}
#line 2705 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 489:
#line 1692 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 2713 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 490:
#line 1694 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr prf(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("prefix", prf);
    ctx.leave();
}
#line 2723 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 491:
#line 1700 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr prf(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("prefix-len", prf);
}
#line 2732 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 492:
#line 1705 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 2740 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 493:
#line 1707 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr prf(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("excluded-prefix", prf);
    ctx.leave();
}
#line 2750 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 494:
#line 1713 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr prf(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("excluded-prefix-len", prf);
}
#line 2759 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 495:
#line 1718 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr deleg(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("delegated-len", deleg);
}
#line 2768 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 496:
#line 1726 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr l(new ListElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("reservations", l);
    ctx.stack_.push_back(l);
    ctx.enter(ctx.RESERVATIONS);
}
#line 2779 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 497:
#line 1731 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 2788 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 502:
#line 1744 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->add(m);
    ctx.stack_.push_back(m);
}
#line 2798 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 503:
#line 1748 "dhcp6_parser.yy" // lalr1.cc:919
    {
    /// @todo: an identifier parameter is required.
    ctx.stack_.pop_back();
}
#line 2807 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 504:
#line 1753 "dhcp6_parser.yy" // lalr1.cc:919
    {
    // Parse the reservations list entry map
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.push_back(m);
}
#line 2817 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 505:
#line 1757 "dhcp6_parser.yy" // lalr1.cc:919
    {
    /// @todo: an identifier parameter is required.
    // parsing completed
}
#line 2826 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 521:
#line 1784 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr l(new ListElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("ip-addresses", l);
    ctx.stack_.push_back(l);
    ctx.enter(ctx.NO_KEYWORD);
}
#line 2837 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 522:
#line 1789 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 2846 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 523:
#line 1794 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr l(new ListElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("prefixes", l);
    ctx.stack_.push_back(l);
    ctx.enter(ctx.NO_KEYWORD);
}
#line 2857 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 524:
#line 1799 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 2866 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 525:
#line 1804 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 2874 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 526:
#line 1806 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr d(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("duid", d);
    ctx.leave();
}
#line 2884 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 527:
#line 1812 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 2892 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 528:
#line 1814 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr hw(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("hw-address", hw);
    ctx.leave();
}
#line 2902 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 529:
#line 1820 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 2910 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 530:
#line 1822 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr host(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("hostname", host);
    ctx.leave();
}
#line 2920 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 531:
#line 1828 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 2928 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 532:
#line 1830 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr hw(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("flex-id", hw);
    ctx.leave();
}
#line 2938 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 533:
#line 1836 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr c(new ListElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("client-classes", c);
    ctx.stack_.push_back(c);
    ctx.enter(ctx.NO_KEYWORD);
}
#line 2949 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 534:
#line 1841 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 2958 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 535:
#line 1849 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("relay", m);
    ctx.stack_.push_back(m);
    ctx.enter(ctx.RELAY);
}
#line 2969 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 536:
#line 1854 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 2978 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 539:
#line 1863 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 2986 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 540:
#line 1865 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr addr(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("ip-address", addr);
    ctx.leave();
}
#line 2996 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 541:
#line 1874 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr l(new ListElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("client-classes", l);
    ctx.stack_.push_back(l);
    ctx.enter(ctx.CLIENT_CLASSES);
}
#line 3007 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 542:
#line 1879 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 3016 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 545:
#line 1888 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->add(m);
    ctx.stack_.push_back(m);
}
#line 3026 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 546:
#line 1892 "dhcp6_parser.yy" // lalr1.cc:919
    {
    // The name client class parameter is required.
    ctx.require("name", ctx.loc2pos(yystack_[3].location), ctx.loc2pos(yystack_[0].location));
    ctx.stack_.pop_back();
}
#line 3036 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 559:
#line 1917 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 3044 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 560:
#line 1919 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr test(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("test", test);
    ctx.leave();
}
#line 3054 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 561:
#line 1925 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr b(new BoolElement(yystack_[0].value.as < bool > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("only-if-required", b);
}
#line 3063 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 562:
#line 1933 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("server-id", m);
    ctx.stack_.push_back(m);
    ctx.enter(ctx.SERVER_ID);
}
#line 3074 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 563:
#line 1938 "dhcp6_parser.yy" // lalr1.cc:919
    {
    // The type parameter is required.
    ctx.require("type", ctx.loc2pos(yystack_[2].location), ctx.loc2pos(yystack_[0].location));
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 3085 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 575:
#line 1960 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.DUID_TYPE);
}
#line 3093 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 576:
#line 1962 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.back()->set("type", yystack_[0].value.as < ElementPtr > ());
    ctx.leave();
}
#line 3102 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 577:
#line 1967 "dhcp6_parser.yy" // lalr1.cc:919
    { yylhs.value.as < ElementPtr > () = ElementPtr(new StringElement("LLT", ctx.loc2pos(yystack_[0].location))); }
#line 3108 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 578:
#line 1968 "dhcp6_parser.yy" // lalr1.cc:919
    { yylhs.value.as < ElementPtr > () = ElementPtr(new StringElement("EN", ctx.loc2pos(yystack_[0].location))); }
#line 3114 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 579:
#line 1969 "dhcp6_parser.yy" // lalr1.cc:919
    { yylhs.value.as < ElementPtr > () = ElementPtr(new StringElement("LL", ctx.loc2pos(yystack_[0].location))); }
#line 3120 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 580:
#line 1972 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr htype(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("htype", htype);
}
#line 3129 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 581:
#line 1977 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 3137 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 582:
#line 1979 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr id(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("identifier", id);
    ctx.leave();
}
#line 3147 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 583:
#line 1985 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr time(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("time", time);
}
#line 3156 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 584:
#line 1990 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr time(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("enterprise-id", time);
}
#line 3165 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 585:
#line 1997 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr time(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("dhcp4o6-port", time);
}
#line 3174 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 586:
#line 2004 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("control-socket", m);
    ctx.stack_.push_back(m);
    ctx.enter(ctx.CONTROL_SOCKET);
}
#line 3185 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 587:
#line 2009 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 3194 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 595:
#line 2025 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 3202 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 596:
#line 2027 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr stype(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("socket-type", stype);
    ctx.leave();
}
#line 3212 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 597:
#line 2033 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 3220 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 598:
#line 2035 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr name(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("socket-name", name);
    ctx.leave();
}
#line 3230 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 599:
#line 2043 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 3238 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 600:
#line 2045 "dhcp6_parser.yy" // lalr1.cc:919
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
#line 3278 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 601:
#line 2083 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("dhcp-ddns", m);
    ctx.stack_.push_back(m);
    ctx.enter(ctx.DHCP_DDNS);
}
#line 3289 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 602:
#line 2088 "dhcp6_parser.yy" // lalr1.cc:919
    {
    // The enable updates DHCP DDNS parameter is required.
    ctx.require("enable-updates", ctx.loc2pos(yystack_[2].location), ctx.loc2pos(yystack_[0].location));
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 3300 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 603:
#line 2095 "dhcp6_parser.yy" // lalr1.cc:919
    {
    // Parse the dhcp-ddns map
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.push_back(m);
}
#line 3310 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 604:
#line 2099 "dhcp6_parser.yy" // lalr1.cc:919
    {
    // The enable updates DHCP DDNS parameter is required.
    ctx.require("enable-updates", ctx.loc2pos(yystack_[3].location), ctx.loc2pos(yystack_[0].location));
    // parsing completed
}
#line 3320 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 625:
#line 2129 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr b(new BoolElement(yystack_[0].value.as < bool > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("enable-updates", b);
}
#line 3329 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 626:
#line 2134 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 3337 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 627:
#line 2136 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr s(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("qualifying-suffix", s);
    ctx.leave();
}
#line 3347 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 628:
#line 2142 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 3355 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 629:
#line 2144 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr s(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("server-ip", s);
    ctx.leave();
}
#line 3365 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 630:
#line 2150 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr i(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("server-port", i);
}
#line 3374 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 631:
#line 2155 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 3382 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 632:
#line 2157 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr s(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("sender-ip", s);
    ctx.leave();
}
#line 3392 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 633:
#line 2163 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr i(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("sender-port", i);
}
#line 3401 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 634:
#line 2168 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr i(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("max-queue-size", i);
}
#line 3410 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 635:
#line 2173 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NCR_PROTOCOL);
}
#line 3418 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 636:
#line 2175 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.back()->set("ncr-protocol", yystack_[0].value.as < ElementPtr > ());
    ctx.leave();
}
#line 3427 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 637:
#line 2181 "dhcp6_parser.yy" // lalr1.cc:919
    { yylhs.value.as < ElementPtr > () = ElementPtr(new StringElement("UDP", ctx.loc2pos(yystack_[0].location))); }
#line 3433 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 638:
#line 2182 "dhcp6_parser.yy" // lalr1.cc:919
    { yylhs.value.as < ElementPtr > () = ElementPtr(new StringElement("TCP", ctx.loc2pos(yystack_[0].location))); }
#line 3439 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 639:
#line 2185 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NCR_FORMAT);
}
#line 3447 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 640:
#line 2187 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr json(new StringElement("JSON", ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("ncr-format", json);
    ctx.leave();
}
#line 3457 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 641:
#line 2193 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr b(new BoolElement(yystack_[0].value.as < bool > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("override-no-update", b);
}
#line 3466 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 642:
#line 2198 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr b(new BoolElement(yystack_[0].value.as < bool > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("override-client-update", b);
}
#line 3475 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 643:
#line 2203 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.REPLACE_CLIENT_NAME);
}
#line 3483 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 644:
#line 2205 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.back()->set("replace-client-name", yystack_[0].value.as < ElementPtr > ());
    ctx.leave();
}
#line 3492 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 645:
#line 2211 "dhcp6_parser.yy" // lalr1.cc:919
    {
      yylhs.value.as < ElementPtr > () = ElementPtr(new StringElement("when-present", ctx.loc2pos(yystack_[0].location)));
      }
#line 3500 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 646:
#line 2214 "dhcp6_parser.yy" // lalr1.cc:919
    {
      yylhs.value.as < ElementPtr > () = ElementPtr(new StringElement("never", ctx.loc2pos(yystack_[0].location)));
      }
#line 3508 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 647:
#line 2217 "dhcp6_parser.yy" // lalr1.cc:919
    {
      yylhs.value.as < ElementPtr > () = ElementPtr(new StringElement("always", ctx.loc2pos(yystack_[0].location)));
      }
#line 3516 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 648:
#line 2220 "dhcp6_parser.yy" // lalr1.cc:919
    {
      yylhs.value.as < ElementPtr > () = ElementPtr(new StringElement("when-not-present", ctx.loc2pos(yystack_[0].location)));
      }
#line 3524 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 649:
#line 2223 "dhcp6_parser.yy" // lalr1.cc:919
    {
      error(yystack_[0].location, "boolean values for the replace-client-name are "
                "no longer supported");
      }
#line 3533 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 650:
#line 2229 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 3541 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 651:
#line 2231 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr s(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("generated-prefix", s);
    ctx.leave();
}
#line 3551 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 652:
#line 2237 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 3559 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 653:
#line 2239 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr s(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("hostname-char-set", s);
    ctx.leave();
}
#line 3569 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 654:
#line 2245 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 3577 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 655:
#line 2247 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr s(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("hostname-char-replacement", s);
    ctx.leave();
}
#line 3587 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 656:
#line 2255 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 3595 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 657:
#line 2257 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.back()->set("Dhcp4", yystack_[0].value.as < ElementPtr > ());
    ctx.leave();
}
#line 3604 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 658:
#line 2262 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 3612 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 659:
#line 2264 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.back()->set("DhcpDdns", yystack_[0].value.as < ElementPtr > ());
    ctx.leave();
}
#line 3621 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 660:
#line 2269 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 3629 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 661:
#line 2271 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.back()->set("Control-agent", yystack_[0].value.as < ElementPtr > ());
    ctx.leave();
}
#line 3638 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 662:
#line 2278 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr i(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("config-control", i);
    ctx.stack_.push_back(i);
    ctx.enter(ctx.CONFIG_CONTROL);
}
#line 3649 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 663:
#line 2283 "dhcp6_parser.yy" // lalr1.cc:919
    {
    // No config control params are required
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 3659 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 664:
#line 2289 "dhcp6_parser.yy" // lalr1.cc:919
    {
    // Parse the config-control map
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.push_back(m);
}
#line 3669 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 665:
#line 2293 "dhcp6_parser.yy" // lalr1.cc:919
    {
    // No config_control params are required
    // parsing completed
}
#line 3678 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 670:
#line 2308 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr l(new ListElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("config-databases", l);
    ctx.stack_.push_back(l);
    ctx.enter(ctx.CONFIG_DATABASE);
}
#line 3689 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 671:
#line 2313 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 3698 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 672:
#line 2318 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr value(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("config-fetch-wait-time", value);
}
#line 3707 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 673:
#line 2328 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("Logging", m);
    ctx.stack_.push_back(m);
    ctx.enter(ctx.LOGGING);
}
#line 3718 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 674:
#line 2333 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 3727 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 675:
#line 2338 "dhcp6_parser.yy" // lalr1.cc:919
    {
    // Parse the Logging map
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.push_back(m);
}
#line 3737 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 676:
#line 2342 "dhcp6_parser.yy" // lalr1.cc:919
    {
    // parsing completed
}
#line 3745 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 680:
#line 2358 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr l(new ListElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("loggers", l);
    ctx.stack_.push_back(l);
    ctx.enter(ctx.LOGGERS);
}
#line 3756 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 681:
#line 2363 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 3765 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 684:
#line 2375 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr l(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->add(l);
    ctx.stack_.push_back(l);
}
#line 3775 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 685:
#line 2379 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.pop_back();
}
#line 3783 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 695:
#line 2396 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr dl(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("debuglevel", dl);
}
#line 3792 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 696:
#line 2401 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 3800 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 697:
#line 2403 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr sev(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("severity", sev);
    ctx.leave();
}
#line 3810 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 698:
#line 2409 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr l(new ListElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("output_options", l);
    ctx.stack_.push_back(l);
    ctx.enter(ctx.OUTPUT_OPTIONS);
}
#line 3821 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 699:
#line 2414 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 3830 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 702:
#line 2423 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->add(m);
    ctx.stack_.push_back(m);
}
#line 3840 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 703:
#line 2427 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.pop_back();
}
#line 3848 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 710:
#line 2441 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 3856 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 711:
#line 2443 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr sev(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("output", sev);
    ctx.leave();
}
#line 3866 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 712:
#line 2449 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr flush(new BoolElement(yystack_[0].value.as < bool > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("flush", flush);
}
#line 3875 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 713:
#line 2454 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr maxsize(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("maxsize", maxsize);
}
#line 3884 "dhcp6_parser.cc" // lalr1.cc:919
    break;

  case 714:
#line 2459 "dhcp6_parser.yy" // lalr1.cc:919
    {
    ElementPtr maxver(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("maxver", maxver);
}
#line 3893 "dhcp6_parser.cc" // lalr1.cc:919
    break;


#line 3897 "dhcp6_parser.cc" // lalr1.cc:919
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


  const short Dhcp6Parser::yypact_ninf_ = -882;

  const signed char Dhcp6Parser::yytable_ninf_ = -1;

  const short
  Dhcp6Parser::yypact_[] =
  {
     489,  -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,
    -882,  -882,  -882,  -882,  -882,  -882,    65,    40,    33,    69,
     102,   125,   172,   199,   201,   203,   210,   212,   223,   242,
     243,   253,  -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,
    -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,
    -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,
    -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,
    -882,  -882,    40,   -83,    28,    68,    26,   246,    92,   205,
     208,   161,    70,   193,   -48,   439,   109,    76,  -882,   267,
     274,   281,   299,   306,  -882,  -882,  -882,  -882,  -882,   315,
    -882,    54,  -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,
    -882,  -882,  -882,  -882,   330,   338,   340,   363,   367,   373,
     377,   383,   389,   393,   399,   405,   415,   419,  -882,  -882,
    -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,
    -882,  -882,  -882,  -882,  -882,   434,  -882,  -882,  -882,  -882,
      90,  -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,
    -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,
    -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,
    -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,
    -882,  -882,  -882,  -882,   436,  -882,    93,  -882,  -882,  -882,
    -882,  -882,  -882,  -882,  -882,  -882,  -882,   440,   442,  -882,
    -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,
    -882,  -882,  -882,  -882,  -882,  -882,   133,  -882,  -882,  -882,
    -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,
    -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,   137,  -882,
    -882,  -882,  -882,  -882,   443,  -882,   445,   446,  -882,  -882,
    -882,  -882,  -882,  -882,   147,  -882,  -882,  -882,  -882,  -882,
    -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,
    -882,  -882,   325,   362,  -882,  -882,  -882,  -882,  -882,  -882,
    -882,  -882,   448,  -882,  -882,   447,  -882,  -882,  -882,   450,
    -882,  -882,   458,   455,  -882,  -882,  -882,  -882,  -882,  -882,
    -882,  -882,  -882,  -882,  -882,  -882,  -882,   464,   465,  -882,
    -882,  -882,  -882,   462,   469,  -882,  -882,  -882,  -882,  -882,
    -882,  -882,  -882,  -882,  -882,  -882,  -882,   204,  -882,  -882,
    -882,   470,  -882,  -882,   480,  -882,   481,   482,  -882,  -882,
     484,   485,  -882,  -882,  -882,  -882,  -882,  -882,  -882,   213,
    -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,
    -882,  -882,  -882,  -882,  -882,  -882,  -882,   300,  -882,  -882,
    -882,   487,   314,  -882,  -882,  -882,  -882,    40,    40,  -882,
     276,   488,   503,   504,   506,   509,  -882,    28,  -882,   510,
     511,   512,   515,   516,   517,   289,   309,   339,   341,   343,
     344,   347,   350,   355,   356,   336,   357,   358,   365,   520,
     522,   533,   534,   537,   543,   546,   548,   549,   550,   551,
     552,   553,   554,   556,   557,   558,   379,   561,   562,   563,
      68,  -882,   564,   384,    26,  -882,   565,   568,   582,   584,
     585,   406,   409,   587,   588,   594,   246,  -882,   596,    92,
    -882,   597,   418,   599,   420,   421,   205,  -882,   602,   603,
     604,   605,   606,   607,   610,  -882,   208,  -882,   612,   613,
     435,   614,   616,   619,   438,  -882,    70,   621,   441,   444,
    -882,   193,   622,   624,    87,  -882,   449,   625,   627,   452,
     628,   453,   454,   635,   636,   457,   459,   637,   638,   640,
     644,   439,  -882,   646,   109,  -882,   647,   468,    76,  -882,
    -882,  -882,   649,   648,   665,    40,    40,    40,  -882,   471,
     666,   667,   668,   669,   672,  -882,  -882,  -882,  -882,  -882,
    -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,   495,
     674,   675,   676,   677,   499,    79,   678,   680,   681,   682,
     683,   684,   686,   687,   688,   689,  -882,   690,   677,   691,
    -882,   694,  -882,  -882,   695,   696,   505,   519,   521,  -882,
    -882,   694,   523,   698,  -882,   524,  -882,   525,  -882,   526,
    -882,  -882,  -882,   694,   694,   694,   527,   528,   529,   530,
    -882,   531,   532,  -882,   535,   536,   538,  -882,  -882,   539,
    -882,  -882,  -882,   540,    40,  -882,  -882,   541,   542,  -882,
     544,  -882,  -882,    43,   545,  -882,  -882,   -80,   547,   555,
     559,  -882,   711,  -882,   712,  -882,  -882,    40,    68,   109,
    -882,  -882,  -882,  -882,    76,    26,   206,   206,   713,  -882,
     719,   721,   722,  -882,  -882,  -882,  -882,  -882,  -882,  -882,
    -882,   724,   -54,    40,   124,   598,   725,   726,   727,    58,
      78,   294,  -882,   439,  -882,  -882,   728,   729,  -882,  -882,
    -882,  -882,  -882,   -63,  -882,  -882,  -882,  -882,  -882,  -882,
    -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,
    -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,
    -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,   730,   713,
    -882,   329,   332,   333,   342,  -882,  -882,  -882,  -882,   699,
     735,   736,   737,   739,  -882,   740,   741,  -882,  -882,  -882,
     742,   743,   744,  -882,   345,  -882,  -882,  -882,  -882,  -882,
    -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,
    -882,  -882,  -882,  -882,  -882,   352,  -882,   745,   746,  -882,
    -882,   747,   749,  -882,  -882,   748,   752,  -882,  -882,   750,
     754,  -882,  -882,   753,   755,  -882,  -882,  -882,    38,  -882,
    -882,  -882,   756,  -882,  -882,  -882,    71,  -882,  -882,  -882,
    -882,   353,  -882,  -882,  -882,   104,  -882,  -882,   757,   758,
    -882,  -882,   759,   761,  -882,   762,   763,   764,   765,   766,
     767,   354,  -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,
    -882,   768,   769,   770,  -882,  -882,  -882,  -882,   360,  -882,
    -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,
     361,  -882,  -882,  -882,   372,   567,  -882,   771,   772,  -882,
    -882,   773,   775,  -882,  -882,  -882,   774,  -882,  -882,   148,
    -882,   777,  -882,  -882,  -882,  -882,   776,   780,   781,   782,
     576,   590,   608,   595,   609,   783,   611,   615,   784,   785,
     786,   617,   618,   620,   206,  -882,  -882,   206,  -882,   713,
     246,  -882,   719,    70,  -882,   721,   193,  -882,   722,   451,
    -882,   724,   -54,  -882,  -882,   124,  -882,   787,   598,  -882,
     260,   725,  -882,   208,  -882,   726,   -48,  -882,   727,   623,
     626,   629,   630,   631,   632,    58,  -882,   790,   792,   633,
     634,   639,    78,  -882,   793,   794,   294,  -882,  -882,  -882,
     797,   801,    92,  -882,   728,   205,  -882,   729,   796,  -882,
     191,   730,  -882,  -882,   456,   641,   642,   645,  -882,  -882,
    -882,  -882,  -882,   651,  -882,  -882,   658,   660,   661,  -882,
    -882,  -882,  -882,   375,  -882,   376,  -882,   800,  -882,   803,
    -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,
    -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,
    -882,  -882,  -882,   387,  -882,  -882,  -882,  -882,  -882,  -882,
    -882,  -882,   670,  -882,  -882,   805,  -882,  -882,  -882,  -882,
    -882,   804,   802,  -882,  -882,  -882,  -882,  -882,   811,  -882,
     396,  -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,   141,
     673,  -882,  -882,  -882,  -882,   692,   704,  -882,  -882,   708,
     397,  -882,   423,  -882,   709,  -882,   816,  -882,  -882,  -882,
    -882,  -882,   431,  -882,  -882,  -882,  -882,  -882,  -882,  -882,
    -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,
    -882,  -882,  -882,  -882,   451,  -882,  -882,   817,   707,  -882,
     260,  -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,
    -882,  -882,  -882,  -882,   818,   643,   827,   191,  -882,  -882,
     717,  -882,  -882,   854,  -882,   720,  -882,  -882,   853,  -882,
    -882,   177,  -882,    23,   853,  -882,  -882,   857,   865,   866,
     433,  -882,  -882,  -882,  -882,  -882,  -882,   869,   733,   693,
     751,    23,  -882,   723,  -882,  -882,  -882,  -882,  -882
  };

  const unsigned short
  Dhcp6Parser::yydefact_[] =
  {
       0,     2,     4,     6,     8,    10,    12,    14,    16,    18,
      20,    22,    24,    26,    28,    30,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     1,    47,    40,    36,    35,    32,    33,    34,
      39,     3,    37,    38,    60,     5,    72,     7,   138,     9,
     285,    11,   449,    13,   474,    15,   504,    17,   374,    19,
     382,    21,   419,    23,   250,    25,   603,    27,   675,    29,
     664,    31,    49,    43,     0,     0,     0,     0,     0,     0,
     506,     0,   384,   421,     0,     0,     0,     0,    51,     0,
      50,     0,     0,    44,    70,   673,   656,   658,   660,     0,
      69,     0,    62,    64,    66,    67,    68,    65,   118,   662,
     136,   150,   152,   154,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   134,   277,
     372,   411,   462,   464,   328,   336,   223,   240,   231,   216,
     541,   496,   242,   261,   562,     0,   586,   599,   601,   117,
       0,    74,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,   114,   115,   116,    87,   112,    90,    91,
      92,    93,   109,    94,    96,    95,   100,   101,    88,   113,
      89,    98,    99,   107,   108,   110,    97,   102,   103,   104,
     105,   106,   111,   147,     0,   146,     0,   140,   142,   143,
     144,   145,   441,   466,   318,   320,   322,     0,     0,   326,
     324,   535,   317,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   314,   315,   316,     0,   287,   302,   303,
     304,   307,   308,   310,   305,   306,   299,   300,   312,   313,
     301,   309,   311,   460,   459,   455,   456,   454,     0,   451,
     453,   457,   458,   489,     0,   492,     0,     0,   488,   482,
     483,   481,   486,   487,     0,   476,   478,   479,   484,   485,
     480,   533,   521,   523,   525,   527,   529,   531,   520,   517,
     518,   519,     0,   507,   508,   512,   513,   510,   514,   515,
     516,   511,     0,   401,   197,     0,   405,   403,   408,     0,
     397,   398,     0,   385,   386,   388,   400,   389,   390,   391,
     407,   392,   393,   394,   395,   396,   435,     0,     0,   433,
     434,   437,   438,     0,   422,   423,   425,   426,   427,   428,
     429,   430,   431,   432,   257,   259,   254,     0,   252,   255,
     256,     0,   626,   628,     0,   631,     0,     0,   635,   639,
       0,     0,   643,   650,   652,   654,   624,   622,   623,     0,
     605,   607,   608,   609,   610,   611,   612,   613,   614,   615,
     616,   617,   618,   619,   620,   621,   680,     0,   677,   679,
     670,     0,     0,   666,   668,   669,    48,     0,     0,    41,
       0,     0,     0,     0,     0,     0,    59,     0,    61,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    73,     0,     0,     0,   139,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   286,     0,     0,
     450,     0,     0,     0,     0,     0,     0,   475,     0,     0,
       0,     0,     0,     0,     0,   505,     0,   375,     0,     0,
       0,     0,     0,     0,     0,   383,     0,     0,     0,     0,
     420,     0,     0,     0,     0,   251,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   604,     0,     0,   676,     0,     0,     0,   665,
      52,    45,     0,     0,     0,     0,     0,     0,    63,     0,
       0,     0,     0,     0,     0,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   585,     0,     0,     0,
      75,     0,   149,   141,     0,     0,     0,     0,     0,   334,
     335,     0,     0,     0,   288,     0,   452,     0,   491,     0,
     494,   495,   477,     0,     0,     0,     0,     0,     0,     0,
     509,     0,     0,   399,     0,     0,     0,   410,   387,     0,
     439,   440,   424,     0,     0,   253,   625,     0,     0,   630,
       0,   633,   634,     0,     0,   641,   642,     0,     0,     0,
       0,   606,     0,   678,     0,   672,   667,     0,     0,     0,
     657,   659,   661,   119,     0,     0,     0,     0,   156,   135,
     279,   376,   413,    42,   463,   465,   330,   331,   332,   333,
     329,   338,     0,    49,     0,     0,     0,   498,   244,     0,
       0,     0,   600,     0,    53,   148,   443,   468,   319,   321,
     323,   327,   325,     0,   461,   490,   493,   534,   522,   524,
     526,   528,   530,   532,   402,   198,   406,   404,   409,   436,
     258,   260,   627,   629,   632,   637,   638,   636,   640,   645,
     646,   647,   648,   649,   644,   651,   653,   655,     0,   156,
      46,     0,     0,     0,     0,   184,   190,   192,   194,     0,
       0,     0,     0,     0,   207,     0,     0,   210,   212,   214,
       0,     0,     0,   183,     0,   162,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   176,   177,   178,   179,
     174,   175,   180,   181,   182,     0,   160,     0,   157,   158,
     283,     0,   280,   281,   380,     0,   377,   378,   417,     0,
     414,   415,   342,     0,   339,   340,   229,   230,     0,   225,
     227,   228,     0,   238,   239,   235,     0,   233,   236,   237,
     221,     0,   218,   220,   545,     0,   543,   502,     0,   499,
     500,   248,     0,   245,   246,     0,     0,     0,     0,     0,
       0,     0,   263,   265,   266,   267,   268,   269,   270,   575,
     581,     0,     0,     0,   574,   571,   572,   573,     0,   564,
     566,   569,   567,   568,   570,   595,   597,   594,   592,   593,
       0,   588,   590,   591,     0,    55,   447,     0,   444,   445,
     472,     0,   469,   470,   539,   538,     0,   537,   684,     0,
     682,     0,    71,   674,   663,   137,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   151,   153,     0,   155,     0,
       0,   278,     0,   384,   373,     0,   421,   412,     0,     0,
     337,     0,     0,   224,   241,     0,   232,     0,     0,   217,
     547,     0,   542,   506,   497,     0,     0,   243,     0,     0,
       0,     0,     0,     0,     0,     0,   262,     0,     0,     0,
       0,     0,     0,   563,     0,     0,     0,   587,   602,    57,
       0,    56,     0,   442,     0,     0,   467,     0,     0,   536,
       0,     0,   681,   671,     0,     0,     0,     0,   196,   199,
     200,   201,   202,     0,   209,   203,     0,     0,     0,   204,
     205,   206,   163,     0,   159,     0,   282,     0,   379,     0,
     416,   371,   357,   358,   359,   360,   362,   363,   364,   365,
     350,   351,   368,   369,   370,   346,   347,   348,   349,   355,
     356,   354,   361,     0,   344,   352,   366,   367,   353,   341,
     226,   234,     0,   219,   559,     0,   557,   558,   554,   555,
     556,     0,   548,   549,   551,   552,   553,   544,     0,   501,
       0,   247,   271,   272,   273,   274,   275,   276,   264,     0,
       0,   580,   583,   584,   565,     0,     0,   589,    54,     0,
       0,   446,     0,   471,     0,   698,     0,   696,   694,   688,
     692,   693,     0,   686,   690,   691,   689,   683,   186,   187,
     188,   189,   185,   191,   193,   195,   208,   211,   213,   215,
     161,   284,   381,   418,     0,   343,   222,     0,     0,   546,
       0,   503,   249,   577,   578,   579,   576,   582,   596,   598,
      58,   448,   473,   540,     0,     0,     0,     0,   685,   345,
       0,   561,   550,     0,   695,     0,   687,   560,     0,   697,
     702,     0,   700,     0,     0,   699,   710,     0,     0,     0,
       0,   704,   706,   707,   708,   709,   701,     0,     0,     0,
       0,     0,   703,     0,   712,   713,   714,   705,   711
  };

  const short
  Dhcp6Parser::yypgoto_[] =
  {
    -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,
    -882,  -882,  -882,  -882,  -882,  -882,  -882,    19,  -882,  -493,
    -882,   327,  -882,  -882,  -882,  -882,   248,  -882,  -451,  -882,
    -882,  -882,   -74,  -882,  -882,  -882,   560,  -882,  -882,  -882,
    -882,   283,   483,  -882,  -882,   -62,   -46,   -45,   -43,   -42,
     -29,   -26,     1,     4,     5,     7,     8,    15,  -882,  -882,
    -882,  -882,  -882,  -882,  -882,   282,   486,  -882,  -882,  -882,
    -882,  -882,  -882,  -882,  -882,  -882,   207,  -882,    35,  -882,
    -621,    44,  -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,
    -882,  -882,   -70,  -882,  -654,  -882,  -882,  -882,  -882,  -882,
    -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,
    -882,  -882,  -882,  -882,    14,  -882,  -882,  -882,  -882,  -882,
      25,  -641,  -882,  -882,  -882,  -882,    27,  -882,  -882,  -882,
    -882,  -882,  -882,  -882,  -882,    11,  -882,  -882,  -882,    17,
     460,  -882,  -882,  -882,  -882,  -882,  -882,  -882,    10,  -882,
    -882,  -882,  -882,  -882,  -882,  -881,  -882,  -882,  -882,    45,
    -882,  -882,  -882,    46,   492,  -882,  -882,  -880,  -882,  -879,
    -882,    16,  -882,    24,  -882,    20,  -882,  -882,  -882,  -876,
    -882,  -882,  -882,  -882,    29,  -882,  -882,  -145,   870,  -882,
    -882,  -882,  -882,  -882,    47,  -882,  -882,  -882,    50,  -882,
     472,  -882,   -76,  -882,  -882,  -882,  -882,  -882,   -69,  -882,
    -882,  -882,  -882,  -882,   -11,  -882,  -882,  -882,    42,  -882,
    -882,  -882,    49,  -882,   473,  -882,  -882,  -882,  -882,  -882,
    -882,  -882,  -882,  -882,  -882,  -882,     2,  -882,  -882,  -882,
       9,   500,  -882,  -882,   -58,  -882,   -24,  -882,  -882,  -882,
    -882,  -882,     3,  -882,  -882,  -882,    12,   496,  -882,  -882,
    -882,  -882,  -882,  -882,  -882,   -60,  -882,  -882,  -882,    41,
    -882,  -882,  -882,    51,  -882,   493,   280,  -882,  -882,  -882,
    -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,
    -872,  -882,  -882,  -882,  -882,  -882,  -882,  -882,    52,  -882,
    -882,  -882,  -135,  -882,  -882,  -882,  -882,  -882,  -882,  -882,
      30,  -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,
    -882,  -882,  -882,    31,  -882,  -882,  -882,  -882,  -882,  -882,
    -882,  -882,  -882,  -882,   297,   467,  -882,  -882,  -882,  -882,
    -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,
    -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,
    -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,
    -882,  -882,   331,   463,  -882,  -882,  -882,  -882,  -882,  -882,
    -882,   346,   466,  -882,  -882,  -882,    21,  -882,  -882,  -134,
    -882,  -882,  -882,  -882,  -882,  -882,  -150,  -882,  -882,  -165,
    -882,  -882,  -882,  -882,  -882
  };

  const short
  Dhcp6Parser::yydefgoto_[] =
  {
      -1,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    88,    41,    42,
      73,   654,    92,    93,    43,    72,    89,    90,   675,   855,
     950,   951,   743,    45,    74,   101,   102,   103,   391,    47,
      75,   150,   151,   152,   399,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     419,   168,   401,    49,    76,   196,   197,   198,   442,   199,
     169,   402,   170,   403,   171,   404,   767,   768,   769,   897,
     744,   745,   746,   876,  1082,   747,   877,   748,   878,   749,
     879,   750,   751,   479,   752,   753,   754,   755,   756,   757,
     758,   759,   760,   885,   761,   762,   888,   763,   889,   764,
     890,   172,   430,   801,   802,   803,   917,   173,   427,   788,
     789,   790,   791,   174,   429,   796,   797,   798,   799,   175,
     428,   176,   433,   812,   813,   814,   926,    65,    84,   337,
     338,   339,   492,   340,   493,   177,   434,   821,   822,   823,
     824,   825,   826,   827,   828,   178,   420,   771,   772,   773,
     900,    51,    77,   226,   227,   228,   448,   229,   449,   230,
     450,   231,   454,   232,   453,   179,   425,   660,   234,   235,
     180,   426,   783,   784,   785,   909,  1013,  1014,   181,   421,
      59,    81,   775,   776,   777,   903,    61,    82,   302,   303,
     304,   305,   306,   307,   308,   478,   309,   482,   310,   481,
     311,   312,   483,   313,   182,   422,   779,   780,   781,   906,
      63,    83,   323,   324,   325,   326,   327,   487,   328,   329,
     330,   331,   237,   446,   857,   858,   859,   952,    53,    78,
     248,   249,   250,   458,   183,   423,   184,   424,   240,   447,
     861,   862,   863,   955,    55,    79,   264,   265,   266,   461,
     267,   268,   463,   269,   270,   185,   432,   808,   809,   810,
     923,    57,    80,   282,   283,   284,   285,   469,   286,   470,
     287,   471,   288,   472,   289,   473,   290,   474,   291,   468,
     242,   455,   866,   867,   958,   186,   431,   805,   806,   920,
    1031,  1032,  1033,  1034,  1035,  1097,  1036,   187,   435,   838,
     839,   840,   937,  1106,   841,   842,   938,   843,   844,   188,
     189,   437,   850,   851,   852,   944,   853,   945,   190,   438,
     191,   439,    67,    85,   359,   360,   361,   362,   497,   363,
     498,   364,   365,   500,   366,   367,   368,   503,   707,   369,
     504,   370,   371,   372,   507,   714,   373,   508,   374,   509,
     375,   510,   104,   393,   105,   394,   106,   395,   192,   400,
      71,    87,   382,   383,   384,   516,   385,   107,   392,    69,
      86,   377,   378,   379,   513,   869,   870,   960,  1072,  1073,
    1074,  1075,  1116,  1076,  1114,  1131,  1132,  1133,  1140,  1141,
    1142,  1147,  1143,  1144,  1145
  };

  const unsigned short
  Dhcp6Parser::yytable_[] =
  {
     100,   149,   195,   212,   244,   258,   278,   321,   300,   319,
     336,   356,   301,   320,   322,   213,   835,   241,   200,   238,
     251,   262,   280,   795,   314,   332,   765,   357,  1006,  1007,
    1008,   214,   215,  1012,   216,   217,    40,  1018,    94,   272,
      44,   912,   193,   194,   913,    33,   864,    34,   218,    35,
     786,   219,   201,   239,   252,   263,   281,   397,   315,   333,
     653,   358,   398,   334,   335,    32,   236,   247,   261,   279,
     709,   710,   711,   712,   915,   653,    46,   916,   220,   108,
     109,   221,   222,   110,   223,   224,   111,   112,   113,   380,
     381,   293,   225,   440,   245,   259,   444,   233,   441,   829,
      91,   445,   246,   260,   132,   133,   713,   921,   730,    48,
     922,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   787,
     681,   294,    50,   295,   296,    99,   456,   297,   298,   299,
     459,   457,   687,   688,   689,   460,   132,   133,   132,   133,
     466,   961,   131,   134,   962,   467,   132,   133,   135,   136,
     137,   138,   139,   243,   140,   656,   657,   658,   659,   141,
     132,   133,   815,   816,   817,   818,   819,   820,   142,    52,
    1134,   143,  1136,  1135,    95,  1137,  1138,  1139,   144,   209,
     705,   706,   210,    96,    97,    98,   145,   146,   334,   335,
     147,   148,   830,   831,   832,   833,    54,   494,    56,    99,
      58,    99,   495,  1006,  1007,  1008,   511,    60,  1012,    62,
     130,   512,  1018,    36,    37,    38,    39,   725,   786,   793,
      64,   794,   726,   727,   728,   729,   730,   731,   732,   733,
     734,   735,   736,   737,   738,   739,   740,   741,   742,    66,
      68,    99,   294,    99,   294,   316,   295,   296,   317,   318,
      70,    99,  1103,  1104,  1105,   131,   376,   294,   131,   132,
     133,   132,   133,   386,   795,    99,   983,   387,   253,   254,
     255,   256,   257,   132,   133,   388,   132,   133,   835,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   209,   514,   271,   210,   131,   389,   515,   390,
     272,   273,   274,   275,   276,   277,   202,   518,   203,   396,
     131,   294,   519,   100,   132,   133,   204,   205,   206,   207,
     208,   134,   440,   475,   405,   514,   518,   872,   132,   133,
     873,   874,   406,   209,   407,   444,   210,   141,   894,  1065,
     875,  1066,  1067,   895,   211,   894,   918,   935,  1024,  1025,
     896,   919,   936,   942,   946,   476,   149,   408,   943,   947,
     195,   409,   132,   133,    99,   511,    99,   410,   894,   456,
     948,   411,   212,  1090,  1091,   244,   200,   412,    99,    99,
    1094,    99,   258,   413,   213,  1095,   241,   414,   238,   494,
     459,   251,   278,   415,  1102,  1111,   520,   521,   262,   416,
     214,   215,   300,   216,   217,   321,   301,   319,   280,   417,
     201,   320,   322,   418,   845,   846,   466,   218,   314,    99,
     219,  1112,   239,   332,  1117,   252,  1151,   356,   436,  1118,
     443,  1152,   263,    99,   451,   236,   452,   462,   247,   464,
     465,   480,   281,   357,   484,   261,   477,   220,   486,   522,
     221,   222,   315,   223,   224,   279,   485,   333,   488,   489,
     490,   225,   491,   535,   496,   245,   233,    99,  1078,  1079,
    1080,  1081,   259,   246,   499,   501,   502,   358,   505,   506,
     260,   517,   523,   536,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   524,   525,   129,
     526,   131,   294,   527,   529,   530,   531,   132,   133,   532,
     533,   534,   545,   537,   549,   538,   550,   539,   540,   132,
     133,   541,   205,   206,   542,   208,   134,   551,   552,   543,
     544,   553,   546,   547,   640,   641,   642,   554,   209,   548,
     555,   210,   556,   557,   558,   559,   560,   561,   562,   211,
     563,   564,   565,   566,   149,   567,   568,   569,   571,   574,
     572,   195,   575,   341,   342,   343,   344,   345,   346,   347,
     348,   349,   350,   351,   352,   353,   576,   200,   577,   578,
     579,   581,   582,   354,   355,   580,   834,   847,   583,   356,
     585,   587,   588,   589,   590,   591,   593,   594,   595,   596,
     597,   598,   836,   848,   599,   357,   601,   602,   604,   603,
     605,   201,    99,   606,   607,   609,   613,   610,   614,   617,
     611,   618,   620,   701,    99,   616,   619,   621,   622,   623,
     624,   627,   628,   625,   629,   626,   837,   849,   630,   358,
     632,   634,   635,   637,   643,   638,   720,     1,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,   639,   644,   645,   646,   647,   648,   649,   650,
     651,   652,   655,   661,    34,   662,   663,   664,   678,   666,
     665,   667,   668,   800,   708,   669,   670,   671,   673,   674,
     676,   677,   679,   880,   680,   683,   682,   684,   685,   686,
     690,   691,   692,   693,   694,   695,   718,   719,   696,   697,
     766,   698,   699,   700,   702,   703,   770,   704,   774,   778,
     715,   782,   804,   807,   811,   856,   860,   868,   716,   881,
     882,   883,   717,   884,   886,   887,   891,   892,   893,   899,
     949,   898,   902,   901,   904,   905,   907,   908,   911,   910,
     968,   925,   914,   924,   928,   927,   929,   930,   931,   932,
     933,   934,   939,   940,   941,   954,   969,   953,   957,   956,
     964,   971,   959,   963,   965,   966,   967,   973,   976,   977,
     978,  1022,   970,   972,  1049,   974,  1050,  1055,  1056,   975,
    1064,   979,   980,  1058,  1059,  1100,   981,  1042,  1092,  1098,
    1043,  1093,  1099,  1044,  1045,  1046,  1047,  1051,  1052,  1101,
    1115,  1120,  1123,  1053,  1083,  1084,   212,  1124,  1085,   300,
     321,  1125,   319,   301,  1086,   991,   320,   322,   213,  1005,
     241,  1087,   238,  1088,  1089,   314,  1026,   992,   332,   278,
    1027,  1016,   336,  1096,   214,   215,  1107,   216,   217,  1128,
    1130,  1148,  1029,   993,   994,   280,   995,   996,   834,  1149,
    1150,   218,   847,  1153,   219,  1108,   239,  1155,   244,   315,
     997,   258,   333,   998,   836,  1017,  1068,  1109,   848,   236,
    1069,  1110,  1113,  1121,   251,   672,  1030,   262,  1015,   281,
    1127,   220,  1070,  1129,   221,   222,  1158,   223,   224,  1028,
     999,   792,   279,  1000,  1001,   225,  1002,  1003,   837,  1154,
     233,   721,   849,   570,  1004,  1009,   871,   724,   252,  1011,
     573,   263,  1023,  1010,   984,  1156,  1071,  1020,   982,  1041,
    1019,   247,  1021,  1040,   261,  1048,   985,   986,   584,  1119,
     990,   292,   988,   987,   615,   989,  1061,   528,   608,   586,
    1063,  1060,   592,   865,   612,  1122,  1039,  1062,   245,   600,
     854,   259,  1054,  1037,  1038,   723,   246,  1057,   631,   260,
     633,   636,  1077,  1126,  1146,   722,  1157,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     991,     0,     0,     0,  1005,     0,  1026,     0,     0,     0,
    1027,     0,   992,     0,     0,     0,  1016,     0,     0,     0,
       0,     0,  1029,  1068,     0,     0,     0,  1069,   993,   994,
       0,   995,   996,     0,     0,     0,     0,     0,     0,  1070,
       0,     0,     0,     0,     0,   997,     0,     0,   998,     0,
    1017,     0,     0,     0,     0,     0,  1030,     0,     0,     0,
       0,     0,     0,  1015,     0,     0,     0,     0,     0,  1028,
       0,     0,     0,  1071,     0,   999,     0,     0,  1000,  1001,
       0,  1002,  1003,     0,     0,     0,     0,     0,     0,  1004,
    1009,     0,     0,     0,  1011,     0,     0,     0,  1010
  };

  const short
  Dhcp6Parser::yycheck_[] =
  {
      74,    75,    76,    77,    78,    79,    80,    83,    82,    83,
      84,    85,    82,    83,    83,    77,   670,    77,    76,    77,
      78,    79,    80,   664,    82,    83,   647,    85,   909,   909,
     909,    77,    77,   909,    77,    77,    17,   909,    10,   102,
       7,     3,    16,    17,     6,     5,   109,     7,    77,     9,
     104,    77,    76,    77,    78,    79,    80,     3,    82,    83,
     553,    85,     8,   111,   112,     0,    77,    78,    79,    80,
     150,   151,   152,   153,     3,   568,     7,     6,    77,    11,
      12,    77,    77,    15,    77,    77,    18,    19,    20,    13,
      14,    21,    77,     3,    78,    79,     3,    77,     8,    21,
     183,     8,    78,    79,    78,    79,   186,     3,    30,     7,
       6,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,   183,
     581,    61,     7,    63,    64,   183,     3,    67,    68,    69,
       3,     8,   593,   594,   595,     8,    78,    79,    78,    79,
       3,     3,    60,    85,     6,     8,    78,    79,    90,    91,
      92,    93,    94,    71,    96,    86,    87,    88,    89,   101,
      78,    79,   114,   115,   116,   117,   118,   119,   110,     7,
       3,   113,   159,     6,   156,   162,   163,   164,   120,    97,
     147,   148,   100,   165,   166,   167,   128,   129,   111,   112,
     132,   133,   124,   125,   126,   127,     7,     3,     7,   183,
       7,   183,     8,  1094,  1094,  1094,     3,     7,  1094,     7,
      59,     8,  1094,   183,   184,   185,   186,    21,   104,   105,
       7,   107,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,     7,
       7,   183,    61,   183,    61,    62,    63,    64,    65,    66,
       7,   183,   121,   122,   123,    60,   157,    61,    60,    78,
      79,    78,    79,     6,   915,   183,   897,     3,    73,    74,
      75,    76,    77,    78,    79,     4,    78,    79,   942,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    97,     3,    96,   100,    60,     8,     8,     3,
     102,   103,   104,   105,   106,   107,    70,     3,    72,     4,
      60,    61,     8,   397,    78,    79,    80,    81,    82,    83,
      84,    85,     3,     8,     4,     3,     3,     8,    78,    79,
       8,     8,     4,    97,     4,     3,   100,   101,     3,   158,
       8,   160,   161,     8,   108,     3,     3,     3,    98,    99,
       8,     8,     8,     3,     3,     3,   440,     4,     8,     8,
     444,     4,    78,    79,   183,     3,   183,     4,     3,     3,
       8,     4,   456,     8,     8,   459,   444,     4,   183,   183,
       3,   183,   466,     4,   456,     8,   456,     4,   456,     3,
       3,   459,   476,     4,     8,     8,   387,   388,   466,     4,
     456,   456,   486,   456,   456,   491,   486,   491,   476,     4,
     444,   491,   491,     4,   130,   131,     3,   456,   486,   183,
     456,     8,   456,   491,     3,   459,     3,   511,     4,     8,
       4,     8,   466,   183,     4,   456,     4,     4,   459,     4,
       4,     4,   476,   511,     4,   466,     8,   456,     3,   183,
     456,   456,   486,   456,   456,   476,     8,   491,     4,     4,
       8,   456,     3,   184,     4,   459,   456,   183,    22,    23,
      24,    25,   466,   459,     4,     4,     4,   511,     4,     4,
     466,     4,     4,   184,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,     4,     4,    58,
       4,    60,    61,     4,     4,     4,     4,    78,    79,     4,
       4,     4,   186,   184,     4,   184,     4,   184,   184,    78,
      79,   184,    81,    82,   184,    84,    85,     4,     4,   184,
     184,     4,   185,   185,   525,   526,   527,     4,    97,   184,
       4,   100,     4,     4,     4,     4,     4,     4,     4,   108,
       4,     4,     4,   184,   638,     4,     4,     4,     4,     4,
     186,   645,     4,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,     4,   645,     4,     4,
     184,     4,     4,   154,   155,   186,   670,   671,     4,   673,
       4,     4,   184,     4,   184,   184,     4,     4,     4,     4,
       4,     4,   670,   671,     4,   673,     4,     4,     4,   184,
       4,   645,   183,     4,   186,     4,     4,   186,     4,     4,
     186,     4,     4,   614,   183,   186,   184,   184,   184,     4,
       4,     4,     4,   186,     4,   186,   670,   671,     4,   673,
       4,     4,   184,     4,   183,     7,   637,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,     7,     7,     7,     7,     7,     5,   183,     5,
       5,     5,   183,     5,     7,     5,     5,     5,   183,     5,
       7,     5,     5,    95,   149,     7,     7,     7,     7,     5,
       5,     5,   183,     4,   183,     7,   183,   183,   183,   183,
     183,   183,   183,   183,   183,   183,     5,     5,   183,   183,
       7,   183,   183,   183,   183,   183,     7,   183,     7,     7,
     183,     7,     7,     7,     7,     7,     7,     7,   183,     4,
       4,     4,   183,     4,     4,     4,     4,     4,     4,     3,
     183,     6,     3,     6,     6,     3,     6,     3,     3,     6,
     184,     3,     6,     6,     3,     6,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     3,   186,     6,     3,     6,
       4,   186,     8,     6,     4,     4,     4,     4,     4,     4,
       4,     4,   184,   184,     4,   184,     4,     4,     4,   184,
       4,   184,   184,     6,     3,     3,   186,   184,     8,     4,
     184,     8,     8,   184,   184,   184,   184,   184,   184,     8,
       4,     4,     4,   184,   183,   183,   900,   184,   183,   903,
     906,     4,   906,   903,   183,   909,   906,   906,   900,   909,
     900,   183,   900,   183,   183,   903,   920,   909,   906,   923,
     920,   909,   926,   183,   900,   900,   183,   900,   900,     5,
       7,     4,   920,   909,   909,   923,   909,   909,   942,     4,
       4,   900,   946,     4,   900,   183,   900,   184,   952,   903,
     909,   955,   906,   909,   942,   909,   960,   183,   946,   900,
     960,   183,   183,   186,   952,   568,   920,   955,   909,   923,
     183,   900,   960,   183,   900,   900,   183,   900,   900,   920,
     909,   663,   923,   909,   909,   900,   909,   909,   942,   186,
     900,   638,   946,   440,   909,   909,   719,   645,   952,   909,
     444,   955,   918,   909,   899,   184,   960,   912,   894,   928,
     911,   952,   915,   926,   955,   935,   900,   902,   456,  1094,
     908,    81,   905,   903,   494,   906,   954,   397,   486,   459,
     957,   952,   466,   683,   491,  1100,   925,   955,   952,   476,
     673,   955,   942,   921,   923,   644,   952,   946,   511,   955,
     514,   518,   961,  1117,  1134,   639,  1151,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1094,    -1,    -1,    -1,  1094,    -1,  1100,    -1,    -1,    -1,
    1100,    -1,  1094,    -1,    -1,    -1,  1094,    -1,    -1,    -1,
      -1,    -1,  1100,  1117,    -1,    -1,    -1,  1117,  1094,  1094,
      -1,  1094,  1094,    -1,    -1,    -1,    -1,    -1,    -1,  1117,
      -1,    -1,    -1,    -1,    -1,  1094,    -1,    -1,  1094,    -1,
    1094,    -1,    -1,    -1,    -1,    -1,  1100,    -1,    -1,    -1,
      -1,    -1,    -1,  1094,    -1,    -1,    -1,    -1,    -1,  1100,
      -1,    -1,    -1,  1117,    -1,  1094,    -1,    -1,  1094,  1094,
      -1,  1094,  1094,    -1,    -1,    -1,    -1,    -1,    -1,  1094,
    1094,    -1,    -1,    -1,  1094,    -1,    -1,    -1,  1094
  };

  const unsigned short
  Dhcp6Parser::yystos_[] =
  {
       0,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,     0,     5,     7,     9,   183,   184,   185,   186,
     204,   205,   206,   211,     7,   220,     7,   226,     7,   250,
       7,   348,     7,   425,     7,   441,     7,   458,     7,   377,
       7,   383,     7,   407,     7,   324,     7,   519,     7,   566,
       7,   557,   212,   207,   221,   227,   251,   349,   426,   442,
     459,   378,   384,   408,   325,   520,   567,   558,   204,   213,
     214,   183,   209,   210,    10,   156,   165,   166,   167,   183,
     219,   222,   223,   224,   549,   551,   553,   564,    11,    12,
      15,    18,    19,    20,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    78,    79,    85,    90,    91,    92,    93,    94,
      96,   101,   110,   113,   120,   128,   129,   132,   133,   219,
     228,   229,   230,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   248,   257,
     259,   261,   298,   304,   310,   316,   318,   332,   342,   362,
     367,   375,   401,   431,   433,   452,   482,   494,   506,   507,
     515,   517,   555,    16,    17,   219,   252,   253,   254,   256,
     431,   433,    70,    72,    80,    81,    82,    83,    84,    97,
     100,   108,   219,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   350,   351,   352,   354,
     356,   358,   360,   362,   365,   366,   401,   419,   431,   433,
     435,   452,   477,    71,   219,   358,   360,   401,   427,   428,
     429,   431,   433,    73,    74,    75,    76,    77,   219,   358,
     360,   401,   431,   433,   443,   444,   445,   447,   448,   450,
     451,    96,   102,   103,   104,   105,   106,   107,   219,   401,
     431,   433,   460,   461,   462,   463,   465,   467,   469,   471,
     473,   475,   375,    21,    61,    63,    64,    67,    68,    69,
     219,   279,   385,   386,   387,   388,   389,   390,   391,   393,
     395,   397,   398,   400,   431,   433,    62,    65,    66,   219,
     279,   389,   395,   409,   410,   411,   412,   413,   415,   416,
     417,   418,   431,   433,   111,   112,   219,   326,   327,   328,
     330,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   154,   155,   219,   431,   433,   521,
     522,   523,   524,   526,   528,   529,   531,   532,   533,   536,
     538,   539,   540,   543,   545,   547,   157,   568,   569,   570,
      13,    14,   559,   560,   561,   563,     6,     3,     4,     8,
       3,   225,   565,   550,   552,   554,     4,     3,     8,   231,
     556,   249,   258,   260,   262,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,   247,
     343,   376,   402,   432,   434,   363,   368,   305,   317,   311,
     299,   483,   453,   319,   333,   495,     4,   508,   516,   518,
       3,     8,   255,     4,     3,     8,   420,   436,   353,   355,
     357,     4,     4,   361,   359,   478,     3,     8,   430,     3,
       8,   446,     4,   449,     4,     4,     3,     8,   476,   464,
     466,   468,   470,   472,   474,     8,     3,     8,   392,   280,
       4,   396,   394,   399,     4,     8,     3,   414,     4,     4,
       8,     3,   329,   331,     3,     8,     4,   525,   527,     4,
     530,     4,     4,   534,   537,     4,     4,   541,   544,   546,
     548,     3,     8,   571,     3,     8,   562,     4,     3,     8,
     204,   204,   183,     4,     4,     4,     4,     4,   223,     4,
       4,     4,     4,     4,     4,   184,   184,   184,   184,   184,
     184,   184,   184,   184,   184,   186,   185,   185,   184,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,   184,     4,     4,     4,
     229,     4,   186,   253,     4,     4,     4,     4,     4,   184,
     186,     4,     4,     4,   351,     4,   428,     4,   184,     4,
     184,   184,   444,     4,     4,     4,     4,     4,     4,     4,
     462,     4,     4,   184,     4,     4,     4,   186,   387,     4,
     186,   186,   411,     4,     4,   327,   186,     4,     4,   184,
       4,   184,   184,     4,     4,   186,   186,     4,     4,     4,
       4,   522,     4,   569,     4,   184,   560,     4,     7,     7,
     204,   204,   204,   183,     7,     7,     7,     7,     5,   183,
       5,     5,     5,   206,   208,   183,    86,    87,    88,    89,
     364,     5,     5,     5,     5,     7,     5,     5,     5,     7,
       7,     7,   208,     7,     5,   215,     5,     5,   183,   183,
     183,   215,   183,     7,   183,   183,   183,   215,   215,   215,
     183,   183,   183,   183,   183,   183,   183,   183,   183,   183,
     183,   204,   183,   183,   183,   147,   148,   535,   149,   150,
     151,   152,   153,   186,   542,   183,   183,   183,     5,     5,
     204,   228,   568,   559,   252,    21,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,   219,   267,   268,   269,   272,   274,   276,
     278,   279,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   291,   292,   294,   296,   267,     7,   263,   264,   265,
       7,   344,   345,   346,     7,   379,   380,   381,     7,   403,
     404,   405,     7,   369,   370,   371,   104,   183,   306,   307,
     308,   309,   213,   105,   107,   308,   312,   313,   314,   315,
      95,   300,   301,   302,     7,   484,   485,     7,   454,   455,
     456,     7,   320,   321,   322,   114,   115,   116,   117,   118,
     119,   334,   335,   336,   337,   338,   339,   340,   341,    21,
     124,   125,   126,   127,   219,   281,   431,   433,   496,   497,
     498,   501,   502,   504,   505,   130,   131,   219,   431,   433,
     509,   510,   511,   513,   521,   216,     7,   421,   422,   423,
       7,   437,   438,   439,   109,   463,   479,   480,     7,   572,
     573,   263,     8,     8,     8,     8,   270,   273,   275,   277,
       4,     4,     4,     4,     4,   290,     4,     4,   293,   295,
     297,     4,     4,     4,     3,     8,     8,   266,     6,     3,
     347,     6,     3,   382,     6,     3,   406,     6,     3,   372,
       6,     3,     3,     6,     6,     3,     6,   303,     3,     8,
     486,     3,     6,   457,     6,     3,   323,     6,     3,     4,
       4,     4,     4,     4,     4,     3,     8,   499,   503,     4,
       4,     4,     3,     8,   512,   514,     3,     8,     8,   183,
     217,   218,   424,     6,     3,   440,     6,     3,   481,     8,
     574,     3,     6,     6,     4,     4,     4,     4,   184,   186,
     184,   186,   184,     4,   184,   184,     4,     4,     4,   184,
     184,   186,   268,   267,   265,   350,   346,   385,   381,   409,
     405,   219,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   279,   342,   354,   356,   358,
     360,   362,   366,   373,   374,   401,   431,   433,   477,   371,
     307,   313,     4,   301,    98,    99,   219,   279,   401,   431,
     433,   487,   488,   489,   490,   491,   493,   485,   460,   456,
     326,   322,   184,   184,   184,   184,   184,   184,   335,     4,
       4,   184,   184,   184,   497,     4,     4,   510,     6,     3,
     427,   423,   443,   439,     4,   158,   160,   161,   219,   279,
     431,   433,   575,   576,   577,   578,   580,   573,    22,    23,
      24,    25,   271,   183,   183,   183,   183,   183,   183,   183,
       8,     8,     8,     8,     3,     8,   183,   492,     4,     8,
       3,     8,     8,   121,   122,   123,   500,   183,   183,   183,
     183,     8,     8,   183,   581,     4,   579,     3,     8,   374,
       4,   186,   489,     4,   184,     4,   576,   183,     5,   183,
       7,   582,   583,   584,     3,     6,   159,   162,   163,   164,
     585,   586,   587,   589,   590,   591,   583,   588,     4,     4,
       4,     3,     8,     4,   186,   184,   184,   586,   183
  };

  const unsigned short
  Dhcp6Parser::yyr1_[] =
  {
       0,   187,   189,   188,   190,   188,   191,   188,   192,   188,
     193,   188,   194,   188,   195,   188,   196,   188,   197,   188,
     198,   188,   199,   188,   200,   188,   201,   188,   202,   188,
     203,   188,   204,   204,   204,   204,   204,   204,   204,   205,
     207,   206,   208,   209,   209,   210,   210,   212,   211,   213,
     213,   214,   214,   216,   215,   217,   217,   218,   218,   219,
     221,   220,   222,   222,   223,   223,   223,   223,   223,   223,
     225,   224,   227,   226,   228,   228,   229,   229,   229,   229,
     229,   229,   229,   229,   229,   229,   229,   229,   229,   229,
     229,   229,   229,   229,   229,   229,   229,   229,   229,   229,
     229,   229,   229,   229,   229,   229,   229,   229,   229,   229,
     229,   229,   229,   229,   229,   229,   229,   229,   231,   230,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   247,   246,   249,   248,   251,   250,
     252,   252,   253,   253,   253,   253,   253,   255,   254,   256,
     258,   257,   260,   259,   262,   261,   263,   263,   264,   264,
     266,   265,   267,   267,   268,   268,   268,   268,   268,   268,
     268,   268,   268,   268,   268,   268,   268,   268,   268,   268,
     268,   268,   268,   268,   270,   269,   271,   271,   271,   271,
     273,   272,   275,   274,   277,   276,   278,   280,   279,   281,
     282,   283,   284,   285,   286,   287,   288,   290,   289,   291,
     293,   292,   295,   294,   297,   296,   299,   298,   300,   300,
     301,   303,   302,   305,   304,   306,   306,   307,   307,   308,
     309,   311,   310,   312,   312,   313,   313,   313,   314,   315,
     317,   316,   319,   318,   320,   320,   321,   321,   323,   322,
     325,   324,   326,   326,   326,   327,   327,   329,   328,   331,
     330,   333,   332,   334,   334,   335,   335,   335,   335,   335,
     335,   336,   337,   338,   339,   340,   341,   343,   342,   344,
     344,   345,   345,   347,   346,   349,   348,   350,   350,   351,
     351,   351,   351,   351,   351,   351,   351,   351,   351,   351,
     351,   351,   351,   351,   351,   351,   351,   351,   351,   351,
     351,   351,   351,   351,   351,   351,   351,   351,   353,   352,
     355,   354,   357,   356,   359,   358,   361,   360,   363,   362,
     364,   364,   364,   364,   365,   366,   368,   367,   369,   369,
     370,   370,   372,   371,   373,   373,   374,   374,   374,   374,
     374,   374,   374,   374,   374,   374,   374,   374,   374,   374,
     374,   374,   374,   374,   374,   374,   374,   374,   374,   374,
     374,   374,   376,   375,   378,   377,   379,   379,   380,   380,
     382,   381,   384,   383,   385,   385,   386,   386,   387,   387,
     387,   387,   387,   387,   387,   387,   387,   387,   388,   389,
     390,   392,   391,   394,   393,   396,   395,   397,   399,   398,
     400,   402,   401,   403,   403,   404,   404,   406,   405,   408,
     407,   409,   409,   410,   410,   411,   411,   411,   411,   411,
     411,   411,   411,   411,   412,   414,   413,   415,   416,   417,
     418,   420,   419,   421,   421,   422,   422,   424,   423,   426,
     425,   427,   427,   428,   428,   428,   428,   428,   428,   428,
     430,   429,   432,   431,   434,   433,   436,   435,   437,   437,
     438,   438,   440,   439,   442,   441,   443,   443,   444,   444,
     444,   444,   444,   444,   444,   444,   444,   444,   444,   446,
     445,   447,   449,   448,   450,   451,   453,   452,   454,   454,
     455,   455,   457,   456,   459,   458,   460,   460,   461,   461,
     462,   462,   462,   462,   462,   462,   462,   462,   462,   462,
     462,   464,   463,   466,   465,   468,   467,   470,   469,   472,
     471,   474,   473,   476,   475,   478,   477,   479,   479,   481,
     480,   483,   482,   484,   484,   486,   485,   487,   487,   488,
     488,   489,   489,   489,   489,   489,   489,   489,   490,   492,
     491,   493,   495,   494,   496,   496,   497,   497,   497,   497,
     497,   497,   497,   497,   497,   499,   498,   500,   500,   500,
     501,   503,   502,   504,   505,   506,   508,   507,   509,   509,
     510,   510,   510,   510,   510,   512,   511,   514,   513,   516,
     515,   518,   517,   520,   519,   521,   521,   522,   522,   522,
     522,   522,   522,   522,   522,   522,   522,   522,   522,   522,
     522,   522,   522,   522,   522,   523,   525,   524,   527,   526,
     528,   530,   529,   531,   532,   534,   533,   535,   535,   537,
     536,   538,   539,   541,   540,   542,   542,   542,   542,   542,
     544,   543,   546,   545,   548,   547,   550,   549,   552,   551,
     554,   553,   556,   555,   558,   557,   559,   559,   560,   560,
     562,   561,   563,   565,   564,   567,   566,   568,   568,   569,
     571,   570,   572,   572,   574,   573,   575,   575,   576,   576,
     576,   576,   576,   576,   576,   577,   579,   578,   581,   580,
     582,   582,   584,   583,   585,   585,   586,   586,   586,   586,
     588,   587,   589,   590,   591
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
       1,     1,     1,     1,     1,     1,     1,     1,     0,     4,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     0,     4,     0,     6,     0,     4,
       1,     3,     1,     1,     1,     1,     1,     0,     4,     3,
       0,     6,     0,     6,     0,     6,     0,     1,     1,     3,
       0,     4,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     4,     1,     1,     1,     1,
       0,     4,     0,     4,     0,     4,     3,     0,     4,     3,
       3,     3,     3,     3,     3,     3,     3,     0,     4,     3,
       0,     4,     0,     4,     0,     4,     0,     6,     1,     3,
       1,     0,     4,     0,     6,     1,     3,     1,     1,     1,
       1,     0,     6,     1,     3,     1,     1,     1,     1,     1,
       0,     6,     0,     6,     0,     1,     1,     3,     0,     4,
       0,     4,     1,     3,     1,     1,     1,     0,     4,     0,
       4,     0,     6,     1,     3,     1,     1,     1,     1,     1,
       1,     3,     3,     3,     3,     3,     3,     0,     6,     0,
       1,     1,     3,     0,     4,     0,     4,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     4,
       0,     4,     0,     4,     0,     4,     0,     4,     0,     4,
       1,     1,     1,     1,     3,     3,     0,     6,     0,     1,
       1,     3,     0,     4,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     6,     0,     4,     0,     1,     1,     3,
       0,     4,     0,     4,     0,     1,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     0,     4,     0,     4,     0,     4,     1,     0,     4,
       3,     0,     6,     0,     1,     1,     3,     0,     4,     0,
       4,     0,     1,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     4,     1,     1,     3,
       3,     0,     6,     0,     1,     1,     3,     0,     4,     0,
       4,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       0,     4,     0,     4,     0,     4,     0,     6,     0,     1,
       1,     3,     0,     4,     0,     4,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       4,     3,     0,     4,     3,     3,     0,     6,     0,     1,
       1,     3,     0,     4,     0,     4,     0,     1,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     4,     0,     4,     0,     4,     0,     4,     0,
       4,     0,     4,     0,     4,     0,     6,     1,     1,     0,
       4,     0,     6,     1,     3,     0,     4,     0,     1,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       4,     3,     0,     6,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     4,     1,     1,     1,
       3,     0,     4,     3,     3,     3,     0,     6,     1,     3,
       1,     1,     1,     1,     1,     0,     4,     0,     4,     0,
       4,     0,     6,     0,     4,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     0,     4,     0,     4,
       3,     0,     4,     3,     3,     0,     4,     1,     1,     0,
       4,     3,     3,     0,     4,     1,     1,     1,     1,     1,
       0,     4,     0,     4,     0,     4,     0,     4,     0,     4,
       0,     4,     0,     6,     0,     4,     1,     3,     1,     1,
       0,     6,     3,     0,     6,     0,     4,     1,     3,     1,
       0,     6,     1,     3,     0,     4,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     3,     0,     4,     0,     6,
       1,     3,     0,     4,     1,     3,     1,     1,     1,     1,
       0,     4,     3,     3,     3
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
  "\"tcp-nodelay\"", "\"preferred-lifetime\"",
  "\"default-preferred-lifetime\"", "\"min-preferred-lifetime\"",
  "\"max-preferred-lifetime\"", "\"valid-lifetime\"",
  "\"default-valid-lifetime\"", "\"min-valid-lifetime\"",
  "\"max-valid-lifetime\"", "\"renew-timer\"", "\"rebind-timer\"",
  "\"calculate-tee-times\"", "\"t1-percent\"", "\"t2-percent\"",
  "\"decline-probation-period\"", "\"server-tag\"", "\"subnet6\"",
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
  "preferred_lifetime", "default_preferred_lifetime",
  "min_preferred_lifetime", "max_preferred_lifetime", "valid_lifetime",
  "default_valid_lifetime", "min_valid_lifetime", "max_valid_lifetime",
  "renew_timer", "rebind_timer", "calculate_tee_times", "t1_percent",
  "t2_percent", "decline_probation_period", "server_tag", "$@23",
  "interfaces_config", "$@24", "sub_interfaces6", "$@25",
  "interfaces_config_params", "interfaces_config_param", "interfaces_list",
  "$@26", "re_detect", "lease_database", "$@27", "hosts_database", "$@28",
  "hosts_databases", "$@29", "database_list", "not_empty_database_list",
  "database", "$@30", "database_map_params", "database_map_param",
  "database_type", "$@31", "db_type", "user", "$@32", "password", "$@33",
  "host", "$@34", "port", "name", "$@35", "persist", "lfc_interval",
  "readonly", "connect_timeout", "reconnect_wait_time", "request_timeout",
  "tcp_keepalive", "tcp_nodelay", "contact_points", "$@36",
  "max_reconnect_tries", "keyspace", "$@37", "consistency", "$@38",
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
       0,   271,   271,   271,   272,   272,   273,   273,   274,   274,
     275,   275,   276,   276,   277,   277,   278,   278,   279,   279,
     280,   280,   281,   281,   282,   282,   283,   283,   284,   284,
     285,   285,   293,   294,   295,   296,   297,   298,   299,   302,
     307,   307,   318,   321,   322,   325,   329,   336,   336,   343,
     344,   347,   351,   358,   358,   365,   366,   369,   373,   384,
     394,   394,   409,   410,   414,   415,   416,   417,   418,   419,
     422,   422,   437,   437,   446,   447,   452,   453,   454,   455,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   467,   468,   469,   470,   471,   472,   473,   474,   475,
     476,   477,   478,   479,   480,   481,   482,   483,   484,   485,
     486,   487,   488,   489,   490,   491,   492,   493,   496,   496,
     504,   509,   514,   519,   524,   529,   534,   539,   544,   549,
     554,   559,   564,   569,   574,   574,   582,   582,   593,   593,
     602,   603,   606,   607,   608,   609,   610,   613,   613,   623,
     629,   629,   641,   641,   653,   653,   663,   664,   667,   668,
     671,   671,   681,   682,   685,   686,   687,   688,   689,   690,
     691,   692,   693,   694,   695,   696,   697,   698,   699,   700,
     701,   702,   703,   704,   707,   707,   714,   715,   716,   717,
     720,   720,   728,   728,   736,   736,   744,   749,   749,   757,
     762,   767,   772,   777,   782,   787,   792,   797,   797,   805,
     810,   810,   818,   818,   826,   826,   834,   834,   844,   845,
     847,   849,   849,   867,   867,   877,   878,   881,   882,   885,
     890,   895,   895,   905,   906,   909,   910,   911,   914,   919,
     926,   926,   936,   936,   946,   947,   950,   951,   954,   954,
     964,   964,   974,   975,   976,   979,   980,   983,   983,   991,
     991,   999,   999,  1010,  1011,  1014,  1015,  1016,  1017,  1018,
    1019,  1022,  1027,  1032,  1037,  1042,  1047,  1055,  1055,  1068,
    1069,  1072,  1073,  1080,  1080,  1106,  1106,  1117,  1118,  1122,
    1123,  1124,  1125,  1126,  1127,  1128,  1129,  1130,  1131,  1132,
    1133,  1134,  1135,  1136,  1137,  1138,  1139,  1140,  1141,  1142,
    1143,  1144,  1145,  1146,  1147,  1148,  1149,  1150,  1153,  1153,
    1161,  1161,  1169,  1169,  1177,  1177,  1185,  1185,  1195,  1195,
    1202,  1203,  1204,  1205,  1208,  1213,  1221,  1221,  1232,  1233,
    1237,  1238,  1241,  1241,  1249,  1250,  1253,  1254,  1255,  1256,
    1257,  1258,  1259,  1260,  1261,  1262,  1263,  1264,  1265,  1266,
    1267,  1268,  1269,  1270,  1271,  1272,  1273,  1274,  1275,  1276,
    1277,  1278,  1285,  1285,  1298,  1298,  1307,  1308,  1311,  1312,
    1317,  1317,  1332,  1332,  1346,  1347,  1350,  1351,  1354,  1355,
    1356,  1357,  1358,  1359,  1360,  1361,  1362,  1363,  1366,  1368,
    1373,  1375,  1375,  1383,  1383,  1391,  1391,  1399,  1401,  1401,
    1409,  1418,  1418,  1430,  1431,  1436,  1437,  1442,  1442,  1454,
    1454,  1466,  1467,  1472,  1473,  1478,  1479,  1480,  1481,  1482,
    1483,  1484,  1485,  1486,  1489,  1491,  1491,  1499,  1501,  1503,
    1508,  1516,  1516,  1528,  1529,  1532,  1533,  1536,  1536,  1546,
    1546,  1555,  1556,  1559,  1560,  1561,  1562,  1563,  1564,  1565,
    1568,  1568,  1576,  1576,  1601,  1601,  1631,  1631,  1643,  1644,
    1647,  1648,  1651,  1651,  1663,  1663,  1675,  1676,  1679,  1680,
    1681,  1682,  1683,  1684,  1685,  1686,  1687,  1688,  1689,  1692,
    1692,  1700,  1705,  1705,  1713,  1718,  1726,  1726,  1736,  1737,
    1740,  1741,  1744,  1744,  1753,  1753,  1762,  1763,  1766,  1767,
    1771,  1772,  1773,  1774,  1775,  1776,  1777,  1778,  1779,  1780,
    1781,  1784,  1784,  1794,  1794,  1804,  1804,  1812,  1812,  1820,
    1820,  1828,  1828,  1836,  1836,  1849,  1849,  1859,  1860,  1863,
    1863,  1874,  1874,  1884,  1885,  1888,  1888,  1898,  1899,  1902,
    1903,  1906,  1907,  1908,  1909,  1910,  1911,  1912,  1915,  1917,
    1917,  1925,  1933,  1933,  1945,  1946,  1949,  1950,  1951,  1952,
    1953,  1954,  1955,  1956,  1957,  1960,  1960,  1967,  1968,  1969,
    1972,  1977,  1977,  1985,  1990,  1997,  2004,  2004,  2014,  2015,
    2018,  2019,  2020,  2021,  2022,  2025,  2025,  2033,  2033,  2043,
    2043,  2083,  2083,  2095,  2095,  2105,  2106,  2109,  2110,  2111,
    2112,  2113,  2114,  2115,  2116,  2117,  2118,  2119,  2120,  2121,
    2122,  2123,  2124,  2125,  2126,  2129,  2134,  2134,  2142,  2142,
    2150,  2155,  2155,  2163,  2168,  2173,  2173,  2181,  2182,  2185,
    2185,  2193,  2198,  2203,  2203,  2211,  2214,  2217,  2220,  2223,
    2229,  2229,  2237,  2237,  2245,  2245,  2255,  2255,  2262,  2262,
    2269,  2269,  2278,  2278,  2289,  2289,  2299,  2300,  2304,  2305,
    2308,  2308,  2318,  2328,  2328,  2338,  2338,  2349,  2350,  2354,
    2358,  2358,  2370,  2371,  2375,  2375,  2383,  2384,  2387,  2388,
    2389,  2390,  2391,  2392,  2393,  2396,  2401,  2401,  2409,  2409,
    2419,  2420,  2423,  2423,  2431,  2432,  2435,  2436,  2437,  2438,
    2441,  2441,  2449,  2454,  2459
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
#line 5285 "dhcp6_parser.cc" // lalr1.cc:1242
#line 2464 "dhcp6_parser.yy" // lalr1.cc:1243


void
isc::dhcp::Dhcp6Parser::error(const location_type& loc,
                              const std::string& what)
{
    ctx.error(loc, what);
}
