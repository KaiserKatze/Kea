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
#define yylex   parser4_lex



#include "dhcp4_parser.h"


// Unqualified %code blocks.
#line 34 "dhcp4_parser.yy" // lalr1.cc:435

#include <dhcp4/parser_context.h>

#line 51 "dhcp4_parser.cc" // lalr1.cc:435


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
#if PARSER4_DEBUG

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

#else // !PARSER4_DEBUG

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Symbol)  YYUSE (Symbol)
# define YY_REDUCE_PRINT(Rule)           static_cast<void> (0)
# define YY_STACK_PRINT()                static_cast<void> (0)

#endif // !PARSER4_DEBUG

#define yyerrok         (yyerrstatus_ = 0)
#define yyclearin       (yyla.clear ())

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)

#line 14 "dhcp4_parser.yy" // lalr1.cc:510
namespace isc { namespace dhcp {
#line 146 "dhcp4_parser.cc" // lalr1.cc:510

  /* Return YYSTR after stripping away unnecessary quotes and
     backslashes, so that it's suitable for yyerror.  The heuristic is
     that double-quoting is unnecessary unless the string contains an
     apostrophe, a comma, or backslash (other than backslash-backslash).
     YYSTR is taken from yytname.  */
  std::string
  Dhcp4Parser::yytnamerr_ (const char *yystr)
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
  Dhcp4Parser::Dhcp4Parser (isc::dhcp::Parser4Context& ctx_yyarg)
    :
#if PARSER4_DEBUG
      yydebug_ (false),
      yycdebug_ (&std::cerr),
#endif
      ctx (ctx_yyarg)
  {}

  Dhcp4Parser::~Dhcp4Parser ()
  {}

  Dhcp4Parser::syntax_error::~syntax_error () YY_NOEXCEPT YY_NOTHROW
  {}

  /*---------------.
  | Symbol types.  |
  `---------------*/



  // by_state.
  Dhcp4Parser::by_state::by_state () YY_NOEXCEPT
    : state (empty_state)
  {}

  Dhcp4Parser::by_state::by_state (const by_state& that) YY_NOEXCEPT
    : state (that.state)
  {}

  void
  Dhcp4Parser::by_state::clear () YY_NOEXCEPT
  {
    state = empty_state;
  }

  void
  Dhcp4Parser::by_state::move (by_state& that)
  {
    state = that.state;
    that.clear ();
  }

  Dhcp4Parser::by_state::by_state (state_type s) YY_NOEXCEPT
    : state (s)
  {}

  Dhcp4Parser::symbol_number_type
  Dhcp4Parser::by_state::type_get () const YY_NOEXCEPT
  {
    if (state == empty_state)
      return empty_symbol;
    else
      return yystos_[state];
  }

  Dhcp4Parser::stack_symbol_type::stack_symbol_type ()
  {}

  Dhcp4Parser::stack_symbol_type::stack_symbol_type (YY_RVREF (stack_symbol_type) that)
    : super_type (YY_MOVE (that.state), YY_MOVE (that.location))
  {
    switch (that.type_get ())
    {
      case 194: // value
      case 198: // map_value
      case 245: // socket_type
      case 248: // outbound_interface_value
      case 270: // db_type
      case 356: // hr_mode
      case 505: // ncr_protocol_value
      case 512: // replace_client_name_value
        value.YY_MOVE_OR_COPY< ElementPtr > (YY_MOVE (that.value));
        break;

      case 177: // "boolean"
        value.YY_MOVE_OR_COPY< bool > (YY_MOVE (that.value));
        break;

      case 176: // "floating point"
        value.YY_MOVE_OR_COPY< double > (YY_MOVE (that.value));
        break;

      case 175: // "integer"
        value.YY_MOVE_OR_COPY< int64_t > (YY_MOVE (that.value));
        break;

      case 174: // "constant string"
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

  Dhcp4Parser::stack_symbol_type::stack_symbol_type (state_type s, YY_MOVE_REF (symbol_type) that)
    : super_type (s, YY_MOVE (that.location))
  {
    switch (that.type_get ())
    {
      case 194: // value
      case 198: // map_value
      case 245: // socket_type
      case 248: // outbound_interface_value
      case 270: // db_type
      case 356: // hr_mode
      case 505: // ncr_protocol_value
      case 512: // replace_client_name_value
        value.move< ElementPtr > (YY_MOVE (that.value));
        break;

      case 177: // "boolean"
        value.move< bool > (YY_MOVE (that.value));
        break;

      case 176: // "floating point"
        value.move< double > (YY_MOVE (that.value));
        break;

      case 175: // "integer"
        value.move< int64_t > (YY_MOVE (that.value));
        break;

      case 174: // "constant string"
        value.move< std::string > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

    // that is emptied.
    that.type = empty_symbol;
  }

#if YY_CPLUSPLUS < 201103L
  Dhcp4Parser::stack_symbol_type&
  Dhcp4Parser::stack_symbol_type::operator= (stack_symbol_type& that)
  {
    state = that.state;
    switch (that.type_get ())
    {
      case 194: // value
      case 198: // map_value
      case 245: // socket_type
      case 248: // outbound_interface_value
      case 270: // db_type
      case 356: // hr_mode
      case 505: // ncr_protocol_value
      case 512: // replace_client_name_value
        value.move< ElementPtr > (that.value);
        break;

      case 177: // "boolean"
        value.move< bool > (that.value);
        break;

      case 176: // "floating point"
        value.move< double > (that.value);
        break;

      case 175: // "integer"
        value.move< int64_t > (that.value);
        break;

      case 174: // "constant string"
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
  Dhcp4Parser::yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const
  {
    if (yymsg)
      YY_SYMBOL_PRINT (yymsg, yysym);
  }

#if PARSER4_DEBUG
  template <typename Base>
  void
  Dhcp4Parser::yy_print_ (std::ostream& yyo,
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
      case 174: // "constant string"
#line 256 "dhcp4_parser.yy" // lalr1.cc:676
        { yyoutput << yysym.value.template as < std::string > (); }
#line 407 "dhcp4_parser.cc" // lalr1.cc:676
        break;

      case 175: // "integer"
#line 256 "dhcp4_parser.yy" // lalr1.cc:676
        { yyoutput << yysym.value.template as < int64_t > (); }
#line 413 "dhcp4_parser.cc" // lalr1.cc:676
        break;

      case 176: // "floating point"
#line 256 "dhcp4_parser.yy" // lalr1.cc:676
        { yyoutput << yysym.value.template as < double > (); }
#line 419 "dhcp4_parser.cc" // lalr1.cc:676
        break;

      case 177: // "boolean"
#line 256 "dhcp4_parser.yy" // lalr1.cc:676
        { yyoutput << yysym.value.template as < bool > (); }
#line 425 "dhcp4_parser.cc" // lalr1.cc:676
        break;

      case 194: // value
#line 256 "dhcp4_parser.yy" // lalr1.cc:676
        { yyoutput << yysym.value.template as < ElementPtr > (); }
#line 431 "dhcp4_parser.cc" // lalr1.cc:676
        break;

      case 198: // map_value
#line 256 "dhcp4_parser.yy" // lalr1.cc:676
        { yyoutput << yysym.value.template as < ElementPtr > (); }
#line 437 "dhcp4_parser.cc" // lalr1.cc:676
        break;

      case 245: // socket_type
#line 256 "dhcp4_parser.yy" // lalr1.cc:676
        { yyoutput << yysym.value.template as < ElementPtr > (); }
#line 443 "dhcp4_parser.cc" // lalr1.cc:676
        break;

      case 248: // outbound_interface_value
#line 256 "dhcp4_parser.yy" // lalr1.cc:676
        { yyoutput << yysym.value.template as < ElementPtr > (); }
#line 449 "dhcp4_parser.cc" // lalr1.cc:676
        break;

      case 270: // db_type
#line 256 "dhcp4_parser.yy" // lalr1.cc:676
        { yyoutput << yysym.value.template as < ElementPtr > (); }
#line 455 "dhcp4_parser.cc" // lalr1.cc:676
        break;

      case 356: // hr_mode
#line 256 "dhcp4_parser.yy" // lalr1.cc:676
        { yyoutput << yysym.value.template as < ElementPtr > (); }
#line 461 "dhcp4_parser.cc" // lalr1.cc:676
        break;

      case 505: // ncr_protocol_value
#line 256 "dhcp4_parser.yy" // lalr1.cc:676
        { yyoutput << yysym.value.template as < ElementPtr > (); }
#line 467 "dhcp4_parser.cc" // lalr1.cc:676
        break;

      case 512: // replace_client_name_value
#line 256 "dhcp4_parser.yy" // lalr1.cc:676
        { yyoutput << yysym.value.template as < ElementPtr > (); }
#line 473 "dhcp4_parser.cc" // lalr1.cc:676
        break;

      default:
        break;
    }
    yyo << ')';
  }
#endif

  void
  Dhcp4Parser::yypush_ (const char* m, YY_MOVE_REF (stack_symbol_type) sym)
  {
    if (m)
      YY_SYMBOL_PRINT (m, sym);
    yystack_.push (YY_MOVE (sym));
  }

  void
  Dhcp4Parser::yypush_ (const char* m, state_type s, YY_MOVE_REF (symbol_type) sym)
  {
#if 201103L <= YY_CPLUSPLUS
    yypush_ (m, stack_symbol_type (s, std::move (sym)));
#else
    stack_symbol_type ss (s, sym);
    yypush_ (m, ss);
#endif
  }

  void
  Dhcp4Parser::yypop_ (int n)
  {
    yystack_.pop (n);
  }

#if PARSER4_DEBUG
  std::ostream&
  Dhcp4Parser::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  Dhcp4Parser::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  Dhcp4Parser::debug_level_type
  Dhcp4Parser::debug_level () const
  {
    return yydebug_;
  }

  void
  Dhcp4Parser::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif // PARSER4_DEBUG

  Dhcp4Parser::state_type
  Dhcp4Parser::yy_lr_goto_state_ (state_type yystate, int yysym)
  {
    int yyr = yypgoto_[yysym - yyntokens_] + yystate;
    if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
      return yytable_[yyr];
    else
      return yydefgoto_[yysym - yyntokens_];
  }

  bool
  Dhcp4Parser::yy_pact_value_is_default_ (int yyvalue)
  {
    return yyvalue == yypact_ninf_;
  }

  bool
  Dhcp4Parser::yy_table_value_is_error_ (int yyvalue)
  {
    return yyvalue == yytable_ninf_;
  }

  int
  Dhcp4Parser::operator() ()
  {
    return parse ();
  }

  int
  Dhcp4Parser::parse ()
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
      case 194: // value
      case 198: // map_value
      case 245: // socket_type
      case 248: // outbound_interface_value
      case 270: // db_type
      case 356: // hr_mode
      case 505: // ncr_protocol_value
      case 512: // replace_client_name_value
        yylhs.value.emplace< ElementPtr > ();
        break;

      case 177: // "boolean"
        yylhs.value.emplace< bool > ();
        break;

      case 176: // "floating point"
        yylhs.value.emplace< double > ();
        break;

      case 175: // "integer"
        yylhs.value.emplace< int64_t > ();
        break;

      case 174: // "constant string"
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
#line 265 "dhcp4_parser.yy" // lalr1.cc:919
    { ctx.ctx_ = ctx.NO_KEYWORD; }
#line 740 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 4:
#line 266 "dhcp4_parser.yy" // lalr1.cc:919
    { ctx.ctx_ = ctx.CONFIG; }
#line 746 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 6:
#line 267 "dhcp4_parser.yy" // lalr1.cc:919
    { ctx.ctx_ = ctx.DHCP4; }
#line 752 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 8:
#line 268 "dhcp4_parser.yy" // lalr1.cc:919
    { ctx.ctx_ = ctx.INTERFACES_CONFIG; }
#line 758 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 10:
#line 269 "dhcp4_parser.yy" // lalr1.cc:919
    { ctx.ctx_ = ctx.SUBNET4; }
#line 764 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 12:
#line 270 "dhcp4_parser.yy" // lalr1.cc:919
    { ctx.ctx_ = ctx.POOLS; }
#line 770 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 14:
#line 271 "dhcp4_parser.yy" // lalr1.cc:919
    { ctx.ctx_ = ctx.RESERVATIONS; }
#line 776 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 16:
#line 272 "dhcp4_parser.yy" // lalr1.cc:919
    { ctx.ctx_ = ctx.DHCP4; }
#line 782 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 18:
#line 273 "dhcp4_parser.yy" // lalr1.cc:919
    { ctx.ctx_ = ctx.OPTION_DEF; }
#line 788 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 20:
#line 274 "dhcp4_parser.yy" // lalr1.cc:919
    { ctx.ctx_ = ctx.OPTION_DATA; }
#line 794 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 22:
#line 275 "dhcp4_parser.yy" // lalr1.cc:919
    { ctx.ctx_ = ctx.HOOKS_LIBRARIES; }
#line 800 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 24:
#line 276 "dhcp4_parser.yy" // lalr1.cc:919
    { ctx.ctx_ = ctx.DHCP_DDNS; }
#line 806 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 26:
#line 277 "dhcp4_parser.yy" // lalr1.cc:919
    { ctx.ctx_ = ctx.LOGGING; }
#line 812 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 28:
#line 278 "dhcp4_parser.yy" // lalr1.cc:919
    { ctx.ctx_ = ctx.CONFIG_CONTROL; }
#line 818 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 30:
#line 286 "dhcp4_parser.yy" // lalr1.cc:919
    { yylhs.value.as < ElementPtr > () = ElementPtr(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location))); }
#line 824 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 31:
#line 287 "dhcp4_parser.yy" // lalr1.cc:919
    { yylhs.value.as < ElementPtr > () = ElementPtr(new DoubleElement(yystack_[0].value.as < double > (), ctx.loc2pos(yystack_[0].location))); }
#line 830 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 32:
#line 288 "dhcp4_parser.yy" // lalr1.cc:919
    { yylhs.value.as < ElementPtr > () = ElementPtr(new BoolElement(yystack_[0].value.as < bool > (), ctx.loc2pos(yystack_[0].location))); }
#line 836 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 33:
#line 289 "dhcp4_parser.yy" // lalr1.cc:919
    { yylhs.value.as < ElementPtr > () = ElementPtr(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location))); }
#line 842 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 34:
#line 290 "dhcp4_parser.yy" // lalr1.cc:919
    { yylhs.value.as < ElementPtr > () = ElementPtr(new NullElement(ctx.loc2pos(yystack_[0].location))); }
#line 848 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 35:
#line 291 "dhcp4_parser.yy" // lalr1.cc:919
    { yylhs.value.as < ElementPtr > () = ctx.stack_.back(); ctx.stack_.pop_back(); }
#line 854 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 36:
#line 292 "dhcp4_parser.yy" // lalr1.cc:919
    { yylhs.value.as < ElementPtr > () = ctx.stack_.back(); ctx.stack_.pop_back(); }
#line 860 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 37:
#line 295 "dhcp4_parser.yy" // lalr1.cc:919
    {
    // Push back the JSON value on the stack
    ctx.stack_.push_back(yystack_[0].value.as < ElementPtr > ());
}
#line 869 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 38:
#line 300 "dhcp4_parser.yy" // lalr1.cc:919
    {
    // This code is executed when we're about to start parsing
    // the content of the map
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.push_back(m);
}
#line 880 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 39:
#line 305 "dhcp4_parser.yy" // lalr1.cc:919
    {
    // map parsing completed. If we ever want to do any wrap up
    // (maybe some sanity checking), this would be the best place
    // for it.
}
#line 890 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 40:
#line 311 "dhcp4_parser.yy" // lalr1.cc:919
    { yylhs.value.as < ElementPtr > () = ctx.stack_.back(); ctx.stack_.pop_back(); }
#line 896 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 43:
#line 318 "dhcp4_parser.yy" // lalr1.cc:919
    {
                  // map containing a single entry
                  ctx.stack_.back()->set(yystack_[2].value.as < std::string > (), yystack_[0].value.as < ElementPtr > ());
                  }
#line 905 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 44:
#line 322 "dhcp4_parser.yy" // lalr1.cc:919
    {
                  // map consisting of a shorter map followed by
                  // comma and string:value
                  ctx.stack_.back()->set(yystack_[2].value.as < std::string > (), yystack_[0].value.as < ElementPtr > ());
                  }
#line 915 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 45:
#line 329 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr l(new ListElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.push_back(l);
}
#line 924 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 46:
#line 332 "dhcp4_parser.yy" // lalr1.cc:919
    {
    // list parsing complete. Put any sanity checking here
}
#line 932 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 49:
#line 340 "dhcp4_parser.yy" // lalr1.cc:919
    {
                  // List consisting of a single element.
                  ctx.stack_.back()->add(yystack_[0].value.as < ElementPtr > ());
                  }
#line 941 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 50:
#line 344 "dhcp4_parser.yy" // lalr1.cc:919
    {
                  // List ending with , and a value.
                  ctx.stack_.back()->add(yystack_[0].value.as < ElementPtr > ());
                  }
#line 950 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 51:
#line 351 "dhcp4_parser.yy" // lalr1.cc:919
    {
    // List parsing about to start
}
#line 958 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 52:
#line 353 "dhcp4_parser.yy" // lalr1.cc:919
    {
    // list parsing complete. Put any sanity checking here
    //ctx.stack_.pop_back();
}
#line 967 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 55:
#line 362 "dhcp4_parser.yy" // lalr1.cc:919
    {
                          ElementPtr s(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
                          ctx.stack_.back()->add(s);
                          }
#line 976 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 56:
#line 366 "dhcp4_parser.yy" // lalr1.cc:919
    {
                          ElementPtr s(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
                          ctx.stack_.back()->add(s);
                          }
#line 985 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 57:
#line 377 "dhcp4_parser.yy" // lalr1.cc:919
    {
    const std::string& where = ctx.contextName();
    const std::string& keyword = yystack_[1].value.as < std::string > ();
    error(yystack_[1].location,
          "got unexpected keyword \"" + keyword + "\" in " + where + " map.");
}
#line 996 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 58:
#line 387 "dhcp4_parser.yy" // lalr1.cc:919
    {
    // This code is executed when we're about to start parsing
    // the content of the map
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.push_back(m);
}
#line 1007 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 59:
#line 392 "dhcp4_parser.yy" // lalr1.cc:919
    {
    // map parsing completed. If we ever want to do any wrap up
    // (maybe some sanity checking), this would be the best place
    // for it.

    // Dhcp4 is required
    ctx.require("Dhcp4", ctx.loc2pos(yystack_[3].location), ctx.loc2pos(yystack_[0].location));
}
#line 1020 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 68:
#line 416 "dhcp4_parser.yy" // lalr1.cc:919
    {
    // This code is executed when we're about to start parsing
    // the content of the map
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("Dhcp4", m);
    ctx.stack_.push_back(m);
    ctx.enter(ctx.DHCP4);
}
#line 1033 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 69:
#line 423 "dhcp4_parser.yy" // lalr1.cc:919
    {
    // No global parameter is required
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 1043 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 70:
#line 431 "dhcp4_parser.yy" // lalr1.cc:919
    {
    // Parse the Dhcp4 map
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.push_back(m);
}
#line 1053 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 71:
#line 435 "dhcp4_parser.yy" // lalr1.cc:919
    {
    // No global parameter is required
    // parsing completed
}
#line 1062 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 114:
#line 488 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr prf(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("valid-lifetime", prf);
}
#line 1071 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 115:
#line 493 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr prf(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("valid-lifetime", prf);
}
#line 1080 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 116:
#line 498 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr prf(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("min-valid-lifetime", prf);
}
#line 1089 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 117:
#line 503 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr prf(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("max-valid-lifetime", prf);
}
#line 1098 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 118:
#line 508 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr prf(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("renew-timer", prf);
}
#line 1107 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 119:
#line 513 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr prf(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("rebind-timer", prf);
}
#line 1116 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 120:
#line 518 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr ctt(new BoolElement(yystack_[0].value.as < bool > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("calculate-tee-times", ctt);
}
#line 1125 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 121:
#line 523 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr t1(new DoubleElement(yystack_[0].value.as < double > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("t1-percent", t1);
}
#line 1134 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 122:
#line 528 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr t2(new DoubleElement(yystack_[0].value.as < double > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("t2-percent", t2);
}
#line 1143 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 123:
#line 533 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr dpp(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("decline-probation-period", dpp);
}
#line 1152 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 124:
#line 538 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 1160 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 125:
#line 540 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr stag(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("server-tag", stag);
    ctx.leave();
}
#line 1170 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 126:
#line 546 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr echo(new BoolElement(yystack_[0].value.as < bool > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("echo-client-id", echo);
}
#line 1179 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 127:
#line 551 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr match(new BoolElement(yystack_[0].value.as < bool > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("match-client-id", match);
}
#line 1188 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 128:
#line 556 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr prf(new BoolElement(yystack_[0].value.as < bool > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("authoritative", prf);
}
#line 1197 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 129:
#line 562 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr i(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("interfaces-config", i);
    ctx.stack_.push_back(i);
    ctx.enter(ctx.INTERFACES_CONFIG);
}
#line 1208 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 130:
#line 567 "dhcp4_parser.yy" // lalr1.cc:919
    {
    // No interfaces config param is required
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 1218 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 140:
#line 586 "dhcp4_parser.yy" // lalr1.cc:919
    {
    // Parse the interfaces-config map
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.push_back(m);
}
#line 1228 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 141:
#line 590 "dhcp4_parser.yy" // lalr1.cc:919
    {
    // No interfaces config param is required
    // parsing completed
}
#line 1237 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 142:
#line 595 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr l(new ListElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("interfaces", l);
    ctx.stack_.push_back(l);
    ctx.enter(ctx.NO_KEYWORD);
}
#line 1248 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 143:
#line 600 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 1257 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 144:
#line 605 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.DHCP_SOCKET_TYPE);
}
#line 1265 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 145:
#line 607 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.back()->set("dhcp-socket-type", yystack_[0].value.as < ElementPtr > ());
    ctx.leave();
}
#line 1274 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 146:
#line 612 "dhcp4_parser.yy" // lalr1.cc:919
    { yylhs.value.as < ElementPtr > () = ElementPtr(new StringElement("raw", ctx.loc2pos(yystack_[0].location))); }
