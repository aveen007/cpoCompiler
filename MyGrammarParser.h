/** \file
 *  This C header file was generated by $ANTLR version 3.4
 *
 *     -  From the grammar source file : MyGrammar.g
 *     -                            On : 2024-10-13 00:05:52
 *     -                for the parser : MyGrammarParserParser
 *
 * Editing it, at least manually, is not wise.
 *
 * C language generator and runtime by Jim Idle, jimi|hereisanat|idle|dotgoeshere|ws.
 *
 *
 * The parser 
MyGrammarParser

has the callable functions (rules) shown below,
 * which will invoke the code for the associated rule in the source grammar
 * assuming that the input stream is pointing to a token/text stream that could begin
 * this rule.
 *
 * For instance if you call the first (topmost) rule in a parser grammar, you will
 * get the results of a full parse, but calling a rule half way through the grammar will
 * allow you to pass part of a full token stream to the parser, such as for syntax checking
 * in editors and so on.
 *
 * The parser entry points are called indirectly (by function pointer to function) via
 * a parser context typedef pMyGrammarParser, which is returned from a call to MyGrammarParserNew().
 *
 * The methods in pMyGrammarParser are  as follows:
 *
 *  - 
 MyGrammarParser_source_return
      pMyGrammarParser->source(pMyGrammarParser)
 *  - 
 MyGrammarParser_funcDef_return
      pMyGrammarParser->funcDef(pMyGrammarParser)
 *  - 
 MyGrammarParser_funcSignature_return
      pMyGrammarParser->funcSignature(pMyGrammarParser)
 *  - 
 MyGrammarParser_statement_return
      pMyGrammarParser->statement(pMyGrammarParser)
 *  - 
 MyGrammarParser_varStatement_return
      pMyGrammarParser->varStatement(pMyGrammarParser)
 *  - 
 MyGrammarParser_ifStatement_return
      pMyGrammarParser->ifStatement(pMyGrammarParser)
 *  - 
 MyGrammarParser_whileStatement_return
      pMyGrammarParser->whileStatement(pMyGrammarParser)
 *  - 
 MyGrammarParser_doStatement_return
      pMyGrammarParser->doStatement(pMyGrammarParser)
 *  - 
 MyGrammarParser_breakStatement_return
      pMyGrammarParser->breakStatement(pMyGrammarParser)
 *  - 
 MyGrammarParser_expressionStatement_return
      pMyGrammarParser->expressionStatement(pMyGrammarParser)
 *  - 
 MyGrammarParser_argDef_return
      pMyGrammarParser->argDef(pMyGrammarParser)
 *  - 
 MyGrammarParser_listArgdef_return
      pMyGrammarParser->listArgdef(pMyGrammarParser)
 *  - 
 MyGrammarParser_element_return
      pMyGrammarParser->element(pMyGrammarParser)
 *  - 
 MyGrammarParser_typeRef_return
      pMyGrammarParser->typeRef(pMyGrammarParser)
 *  - 
 MyGrammarParser_builtinArray_return
      pMyGrammarParser->builtinArray(pMyGrammarParser)
 *  - 
 MyGrammarParser_customArray_return
      pMyGrammarParser->customArray(pMyGrammarParser)
 *  - 
 MyGrammarParser_array_return
      pMyGrammarParser->array(pMyGrammarParser)
 *  - 
 MyGrammarParser_builtin_return
      pMyGrammarParser->builtin(pMyGrammarParser)
 *  - 
 MyGrammarParser_custom_return
      pMyGrammarParser->custom(pMyGrammarParser)
 *  - 
 MyGrammarParser_expr_return
      pMyGrammarParser->expr(pMyGrammarParser)
 *  - 
 MyGrammarParser_lexpr_return
      pMyGrammarParser->lexpr(pMyGrammarParser)
 *  - 
 MyGrammarParser_listExpr_return
      pMyGrammarParser->listExpr(pMyGrammarParser)
 *  - 
 MyGrammarParser_listIdentifier_return
      pMyGrammarParser->listIdentifier(pMyGrammarParser)
 *  - 
 MyGrammarParser_unary_return
      pMyGrammarParser->unary(pMyGrammarParser)
 *  - 
 MyGrammarParser_place_return
      pMyGrammarParser->place(pMyGrammarParser)
 *  - 
 MyGrammarParser_literal_return
      pMyGrammarParser->literal(pMyGrammarParser)
 *  - 
 MyGrammarParser_braces_return
      pMyGrammarParser->braces(pMyGrammarParser)
 *  - 
 MyGrammarParser_unOp_return
      pMyGrammarParser->unOp(pMyGrammarParser)
 *  - 
 MyGrammarParser_binOp_return
      pMyGrammarParser->binOp(pMyGrammarParser)
 * 
 * 
 *
 * The return type for any particular rule is of course determined by the source
 * grammar file.
 */
