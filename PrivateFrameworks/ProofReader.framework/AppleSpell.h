/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
 */

@class NSArray, NSString, NSData, NSMutableSet, NSMutableArray, NSMutableDictionary;



@interface AppleSpell : NSObject 
{
    void *_proofReaderConnection;
    struct __CFDictionary { } *_databaseConnections;
    NSMutableDictionary *_bindicts;
    NSData *_globalBindictData;
    NSData *_globalNegBindictData;
    NSMutableDictionary *_autocorrections;
    NSString *_lastLanguage;
    NSArray *_userPreferredLanguages;
    NSMutableDictionary *_learnedResponses;
    NSMutableArray *_diagnosticInfo;
    NSMutableSet *_foundNames;
}


- (id)_japaneseCorrectionForString:(id)arg1 connection:(struct _PR_DB_IO { unsigned char x1; unsigned char x2; struct _PR_DOC_FORMAT { unsigned char x_3_1_1; unsigned char x_3_1_2; unsigned char x_3_1_3; unsigned char x_3_1_4; unsigned char x_3_1_5; unsigned char x_3_1_6; unsigned short x_3_1_7; unsigned short x_3_1_8; } x3; unsigned short x4; unsigned short x5; unsigned long *x6; unsigned char x7; short x8; short x9; short x10; short x11; unsigned short x12; struct _PR_DBINIT { struct _PR_FILE {} *x_13_1_1[1]; struct _PR_FILE {} *x_13_1_2; struct _PR_FILE {} *x_13_1_3; struct _PR_FILE {} *x_13_1_4; struct _PR_FILE {} *x_13_1_5; struct _PR_FILE {} *x_13_1_6; struct _PR_FILE {} *x_13_1_7; } x13; struct _RULEFILE {} *x14[1]; struct _PR_STATUS { NSUInteger x_15_1_1; NSInteger x_15_1_2; unsigned short x_15_1_3; } x15; }*)arg2;
- (BOOL)looksLikeArticledNoun:(id)arg1 language:(id)arg2 connection:(struct _PR_DB_IO { unsigned char x1; unsigned char x2; struct _PR_DOC_FORMAT { unsigned char x_3_1_1; unsigned char x_3_1_2; unsigned char x_3_1_3; unsigned char x_3_1_4; unsigned char x_3_1_5; unsigned char x_3_1_6; unsigned short x_3_1_7; unsigned short x_3_1_8; } x3; unsigned short x4; unsigned short x5; unsigned long *x6; unsigned char x7; short x8; short x9; short x10; short x11; unsigned short x12; struct _PR_DBINIT { struct _PR_FILE {} *x_13_1_1[1]; struct _PR_FILE {} *x_13_1_2; struct _PR_FILE {} *x_13_1_3; struct _PR_FILE {} *x_13_1_4; struct _PR_FILE {} *x_13_1_5; struct _PR_FILE {} *x_13_1_6; struct _PR_FILE {} *x_13_1_7; } x13; struct _RULEFILE {} *x14[1]; struct _PR_STATUS { NSUInteger x_15_1_1; NSInteger x_15_1_2; unsigned short x_15_1_3; } x15; }*)arg3;
- (BOOL)looksLikeAdverb:(id)arg1 language:(id)arg2 connection:(struct _PR_DB_IO { unsigned char x1; unsigned char x2; struct _PR_DOC_FORMAT { unsigned char x_3_1_1; unsigned char x_3_1_2; unsigned char x_3_1_3; unsigned char x_3_1_4; unsigned char x_3_1_5; unsigned char x_3_1_6; unsigned short x_3_1_7; unsigned short x_3_1_8; } x3; unsigned short x4; unsigned short x5; unsigned long *x6; unsigned char x7; short x8; short x9; short x10; short x11; unsigned short x12; struct _PR_DBINIT { struct _PR_FILE {} *x_13_1_1[1]; struct _PR_FILE {} *x_13_1_2; struct _PR_FILE {} *x_13_1_3; struct _PR_FILE {} *x_13_1_4; struct _PR_FILE {} *x_13_1_5; struct _PR_FILE {} *x_13_1_6; struct _PR_FILE {} *x_13_1_7; } x13; struct _RULEFILE {} *x14[1]; struct _PR_STATUS { NSUInteger x_15_1_1; NSInteger x_15_1_2; unsigned short x_15_1_3; } x15; }*)arg3 sender:(id)arg4;
- (BOOL)looksLikeParticiple:(id)arg1 language:(id)arg2 connection:(struct _PR_DB_IO { unsigned char x1; unsigned char x2; struct _PR_DOC_FORMAT { unsigned char x_3_1_1; unsigned char x_3_1_2; unsigned char x_3_1_3; unsigned char x_3_1_4; unsigned char x_3_1_5; unsigned char x_3_1_6; unsigned short x_3_1_7; unsigned short x_3_1_8; } x3; unsigned short x4; unsigned short x5; unsigned long *x6; unsigned char x7; short x8; short x9; short x10; short x11; unsigned short x12; struct _PR_DBINIT { struct _PR_FILE {} *x_13_1_1[1]; struct _PR_FILE {} *x_13_1_2; struct _PR_FILE {} *x_13_1_3; struct _PR_FILE {} *x_13_1_4; struct _PR_FILE {} *x_13_1_5; struct _PR_FILE {} *x_13_1_6; struct _PR_FILE {} *x_13_1_7; } x13; struct _RULEFILE {} *x14[1]; struct _PR_STATUS { NSUInteger x_15_1_1; NSInteger x_15_1_2; unsigned short x_15_1_3; } x15; }*)arg3 sender:(id)arg4;
- (BOOL)onContractionList:(id)arg1 language:(id)arg2 connection:(struct _PR_DB_IO { unsigned char x1; unsigned char x2; struct _PR_DOC_FORMAT { unsigned char x_3_1_1; unsigned char x_3_1_2; unsigned char x_3_1_3; unsigned char x_3_1_4; unsigned char x_3_1_5; unsigned char x_3_1_6; unsigned short x_3_1_7; unsigned short x_3_1_8; } x3; unsigned short x4; unsigned short x5; unsigned long *x6; unsigned char x7; short x8; short x9; short x10; short x11; unsigned short x12; struct _PR_DBINIT { struct _PR_FILE {} *x_13_1_1[1]; struct _PR_FILE {} *x_13_1_2; struct _PR_FILE {} *x_13_1_3; struct _PR_FILE {} *x_13_1_4; struct _PR_FILE {} *x_13_1_5; struct _PR_FILE {} *x_13_1_6; struct _PR_FILE {} *x_13_1_7; } x13; struct _RULEFILE {} *x14[1]; struct _PR_STATUS { NSUInteger x_15_1_1; NSInteger x_15_1_2; unsigned short x_15_1_3; } x15; }*)arg3 sender:(id)arg4;
- (BOOL)onNoContractionList:(id)arg1 language:(id)arg2 connection:(struct _PR_DB_IO { unsigned char x1; unsigned char x2; struct _PR_DOC_FORMAT { unsigned char x_3_1_1; unsigned char x_3_1_2; unsigned char x_3_1_3; unsigned char x_3_1_4; unsigned char x_3_1_5; unsigned char x_3_1_6; unsigned short x_3_1_7; unsigned short x_3_1_8; } x3; unsigned short x4; unsigned short x5; unsigned long *x6; unsigned char x7; short x8; short x9; short x10; short x11; unsigned short x12; struct _PR_DBINIT { struct _PR_FILE {} *x_13_1_1[1]; struct _PR_FILE {} *x_13_1_2; struct _PR_FILE {} *x_13_1_3; struct _PR_FILE {} *x_13_1_4; struct _PR_FILE {} *x_13_1_5; struct _PR_FILE {} *x_13_1_6; struct _PR_FILE {} *x_13_1_7; } x13; struct _RULEFILE {} *x14[1]; struct _PR_STATUS { NSUInteger x_15_1_1; NSInteger x_15_1_2; unsigned short x_15_1_3; } x15; }*)arg3 sender:(id)arg4;
- (id)_crudeNextWordInString:(id)arg1 inRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2;
- (id)_crudePreviousWordInString:(id)arg1 inRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2 precededBy:(id*)arg3;
- (id)_crudePreviousWordInString:(id)arg1 inRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2;
- (id)_modifiedGrammarDescriptionForDescription:(id)arg1;
- (id)_correctionForSuggestedPhrase:(const char *)arg1 originalBuffer:(const char *)arg2 length:(NSUInteger)arg3;
- (id)_detailWithRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1 description:(id)arg2 corrections:(id)arg3;
- (BOOL)_checkEnglishGrammarInString:(id)arg1 range:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2 indexIntoBuffer:(NSUInteger)arg3 bufferLength:(NSUInteger)arg4 language:(id)arg5 connection:(struct _PR_DB_IO { unsigned char x1; unsigned char x2; struct _PR_DOC_FORMAT { unsigned char x_3_1_1; unsigned char x_3_1_2; unsigned char x_3_1_3; unsigned char x_3_1_4; unsigned char x_3_1_5; unsigned char x_3_1_6; unsigned short x_3_1_7; unsigned short x_3_1_8; } x3; unsigned short x4; unsigned short x5; unsigned long *x6; unsigned char x7; short x8; short x9; short x10; short x11; unsigned short x12; struct _PR_DBINIT { struct _PR_FILE {} *x_13_1_1[1]; struct _PR_FILE {} *x_13_1_2; struct _PR_FILE {} *x_13_1_3; struct _PR_FILE {} *x_13_1_4; struct _PR_FILE {} *x_13_1_5; struct _PR_FILE {} *x_13_1_6; struct _PR_FILE {} *x_13_1_7; } x13; struct _RULEFILE {} *x14[1]; struct _PR_STATUS { NSUInteger x_15_1_1; NSInteger x_15_1_2; unsigned short x_15_1_3; } x15; }*)arg6 sender:(id)arg7 bufIO:(struct _PR_BUF_IO { char *x1; unsigned char x2; unsigned char x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; struct _PR_LIMITS {} *x8; struct _PR_PARA_INFO {} *x9; struct _PR_ERROR {} *x10; struct _PR_PARSE_INFO {} **x11; unsigned char x12; short x13; BOOL x14; BOOL x15; struct _PR_STATUS { NSUInteger x_16_1_1; NSInteger x_16_1_2; unsigned short x_16_1_3; } x16; }*)arg8 retval:(NSInteger*)arg9 errorRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; }*)arg10 details:(id*)arg11;
- (id)_correctionForString:(id)arg1 range:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2 inString:(id)arg3 auxiliary:(id)arg4 dictionary:(id)arg5 language:(id)arg6 connection:(struct _PR_DB_IO { unsigned char x1; unsigned char x2; struct _PR_DOC_FORMAT { unsigned char x_3_1_1; unsigned char x_3_1_2; unsigned char x_3_1_3; unsigned char x_3_1_4; unsigned char x_3_1_5; unsigned char x_3_1_6; unsigned short x_3_1_7; unsigned short x_3_1_8; } x3; unsigned short x4; unsigned short x5; unsigned long *x6; unsigned char x7; short x8; short x9; short x10; short x11; unsigned short x12; struct _PR_DBINIT { struct _PR_FILE {} *x_13_1_1[1]; struct _PR_FILE {} *x_13_1_2; struct _PR_FILE {} *x_13_1_3; struct _PR_FILE {} *x_13_1_4; struct _PR_FILE {} *x_13_1_5; struct _PR_FILE {} *x_13_1_6; struct _PR_FILE {} *x_13_1_7; } x13; struct _RULEFILE {} *x14[1]; struct _PR_STATUS { NSUInteger x_15_1_1; NSInteger x_15_1_2; unsigned short x_15_1_3; } x15; }*)arg7;
- (id)spellServer:(id)arg1 suggestGuessesForWord:(id)arg2 inLanguage:(id)arg3;
- (id)spellServer:(id)arg1 suggestCompletionsForPartialWord:(id)arg2 inLanguage:(id)arg3;
- (id)spellServer:(id)arg1 suggestWordWithMinimumLength:(NSUInteger)arg2 maximumLength:(NSUInteger)arg3 language:(id)arg4;
- (void)timeout:(id)arg1;
- (void)resetTimer;
- (id)localizationsForLanguage:(id)arg1;
- (id)localizationForLanguage:(id)arg1;
- (id)fallbackLocalizationForLanguage:(id)arg1;
- (unsigned long)encodingForLanguage:(id)arg1;
- (struct _PR_DB_IO { unsigned char x1; unsigned char x2; struct _PR_DOC_FORMAT { unsigned char x_3_1_1; unsigned char x_3_1_2; unsigned char x_3_1_3; unsigned char x_3_1_4; unsigned char x_3_1_5; unsigned char x_3_1_6; unsigned short x_3_1_7; unsigned short x_3_1_8; } x3; unsigned short x4; unsigned short x5; unsigned long *x6; unsigned char x7; short x8; short x9; short x10; short x11; unsigned short x12; struct _PR_DBINIT { struct _PR_FILE {} *x_13_1_1[1]; struct _PR_FILE {} *x_13_1_2; struct _PR_FILE {} *x_13_1_3; struct _PR_FILE {} *x_13_1_4; struct _PR_FILE {} *x_13_1_5; struct _PR_FILE {} *x_13_1_6; struct _PR_FILE {} *x_13_1_7; } x13; struct _RULEFILE {} *x14[1]; struct _PR_STATUS { NSUInteger x_15_1_1; NSInteger x_15_1_2; unsigned short x_15_1_3; } x15; }*)databaseConnectionForLanguage:(id)arg1;
- (id)bindictDataForLanguage:(id)arg1 index:(NSUInteger)arg2;
- (id)globalBindictData;
- (id)globalNegativeBindictData;
- (id)autocorrectionDictionaryForLanguage:(id)arg1;
- (BOOL)checkWordBuffer:(char *)arg1 length:(NSUInteger)arg2 language:(id)arg3 index:(NSUInteger)arg4;
- (BOOL)globalCheckWordBuffer:(char *)arg1 length:(NSUInteger)arg2 language:(id)arg3;
- (BOOL)globalCheckNegativeWordBuffer:(char *)arg1 length:(NSUInteger)arg2 language:(id)arg3;
- (BOOL)validateWordBuffer:(char *)arg1 length:(NSUInteger)arg2 connection:(struct _PR_DB_IO { unsigned char x1; unsigned char x2; struct _PR_DOC_FORMAT { unsigned char x_3_1_1; unsigned char x_3_1_2; unsigned char x_3_1_3; unsigned char x_3_1_4; unsigned char x_3_1_5; unsigned char x_3_1_6; unsigned short x_3_1_7; unsigned short x_3_1_8; } x3; unsigned short x4; unsigned short x5; unsigned long *x6; unsigned char x7; short x8; short x9; short x10; short x11; unsigned short x12; struct _PR_DBINIT { struct _PR_FILE {} *x_13_1_1[1]; struct _PR_FILE {} *x_13_1_2; struct _PR_FILE {} *x_13_1_3; struct _PR_FILE {} *x_13_1_4; struct _PR_FILE {} *x_13_1_5; struct _PR_FILE {} *x_13_1_6; struct _PR_FILE {} *x_13_1_7; } x13; struct _RULEFILE {} *x14[1]; struct _PR_STATUS { NSUInteger x_15_1_1; NSInteger x_15_1_2; unsigned short x_15_1_3; } x15; }*)arg3;
- (BOOL)validateAbbreviationOrNumberWordBuffer:(char *)arg1 length:(NSUInteger)arg2 language:(id)arg3 connection:(struct _PR_DB_IO { unsigned char x1; unsigned char x2; struct _PR_DOC_FORMAT { unsigned char x_3_1_1; unsigned char x_3_1_2; unsigned char x_3_1_3; unsigned char x_3_1_4; unsigned char x_3_1_5; unsigned char x_3_1_6; unsigned short x_3_1_7; unsigned short x_3_1_8; } x3; unsigned short x4; unsigned short x5; unsigned long *x6; unsigned char x7; short x8; short x9; short x10; short x11; unsigned short x12; struct _PR_DBINIT { struct _PR_FILE {} *x_13_1_1[1]; struct _PR_FILE {} *x_13_1_2; struct _PR_FILE {} *x_13_1_3; struct _PR_FILE {} *x_13_1_4; struct _PR_FILE {} *x_13_1_5; struct _PR_FILE {} *x_13_1_6; struct _PR_FILE {} *x_13_1_7; } x13; struct _RULEFILE {} *x14[1]; struct _PR_STATUS { NSUInteger x_15_1_1; NSInteger x_15_1_2; unsigned short x_15_1_3; } x15; }*)arg4 sender:(id)arg5;
- (BOOL)validateWordBuffer:(char *)arg1 length:(NSUInteger)arg2 language:(id)arg3 connection:(struct _PR_DB_IO { unsigned char x1; unsigned char x2; struct _PR_DOC_FORMAT { unsigned char x_3_1_1; unsigned char x_3_1_2; unsigned char x_3_1_3; unsigned char x_3_1_4; unsigned char x_3_1_5; unsigned char x_3_1_6; unsigned short x_3_1_7; unsigned short x_3_1_8; } x3; unsigned short x4; unsigned short x5; unsigned long *x6; unsigned char x7; short x8; short x9; short x10; short x11; unsigned short x12; struct _PR_DBINIT { struct _PR_FILE {} *x_13_1_1[1]; struct _PR_FILE {} *x_13_1_2; struct _PR_FILE {} *x_13_1_3; struct _PR_FILE {} *x_13_1_4; struct _PR_FILE {} *x_13_1_5; struct _PR_FILE {} *x_13_1_6; struct _PR_FILE {} *x_13_1_7; } x13; struct _RULEFILE {} *x14[1]; struct _PR_STATUS { NSUInteger x_15_1_1; NSInteger x_15_1_2; unsigned short x_15_1_3; } x15; }*)arg4 sender:(id)arg5 checkBase:(BOOL)arg6 checkDict:(BOOL)arg7 checkNames:(BOOL)arg8 checkHyphens:(BOOL)arg9 checkIntercaps:(BOOL)arg10 checkOptions:(BOOL)arg11 depth:(NSUInteger)arg12;
- (BOOL)_checkGrammarInString:(id)arg1 range:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2 language:(id)arg3 connection:(struct _PR_DB_IO { unsigned char x1; unsigned char x2; struct _PR_DOC_FORMAT { unsigned char x_3_1_1; unsigned char x_3_1_2; unsigned char x_3_1_3; unsigned char x_3_1_4; unsigned char x_3_1_5; unsigned char x_3_1_6; unsigned short x_3_1_7; unsigned short x_3_1_8; } x3; unsigned short x4; unsigned short x5; unsigned long *x6; unsigned char x7; short x8; short x9; short x10; short x11; unsigned short x12; struct _PR_DBINIT { struct _PR_FILE {} *x_13_1_1[1]; struct _PR_FILE {} *x_13_1_2; struct _PR_FILE {} *x_13_1_3; struct _PR_FILE {} *x_13_1_4; struct _PR_FILE {} *x_13_1_5; struct _PR_FILE {} *x_13_1_6; struct _PR_FILE {} *x_13_1_7; } x13; struct _RULEFILE {} *x14[1]; struct _PR_STATUS { NSUInteger x_15_1_1; NSInteger x_15_1_2; unsigned short x_15_1_3; } x15; }*)arg4 sender:(id)arg5 bufIO:(struct _PR_BUF_IO { char *x1; unsigned char x2; unsigned char x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; struct _PR_LIMITS {} *x8; struct _PR_PARA_INFO {} *x9; struct _PR_ERROR {} *x10; struct _PR_PARSE_INFO {} **x11; unsigned char x12; short x13; BOOL x14; BOOL x15; struct _PR_STATUS { NSUInteger x_16_1_1; NSInteger x_16_1_2; unsigned short x_16_1_3; } x16; }*)arg6 errorRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; }*)arg7 details:(id*)arg8;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })spellServer:(id)arg1 checkGrammarInString:(id)arg2 range:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg3 language:(id)arg4 orthography:(id)arg5 mutableResults:(id)arg6 offset:(NSUInteger)arg7 details:(id*)arg8;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })spellServer:(id)arg1 findMisspelledWordInString:(id)arg2 range:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg3 languages:(id)arg4 orthography:(id)arg5 checkOrthography:(BOOL)arg6 mutableResults:(id)arg7 offset:(NSUInteger)arg8 autocorrect:(BOOL)arg9 wordCount:(NSInteger*)arg10 countOnly:(BOOL)arg11 correction:(id*)arg12;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })spellServer:(id)arg1 findMisspelledWordInString:(id)arg2 language:(id)arg3 wordCount:(NSInteger*)arg4 countOnly:(BOOL)arg5;
- (id)spellServer:(id)arg1 checkString:(id)arg2 offset:(NSUInteger)arg3 types:(unsigned long long)arg4 options:(id)arg5 orthography:(id)arg6 wordCount:(NSInteger*)arg7;
- (id)spellServer:(id)arg1 suggestWordWithLengthInRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2 language:(id)arg3;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })spellServer:(id)arg1 checkGrammarInString:(id)arg2 language:(id)arg3 details:(id*)arg4;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })spellServer:(id)arg1 findMisspelledWordInString:(id)arg2 language:(id)arg3 wordCount:(NSInteger*)arg4 countOnly:(BOOL)arg5 correction:(id*)arg6;
- (id)spellServer:(id)arg1 suggestGuessesForWordRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2 inString:(id)arg3 language:(id)arg4;
- (id)spellServer:(id)arg1 suggestCompletionsForPartialWordRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2 inString:(id)arg3 language:(id)arg4;
- (id)bundle;
- (id)init;

@end