#line 1280 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 147:
#line 613 "dhcp4_parser.yy" // lalr1.cc:919
    { yylhs.value.as < ElementPtr > () = ElementPtr(new StringElement("udp", ctx.loc2pos(yystack_[0].location))); }
#line 1286 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 148:
#line 616 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.OUTBOUND_INTERFACE);
}
#line 1294 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 149:
#line 618 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.back()->set("outbound-interface", yystack_[0].value.as < ElementPtr > ());
    ctx.leave();
}
#line 1303 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 150:
#line 623 "dhcp4_parser.yy" // lalr1.cc:919
    {
    yylhs.value.as < ElementPtr > () = ElementPtr(new StringElement("same-as-inbound", ctx.loc2pos(yystack_[0].location)));
}
#line 1311 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 151:
#line 625 "dhcp4_parser.yy" // lalr1.cc:919
    {
    yylhs.value.as < ElementPtr > () = ElementPtr(new StringElement("use-routing", ctx.loc2pos(yystack_[0].location)));
    }
#line 1319 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 152:
#line 629 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr b(new BoolElement(yystack_[0].value.as < bool > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("re-detect", b);
}
#line 1328 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 153:
#line 635 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr i(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("lease-database", i);
    ctx.stack_.push_back(i);
    ctx.enter(ctx.LEASE_DATABASE);
}
#line 1339 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 154:
#line 640 "dhcp4_parser.yy" // lalr1.cc:919
    {
    // The type parameter is required
    ctx.require("type", ctx.loc2pos(yystack_[2].location), ctx.loc2pos(yystack_[0].location));
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 1350 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 155:
#line 647 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("sanity-checks", m);
    ctx.stack_.push_back(m);
    ctx.enter(ctx.SANITY_CHECKS);
}
#line 1361 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 156:
#line 652 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 1370 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 160:
#line 662 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 1378 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 161:
#line 664 "dhcp4_parser.yy" // lalr1.cc:919
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
#line 1398 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 162:
#line 680 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr i(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("hosts-database", i);
    ctx.stack_.push_back(i);
    ctx.enter(ctx.HOSTS_DATABASE);
}
#line 1409 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 163:
#line 685 "dhcp4_parser.yy" // lalr1.cc:919
    {
    // The type parameter is required
    ctx.require("type", ctx.loc2pos(yystack_[2].location), ctx.loc2pos(yystack_[0].location));
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 1420 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 164:
#line 692 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr l(new ListElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("hosts-databases", l);
    ctx.stack_.push_back(l);
    ctx.enter(ctx.HOSTS_DATABASE);
}
#line 1431 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 165:
#line 697 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 1440 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 170:
#line 710 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->add(m);
    ctx.stack_.push_back(m);
}
#line 1450 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 171:
#line 714 "dhcp4_parser.yy" // lalr1.cc:919
    {
    // The type parameter is required
    ctx.require("type", ctx.loc2pos(yystack_[3].location), ctx.loc2pos(yystack_[0].location));
    ctx.stack_.pop_back();
}
#line 1460 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 194:
#line 746 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.DATABASE_TYPE);
}
#line 1468 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 195:
#line 748 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.back()->set("type", yystack_[0].value.as < ElementPtr > ());
    ctx.leave();
}
#line 1477 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 196:
#line 753 "dhcp4_parser.yy" // lalr1.cc:919
    { yylhs.value.as < ElementPtr > () = ElementPtr(new StringElement("memfile", ctx.loc2pos(yystack_[0].location))); }
#line 1483 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 197:
#line 754 "dhcp4_parser.yy" // lalr1.cc:919
    { yylhs.value.as < ElementPtr > () = ElementPtr(new StringElement("mysql", ctx.loc2pos(yystack_[0].location))); }
#line 1489 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 198:
#line 755 "dhcp4_parser.yy" // lalr1.cc:919
    { yylhs.value.as < ElementPtr > () = ElementPtr(new StringElement("postgresql", ctx.loc2pos(yystack_[0].location))); }
#line 1495 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 199:
#line 756 "dhcp4_parser.yy" // lalr1.cc:919
    { yylhs.value.as < ElementPtr > () = ElementPtr(new StringElement("cql", ctx.loc2pos(yystack_[0].location))); }
#line 1501 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 200:
#line 759 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 1509 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 201:
#line 761 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr user(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("user", user);
    ctx.leave();
}
#line 1519 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 202:
#line 767 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 1527 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 203:
#line 769 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr pwd(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("password", pwd);
    ctx.leave();
}
#line 1537 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 204:
#line 775 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 1545 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 205:
#line 777 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr h(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("host", h);
    ctx.leave();
}
#line 1555 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 206:
#line 783 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr p(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("port", p);
}
#line 1564 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 207:
#line 788 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 1572 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 208:
#line 790 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr name(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("name", name);
    ctx.leave();
}
#line 1582 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 209:
#line 796 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr n(new BoolElement(yystack_[0].value.as < bool > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("persist", n);
}
#line 1591 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 210:
#line 801 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr n(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("lfc-interval", n);
}
#line 1600 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 211:
#line 806 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr n(new BoolElement(yystack_[0].value.as < bool > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("readonly", n);
}
#line 1609 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 212:
#line 811 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr n(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("connect-timeout", n);
}
#line 1618 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 213:
#line 816 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr n(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("request-timeout", n);
}
#line 1627 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 214:
#line 821 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr n(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("tcp-keepalive", n);
}
#line 1636 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 215:
#line 826 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr n(new BoolElement(yystack_[0].value.as < bool > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("tcp-nodelay", n);
}
#line 1645 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 216:
#line 831 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 1653 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 217:
#line 833 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr cp(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("contact-points", cp);
    ctx.leave();
}
#line 1663 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 218:
#line 839 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 1671 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 219:
#line 841 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr ks(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("keyspace", ks);
    ctx.leave();
}
#line 1681 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 220:
#line 847 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 1689 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 221:
#line 849 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr c(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("consistency", c);
    ctx.leave();
}
#line 1699 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 222:
#line 855 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 1707 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 223:
#line 857 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr c(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("serial-consistency", c);
    ctx.leave();
}
#line 1717 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 224:
#line 863 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr n(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("max-reconnect-tries", n);
}
#line 1726 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 225:
#line 868 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr n(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("reconnect-wait-time", n);
}
#line 1735 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 226:
#line 873 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr l(new ListElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("host-reservation-identifiers", l);
    ctx.stack_.push_back(l);
    ctx.enter(ctx.HOST_RESERVATION_IDENTIFIERS);
}
#line 1746 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 227:
#line 878 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 1755 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 235:
#line 894 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr duid(new StringElement("duid", ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->add(duid);
}
#line 1764 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 236:
#line 899 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr hwaddr(new StringElement("hw-address", ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->add(hwaddr);
}
#line 1773 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 237:
#line 904 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr circuit(new StringElement("circuit-id", ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->add(circuit);
}
#line 1782 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 238:
#line 909 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr client(new StringElement("client-id", ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->add(client);
}
#line 1791 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 239:
#line 914 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr flex_id(new StringElement("flex-id", ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->add(flex_id);
}
#line 1800 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 240:
#line 919 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr l(new ListElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("hooks-libraries", l);
    ctx.stack_.push_back(l);
    ctx.enter(ctx.HOOKS_LIBRARIES);
}
#line 1811 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 241:
#line 924 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 1820 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 246:
#line 937 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->add(m);
    ctx.stack_.push_back(m);
}
#line 1830 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 247:
#line 941 "dhcp4_parser.yy" // lalr1.cc:919
    {
    // The library hooks parameter is required
    ctx.require("library", ctx.loc2pos(yystack_[3].location), ctx.loc2pos(yystack_[0].location));
    ctx.stack_.pop_back();
}
#line 1840 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 248:
#line 947 "dhcp4_parser.yy" // lalr1.cc:919
    {
    // Parse the hooks-libraries list entry map
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.push_back(m);
}
#line 1850 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 249:
#line 951 "dhcp4_parser.yy" // lalr1.cc:919
    {
    // The library hooks parameter is required
    ctx.require("library", ctx.loc2pos(yystack_[3].location), ctx.loc2pos(yystack_[0].location));
    // parsing completed
}
#line 1860 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 255:
#line 966 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 1868 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 256:
#line 968 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr lib(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("library", lib);
    ctx.leave();
}
#line 1878 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 257:
#line 974 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 1886 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 258:
#line 976 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.back()->set("parameters", yystack_[0].value.as < ElementPtr > ());
    ctx.leave();
}
#line 1895 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 259:
#line 982 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("expired-leases-processing", m);
    ctx.stack_.push_back(m);
    ctx.enter(ctx.EXPIRED_LEASES_PROCESSING);
}
#line 1906 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 260:
#line 987 "dhcp4_parser.yy" // lalr1.cc:919
    {
    // No expired lease parameter is required
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 1916 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 269:
#line 1005 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr value(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("reclaim-timer-wait-time", value);
}
#line 1925 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 270:
#line 1010 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr value(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("flush-reclaimed-timer-wait-time", value);
}
#line 1934 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 271:
#line 1015 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr value(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("hold-reclaimed-time", value);
}
#line 1943 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 272:
#line 1020 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr value(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("max-reclaim-leases", value);
}
#line 1952 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 273:
#line 1025 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr value(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("max-reclaim-time", value);
}
#line 1961 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 274:
#line 1030 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr value(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("unwarned-reclaim-cycles", value);
}
#line 1970 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 275:
#line 1038 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr l(new ListElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("subnet4", l);
    ctx.stack_.push_back(l);
    ctx.enter(ctx.SUBNET4);
}
#line 1981 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 276:
#line 1043 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 1990 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 281:
#line 1063 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->add(m);
    ctx.stack_.push_back(m);
}
#line 2000 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 282:
#line 1067 "dhcp4_parser.yy" // lalr1.cc:919
    {
    // Once we reached this place, the subnet parsing is now complete.
    // If we want to, we can implement default values here.
    // In particular we can do things like this:
    // if (!ctx.stack_.back()->get("interface")) {
    //     ctx.stack_.back()->set("interface", StringElement("loopback"));
    // }
    //
    // We can also stack up one level (Dhcp4) and copy over whatever
    // global parameters we want to:
    // if (!ctx.stack_.back()->get("renew-timer")) {
    //     ElementPtr renew = ctx_stack_[...].get("renew-timer");
    //     if (renew) {
    //         ctx.stack_.back()->set("renew-timer", renew);
    //     }
    // }

    // The subnet subnet4 parameter is required
    ctx.require("subnet", ctx.loc2pos(yystack_[3].location), ctx.loc2pos(yystack_[0].location));
    ctx.stack_.pop_back();
}
#line 2026 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 283:
#line 1089 "dhcp4_parser.yy" // lalr1.cc:919
    {
    // Parse the subnet4 list entry map
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.push_back(m);
}
#line 2036 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 284:
#line 1093 "dhcp4_parser.yy" // lalr1.cc:919
    {
    // The subnet subnet4 parameter is required
    ctx.require("subnet", ctx.loc2pos(yystack_[3].location), ctx.loc2pos(yystack_[0].location));
    // parsing completed
}
#line 2046 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 317:
#line 1137 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 2054 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 318:
#line 1139 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr subnet(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("subnet", subnet);
    ctx.leave();
}
#line 2064 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 319:
#line 1145 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 2072 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 320:
#line 1147 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr iface(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("4o6-interface", iface);
    ctx.leave();
}
#line 2082 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 321:
#line 1153 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 2090 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 322:
#line 1155 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr iface(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("4o6-interface-id", iface);
    ctx.leave();
}
#line 2100 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 323:
#line 1161 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 2108 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 324:
#line 1163 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr iface(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("4o6-subnet", iface);
    ctx.leave();
}
#line 2118 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 325:
#line 1169 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 2126 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 326:
#line 1171 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr iface(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("interface", iface);
    ctx.leave();
}
#line 2136 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 327:
#line 1177 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 2144 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 328:
#line 1179 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr cls(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("client-class", cls);
    ctx.leave();
}
#line 2154 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 329:
#line 1185 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr c(new ListElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("require-client-classes", c);
    ctx.stack_.push_back(c);
    ctx.enter(ctx.NO_KEYWORD);
}
#line 2165 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 330:
#line 1190 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 2174 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 331:
#line 1195 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.RESERVATION_MODE);
}
#line 2182 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 332:
#line 1197 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.back()->set("reservation-mode", yystack_[0].value.as < ElementPtr > ());
    ctx.leave();
}
#line 2191 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 333:
#line 1202 "dhcp4_parser.yy" // lalr1.cc:919
    { yylhs.value.as < ElementPtr > () = ElementPtr(new StringElement("disabled", ctx.loc2pos(yystack_[0].location))); }