// [The "BSD license"]
// Copyright (c) 2005-2009 Jim Idle, Temporal Wave LLC
// http://www.temporal-wave.com
// http://www.linkedin.com/in/jimidle
//
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions
// are met:
// 1. Redistributions of source code must retain the above copyright
//    notice, this list of conditions and the following disclaimer.
// 2. Redistributions in binary form must reproduce the above copyright
//    notice, this list of conditions and the following disclaimer in the
//    documentation and/or other materials provided with the distribution.
// 3. The name of the author may not be used to endorse or promote products
//    derived from this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
// IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
// OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
// IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
// INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
// NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
// THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#ifndef	_MyGrammarParser_H
#define _MyGrammarParser_H
/* =============================================================================
 * Standard antlr3 C runtime definitions
 */
#include    <antlr3.h>

/* End of standard antlr 3 runtime definitions
 * =============================================================================
 */

#ifdef __cplusplus
extern "C" {
#endif

// Forward declare the context typedef so that we can use it before it is
// properly defined. Delegators and delegates (from import statements) are
// interdependent and their context structures contain pointers to each other
// C only allows such things to be declared if you pre-declare the typedef.
//
typedef struct MyGrammarParser_Ctx_struct MyGrammarParser, * pMyGrammarParser;



#ifdef	ANTLR3_WINDOWS
// Disable: Unreferenced parameter,							- Rules with parameters that are not used
//          constant conditional,							- ANTLR realizes that a prediction is always true (synpred usually)
//          initialized but unused variable					- tree rewrite variables declared but not needed
//          Unreferenced local variable						- lexer rule declares but does not always use _type
//          potentially unitialized variable used			- retval always returned from a rule
//			unreferenced local function has been removed	- susually getTokenNames or freeScope, they can go without warnigns
//
// These are only really displayed at warning level /W4 but that is the code ideal I am aiming at
// and the codegen must generate some of these warnings by necessity, apart from 4100, which is
// usually generated when a parser rule is given a parameter that it does not use. Mostly though
// this is a matter of orthogonality hence I disable that one.
//
#pragma warning( disable : 4100 )
#pragma warning( disable : 4101 )
#pragma warning( disable : 4127 )
#pragma warning( disable : 4189 )
#pragma warning( disable : 4505 )
#pragma warning( disable : 4701 )
#endif

/* ========================
 * BACKTRACKING IS ENABLED
 * ========================
 */

typedef struct MyGrammarParser_source_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    MyGrammarParser_source_return;



typedef struct MyGrammarParser_funcDef_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    MyGrammarParser_funcDef_return;



typedef struct MyGrammarParser_funcSignature_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    MyGrammarParser_funcSignature_return;



typedef struct MyGrammarParser_statement_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    MyGrammarParser_statement_return;



typedef struct MyGrammarParser_varStatement_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    MyGrammarParser_varStatement_return;



typedef struct MyGrammarParser_ifStatement_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    MyGrammarParser_ifStatement_return;



typedef struct MyGrammarParser_whileStatement_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    MyGrammarParser_whileStatement_return;



typedef struct MyGrammarParser_doStatement_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    MyGrammarParser_doStatement_return;



typedef struct MyGrammarParser_breakStatement_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    MyGrammarParser_breakStatement_return;



typedef struct MyGrammarParser_expressionStatement_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    MyGrammarParser_expressionStatement_return;



typedef struct MyGrammarParser_argDef_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    MyGrammarParser_argDef_return;



typedef struct MyGrammarParser_listArgdef_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    MyGrammarParser_listArgdef_return;



typedef struct MyGrammarParser_element_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    MyGrammarParser_element_return;



typedef struct MyGrammarParser_typeRef_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    MyGrammarParser_typeRef_return;



typedef struct MyGrammarParser_builtinArray_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    MyGrammarParser_builtinArray_return;



typedef struct MyGrammarParser_customArray_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    MyGrammarParser_customArray_return;



typedef struct MyGrammarParser_array_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    MyGrammarParser_array_return;



typedef struct MyGrammarParser_builtin_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    MyGrammarParser_builtin_return;



typedef struct MyGrammarParser_custom_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    MyGrammarParser_custom_return;



typedef struct MyGrammarParser_expr_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    MyGrammarParser_expr_return;



typedef struct MyGrammarParser_lexpr_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    MyGrammarParser_lexpr_return;



typedef struct MyGrammarParser_listExpr_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    MyGrammarParser_listExpr_return;



typedef struct MyGrammarParser_listIdentifier_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    MyGrammarParser_listIdentifier_return;



typedef struct MyGrammarParser_unary_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    MyGrammarParser_unary_return;



typedef struct MyGrammarParser_place_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    MyGrammarParser_place_return;



typedef struct MyGrammarParser_literal_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    MyGrammarParser_literal_return;



typedef struct MyGrammarParser_braces_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    MyGrammarParser_braces_return;



typedef struct MyGrammarParser_unOp_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    MyGrammarParser_unOp_return;



typedef struct MyGrammarParser_binOp_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    MyGrammarParser_binOp_return;




/** Context tracking structure for 
MyGrammarParser

 */
struct MyGrammarParser_Ctx_struct
{
    /** Built in ANTLR3 context tracker contains all the generic elements
     *  required for context tracking.
     */
    pANTLR3_PARSER   pParser;

     MyGrammarParser_source_return
     (*source)	(struct MyGrammarParser_Ctx_struct * ctx);

     MyGrammarParser_funcDef_return
     (*funcDef)	(struct MyGrammarParser_Ctx_struct * ctx);

     MyGrammarParser_funcSignature_return
     (*funcSignature)	(struct MyGrammarParser_Ctx_struct * ctx);

     MyGrammarParser_statement_return
     (*statement)	(struct MyGrammarParser_Ctx_struct * ctx);

     MyGrammarParser_varStatement_return
     (*varStatement)	(struct MyGrammarParser_Ctx_struct * ctx);

     MyGrammarParser_ifStatement_return
     (*ifStatement)	(struct MyGrammarParser_Ctx_struct * ctx);

     MyGrammarParser_whileStatement_return
     (*whileStatement)	(struct MyGrammarParser_Ctx_struct * ctx);

     MyGrammarParser_doStatement_return
     (*doStatement)	(struct MyGrammarParser_Ctx_struct * ctx);

     MyGrammarParser_breakStatement_return
     (*breakStatement)	(struct MyGrammarParser_Ctx_struct * ctx);

     MyGrammarParser_expressionStatement_return
     (*expressionStatement)	(struct MyGrammarParser_Ctx_struct * ctx);

     MyGrammarParser_argDef_return
     (*argDef)	(struct MyGrammarParser_Ctx_struct * ctx);

     MyGrammarParser_listArgdef_return
     (*listArgdef)	(struct MyGrammarParser_Ctx_struct * ctx);

     MyGrammarParser_element_return
     (*element)	(struct MyGrammarParser_Ctx_struct * ctx);

     MyGrammarParser_typeRef_return
     (*typeRef)	(struct MyGrammarParser_Ctx_struct * ctx);

     MyGrammarParser_builtinArray_return
     (*builtinArray)	(struct MyGrammarParser_Ctx_struct * ctx);

     MyGrammarParser_customArray_return
     (*customArray)	(struct MyGrammarParser_Ctx_struct * ctx);

     MyGrammarParser_array_return
     (*array)	(struct MyGrammarParser_Ctx_struct * ctx);

     MyGrammarParser_builtin_return
     (*builtin)	(struct MyGrammarParser_Ctx_struct * ctx);

     MyGrammarParser_custom_return
     (*custom)	(struct MyGrammarParser_Ctx_struct * ctx);

     MyGrammarParser_expr_return
     (*expr)	(struct MyGrammarParser_Ctx_struct * ctx);

     MyGrammarParser_lexpr_return
     (*lexpr)	(struct MyGrammarParser_Ctx_struct * ctx);

     MyGrammarParser_listExpr_return
     (*listExpr)	(struct MyGrammarParser_Ctx_struct * ctx);

     MyGrammarParser_listIdentifier_return
     (*listIdentifier)	(struct MyGrammarParser_Ctx_struct * ctx);

     MyGrammarParser_unary_return
     (*unary)	(struct MyGrammarParser_Ctx_struct * ctx);

     MyGrammarParser_place_return
     (*place)	(struct MyGrammarParser_Ctx_struct * ctx);

     MyGrammarParser_literal_return
     (*literal)	(struct MyGrammarParser_Ctx_struct * ctx);

     MyGrammarParser_braces_return
     (*braces)	(struct MyGrammarParser_Ctx_struct * ctx);

     MyGrammarParser_unOp_return
     (*unOp)	(struct MyGrammarParser_Ctx_struct * ctx);

     MyGrammarParser_binOp_return
     (*binOp)	(struct MyGrammarParser_Ctx_struct * ctx);

     ANTLR3_BOOLEAN
     (*synpred33_MyGrammar)	(struct MyGrammarParser_Ctx_struct * ctx);

     ANTLR3_BOOLEAN
     (*synpred35_MyGrammar)	(struct MyGrammarParser_Ctx_struct * ctx);
    // Delegated rules

    const char * (*getGrammarFileName)();
    void            (*reset)  (struct MyGrammarParser_Ctx_struct * ctx);
    void	    (*free)   (struct MyGrammarParser_Ctx_struct * ctx);
/* @headerFile.members() */
pANTLR3_BASE_TREE_ADAPTOR	adaptor;
pANTLR3_VECTOR_FACTORY		vectors;
/* End @headerFile.members() */
};

// Function protoypes for the constructor functions that external translation units
// such as delegators and delegates may wish to call.
//
ANTLR3_API pMyGrammarParser MyGrammarParserNew         (
pANTLR3_COMMON_TOKEN_STREAM
 instream);
ANTLR3_API pMyGrammarParser MyGrammarParserNewSSD      (
pANTLR3_COMMON_TOKEN_STREAM
 instream, pANTLR3_RECOGNIZER_SHARED_STATE state);

/** Symbolic definitions of all the tokens that the 
parser
 will work with.
 * \{
 *
 * Antlr will define EOF, but we can't use that as it it is too common in
 * in C header files and that would be confusing. There is no way to filter this out at the moment
 * so we just undef it here for now. That isn't the value we get back from C recognizers
 * anyway. We are looking for ANTLR3_TOKEN_EOF.
 */
#ifdef	EOF
#undef	EOF
#endif
#ifdef	Tokens
#undef	Tokens
#endif
#define EOF      -1
#define T__45      45
#define T__46      46
#define T__47      47
#define T__48      48
#define T__49      49
#define T__50      50
#define T__51      51
#define T__52      52
#define T__53      53
#define T__54      54
#define T__55      55
#define T__56      56
#define T__57      57
#define T__58      58
#define T__59      59
#define T__60      60
#define T__61      61
#define T__62      62
#define T__63      63
#define T__64      64
#define T__65      65
#define T__66      66
#define T__67      67
#define T__68      68
#define T__69      69
#define T__70      70
#define T__71      71
#define T__72      72
#define AND      4
#define Argdef      5
#define Array      6
#define Bits      7
#define Bool      8
#define Break      9
#define Builtin      10
#define Char      11
#define Custom      12
#define DIV      13
#define Dec      14
#define Do      15
#define EQ      16
#define Element      17
#define EscapeSequence      18
#define Expression      19
#define FuncDef      20
#define FuncSignature      21
#define GEQ      22
#define GT      23
#define Hex      24
#define HexDigit      25
#define ID      26
#define If      27
#define LARGT      28
#define LEQ      29
#define Letter      30
#define List_Argdef      31
#define MINUS      32
#define MULT      33
#define NEQ      34
#define Number      35
#define OR      36
#define OctalEscape      37
#define PLUS      38
#define Source      39
#define Str      40
#define TypeRef      41
#define Var      42
#define WS      43
#define While      44
#ifdef	EOF
#undef	EOF
#define	EOF	ANTLR3_TOKEN_EOF
#endif

#ifndef TOKENSOURCE
#define TOKENSOURCE(lxr) lxr->pLexer->rec->state->tokSource
#endif

/* End of token definitions for MyGrammarParser
 * =============================================================================
 */
/** } */

#ifdef __cplusplus
}
#endif

#endif

/* END - Note:Keep extra line feed to satisfy UNIX systems */