#line 2197 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 334:
#line 1203 "dhcp4_parser.yy" // lalr1.cc:919
    { yylhs.value.as < ElementPtr > () = ElementPtr(new StringElement("out-of-pool", ctx.loc2pos(yystack_[0].location))); }
#line 2203 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 335:
#line 1204 "dhcp4_parser.yy" // lalr1.cc:919
    { yylhs.value.as < ElementPtr > () = ElementPtr(new StringElement("global", ctx.loc2pos(yystack_[0].location))); }
#line 2209 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 336:
#line 1205 "dhcp4_parser.yy" // lalr1.cc:919
    { yylhs.value.as < ElementPtr > () = ElementPtr(new StringElement("all", ctx.loc2pos(yystack_[0].location))); }
#line 2215 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 337:
#line 1208 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr id(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("id", id);
}
#line 2224 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 338:
#line 1215 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr l(new ListElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("shared-networks", l);
    ctx.stack_.push_back(l);
    ctx.enter(ctx.SHARED_NETWORK);
}
#line 2235 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 339:
#line 1220 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 2244 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 344:
#line 1235 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->add(m);
    ctx.stack_.push_back(m);
}
#line 2254 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 345:
#line 1239 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.pop_back();
}
#line 2262 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 373:
#line 1278 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr l(new ListElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("option-def", l);
    ctx.stack_.push_back(l);
    ctx.enter(ctx.OPTION_DEF);
}
#line 2273 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 374:
#line 1283 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 2282 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 375:
#line 1291 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.push_back(m);
}
#line 2291 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 376:
#line 1294 "dhcp4_parser.yy" // lalr1.cc:919
    {
    // parsing completed
}
#line 2299 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 381:
#line 1310 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->add(m);
    ctx.stack_.push_back(m);
}
#line 2309 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 382:
#line 1314 "dhcp4_parser.yy" // lalr1.cc:919
    {
    // The name, code and type option def parameters are required.
    ctx.require("name", ctx.loc2pos(yystack_[3].location), ctx.loc2pos(yystack_[0].location));
    ctx.require("code", ctx.loc2pos(yystack_[3].location), ctx.loc2pos(yystack_[0].location));
    ctx.require("type", ctx.loc2pos(yystack_[3].location), ctx.loc2pos(yystack_[0].location));
    ctx.stack_.pop_back();
}
#line 2321 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 383:
#line 1325 "dhcp4_parser.yy" // lalr1.cc:919
    {
    // Parse the option-def list entry map
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.push_back(m);
}
#line 2331 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 384:
#line 1329 "dhcp4_parser.yy" // lalr1.cc:919
    {
    // The name, code and type option def parameters are required.
    ctx.require("name", ctx.loc2pos(yystack_[3].location), ctx.loc2pos(yystack_[0].location));
    ctx.require("code", ctx.loc2pos(yystack_[3].location), ctx.loc2pos(yystack_[0].location));
    ctx.require("type", ctx.loc2pos(yystack_[3].location), ctx.loc2pos(yystack_[0].location));
    // parsing completed
}
#line 2343 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 400:
#line 1361 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr code(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("code", code);
}
#line 2352 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 402:
#line 1368 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 2360 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 403:
#line 1370 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr prf(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("type", prf);
    ctx.leave();
}
#line 2370 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 404:
#line 1376 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 2378 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 405:
#line 1378 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr rtypes(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("record-types", rtypes);
    ctx.leave();
}
#line 2388 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 406:
#line 1384 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 2396 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 407:
#line 1386 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr space(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("space", space);
    ctx.leave();
}
#line 2406 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 409:
#line 1394 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 2414 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 410:
#line 1396 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr encap(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("encapsulate", encap);
    ctx.leave();
}
#line 2424 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 411:
#line 1402 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr array(new BoolElement(yystack_[0].value.as < bool > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("array", array);
}
#line 2433 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 412:
#line 1411 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr l(new ListElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("option-data", l);
    ctx.stack_.push_back(l);
    ctx.enter(ctx.OPTION_DATA);
}
#line 2444 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 413:
#line 1416 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 2453 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 418:
#line 1435 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->add(m);
    ctx.stack_.push_back(m);
}
#line 2463 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 419:
#line 1439 "dhcp4_parser.yy" // lalr1.cc:919
    {
    /// @todo: the code or name parameters are required.
    ctx.stack_.pop_back();
}
#line 2472 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 420:
#line 1447 "dhcp4_parser.yy" // lalr1.cc:919
    {
    // Parse the option-data list entry map
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.push_back(m);
}
#line 2482 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 421:
#line 1451 "dhcp4_parser.yy" // lalr1.cc:919
    {
    /// @todo: the code or name parameters are required.
    // parsing completed
}
#line 2491 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 436:
#line 1484 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 2499 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 437:
#line 1486 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr data(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("data", data);
    ctx.leave();
}
#line 2509 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 440:
#line 1496 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr space(new BoolElement(yystack_[0].value.as < bool > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("csv-format", space);
}
#line 2518 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 441:
#line 1501 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr persist(new BoolElement(yystack_[0].value.as < bool > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("always-send", persist);
}
#line 2527 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 442:
#line 1509 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr l(new ListElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("pools", l);
    ctx.stack_.push_back(l);
    ctx.enter(ctx.POOLS);
}
#line 2538 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 443:
#line 1514 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 2547 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 448:
#line 1529 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->add(m);
    ctx.stack_.push_back(m);
}
#line 2557 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 449:
#line 1533 "dhcp4_parser.yy" // lalr1.cc:919
    {
    // The pool parameter is required.
    ctx.require("pool", ctx.loc2pos(yystack_[3].location), ctx.loc2pos(yystack_[0].location));
    ctx.stack_.pop_back();
}
#line 2567 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 450:
#line 1539 "dhcp4_parser.yy" // lalr1.cc:919
    {
    // Parse the pool list entry map
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.push_back(m);
}
#line 2577 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 451:
#line 1543 "dhcp4_parser.yy" // lalr1.cc:919
    {
    // The pool parameter is required.
    ctx.require("pool", ctx.loc2pos(yystack_[3].location), ctx.loc2pos(yystack_[0].location));
    // parsing completed
}
#line 2587 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 461:
#line 1562 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 2595 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 462:
#line 1564 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr pool(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("pool", pool);
    ctx.leave();
}
#line 2605 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 463:
#line 1570 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 2613 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 464:
#line 1572 "dhcp4_parser.yy" // lalr1.cc:919
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
#line 2640 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 465:
#line 1595 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 2648 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 466:
#line 1597 "dhcp4_parser.yy" // lalr1.cc:919
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
#line 2677 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 467:
#line 1625 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr l(new ListElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("reservations", l);
    ctx.stack_.push_back(l);
    ctx.enter(ctx.RESERVATIONS);
}
#line 2688 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 468:
#line 1630 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 2697 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 473:
#line 1643 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->add(m);
    ctx.stack_.push_back(m);
}
#line 2707 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 474:
#line 1647 "dhcp4_parser.yy" // lalr1.cc:919
    {
    /// @todo: an identifier parameter is required.
    ctx.stack_.pop_back();
}
#line 2716 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 475:
#line 1652 "dhcp4_parser.yy" // lalr1.cc:919
    {
    // Parse the reservations list entry map
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.push_back(m);
}
#line 2726 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 476:
#line 1656 "dhcp4_parser.yy" // lalr1.cc:919
    {
    /// @todo: an identifier parameter is required.
    // parsing completed
}
#line 2735 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 496:
#line 1687 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 2743 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 497:
#line 1689 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr next_server(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("next-server", next_server);
    ctx.leave();
}
#line 2753 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 498:
#line 1695 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 2761 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 499:
#line 1697 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr srv(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("server-hostname", srv);
    ctx.leave();
}
#line 2771 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 500:
#line 1703 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 2779 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 501:
#line 1705 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr bootfile(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("boot-file-name", bootfile);
    ctx.leave();
}
#line 2789 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 502:
#line 1711 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 2797 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 503:
#line 1713 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr addr(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("ip-address", addr);
    ctx.leave();
}
#line 2807 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 504:
#line 1719 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr l(new ListElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("ip-addresses", l);
    ctx.stack_.push_back(l);
    ctx.enter(ctx.NO_KEYWORD);
}
#line 2818 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 505:
#line 1724 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 2827 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 506:
#line 1729 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 2835 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 507:
#line 1731 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr d(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("duid", d);
    ctx.leave();
}
#line 2845 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 508:
#line 1737 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 2853 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 509:
#line 1739 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr hw(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("hw-address", hw);
    ctx.leave();
}
#line 2863 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 510:
#line 1745 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 2871 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 511:
#line 1747 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr hw(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("client-id", hw);
    ctx.leave();
}
#line 2881 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 512:
#line 1753 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 2889 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 513:
#line 1755 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr hw(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("circuit-id", hw);
    ctx.leave();
}
#line 2899 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 514:
#line 1761 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 2907 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 515:
#line 1763 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr hw(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("flex-id", hw);
    ctx.leave();
}
#line 2917 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 516:
#line 1769 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 2925 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 517:
#line 1771 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr host(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("hostname", host);
    ctx.leave();
}
#line 2935 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 518:
#line 1777 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr c(new ListElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("client-classes", c);
    ctx.stack_.push_back(c);
    ctx.enter(ctx.NO_KEYWORD);
}
#line 2946 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 519:
#line 1782 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 2955 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 520:
#line 1790 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("relay", m);
    ctx.stack_.push_back(m);
    ctx.enter(ctx.RELAY);
}
#line 2966 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 521:
#line 1795 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 2975 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 524:
#line 1807 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr l(new ListElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("client-classes", l);
    ctx.stack_.push_back(l);
    ctx.enter(ctx.CLIENT_CLASSES);
}
#line 2986 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 525:
#line 1812 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 2995 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 528:
#line 1821 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->add(m);
    ctx.stack_.push_back(m);
}
#line 3005 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 529:
#line 1825 "dhcp4_parser.yy" // lalr1.cc:919
    {
    // The name client class parameter is required.
    ctx.require("name", ctx.loc2pos(yystack_[3].location), ctx.loc2pos(yystack_[0].location));
    ctx.stack_.pop_back();
}
#line 3015 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 546:
#line 1854 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 3023 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 547:
#line 1856 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr test(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("test", test);
    ctx.leave();
}
#line 3033 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 548:
#line 1862 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr b(new BoolElement(yystack_[0].value.as < bool > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("only-if-required", b);
}
#line 3042 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 549:
#line 1871 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr time(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("dhcp4o6-port", time);
}
#line 3051 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 550:
#line 1878 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("control-socket", m);
    ctx.stack_.push_back(m);
    ctx.enter(ctx.CONTROL_SOCKET);
}
#line 3062 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 551:
#line 1883 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 3071 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 559:
#line 1899 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 3079 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 560:
#line 1901 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr stype(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("socket-type", stype);
    ctx.leave();
}
#line 3089 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 561:
#line 1907 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 3097 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 562:
#line 1909 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr name(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("socket-name", name);
    ctx.leave();
}
#line 3107 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 563:
#line 1918 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 3115 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 564:
#line 1920 "dhcp4_parser.yy" // lalr1.cc:919
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

    ConstElementPtr enable_queue = qc->get("enable-queue");
    if (enable_queue->getType() != Element::boolean) {
        std::stringstream msg;
        msg << "'enable-queue' must be boolean: ";
        msg  << "(" << qc->getPosition().str() << ")";
        error(yystack_[3].location, msg.str());
    }

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
#line 3153 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 565:
#line 1956 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("dhcp-ddns", m);
    ctx.stack_.push_back(m);
    ctx.enter(ctx.DHCP_DDNS);
}
#line 3164 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 566:
#line 1961 "dhcp4_parser.yy" // lalr1.cc:919
    {
    // The enable updates DHCP DDNS parameter is required.
    ctx.require("enable-updates", ctx.loc2pos(yystack_[2].location), ctx.loc2pos(yystack_[0].location));
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 3175 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 567:
#line 1968 "dhcp4_parser.yy" // lalr1.cc:919
    {
    // Parse the dhcp-ddns map
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.push_back(m);
}
#line 3185 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 568:
#line 1972 "dhcp4_parser.yy" // lalr1.cc:919
    {
    // The enable updates DHCP DDNS parameter is required.
    ctx.require("enable-updates", ctx.loc2pos(yystack_[3].location), ctx.loc2pos(yystack_[0].location));
    // parsing completed
}
#line 3195 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 589:
#line 2002 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr b(new BoolElement(yystack_[0].value.as < bool > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("enable-updates", b);
}
#line 3204 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 590:
#line 2007 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 3212 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 591:
#line 2009 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr s(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("qualifying-suffix", s);
    ctx.leave();
}
#line 3222 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 592:
#line 2015 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 3230 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 593:
#line 2017 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr s(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("server-ip", s);
    ctx.leave();
}
#line 3240 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 594:
#line 2023 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr i(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("server-port", i);
}
#line 3249 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 595:
#line 2028 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 3257 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 596:
#line 2030 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr s(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("sender-ip", s);
    ctx.leave();
}
#line 3267 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 597:
#line 2036 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr i(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("sender-port", i);
}
#line 3276 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 598:
#line 2041 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr i(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("max-queue-size", i);
}
#line 3285 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 599:
#line 2046 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NCR_PROTOCOL);
}
#line 3293 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 600:
#line 2048 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.back()->set("ncr-protocol", yystack_[0].value.as < ElementPtr > ());
    ctx.leave();
}
#line 3302 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 601:
#line 2054 "dhcp4_parser.yy" // lalr1.cc:919
    { yylhs.value.as < ElementPtr > () = ElementPtr(new StringElement("UDP", ctx.loc2pos(yystack_[0].location))); }
#line 3308 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 602:
#line 2055 "dhcp4_parser.yy" // lalr1.cc:919
    { yylhs.value.as < ElementPtr > () = ElementPtr(new StringElement("TCP", ctx.loc2pos(yystack_[0].location))); }
#line 3314 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 603:
#line 2058 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NCR_FORMAT);
}
#line 3322 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 604:
#line 2060 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr json(new StringElement("JSON", ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("ncr-format", json);
    ctx.leave();
}
#line 3332 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 605:
#line 2066 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr b(new BoolElement(yystack_[0].value.as < bool > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("override-no-update", b);
}
#line 3341 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 606:
#line 2071 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr b(new BoolElement(yystack_[0].value.as < bool > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("override-client-update", b);
}
#line 3350 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 607:
#line 2076 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.REPLACE_CLIENT_NAME);
}
#line 3358 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 608:
#line 2078 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.back()->set("replace-client-name", yystack_[0].value.as < ElementPtr > ());
    ctx.leave();
}
#line 3367 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 609:
#line 2084 "dhcp4_parser.yy" // lalr1.cc:919
    {
      yylhs.value.as < ElementPtr > () = ElementPtr(new StringElement("when-present", ctx.loc2pos(yystack_[0].location)));
      }
#line 3375 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 610:
#line 2087 "dhcp4_parser.yy" // lalr1.cc:919
    {
      yylhs.value.as < ElementPtr > () = ElementPtr(new StringElement("never", ctx.loc2pos(yystack_[0].location)));
      }
#line 3383 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 611:
#line 2090 "dhcp4_parser.yy" // lalr1.cc:919
    {
      yylhs.value.as < ElementPtr > () = ElementPtr(new StringElement("always", ctx.loc2pos(yystack_[0].location)));
      }
#line 3391 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 612:
#line 2093 "dhcp4_parser.yy" // lalr1.cc:919
    {
      yylhs.value.as < ElementPtr > () = ElementPtr(new StringElement("when-not-present", ctx.loc2pos(yystack_[0].location)));
      }
#line 3399 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 613:
#line 2096 "dhcp4_parser.yy" // lalr1.cc:919
    {
      error(yystack_[0].location, "boolean values for the replace-client-name are "
                "no longer supported");
      }
#line 3408 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 614:
#line 2102 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 3416 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 615:
#line 2104 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr s(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("generated-prefix", s);
    ctx.leave();
}
#line 3426 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 616:
#line 2110 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 3434 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 617:
#line 2112 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr s(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("hostname-char-set", s);
    ctx.leave();
}
#line 3444 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 618:
#line 2118 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 3452 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 619:
#line 2120 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr s(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("hostname-char-replacement", s);
    ctx.leave();
}
#line 3462 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 620:
#line 2129 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 3470 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 621:
#line 2131 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.back()->set("Dhcp6", yystack_[0].value.as < ElementPtr > ());
    ctx.leave();
}
#line 3479 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 622:
#line 2136 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 3487 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 623:
#line 2138 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.back()->set("DhcpDdns", yystack_[0].value.as < ElementPtr > ());
    ctx.leave();
}
#line 3496 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 624:
#line 2143 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 3504 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 625:
#line 2145 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.back()->set("Control-agent", yystack_[0].value.as < ElementPtr > ());
    ctx.leave();
}
#line 3513 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 626:
#line 2150 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr i(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("config-control", i);
    ctx.stack_.push_back(i);
    ctx.enter(ctx.CONFIG_CONTROL);
}
#line 3524 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 627:
#line 2155 "dhcp4_parser.yy" // lalr1.cc:919
    {
    // No config control params are required
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 3534 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 628:
#line 2161 "dhcp4_parser.yy" // lalr1.cc:919
    {
    // Parse the config-control map
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.push_back(m);
}
#line 3544 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 629:
#line 2165 "dhcp4_parser.yy" // lalr1.cc:919
    {
    // No config_control params are required
    // parsing completed
}
#line 3553 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 634:
#line 2180 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr l(new ListElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("config-databases", l);
    ctx.stack_.push_back(l);
    ctx.enter(ctx.CONFIG_DATABASE);
}
#line 3564 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 635:
#line 2185 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 3573 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 636:
#line 2190 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr value(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("config-fetch-wait-time", value);
}
#line 3582 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 637:
#line 2200 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("Logging", m);
    ctx.stack_.push_back(m);
    ctx.enter(ctx.LOGGING);
}
#line 3593 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 638:
#line 2205 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 3602 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 639:
#line 2210 "dhcp4_parser.yy" // lalr1.cc:919
    {
    // Parse the Logging map
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.push_back(m);
}
#line 3612 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 640:
#line 2214 "dhcp4_parser.yy" // lalr1.cc:919
    {
    // parsing completed
}
#line 3620 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 644:
#line 2230 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr l(new ListElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("loggers", l);
    ctx.stack_.push_back(l);
    ctx.enter(ctx.LOGGERS);
}
#line 3631 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 645:
#line 2235 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 3640 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 648:
#line 2247 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr l(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->add(l);
    ctx.stack_.push_back(l);
}
#line 3650 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 649:
#line 2251 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.pop_back();
}
#line 3658 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 659:
#line 2268 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr dl(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("debuglevel", dl);
}
#line 3667 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 660:
#line 2273 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 3675 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 661:
#line 2275 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr sev(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("severity", sev);
    ctx.leave();
}
#line 3685 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 662:
#line 2281 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr l(new ListElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("output_options", l);
    ctx.stack_.push_back(l);
    ctx.enter(ctx.OUTPUT_OPTIONS);
}
#line 3696 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 663:
#line 2286 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 3705 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 666:
#line 2295 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->add(m);
    ctx.stack_.push_back(m);
}
#line 3715 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 667:
#line 2299 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ctx.stack_.pop_back();
}
#line 3723 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 674:
#line 2313 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 3731 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 675:
#line 2315 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr sev(new StringElement(yystack_[0].value.as < std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("output", sev);
    ctx.leave();
}
#line 3741 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 676:
#line 2321 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr flush(new BoolElement(yystack_[0].value.as < bool > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("flush", flush);
}
#line 3750 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 677:
#line 2326 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr maxsize(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("maxsize", maxsize);
}
#line 3759 "dhcp4_parser.cc" // lalr1.cc:919
    break;

  case 678:
#line 2331 "dhcp4_parser.yy" // lalr1.cc:919
    {
    ElementPtr maxver(new IntElement(yystack_[0].value.as < int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("maxver", maxver);
}
#line 3768 "dhcp4_parser.cc" // lalr1.cc:919
    break;


#line 3772 "dhcp4_parser.cc" // lalr1.cc:919
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
  Dhcp4Parser::error (const syntax_error& yyexc)
  {
    error (yyexc.location, yyexc.what ());
  }

  // Generate an error message.
  std::string
  Dhcp4Parser::yysyntax_error_ (state_type yystate, const symbol_type& yyla) const
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


  const short Dhcp4Parser::yypact_ninf_ = -843;

  const signed char Dhcp4Parser::yytable_ninf_ = -1;

  const short
  Dhcp4Parser::yypact_[] =
  {
     428,  -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,
    -843,  -843,  -843,  -843,  -843,    32,    35,    56,    62,    66,
     117,   126,   153,   162,   179,   206,   208,   236,   278,   304,
    -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,
    -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,
    -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,
    -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,    35,   -77,
      17,   173,    42,   448,    50,   220,    34,    40,   205,   -67,
     479,    28,    78,  -843,   217,   261,   296,   299,   318,  -843,
    -843,  -843,  -843,  -843,   324,  -843,    57,  -843,  -843,  -843,
    -843,  -843,  -843,  -843,  -843,  -843,   332,   333,   334,  -843,
    -843,  -843,  -843,  -843,  -843,   337,   338,   339,   340,   344,
     345,   346,   348,   349,   350,  -843,  -843,  -843,  -843,  -843,
    -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,   351,  -843,
    -843,  -843,  -843,    59,  -843,  -843,  -843,  -843,  -843,  -843,
    -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,
    -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,
    -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,
    -843,  -843,  -843,  -843,  -843,  -843,  -843,   352,  -843,    68,
    -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,
    -843,  -843,  -843,   354,  -843,  -843,  -843,  -843,  -843,  -843,
    -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,    81,
    -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,
    -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,
    -843,  -843,  -843,  -843,    90,  -843,  -843,  -843,  -843,  -843,
    -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,
    -843,   353,   356,  -843,  -843,  -843,  -843,  -843,  -843,  -843,
    -843,  -843,  -843,  -843,  -843,   355,  -843,  -843,   358,  -843,
    -843,  -843,   360,  -843,  -843,   357,   363,  -843,  -843,  -843,
    -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,
     364,   367,  -843,  -843,  -843,  -843,   359,   370,  -843,  -843,
    -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,
      98,  -843,  -843,  -843,   371,  -843,  -843,   372,  -843,   374,
     376,  -843,  -843,   377,   380,  -843,  -843,  -843,  -843,  -843,
    -843,  -843,   115,  -843,  -843,  -843,  -843,  -843,  -843,  -843,
    -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,
     145,  -843,  -843,  -843,   382,   148,  -843,  -843,  -843,  -843,
      35,    35,  -843,   186,   385,   386,   387,   393,   395,  -843,
      17,  -843,   397,   401,   403,   231,   232,   233,   408,   409,
     411,   412,   413,   415,   250,   251,   252,   253,   255,   260,
     245,   262,   263,   265,   429,   437,   440,   441,   444,   449,
     451,   452,   453,   455,   456,   459,   463,   277,   475,   477,
     478,   173,  -843,   480,   498,   499,   306,    42,  -843,   509,
     510,   511,   517,   518,   519,   366,   520,   521,   522,   448,
    -843,   523,    50,  -843,   524,   525,   526,   528,   535,   538,
     539,   540,  -843,   220,  -843,   543,   546,   378,   547,   548,
     550,   381,  -843,    40,   553,   383,   384,  -843,   205,   558,
     559,    95,  -843,   389,   563,   564,   394,   566,   396,   398,
     571,   572,   402,   404,   576,   578,   579,   580,   479,  -843,
     582,    28,  -843,   598,   454,    78,  -843,  -843,  -843,   600,
     612,   614,    35,    35,    35,  -843,   616,   617,   620,  -843,
    -843,  -843,   457,   458,   460,   621,   623,   628,  -843,  -843,
    -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,   461,   631,
     632,   633,   634,   635,   466,   134,   636,   638,   639,   640,
     641,  -843,   642,   635,   643,  -843,   646,   254,   310,  -843,
    -843,   472,   473,   481,   647,   482,   483,  -843,   646,   484,
     652,  -843,   486,  -843,   646,   487,   488,   489,   490,   491,
     492,   493,  -843,   494,   495,  -843,   496,   497,   500,  -843,
    -843,   501,  -843,  -843,  -843,   502,    35,  -843,  -843,   503,
     504,  -843,   505,  -843,  -843,    41,   513,  -843,  -843,   -13,
     506,   507,   508,  -843,   667,  -843,   668,  -843,  -843,    35,
     173,    28,  -843,  -843,  -843,    78,    42,   659,  -843,  -843,
    -843,   446,   446,   677,  -843,   678,   679,   680,   681,  -843,
    -843,  -843,  -843,  -843,  -843,  -843,  -843,   210,   682,   683,
     684,   102,   -37,  -843,   479,  -843,  -843,  -843,  -843,  -843,
    -843,  -843,  -843,  -843,  -843,  -843,   685,  -843,  -843,  -843,
    -843,   225,  -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,
    -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,
    -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,
    -843,  -843,  -843,  -843,  -843,   686,   677,  -843,   149,   155,
     163,   170,  -843,   177,  -843,  -843,  -843,  -843,  -843,  -843,
     690,   691,   692,   693,   694,  -843,  -843,  -843,  -843,   695,
     696,   697,   698,   699,  -843,   185,  -843,  -843,  -843,  -843,
    -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,
    -843,  -843,  -843,  -843,  -843,  -843,   189,  -843,   700,   701,
    -843,  -843,   702,   704,  -843,  -843,   703,   707,  -843,  -843,
     705,   709,  -843,  -843,   708,   710,  -843,  -843,  -843,  -843,
    -843,  -843,    44,  -843,  -843,  -843,  -843,  -843,  -843,  -843,
     111,  -843,  -843,   711,   712,  -843,  -843,   713,   715,  -843,
     716,   717,   718,   719,   720,   721,   238,  -843,  -843,  -843,
    -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,   239,
    -843,  -843,  -843,   257,   531,  -843,   722,   723,  -843,  -843,
    -843,  -843,   724,  -843,   267,  -843,   725,  -843,  -843,  -843,
    -843,   726,   659,  -843,   729,   730,   731,   732,   541,   552,
     562,   561,   565,   735,   737,   738,   739,   569,   570,   573,
     574,   575,   446,  -843,  -843,   446,  -843,   677,   448,  -843,
     678,    40,  -843,   679,   205,  -843,   680,    82,  -843,   681,
     210,  -843,   247,   682,  -843,   220,  -843,   683,   -67,  -843,
     684,   581,   583,   584,   585,   586,   587,   102,  -843,   742,
     743,   -37,  -843,  -843,  -843,   744,   748,    50,  -843,   685,
     749,  -843,     9,   686,  -843,  -843,   589,  -843,   216,   590,
     591,   592,  -843,  -843,  -843,  -843,  -843,   593,   594,   595,
     596,  -843,  -843,  -843,  -843,  -843,  -843,   258,  -843,   259,
    -843,   746,  -843,   747,  -843,  -843,  -843,  -843,  -843,  -843,
    -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,
    -843,  -843,  -843,   285,  -843,  -843,  -843,  -843,  -843,  -843,
    -843,  -843,  -843,  -843,  -843,   753,  -843,  -843,  -843,  -843,
    -843,  -843,  -843,  -843,  -843,   763,   769,  -843,  -843,  -843,
    -843,  -843,   765,  -843,   293,  -843,  -843,  -843,  -843,  -843,
    -843,  -843,  -843,   601,   602,  -843,  -843,   603,   294,  -843,
     646,  -843,   770,  -843,  -843,  -843,  -843,  -843,   300,  -843,
    -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,
    -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,
    -843,    82,  -843,   774,   604,  -843,   247,  -843,  -843,  -843,
    -843,  -843,  -843,  -843,   775,   605,   778,     9,  -843,  -843,
     609,  -843,  -843,   779,  -843,   611,  -843,  -843,   780,  -843,
    -843,   283,  -843,   -76,   780,  -843,  -843,   782,   785,   786,
     301,  -843,  -843,  -843,  -843,  -843,  -843,   788,   618,   649,
     651,   -76,  -843,   619,  -843,  -843,  -843,  -843,  -843
  };

  const unsigned short
  Dhcp4Parser::yydefact_[] =
  {
       0,     2,     4,     6,     8,    10,    12,    14,    16,    18,
      20,    22,    24,    26,    28,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,    45,    38,    34,    33,    30,    31,    32,    37,     3,
      35,    36,    58,     5,    70,     7,   140,     9,   283,    11,
     450,    13,   475,    15,   375,    17,   383,    19,   420,    21,
     248,    23,   567,    25,   639,    27,   628,    29,    47,    41,
       0,     0,     0,     0,     0,   477,     0,   385,   422,     0,
       0,     0,     0,    49,     0,    48,     0,     0,    42,    68,
     637,   620,   622,   624,     0,    67,     0,    60,    62,    64,
      65,    66,    63,   626,   129,   155,     0,     0,     0,   496,
     498,   500,   153,   162,   164,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   124,   275,   373,   412,   338,
     463,   465,   331,   226,   524,   467,   240,   259,     0,   550,
     563,   565,   113,     0,    72,    74,    75,    76,    77,    78,
      79,   110,   111,   112,    80,   108,    97,    98,    99,    83,
      84,   105,    85,    86,    87,    91,    92,    81,   109,    82,
      89,    90,   103,   104,   106,   100,   101,   102,    88,    93,
      94,    95,    96,   107,   142,   144,   148,     0,   139,     0,
     131,   133,   134,   135,   136,   137,   138,   319,   321,   323,
     442,   317,   325,     0,   329,   327,   520,   316,   287,   288,
     289,   290,   291,   292,   313,   314,   315,   303,   304,     0,
     285,   295,   308,   309,   310,   296,   298,   299,   301,   297,
     293,   294,   311,   312,   300,   305,   306,   307,   302,   461,
     460,   456,   457,   455,     0,   452,   454,   458,   459,   518,
     506,   508,   512,   510,   516,   514,   502,   495,   489,   493,
     494,     0,   478,   479,   490,   491,   492,   486,   481,   487,
     483,   484,   485,   488,   482,     0,   402,   207,     0,   406,
     404,   409,     0,   398,   399,     0,   386,   387,   389,   401,
     390,   391,   392,   408,   393,   394,   395,   396,   397,   436,
       0,     0,   434,   435,   438,   439,     0,   423,   424,   426,
     427,   428,   429,   430,   431,   432,   433,   255,   257,   252,
       0,   250,   253,   254,     0,   590,   592,     0,   595,     0,
       0,   599,   603,     0,     0,   607,   614,   616,   618,   588,
     586,   587,     0,   569,   571,   572,   573,   574,   575,   576,
     577,   578,   579,   580,   581,   582,   583,   584,   585,   644,
       0,   641,   643,   634,     0,     0,   630,   632,   633,    46,
       0,     0,    39,     0,     0,     0,     0,     0,     0,    57,
       0,    59,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    71,     0,     0,     0,     0,     0,   141,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     284,     0,     0,   451,     0,     0,     0,     0,     0,     0,
       0,     0,   476,     0,   376,     0,     0,     0,     0,     0,
       0,     0,   384,     0,     0,     0,     0,   421,     0,     0,
       0,     0,   249,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   568,
       0,     0,   640,     0,     0,     0,   629,    50,    43,     0,
       0,     0,     0,     0,     0,    61,     0,     0,     0,   126,
     127,   128,     0,     0,     0,     0,     0,     0,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   549,     0,     0,     0,    73,     0,     0,     0,   152,
     132,     0,     0,     0,     0,     0,     0,   337,     0,     0,
       0,   286,     0,   453,     0,     0,     0,     0,     0,     0,
       0,     0,   480,     0,     0,   400,     0,     0,     0,   411,
     388,     0,   440,   441,   425,     0,     0,   251,   589,     0,
       0,   594,     0,   597,   598,     0,     0,   605,   606,     0,
       0,     0,     0,   570,     0,   642,     0,   636,   631,     0,
       0,     0,   621,   623,   625,     0,     0,     0,   497,   499,
     501,     0,     0,   166,   125,   277,   377,   414,   340,    40,
     464,   466,   333,   334,   335,   336,   332,     0,     0,   469,
     242,     0,     0,   564,     0,    51,   143,   146,   147,   145,
     150,   151,   149,   320,   322,   324,   444,   318,   326,   330,
     328,     0,   462,   519,   507,   509,   513,   511,   517,   515,
     503,   403,   208,   407,   405,   410,   437,   256,   258,   591,
     593,   596,   601,   602,   600,   604,   609,   610,   611,   612,
     613,   608,   615,   617,   619,     0,   166,    44,     0,     0,
       0,     0,   160,     0,   157,   159,   194,   200,   202,   204,
       0,     0,     0,     0,     0,   216,   218,   220,   222,     0,
       0,     0,     0,     0,   193,     0,   172,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   187,   188,   189,
     184,   190,   191,   192,   185,   186,     0,   170,     0,   167,
     168,   281,     0,   278,   279,   381,     0,   378,   379,   418,
       0,   415,   416,   344,     0,   341,   342,   235,   236,   237,
     238,   239,     0,   228,   230,   231,   232,   233,   234,   528,
       0,   526,   473,     0,   470,   471,   246,     0,   243,   244,
       0,     0,     0,     0,     0,     0,     0,   261,   263,   264,
     265,   266,   267,   268,   559,   561,   558,   556,   557,     0,
     552,   554,   555,     0,    53,   448,     0,   445,   446,   504,
     522,   523,     0,   648,     0,   646,     0,    69,   638,   627,
     130,     0,     0,   156,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   154,   163,     0,   165,     0,     0,   276,
       0,   385,   374,     0,   422,   413,     0,     0,   339,     0,
       0,   227,   530,     0,   525,   477,   468,     0,     0,   241,
       0,     0,     0,     0,     0,     0,     0,     0,   260,     0,
       0,     0,   551,   566,    55,     0,    54,     0,   443,     0,
       0,   521,     0,     0,   645,   635,     0,   158,     0,     0,
       0,     0,   206,   209,   210,   211,   212,     0,     0,     0,
       0,   224,   225,   213,   214,   215,   173,     0,   169,     0,
     280,     0,   380,     0,   417,   372,   363,   364,   365,   366,
     351,   352,   369,   370,   371,   354,   355,   348,   349,   350,
     361,   362,   360,     0,   346,   353,   367,   368,   356,   357,
     358,   359,   343,   229,   546,     0,   544,   545,   537,   538,
     542,   543,   539,   540,   541,     0,   531,   532,   534,   535,
     536,   527,     0,   472,     0,   245,   269,   270,   271,   272,
     273,   274,   262,     0,     0,   553,    52,     0,     0,   447,
       0,   662,     0,   660,   658,   652,   656,   657,     0,   650,
     654,   655,   653,   647,   161,   196,   197,   198,   199,   195,
     201,   203,   205,   217,   219,   221,   223,   171,   282,   382,
     419,     0,   345,     0,     0,   529,     0,   474,   247,   560,
     562,    56,   449,   505,     0,     0,     0,     0,   649,   347,
       0,   548,   533,     0,   659,     0,   651,   547,     0,   661,
     666,     0,   664,     0,     0,   663,   674,     0,     0,     0,
       0,   668,   670,   671,   672,   673,   665,     0,     0,     0,
       0,     0,   667,     0,   676,   677,   678,   669,   675
  };

  const short
  Dhcp4Parser::yypgoto_[] =
  {
    -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,
    -843,  -843,  -843,  -843,  -843,  -843,   -31,  -843,  -490,  -843,
     184,  -843,  -843,  -843,  -843,  -843,  -843,  -536,  -843,  -843,
    -843,   -70,  -843,  -843,  -843,   423,  -843,  -843,  -843,  -843,
     196,   392,   -47,   -44,     4,    12,    15,    19,    23,    26,
      27,  -843,  -843,  -843,  -843,    29,    30,  -843,  -843,   200,
     390,  -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,
    -843,  -843,  -843,  -843,  -843,  -843,  -843,    -2,  -843,  -843,
    -843,  -843,  -843,  -843,   135,  -843,   -20,  -843,  -598,    -9,
    -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,
     -26,  -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,
    -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,
    -843,  -843,   -23,  -843,  -843,  -843,  -843,  -843,  -843,  -843,
    -843,  -843,   -36,  -843,  -843,  -843,   -29,   379,  -843,  -843,
    -843,  -843,  -843,  -843,  -843,   -33,  -843,  -843,  -843,  -843,
    -843,  -843,  -842,  -843,  -843,  -843,    -1,  -843,  -843,  -843,
       3,   418,  -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,
    -837,  -843,   -68,  -843,   -55,  -843,    31,  -843,  -843,  -843,
    -843,  -843,  -843,  -843,     5,  -843,  -843,  -164,   -63,  -843,
    -843,  -843,  -843,  -843,    36,  -843,  -843,  -843,    39,  -843,
     432,  -843,   -66,  -843,  -843,  -843,  -843,  -843,   -64,  -843,
    -843,  -843,  -843,  -843,   -19,  -843,  -843,  -843,    25,  -843,
    -843,  -843,    37,  -843,   424,  -843,  -843,  -843,  -843,  -843,
    -843,  -843,  -843,  -843,  -843,  -843,     6,  -843,  -843,  -843,
       7,   464,  -843,  -843,   -57,  -843,   -39,  -843,   -62,  -843,
    -843,  -843,    33,  -843,  -843,  -843,    38,  -843,   450,    -7,
    -843,    -3,  -843,     8,  -843,   241,  -843,  -843,  -843,  -843,
    -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,
    -843,  -843,  -843,  -836,  -843,  -843,  -843,  -843,  -843,    43,
    -843,  -843,  -843,  -129,  -843,  -843,  -843,  -843,  -843,  -843,
    -843,  -843,    18,  -843,  -843,  -843,  -843,  -843,  -843,  -843,
    -843,  -843,  -843,   264,   426,  -843,  -843,  -843,  -843,  -843,
    -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,
    -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,
    -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,
    -843,   297,   416,  -843,  -843,  -843,  -843,  -843,  -843,  -843,
     307,   430,  -843,  -843,  -843,    14,  -843,  -843,  -132,  -843,
    -843,  -843,  -843,  -843,  -843,  -145,  -843,  -843,  -161,  -843,
    -843,  -843,  -843,  -843
  };

  const short
  Dhcp4Parser::yydefgoto_[] =
  {
      -1,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    38,    39,    40,    69,
     630,    87,    88,    41,    68,    84,    85,   646,   814,   895,
     896,   724,    43,    70,    96,    97,    98,   374,    45,    71,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   404,   156,   157,   158,   159,   383,   189,
     190,    47,    72,   191,   423,   192,   424,   649,   193,   425,
     652,   194,   160,   391,   161,   384,   703,   704,   705,   831,
     162,   392,   163,   393,   748,   749,   750,   855,   725,   726,
     727,   834,  1019,   728,   835,   729,   836,   730,   837,   731,
     732,   456,   733,   734,   735,   736,   737,   738,   739,   740,
     843,   741,   844,   742,   845,   743,   846,   744,   745,   164,
     412,   772,   773,   774,   775,   776,   777,   778,   165,   415,
     787,   788,   789,   878,    61,    79,   320,   321,   322,   469,
     323,   470,   166,   416,   796,   797,   798,   799,   800,   801,
     802,   803,   167,   405,   752,   753,   754,   858,    49,    73,
     219,   220,   221,   433,   222,   429,   223,   430,   224,   431,
     225,   434,   226,   437,   227,   436,   168,   411,   636,   229,
     169,   408,   764,   765,   766,   867,   953,   954,   170,   406,
      55,    76,   756,   757,   758,   861,    57,    77,   285,   286,
     287,   288,   289,   290,   291,   455,   292,   459,   293,   458,
     294,   295,   460,   296,   171,   407,   760,   761,   762,   864,
      59,    78,   306,   307,   308,   309,   310,   464,   311,   312,
     313,   314,   231,   432,   816,   817,   818,   897,    51,    74,
     244,   245,   246,   441,   172,   409,   173,   410,   174,   414,
     783,   784,   785,   875,    53,    75,   261,   262,   263,   175,
     388,   176,   389,   177,   390,   267,   451,   821,   900,   268,
     445,   269,   446,   270,   448,   271,   447,   272,   450,   273,
     449,   274,   444,   238,   438,   822,   178,   413,   780,   781,
     872,   975,   976,   977,   978,   979,  1033,   980,   179,   180,
     418,   809,   810,   811,   889,   812,   890,   181,   419,   182,
     420,    63,    80,   342,   343,   344,   345,   474,   346,   475,
     347,   348,   477,   349,   350,   351,   480,   684,   352,   481,
     353,   354,   355,   484,   691,   356,   485,   357,   486,   358,
     487,    99,   376,   100,   377,   101,   378,   183,   382,    67,
      82,   365,   366,   367,   493,   368,   102,   375,    65,    81,
     360,   361,   362,   490,   824,   825,   902,  1008,  1009,  1010,
    1011,  1046,  1012,  1044,  1061,  1062,  1063,  1070,  1071,  1072,
    1077,  1073,  1074,  1075
  };

  const unsigned short
  Dhcp4Parser::yytable_[] =
  {
      95,   142,   188,   207,   240,   257,   241,   283,   302,   319,
     339,   234,   304,   275,   305,   195,   232,   247,   259,   242,
     297,   315,   659,   340,   746,   948,   208,    89,   663,   209,
     949,   961,    30,   196,   233,   248,   260,    83,   298,   316,
      31,   341,    32,   629,    33,   317,   318,   870,   130,   131,
     871,   284,   303,   629,   230,   243,   258,   184,   185,   682,
     380,   186,   421,    42,   187,   381,   235,   422,   264,    44,
     236,   427,   265,    46,   276,  1066,   428,   210,  1067,  1068,
    1069,   237,   277,   266,   439,   211,   804,   805,   212,   440,
     363,   364,   213,   442,   130,   131,   214,    86,   443,   215,
     216,   471,   217,   218,   228,   127,   472,    94,   107,   108,
     109,   110,   111,   277,   873,   278,   279,   874,   488,   280,
     281,   282,   128,   489,    48,   130,   131,   130,   131,   686,
     687,   688,   689,    50,   239,   130,   131,    94,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   204,   491,   126,
     205,   495,   421,   492,   128,   277,   496,   827,   491,  1001,
      52,  1002,  1003,   828,   690,    90,   495,   130,   131,    54,
     202,   829,   132,   427,    91,    92,    93,   359,   830,   204,
     832,   683,   205,    94,   103,   833,    56,   104,   852,   948,
     206,    94,   852,   853,   949,   961,   105,   854,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   317,   318,    34,
      35,    36,    37,    58,    94,    60,    94,   790,   791,   792,
     793,   794,   795,   369,    94,   632,   633,   634,   635,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   887,   891,    62,   127,   128,   888,   892,   109,   110,
     111,  1015,  1016,  1017,  1018,   129,    94,   927,   130,   131,
     488,   852,   439,   132,   370,   893,  1027,  1028,   133,   134,
     903,   647,   648,   904,   135,   109,   110,   111,   277,   299,
     278,   279,   300,   301,   136,    64,  1064,   137,  1031,  1065,
     130,   131,   128,  1032,   138,   139,   471,   442,   140,   141,
     371,  1038,  1042,  1047,  1081,   130,   131,   372,  1048,  1082,
      95,    66,   767,   768,   769,   770,   249,   771,   127,   128,
     277,   373,   250,   251,   252,   253,   254,   255,   379,   256,
     650,   651,   130,   131,   256,   819,   385,   386,   387,   497,
     498,   394,   395,   396,   397,   964,   965,    94,   398,   399,
     400,   142,   401,   402,   403,   417,   426,   188,   435,   453,
     499,   452,   457,   454,   461,   462,   463,   467,   465,   207,
     195,   466,   240,   468,   241,   473,   476,   234,   478,    94,
     479,   482,   232,   257,   483,   247,   494,   242,   196,   500,
     501,   502,   208,   283,    94,   209,   259,   503,   302,   504,
     233,   506,   304,   248,   305,   507,   297,   508,   509,   510,
     511,   315,   512,   513,   260,   514,   515,   516,   339,   517,
     230,    94,   524,   243,   298,   518,   519,   520,   521,   316,
     522,   340,   235,   528,   258,   523,   236,   284,   525,   526,
     527,   529,   303,   210,   530,   531,   264,   237,   532,   341,
     265,   211,   541,   533,   212,   534,   535,   536,   213,   537,
     538,   266,   214,   539,  1043,   215,   216,   540,   217,   218,
     228,   612,   613,   614,   107,   108,   109,   110,   111,   542,
     706,   543,   544,   549,   546,   707,   708,   709,   710,   711,
     712,   713,   714,   715,   716,   717,   718,   719,   720,   721,
     722,   723,   547,   548,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   551,   552,   553,   197,   198,   199,   277,
     128,   554,   555,   556,   558,   559,   560,   562,   564,   565,
     566,   200,   567,   130,   131,   201,   202,   203,   132,   568,
     142,   557,   569,   570,   571,   204,   188,   573,   205,   135,
     574,   576,   577,   575,   578,   678,   206,   581,   579,   195,
     582,   583,   585,   586,   130,   131,   588,   589,   590,   591,
     592,   593,   806,   594,   339,   595,   596,   196,   697,   597,
     599,   598,   600,   601,   602,   807,   604,   340,     1,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,   606,   808,   609,   341,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   610,
      94,   611,    94,   615,   616,   337,   338,   617,   621,   607,
     622,   618,   619,   623,   620,   624,   625,   626,   627,   628,
     631,   637,    32,   638,   639,   640,   653,   654,   641,   642,
     644,   645,   656,    94,   685,   655,   657,   658,   660,   661,
     662,   664,   665,   666,   667,   668,   669,   670,   671,   672,
     673,   674,   695,   696,   675,   676,   677,   679,   680,   681,
     692,   693,   694,   702,   747,   751,   755,   759,   763,   779,
     782,   786,   815,   823,   838,   839,   840,   841,   842,   847,
     848,   849,   850,   851,   857,   894,   856,   860,   859,   862,
     863,   865,   866,   869,   868,   877,   912,   876,   880,   879,
     881,   882,   883,   884,   885,   886,   899,   643,   898,   913,
     906,   905,   901,   908,   909,   910,   911,   914,   915,   917,
     916,   918,   919,   920,   921,   922,   993,   994,   923,   924,
     996,   997,   925,  1000,  1029,  1030,   986,  1034,   987,   988,
     989,   990,   991,  1014,  1020,  1021,  1022,  1023,  1024,  1025,
    1026,  1035,  1036,  1037,  1045,  1039,  1040,  1041,  1050,  1053,
    1054,  1051,  1055,  1057,  1058,  1059,  1078,  1060,   207,  1079,
    1080,   283,  1083,  1088,   302,  1084,   234,   935,   304,   950,
     305,   232,   966,   505,   297,   257,   698,   315,   319,   968,
     956,   208,   951,   545,   209,   970,   701,   550,   259,   233,
     936,   806,   298,   937,  1085,   316,  1086,   240,   957,   241,
     907,   826,  1004,   971,   807,   284,   260,   928,   303,   230,
     247,   947,   242,   926,   985,  1006,   967,   963,   955,   984,
     587,   235,   808,   969,   992,   236,   258,   561,   248,   930,
     958,   929,   210,  1007,   959,   972,   237,  1049,   264,   973,
     211,   938,   265,   212,   962,   960,  1005,   213,   243,   939,
     974,   214,   940,   266,   215,   216,   941,   217,   218,   228,
     942,   934,   584,   943,   944,   580,   945,   946,   952,   932,
     931,   933,   820,   572,   998,   999,   563,  1052,   813,   995,
     983,   608,   700,   982,   603,  1056,   981,  1013,   699,  1076,
    1087,   605,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   935,     0,   950,     0,     0,   966,     0,     0,     0,
       0,     0,     0,   968,   956,     0,   951,  1004,     0,   970,
       0,     0,     0,     0,   936,     0,     0,   937,     0,     0,
    1006,     0,   957,     0,     0,     0,     0,   971,     0,     0,
       0,     0,     0,     0,     0,   947,     0,     0,  1007,     0,
     967,     0,   955,     0,     0,     0,     0,   969,     0,     0,
       0,  1005,     0,     0,   958,     0,     0,     0,   959,   972,
       0,     0,     0,   973,     0,   938,     0,     0,     0,   960,
       0,     0,     0,   939,   974,     0,   940,     0,     0,     0,
     941,     0,     0,     0,   942,     0,     0,   943,   944,     0,
     945,   946,   952
  };

  const short
  Dhcp4Parser::yycheck_[] =
  {
      70,    71,    72,    73,    74,    75,    74,    77,    78,    79,
      80,    73,    78,    76,    78,    72,    73,    74,    75,    74,
      77,    78,   558,    80,   622,   867,    73,    10,   564,    73,
     867,   867,     0,    72,    73,    74,    75,    68,    77,    78,
       5,    80,     7,   533,     9,   112,   113,     3,    85,    86,
       6,    77,    78,   543,    73,    74,    75,    15,    16,    18,
       3,    19,     3,     7,    22,     8,    73,     8,    75,     7,
      73,     3,    75,     7,    34,   151,     8,    73,   154,   155,
     156,    73,    73,    75,     3,    73,   123,   124,    73,     8,
      12,    13,    73,     3,    85,    86,    73,   174,     8,    73,
      73,     3,    73,    73,    73,    71,     8,   174,    26,    27,
      28,    29,    30,    73,     3,    75,    76,     6,     3,    79,
      80,    81,    72,     8,     7,    85,    86,    85,    86,   142,
     143,   144,   145,     7,    84,    85,    86,   174,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    97,     3,    67,
     100,     3,     3,     8,    72,    73,     8,     8,     3,   150,
       7,   152,   153,     8,   177,   148,     3,    85,    86,     7,
      88,     8,    90,     3,   157,   158,   159,   149,     8,    97,
       3,   140,   100,   174,    11,     8,     7,    14,     3,  1031,
     108,   174,     3,     8,  1031,  1031,    23,     8,    25,    26,
      27,    28,    29,    30,    31,    32,    33,   112,   113,   174,
     175,   176,   177,     7,   174,     7,   174,   115,   116,   117,
     118,   119,   120,     6,   174,    91,    92,    93,    94,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,     3,     3,     7,    71,    72,     8,     8,    28,    29,
      30,    35,    36,    37,    38,    82,   174,   855,    85,    86,
       3,     3,     3,    90,     3,     8,     8,     8,    95,    96,
       3,    17,    18,     6,   101,    28,    29,    30,    73,    74,
      75,    76,    77,    78,   111,     7,     3,   114,     3,     6,
      85,    86,    72,     8,   121,   122,     3,     3,   125,   126,
       4,     8,     8,     3,     3,    85,    86,     8,     8,     8,
     380,     7,   102,   103,   104,   105,    96,   107,    71,    72,
      73,     3,   102,   103,   104,   105,   106,   107,     4,   109,
      20,    21,    85,    86,   109,   110,     4,     4,     4,   370,
     371,     4,     4,     4,     4,    98,    99,   174,     4,     4,
       4,   421,     4,     4,     4,     4,     4,   427,     4,     3,
     174,     8,     4,     8,     4,     8,     3,     8,     4,   439,
     427,     4,   442,     3,   442,     4,     4,   439,     4,   174,
       4,     4,   439,   453,     4,   442,     4,   442,   427,     4,
       4,     4,   439,   463,   174,   439,   453,     4,   468,     4,
     439,     4,   468,   442,   468,     4,   463,     4,   177,   177,
     177,   468,     4,     4,   453,     4,     4,     4,   488,     4,
     439,   174,   177,   442,   463,   175,   175,   175,   175,   468,
     175,   488,   439,     4,   453,   175,   439,   463,   176,   176,
     175,     4,   468,   439,     4,     4,   453,   439,     4,   488,
     453,   439,   175,     4,   439,     4,     4,     4,   439,     4,
       4,   453,   439,     4,  1000,   439,   439,     4,   439,   439,
     439,   502,   503,   504,    26,    27,    28,    29,    30,     4,
      34,     4,     4,   177,     4,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,     4,     4,    56,    57,    58,    59,    60,    61,
      62,    63,    64,     4,     4,     4,    68,    69,    70,    73,
      72,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,    83,     4,    85,    86,    87,    88,    89,    90,     4,
     610,   175,     4,     4,     4,    97,   616,     4,   100,   101,
       4,     4,     4,   175,     4,   586,   108,     4,   177,   616,
     177,   177,     4,     4,    85,    86,   177,     4,     4,   175,
       4,   175,   642,   175,   644,     4,     4,   616,   609,   177,
       4,   177,     4,     4,     4,   642,     4,   644,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,     4,   642,     4,   644,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,     7,
     174,     7,   174,     7,     7,   146,   147,     7,     7,   175,
       7,   174,   174,     5,   174,   174,     5,     5,     5,     5,
     174,     5,     7,     5,     5,     5,   174,   174,     7,     7,
       7,     5,     5,   174,   141,   174,   174,   174,   174,     7,
     174,   174,   174,   174,   174,   174,   174,   174,   174,   174,
     174,   174,     5,     5,   174,   174,   174,   174,   174,   174,
     174,   174,   174,    24,     7,     7,     7,     7,     7,     7,
       7,     7,     7,     7,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     3,   174,     6,     3,     6,     6,
       3,     6,     3,     3,     6,     3,   175,     6,     3,     6,
       4,     4,     4,     4,     4,     4,     3,   543,     6,   177,
       4,     6,     8,     4,     4,     4,     4,   175,   177,     4,
     175,     4,     4,     4,   175,   175,     4,     4,   175,   175,
       6,     3,   177,     4,     8,     8,   175,     4,   175,   175,
     175,   175,   175,   174,   174,   174,   174,   174,   174,   174,
     174,     8,     3,     8,     4,   174,   174,   174,     4,     4,
     175,   177,     4,   174,     5,   174,     4,     7,   858,     4,
       4,   861,     4,   174,   864,   177,   858,   867,   864,   867,
     864,   858,   872,   380,   861,   875,   610,   864,   878,   872,
     867,   858,   867,   421,   858,   872,   616,   427,   875,   858,
     867,   891,   861,   867,   175,   864,   175,   897,   867,   897,
     832,   696,   902,   872,   891,   861,   875,   857,   864,   858,
     897,   867,   897,   852,   880,   902,   872,   870,   867,   878,
     471,   858,   891,   872,   887,   858,   875,   439,   897,   860,
     867,   858,   858,   902,   867,   872,   858,  1031,   875,   872,
     858,   867,   875,   858,   869,   867,   902,   858,   897,   867,
     872,   858,   867,   875,   858,   858,   867,   858,   858,   858,
     867,   866,   468,   867,   867,   463,   867,   867,   867,   863,
     861,   864,   661,   453,   897,   899,   442,  1036,   644,   891,
     877,   495,   615,   875,   488,  1047,   873,   903,   611,  1064,
    1081,   491,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1031,    -1,  1031,    -1,    -1,  1036,    -1,    -1,    -1,
      -1,    -1,    -1,  1036,  1031,    -1,  1031,  1047,    -1,  1036,
      -1,    -1,    -1,    -1,  1031,    -1,    -1,  1031,    -1,    -1,
    1047,    -1,  1031,    -1,    -1,    -1,    -1,  1036,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1031,    -1,    -1,  1047,    -1,
    1036,    -1,  1031,    -1,    -1,    -1,    -1,  1036,    -1,    -1,
      -1,  1047,    -1,    -1,  1031,    -1,    -1,    -1,  1031,  1036,
      -1,    -1,    -1,  1036,    -1,  1031,    -1,    -1,    -1,  1031,
      -1,    -1,    -1,  1031,  1036,    -1,  1031,    -1,    -1,    -1,
    1031,    -1,    -1,    -1,  1031,    -1,    -1,  1031,  1031,    -1,
    1031,  1031,  1031
  };

  const unsigned short
  Dhcp4Parser::yystos_[] =
  {
       0,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
       0,     5,     7,     9,   174,   175,   176,   177,   194,   195,
     196,   201,     7,   210,     7,   216,     7,   239,     7,   336,
       7,   416,     7,   432,     7,   368,     7,   374,     7,   398,
       7,   312,     7,   489,     7,   536,     7,   527,   202,   197,
     211,   217,   240,   337,   417,   433,   369,   375,   399,   313,
     490,   537,   528,   194,   203,   204,   174,   199,   200,    10,
     148,   157,   158,   159,   174,   209,   212,   213,   214,   519,
     521,   523,   534,    11,    14,    23,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    71,    72,    82,
      85,    86,    90,    95,    96,   101,   111,   114,   121,   122,
     125,   126,   209,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   232,   233,   234,   235,
     250,   252,   258,   260,   297,   306,   320,   330,   354,   358,
     366,   392,   422,   424,   426,   437,   439,   441,   464,   476,
     477,   485,   487,   525,    15,    16,    19,    22,   209,   237,
     238,   241,   243,   246,   249,   422,   424,    68,    69,    70,
      83,    87,    88,    89,    97,   100,   108,   209,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   233,   234,   338,
     339,   340,   342,   344,   346,   348,   350,   352,   354,   357,
     392,   410,   422,   424,   426,   437,   439,   441,   461,    84,
     209,   350,   352,   392,   418,   419,   420,   422,   424,    96,
     102,   103,   104,   105,   106,   107,   109,   209,   392,   422,
     424,   434,   435,   436,   437,   439,   441,   443,   447,   449,
     451,   453,   455,   457,   459,   366,    34,    73,    75,    76,
      79,    80,    81,   209,   278,   376,   377,   378,   379,   380,
     381,   382,   384,   386,   388,   389,   391,   422,   424,    74,
      77,    78,   209,   278,   380,   386,   400,   401,   402,   403,
     404,   406,   407,   408,   409,   422,   424,   112,   113,   209,
     314,   315,   316,   318,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   146,   147,   209,
     422,   424,   491,   492,   493,   494,   496,   498,   499,   501,
     502,   503,   506,   508,   509,   510,   513,   515,   517,   149,
     538,   539,   540,    12,    13,   529,   530,   531,   533,     6,
       3,     4,     8,     3,   215,   535,   520,   522,   524,     4,
       3,     8,   526,   236,   253,     4,     4,     4,   438,   440,
     442,   251,   259,   261,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,   231,   331,   367,   393,   359,   423,
     425,   355,   298,   465,   427,   307,   321,     4,   478,   486,
     488,     3,     8,   242,   244,   247,     4,     3,     8,   343,
     345,   347,   411,   341,   349,     4,   353,   351,   462,     3,
       8,   421,     3,     8,   460,   448,   450,   454,   452,   458,
     456,   444,     8,     3,     8,   383,   279,     4,   387,   385,
     390,     4,     8,     3,   405,     4,     4,     8,     3,   317,
     319,     3,     8,     4,   495,   497,     4,   500,     4,     4,
     504,   507,     4,     4,   511,   514,   516,   518,     3,     8,
     541,     3,     8,   532,     4,     3,     8,   194,   194,   174,
       4,     4,     4,     4,     4,   213,     4,     4,     4,   177,
     177,   177,     4,     4,     4,     4,     4,     4,   175,   175,
     175,   175,   175,   175,   177,   176,   176,   175,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,   175,     4,     4,     4,   219,     4,     4,     4,   177,
     238,     4,     4,     4,     4,     4,     4,   175,     4,     4,
       4,   339,     4,   419,     4,     4,     4,     4,     4,     4,
       4,     4,   436,     4,     4,   175,     4,     4,     4,   177,
     378,     4,   177,   177,   402,     4,     4,   315,   177,     4,
       4,   175,     4,   175,   175,     4,     4,   177,   177,     4,
       4,     4,     4,   492,     4,   539,     4,   175,   530,     4,
       7,     7,   194,   194,   194,     7,     7,     7,   174,   174,
     174,     7,     7,     5,   174,     5,     5,     5,     5,   196,
     198,   174,    91,    92,    93,    94,   356,     5,     5,     5,
       5,     7,     7,   198,     7,     5,   205,    17,    18,   245,
      20,    21,   248,   174,   174,   174,     5,   174,   174,   205,
     174,     7,   174,   205,   174,   174,   174,   174,   174,   174,
     174,   174,   174,   174,   174,   174,   174,   174,   194,   174,
     174,   174,    18,   140,   505,   141,   142,   143,   144,   145,
     177,   512,   174,   174,   174,     5,     5,   194,   218,   538,
     529,   237,    24,   254,   255,   256,    34,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,   209,   266,   267,   268,   271,   273,
     275,   277,   278,   280,   281,   282,   283,   284,   285,   286,
     287,   289,   291,   293,   295,   296,   266,     7,   262,   263,
     264,     7,   332,   333,   334,     7,   370,   371,   372,     7,
     394,   395,   396,     7,   360,   361,   362,   102,   103,   104,
     105,   107,   299,   300,   301,   302,   303,   304,   305,     7,
     466,   467,     7,   428,   429,   430,     7,   308,   309,   310,
     115,   116,   117,   118,   119,   120,   322,   323,   324,   325,
     326,   327,   328,   329,   123,   124,   209,   422,   424,   479,
     480,   481,   483,   491,   206,     7,   412,   413,   414,   110,
     443,   445,   463,     7,   542,   543,   262,     8,     8,     8,
       8,   257,     3,     8,   269,   272,   274,   276,     4,     4,
       4,     4,     4,   288,   290,   292,   294,     4,     4,     4,
       4,     4,     3,     8,     8,   265,     6,     3,   335,     6,
       3,   373,     6,     3,   397,     6,     3,   363,     6,     3,
       3,     6,   468,     3,     6,   431,     6,     3,   311,     6,
       3,     4,     4,     4,     4,     4,     4,     3,     8,   482,
     484,     3,     8,     8,   174,   207,   208,   415,     6,     3,
     446,     8,   544,     3,     6,     6,     4,   255,     4,     4,
       4,     4,   175,   177,   175,   177,   175,     4,     4,     4,
       4,   175,   175,   175,   175,   177,   267,   266,   264,   338,
     334,   376,   372,   400,   396,   209,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   233,   234,   278,   330,   348,
     350,   352,   354,   364,   365,   392,   422,   424,   437,   439,
     441,   461,   362,   300,    98,    99,   209,   278,   366,   392,
     422,   424,   437,   439,   441,   469,   470,   471,   472,   473,
     475,   467,   434,   430,   314,   310,   175,   175,   175,   175,
     175,   175,   323,     4,     4,   480,     6,     3,   418,   414,
       4,   150,   152,   153,   209,   278,   422,   424,   545,   546,
     547,   548,   550,   543,   174,    35,    36,    37,    38,   270,
     174,   174,   174,   174,   174,   174,   174,     8,     8,     8,
       8,     3,     8,   474,     4,     8,     3,     8,     8,   174,
     174,   174,     8,   205,   551,     4,   549,     3,     8,   365,
       4,   177,   471,     4,   175,     4,   546,   174,     5,   174,
       7,   552,   553,   554,     3,     6,   151,   154,   155,   156,
     555,   556,   557,   559,   560,   561,   553,   558,     4,     4,
       4,     3,     8,     4,   177,   175,   175,   556,   174
  };

  const unsigned short
  Dhcp4Parser::yyr1_[] =
  {
       0,   178,   180,   179,   181,   179,   182,   179,   183,   179,
     184,   179,   185,   179,   186,   179,   187,   179,   188,   179,
     189,   179,   190,   179,   191,   179,   192,   179,   193,   179,
     194,   194,   194,   194,   194,   194,   194,   195,   197,   196,
     198,   199,   199,   200,   200,   202,   201,   203,   203,   204,
     204,   206,   205,   207,   207,   208,   208,   209,   211,   210,
     212,   212,   213,   213,   213,   213,   213,   213,   215,   214,
     217,   216,   218,   218,   219,   219,   219,   219,   219,   219,
     219,   219,   219,   219,   219,   219,   219,   219,   219,   219,
     219,   219,   219,   219,   219,   219,   219,   219,   219,   219,
     219,   219,   219,   219,   219,   219,   219,   219,   219,   219,
     219,   219,   219,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   231,   230,   232,   233,   234,   236,
     235,   237,   237,   238,   238,   238,   238,   238,   238,   238,
     240,   239,   242,   241,   244,   243,   245,   245,   247,   246,
     248,   248,   249,   251,   250,   253,   252,   254,   254,   255,
     257,   256,   259,   258,   261,   260,   262,   262,   263,   263,
     265,   264,   266,   266,   267,   267,   267,   267,   267,   267,
     267,   267,   267,   267,   267,   267,   267,   267,   267,   267,
     267,   267,   267,   267,   269,   268,   270,   270,   270,   270,
     272,   271,   274,   273,   276,   275,   277,   279,   278,   280,
     281,   282,   283,   284,   285,   286,   288,   287,   290,   289,
     292,   291,   294,   293,   295,   296,   298,   297,   299,   299,
     300,   300,   300,   300,   300,   301,   302,   303,   304,   305,
     307,   306,   308,   308,   309,   309,   311,   310,   313,   312,
     314,   314,   314,   315,   315,   317,   316,   319,   318,   321,
     320,   322,   322,   323,   323,   323,   323,   323,   323,   324,
     325,   326,   327,   328,   329,   331,   330,   332,   332,   333,
     333,   335,   334,   337,   336,   338,   338,   339,   339,   339,
     339,   339,   339,   339,   339,   339,   339,   339,   339,   339,
     339,   339,   339,   339,   339,   339,   339,   339,   339,   339,
     339,   339,   339,   339,   339,   339,   339,   341,   340,   343,
     342,   345,   344,   347,   346,   349,   348,   351,   350,   353,
     352,   355,   354,   356,   356,   356,   356,   357,   359,   358,
     360,   360,   361,   361,   363,   362,   364,   364,   365,   365,
     365,   365,   365,   365,   365,   365,   365,   365,   365,   365,
     365,   365,   365,   365,   365,   365,   365,   365,   365,   365,
     365,   365,   365,   367,   366,   369,   368,   370,   370,   371,
     371,   373,   372,   375,   374,   376,   376,   377,   377,   378,
     378,   378,   378,   378,   378,   378,   378,   378,   378,   379,
     380,   381,   383,   382,   385,   384,   387,   386,   388,   390,
     389,   391,   393,   392,   394,   394,   395,   395,   397,   396,
     399,   398,   400,   400,   401,   401,   402,   402,   402,   402,
     402,   402,   402,   402,   402,   403,   405,   404,   406,   407,
     408,   409,   411,   410,   412,   412,   413,   413,   415,   414,
     417,   416,   418,   418,   419,   419,   419,   419,   419,   419,
     419,   421,   420,   423,   422,   425,   424,   427,   426,   428,
     428,   429,   429,   431,   430,   433,   432,   434,   434,   435,
     435,   436,   436,   436,   436,   436,   436,   436,   436,   436,
     436,   436,   436,   436,   436,   436,   438,   437,   440,   439,
     442,   441,   444,   443,   446,   445,   448,   447,   450,   449,
     452,   451,   454,   453,   456,   455,   458,   457,   460,   459,
     462,   461,   463,   463,   465,   464,   466,   466,   468,   467,
     469,   469,   470,   470,   471,   471,   471,   471,   471,   471,
     471,   471,   471,   471,   471,   472,   474,   473,   475,   476,
     478,   477,   479,   479,   480,   480,   480,   480,   480,   482,
     481,   484,   483,   486,   485,   488,   487,   490,   489,   491,
     491,   492,   492,   492,   492,   492,   492,   492,   492,   492,
     492,   492,   492,   492,   492,   492,   492,   492,   492,   493,
     495,   494,   497,   496,   498,   500,   499,   501,   502,   504,
     503,   505,   505,   507,   506,   508,   509,   511,   510,   512,
     512,   512,   512,   512,   514,   513,   516,   515,   518,   517,
     520,   519,   522,   521,   524,   523,   526,   525,   528,   527,
     529,   529,   530,   530,   532,   531,   533,   535,   534,   537,
     536,   538,   538,   539,   541,   540,   542,   542,   544,   543,
     545,   545,   546,   546,   546,   546,   546,   546,   546,   547,
     549,   548,   551,   550,   552,   552,   554,   553,   555,   555,
     556,   556,   556,   556,   558,   557,   559,   560,   561
  };

  const unsigned char
  Dhcp4Parser::yyr2_[] =
  {
       0,     2,     0,     3,     0,     3,     0,     3,     0,     3,
       0,     3,     0,     3,     0,     3,     0,     3,     0,     3,
       0,     3,     0,     3,     0,     3,     0,     3,     0,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     4,
       1,     0,     1,     3,     5,     0,     4,     0,     1,     1,
       3,     0,     4,     0,     1,     1,     3,     2,     0,     4,
       1,     3,     1,     1,     1,     1,     1,     1,     0,     6,
       0,     4,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     0,     4,     3,     3,     3,     0,
       6,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       0,     4,     0,     4,     0,     4,     1,     1,     0,     4,
       1,     1,     3,     0,     6,     0,     6,     1,     3,     1,
       0,     4,     0,     6,     0,     6,     0,     1,     1,     3,
       0,     4,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     4,     1,     1,     1,     1,
       0,     4,     0,     4,     0,     4,     3,     0,     4,     3,
       3,     3,     3,     3,     3,     3,     0,     4,     0,     4,
       0,     4,     0,     4,     3,     3,     0,     6,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     6,     0,     1,     1,     3,     0,     4,     0,     4,
       1,     3,     1,     1,     1,     0,     4,     0,     4,     0,
       6,     1,     3,     1,     1,     1,     1,     1,     1,     3,
       3,     3,     3,     3,     3,     0,     6,     0,     1,     1,
       3,     0,     4,     0,     4,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     4,     0,
       4,     0,     4,     0,     4,     0,     4,     0,     4,     0,
       4,     0,     4,     1,     1,     1,     1,     3,     0,     6,
       0,     1,     1,     3,     0,     4,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     6,     0,     4,     0,     1,     1,
       3,     0,     4,     0,     4,     0,     1,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     0,     4,     0,     4,     0,     4,     1,     0,
       4,     3,     0,     6,     0,     1,     1,     3,     0,     4,
       0,     4,     0,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     4,     1,     1,
       3,     3,     0,     6,     0,     1,     1,     3,     0,     4,
       0,     4,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     0,     4,     0,     4,     0,     4,     0,     6,     0,
       1,     1,     3,     0,     4,     0,     4,     0,     1,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     4,     0,     4,
       0,     4,     0,     4,     0,     4,     0,     4,     0,     4,
       0,     4,     0,     4,     0,     4,     0,     4,     0,     4,
       0,     6,     1,     1,     0,     6,     1,     3,     0,     4,
       0,     1,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     4,     3,     3,
       0,     6,     1,     3,     1,     1,     1,     1,     1,     0,
       4,     0,     4,     0,     4,     0,     6,     0,     4,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       0,     4,     0,     4,     3,     0,     4,     3,     3,     0,
       4,     1,     1,     0,     4,     3,     3,     0,     4,     1,
       1,     1,     1,     1,     0,     4,     0,     4,     0,     4,
       0,     4,     0,     4,     0,     4,     0,     6,     0,     4,
       1,     3,     1,     1,     0,     6,     3,     0,     6,     0,
       4,     1,     3,     1,     0,     6,     1,     3,     0,     4,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     3,
       0,     4,     0,     6,     1,     3,     0,     4,     1,     3,
       1,     1,     1,     1,     0,     4,     3,     3,     3
  };



  // YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
  // First, the terminals, then, starting at \a yyntokens_, nonterminals.
  const char*
  const Dhcp4Parser::yytname_[] =
  {
  "\"end of file\"", "error", "$undefined", "\",\"", "\":\"", "\"[\"",
  "\"]\"", "\"{\"", "\"}\"", "\"null\"", "\"Dhcp4\"", "\"config-control\"",
  "\"config-databases\"", "\"config-fetch-wait-time\"",
  "\"interfaces-config\"", "\"interfaces\"", "\"dhcp-socket-type\"",
  "\"raw\"", "\"udp\"", "\"outbound-interface\"", "\"same-as-inbound\"",
  "\"use-routing\"", "\"re-detect\"", "\"sanity-checks\"",
  "\"lease-checks\"", "\"echo-client-id\"", "\"match-client-id\"",
  "\"authoritative\"", "\"next-server\"", "\"server-hostname\"",
  "\"boot-file-name\"", "\"lease-database\"", "\"hosts-database\"",
  "\"hosts-databases\"", "\"type\"", "\"memfile\"", "\"mysql\"",
  "\"postgresql\"", "\"cql\"", "\"user\"", "\"password\"", "\"host\"",
  "\"port\"", "\"persist\"", "\"lfc-interval\"", "\"readonly\"",
  "\"connect-timeout\"", "\"contact-points\"", "\"keyspace\"",
  "\"consistency\"", "\"serial-consistency\"", "\"max-reconnect-tries\"",
  "\"reconnect-wait-time\"", "\"request-timeout\"", "\"tcp-keepalive\"",
  "\"tcp-nodelay\"", "\"valid-lifetime\"", "\"default-valid-lifetime\"",
  "\"min-valid-lifetime\"", "\"max-valid-lifetime\"", "\"renew-timer\"",
  "\"rebind-timer\"", "\"calculate-tee-times\"", "\"t1-percent\"",
  "\"t2-percent\"", "\"decline-probation-period\"", "\"server-tag\"",
  "\"subnet4\"", "\"4o6-interface\"", "\"4o6-interface-id\"",
  "\"4o6-subnet\"", "\"option-def\"", "\"option-data\"", "\"name\"",
  "\"data\"", "\"code\"", "\"space\"", "\"csv-format\"", "\"always-send\"",
  "\"record-types\"", "\"encapsulate\"", "\"array\"",
  "\"shared-networks\"", "\"pools\"", "\"pool\"", "\"user-context\"",
  "\"comment\"", "\"subnet\"", "\"interface\"", "\"id\"",
  "\"reservation-mode\"", "\"disabled\"", "\"out-of-pool\"", "\"global\"",
  "\"all\"", "\"host-reservation-identifiers\"", "\"client-classes\"",
  "\"require-client-classes\"", "\"test\"", "\"only-if-required\"",
  "\"client-class\"", "\"reservations\"", "\"duid\"", "\"hw-address\"",
  "\"circuit-id\"", "\"client-id\"", "\"hostname\"", "\"flex-id\"",
  "\"relay\"", "\"ip-address\"", "\"ip-addresses\"", "\"hooks-libraries\"",
  "\"library\"", "\"parameters\"", "\"expired-leases-processing\"",
  "\"reclaim-timer-wait-time\"", "\"flush-reclaimed-timer-wait-time\"",
  "\"hold-reclaimed-time\"", "\"max-reclaim-leases\"",
  "\"max-reclaim-time\"", "\"unwarned-reclaim-cycles\"",
  "\"dhcp4o6-port\"", "\"control-socket\"", "\"socket-type\"",
  "\"socket-name\"", "\"dhcp-queue-control\"", "\"dhcp-ddns\"",
  "\"enable-updates\"", "\"qualifying-suffix\"", "\"server-ip\"",
  "\"server-port\"", "\"sender-ip\"", "\"sender-port\"",
  "\"max-queue-size\"", "\"ncr-protocol\"", "\"ncr-format\"",
  "\"override-no-update\"", "\"override-client-update\"",
  "\"replace-client-name\"", "\"generated-prefix\"", "\"tcp\"", "\"JSON\"",
  "\"when-present\"", "\"never\"", "\"always\"", "\"when-not-present\"",
  "\"hostname-char-set\"", "\"hostname-char-replacement\"", "\"Logging\"",
  "\"loggers\"", "\"output_options\"", "\"output\"", "\"debuglevel\"",
  "\"severity\"", "\"flush\"", "\"maxsize\"", "\"maxver\"", "\"Dhcp6\"",
  "\"DhcpDdns\"", "\"Control-agent\"", "TOPLEVEL_JSON", "TOPLEVEL_DHCP4",
  "SUB_DHCP4", "SUB_INTERFACES4", "SUB_SUBNET4", "SUB_POOL4",
  "SUB_RESERVATION", "SUB_OPTION_DEFS", "SUB_OPTION_DEF",
  "SUB_OPTION_DATA", "SUB_HOOKS_LIBRARY", "SUB_DHCP_DDNS", "SUB_LOGGING",
  "SUB_CONFIG_CONTROL", "\"constant string\"", "\"integer\"",
  "\"floating point\"", "\"boolean\"", "$accept", "start", "$@1", "$@2",
  "$@3", "$@4", "$@5", "$@6", "$@7", "$@8", "$@9", "$@10", "$@11", "$@12",
  "$@13", "$@14", "value", "sub_json", "map2", "$@15", "map_value",
  "map_content", "not_empty_map", "list_generic", "$@16", "list_content",
  "not_empty_list", "list_strings", "$@17", "list_strings_content",
  "not_empty_list_strings", "unknown_map_entry", "syntax_map", "$@18",
  "global_objects", "global_object", "dhcp4_object", "$@19", "sub_dhcp4",
  "$@20", "global_params", "global_param", "valid_lifetime",
  "default_valid_lifetime", "min_valid_lifetime", "max_valid_lifetime",
  "renew_timer", "rebind_timer", "calculate_tee_times", "t1_percent",
  "t2_percent", "decline_probation_period", "server_tag", "$@21",
  "echo_client_id", "match_client_id", "authoritative",
  "interfaces_config", "$@22", "interfaces_config_params",
  "interfaces_config_param", "sub_interfaces4", "$@23", "interfaces_list",
  "$@24", "dhcp_socket_type", "$@25", "socket_type", "outbound_interface",
  "$@26", "outbound_interface_value", "re_detect", "lease_database",
  "$@27", "sanity_checks", "$@28", "sanity_checks_params",
  "sanity_checks_param", "lease_checks", "$@29", "hosts_database", "$@30",
  "hosts_databases", "$@31", "database_list", "not_empty_database_list",
  "database", "$@32", "database_map_params", "database_map_param",
  "database_type", "$@33", "db_type", "user", "$@34", "password", "$@35",
  "host", "$@36", "port", "name", "$@37", "persist", "lfc_interval",
  "readonly", "connect_timeout", "request_timeout", "tcp_keepalive",
  "tcp_nodelay", "contact_points", "$@38", "keyspace", "$@39",
  "consistency", "$@40", "serial_consistency", "$@41",
  "max_reconnect_tries", "reconnect_wait_time",
  "host_reservation_identifiers", "$@42",
  "host_reservation_identifiers_list", "host_reservation_identifier",
  "duid_id", "hw_address_id", "circuit_id", "client_id", "flex_id",
  "hooks_libraries", "$@43", "hooks_libraries_list",
  "not_empty_hooks_libraries_list", "hooks_library", "$@44",
  "sub_hooks_library", "$@45", "hooks_params", "hooks_param", "library",
  "$@46", "parameters", "$@47", "expired_leases_processing", "$@48",
  "expired_leases_params", "expired_leases_param",
  "reclaim_timer_wait_time", "flush_reclaimed_timer_wait_time",
  "hold_reclaimed_time", "max_reclaim_leases", "max_reclaim_time",
  "unwarned_reclaim_cycles", "subnet4_list", "$@49",
  "subnet4_list_content", "not_empty_subnet4_list", "subnet4", "$@50",
  "sub_subnet4", "$@51", "subnet4_params", "subnet4_param", "subnet",
  "$@52", "subnet_4o6_interface", "$@53", "subnet_4o6_interface_id",
  "$@54", "subnet_4o6_subnet", "$@55", "interface", "$@56", "client_class",
  "$@57", "require_client_classes", "$@58", "reservation_mode", "$@59",
  "hr_mode", "id", "shared_networks", "$@60", "shared_networks_content",
  "shared_networks_list", "shared_network", "$@61",
  "shared_network_params", "shared_network_param", "option_def_list",
  "$@62", "sub_option_def_list", "$@63", "option_def_list_content",
  "not_empty_option_def_list", "option_def_entry", "$@64",
  "sub_option_def", "$@65", "option_def_params",
  "not_empty_option_def_params", "option_def_param", "option_def_name",
  "code", "option_def_code", "option_def_type", "$@66",
  "option_def_record_types", "$@67", "space", "$@68", "option_def_space",
  "option_def_encapsulate", "$@69", "option_def_array", "option_data_list",
  "$@70", "option_data_list_content", "not_empty_option_data_list",
  "option_data_entry", "$@71", "sub_option_data", "$@72",
  "option_data_params", "not_empty_option_data_params",
  "option_data_param", "option_data_name", "option_data_data", "$@73",
  "option_data_code", "option_data_space", "option_data_csv_format",
  "option_data_always_send", "pools_list", "$@74", "pools_list_content",
  "not_empty_pools_list", "pool_list_entry", "$@75", "sub_pool4", "$@76",
  "pool_params", "pool_param", "pool_entry", "$@77", "user_context",
  "$@78", "comment", "$@79", "reservations", "$@80", "reservations_list",
  "not_empty_reservations_list", "reservation", "$@81", "sub_reservation",
  "$@82", "reservation_params", "not_empty_reservation_params",
  "reservation_param", "next_server", "$@83", "server_hostname", "$@84",
  "boot_file_name", "$@85", "ip_address", "$@86", "ip_addresses", "$@87",
  "duid", "$@88", "hw_address", "$@89", "client_id_value", "$@90",
  "circuit_id_value", "$@91", "flex_id_value", "$@92", "hostname", "$@93",
  "reservation_client_classes", "$@94", "relay", "$@95", "relay_map",
  "client_classes", "$@96", "client_classes_list", "client_class_entry",
  "$@97", "client_class_params", "not_empty_client_class_params",
  "client_class_param", "client_class_name", "client_class_test", "$@98",
  "only_if_required", "dhcp4o6_port", "control_socket", "$@99",
  "control_socket_params", "control_socket_param", "control_socket_type",
  "$@100", "control_socket_name", "$@101", "dhcp_queue_control", "$@102",
  "dhcp_ddns", "$@103", "sub_dhcp_ddns", "$@104", "dhcp_ddns_params",
  "dhcp_ddns_param", "enable_updates", "qualifying_suffix", "$@105",
  "server_ip", "$@106", "server_port", "sender_ip", "$@107", "sender_port",
  "max_queue_size", "ncr_protocol", "$@108", "ncr_protocol_value",
  "ncr_format", "$@109", "override_no_update", "override_client_update",
  "replace_client_name", "$@110", "replace_client_name_value",
  "generated_prefix", "$@111", "hostname_char_set", "$@112",
  "hostname_char_replacement", "$@113", "dhcp6_json_object", "$@114",
  "dhcpddns_json_object", "$@115", "control_agent_json_object", "$@116",
  "config_control", "$@117", "sub_config_control", "$@118",
  "config_control_params", "config_control_param", "config_databases",
  "$@119", "config_fetch_wait_time", "logging_object", "$@120",
  "sub_logging", "$@121", "logging_params", "logging_param", "loggers",
  "$@122", "loggers_entries", "logger_entry", "$@123", "logger_params",
  "logger_param", "debuglevel", "severity", "$@124", "output_options_list",
  "$@125", "output_options_list_content", "output_entry", "$@126",
  "output_params_list", "output_params", "output", "$@127", "flush",
  "maxsize", "maxver", YY_NULLPTR
  };

#if PARSER4_DEBUG
  const unsigned short
  Dhcp4Parser::yyrline_[] =
  {
       0,   265,   265,   265,   266,   266,   267,   267,   268,   268,
     269,   269,   270,   270,   271,   271,   272,   272,   273,   273,
     274,   274,   275,   275,   276,   276,   277,   277,   278,   278,
     286,   287,   288,   289,   290,   291,   292,   295,   300,   300,
     311,   314,   315,   318,   322,   329,   329,   336,   337,   340,
     344,   351,   351,   358,   359,   362,   366,   377,   387,   387,
     403,   404,   408,   409,   410,   411,   412,   413,   416,   416,
     431,   431,   440,   441,   446,   447,   448,   449,   450,   451,
     452,   453,   454,   455,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   466,   467,   468,   469,   470,   471,
     472,   473,   474,   475,   476,   477,   478,   479,   480,   481,
     482,   483,   484,   485,   488,   493,   498,   503,   508,   513,
     518,   523,   528,   533,   538,   538,   546,   551,   556,   562,
     562,   573,   574,   577,   578,   579,   580,   581,   582,   583,
     586,   586,   595,   595,   605,   605,   612,   613,   616,   616,
     623,   625,   629,   635,   635,   647,   647,   657,   658,   660,
     662,   662,   680,   680,   692,   692,   702,   703,   706,   707,
     710,   710,   720,   721,   724,   725,   726,   727,   728,   729,
     730,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,   741,   742,   743,   746,   746,   753,   754,   755,   756,
     759,   759,   767,   767,   775,   775,   783,   788,   788,   796,
     801,   806,   811,   816,   821,   826,   831,   831,   839,   839,
     847,   847,   855,   855,   863,   868,   873,   873,   883,   884,
     887,   888,   889,   890,   891,   894,   899,   904,   909,   914,
     919,   919,   929,   930,   933,   934,   937,   937,   947,   947,
     957,   958,   959,   962,   963,   966,   966,   974,   974,   982,
     982,   993,   994,   997,   998,   999,  1000,  1001,  1002,  1005,
    1010,  1015,  1020,  1025,  1030,  1038,  1038,  1051,  1052,  1055,
    1056,  1063,  1063,  1089,  1089,  1100,  1101,  1105,  1106,  1107,
    1108,  1109,  1110,  1111,  1112,  1113,  1114,  1115,  1116,  1117,
    1118,  1119,  1120,  1121,  1122,  1123,  1124,  1125,  1126,  1127,
    1128,  1129,  1130,  1131,  1132,  1133,  1134,  1137,  1137,  1145,
    1145,  1153,  1153,  1161,  1161,  1169,  1169,  1177,  1177,  1185,
    1185,  1195,  1195,  1202,  1203,  1204,  1205,  1208,  1215,  1215,
    1226,  1227,  1231,  1232,  1235,  1235,  1243,  1244,  1247,  1248,
    1249,  1250,  1251,  1252,  1253,  1254,  1255,  1256,  1257,  1258,
    1259,  1260,  1261,  1262,  1263,  1264,  1265,  1266,  1267,  1268,
    1269,  1270,  1271,  1278,  1278,  1291,  1291,  1300,  1301,  1304,
    1305,  1310,  1310,  1325,  1325,  1339,  1340,  1343,  1344,  1347,
    1348,  1349,  1350,  1351,  1352,  1353,  1354,  1355,  1356,  1359,
    1361,  1366,  1368,  1368,  1376,  1376,  1384,  1384,  1392,  1394,
    1394,  1402,  1411,  1411,  1423,  1424,  1429,  1430,  1435,  1435,
    1447,  1447,  1459,  1460,  1465,  1466,  1471,  1472,  1473,  1474,
    1475,  1476,  1477,  1478,  1479,  1482,  1484,  1484,  1492,  1494,
    1496,  1501,  1509,  1509,  1521,  1522,  1525,  1526,  1529,  1529,
    1539,  1539,  1549,  1550,  1553,  1554,  1555,  1556,  1557,  1558,
    1559,  1562,  1562,  1570,  1570,  1595,  1595,  1625,  1625,  1635,
    1636,  1639,  1640,  1643,  1643,  1652,  1652,  1661,  1662,  1665,
    1666,  1670,  1671,  1672,  1673,  1674,  1675,  1676,  1677,  1678,
    1679,  1680,  1681,  1682,  1683,  1684,  1687,  1687,  1695,  1695,
    1703,  1703,  1711,  1711,  1719,  1719,  1729,  1729,  1737,  1737,
    1745,  1745,  1753,  1753,  1761,  1761,  1769,  1769,  1777,  1777,
    1790,  1790,  1800,  1801,  1807,  1807,  1817,  1818,  1821,  1821,
    1831,  1832,  1835,  1836,  1839,  1840,  1841,  1842,  1843,  1844,
    1845,  1846,  1847,  1848,  1849,  1852,  1854,  1854,  1862,  1871,
    1878,  1878,  1888,  1889,  1892,  1893,  1894,  1895,  1896,  1899,
    1899,  1907,  1907,  1918,  1918,  1956,  1956,  1968,  1968,  1978,
    1979,  1982,  1983,  1984,  1985,  1986,  1987,  1988,  1989,  1990,
    1991,  1992,  1993,  1994,  1995,  1996,  1997,  1998,  1999,  2002,
    2007,  2007,  2015,  2015,  2023,  2028,  2028,  2036,  2041,  2046,
    2046,  2054,  2055,  2058,  2058,  2066,  2071,  2076,  2076,  2084,
    2087,  2090,  2093,  2096,  2102,  2102,  2110,  2110,  2118,  2118,
    2129,  2129,  2136,  2136,  2143,  2143,  2150,  2150,  2161,  2161,
    2171,  2172,  2176,  2177,  2180,  2180,  2190,  2200,  2200,  2210,
    2210,  2221,  2222,  2226,  2230,  2230,  2242,  2243,  2247,  2247,
    2255,  2256,  2259,  2260,  2261,  2262,  2263,  2264,  2265,  2268,
    2273,  2273,  2281,  2281,  2291,  2292,  2295,  2295,  2303,  2304,
    2307,  2308,  2309,  2310,  2313,  2313,  2321,  2326,  2331
  };

  // Print the state stack on the debug stream.
  void
  Dhcp4Parser::yystack_print_ ()
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
  Dhcp4Parser::yy_reduce_print_ (int yyrule)
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
#endif // PARSER4_DEBUG


#line 14 "dhcp4_parser.yy" // lalr1.cc:1242
} } // isc::dhcp
#line 5104 "dhcp4_parser.cc" // lalr1.cc:1242
#line 2336 "dhcp4_parser.yy" // lalr1.cc:1243


void
isc::dhcp::Dhcp4Parser::error(const location_type& loc,
                              const std::string& what)
{
    ctx.error(loc, what);
}
