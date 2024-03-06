//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3431.206.0.0.0
//
#ifndef TIRevisionHistory_h
#define TIRevisionHistory_h
@import Foundation;

#include "TILRUDictionary.h"
#include "TIRevisionHistoryDelegate-Protocol.h"
#include "TIRevisionHistoryToken.h"

@class NSMutableArray, NSString;

@interface TIRevisionHistory : NSObject

@property (copy, nonatomic) NSString *documentText;
@property (readonly, nonatomic) NSMutableArray *tokenization;
@property (nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } selectedRange;
@property (nonatomic) struct _TIRevisionHistoryTokenIterator { unsigned long long x0; unsigned long long x1; } currentTokenIterator;
@property (readonly, nonatomic) void * tokenizer;
@property (retain, nonatomic) TIRevisionHistoryToken *lastRejectedToken;
@property (nonatomic) BOOL shouldReportRevisionToDP;
@property (nonatomic) BOOL isDeletingBackwards;
@property (nonatomic) BOOL isRapidDeleteActive;
@property (nonatomic) NSObject<TIRevisionHistoryDelegate> *delegate;
@property (retain, nonatomic) TILRUDictionary *recentAutocorrections;
@property (retain, nonatomic) TILRUDictionary *autocorrectionHistory;

/* class methods */
+ (id)documentStateTrimmedToSentenceForState:(id)state;

/* instance methods */
- (void)dealloc;
- (id)init;
- (id)initWithLocale:(id)locale;
- (void)acceptToken:(id)token contextTokens:(id)tokens saveToDifferentialPrivacy:(int)privacy;
- (void)rejectToken:(id)token contextTokens:(id)tokens negativeLearningHint:(int)hint withRevisedToken:(id)token;
- (id)contextForTokenAtIndex:(unsigned long long)index;
- (void)acceptTokensInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (void)rejectTokensInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range negativeLearningHint:(int)hint newRevision:(id)revision;
- (void)migrateUserTypingFromDeletedTokens:(id)tokens toInsertedTokens:(id)tokens withUsageLearningMask:(unsigned int)mask usageTrackingMask:(unsigned int)mask;
- (void)collectPFLTelemetryForTokenAtIndex:(unsigned long long)index;
- (id)tokenAtIterator:(struct _TIRevisionHistoryTokenIterator { unsigned long long x0; unsigned long long x1; })iterator;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })documentRangeOfTokenAtIterator:(struct _TIRevisionHistoryTokenIterator { unsigned long long x0; unsigned long long x1; })iterator;
- (struct _TIRevisionHistoryTokenIterator { unsigned long long x0; unsigned long long x1; })nextTokenIterator:(struct _TIRevisionHistoryTokenIterator { unsigned long long x0; unsigned long long x1; })iterator;
- (struct _TIRevisionHistoryTokenIterator { unsigned long long x0; unsigned long long x1; })previousTokenIterator:(struct _TIRevisionHistoryTokenIterator { unsigned long long x0; unsigned long long x1; })iterator;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })selectedTokenRangeWithIterator:(struct _TIRevisionHistoryTokenIterator { unsigned long long x0; unsigned long long x1; })iterator;
- (id)nonEmptyTokensInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (struct _TIRevisionHistoryTokenIterator { unsigned long long x0; unsigned long long x1; })popSelectedTextFromTokenizer;
- (unsigned long long)tokenizeDocumentTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range withTokenHandler:(id /* block */)handler;
- (void)adjustTokenOffsetAfterDeletedTokenRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range withDeletedCharacterCount:(unsigned long long)count;
- (BOOL)originalIterator:(struct _TIRevisionHistoryTokenIterator { unsigned long long x0; unsigned long long x1; })iterator matchesRevisedDocumentRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range andTokenID:(struct TITokenID { unsigned int x0; unsigned int x1; })id;
- (BOOL)shouldValidateOriginalIterator:(struct _TIRevisionHistoryTokenIterator { unsigned long long x0; unsigned long long x1; })iterator withRevisedDocumentRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range forRevision:(id)revision;
- (struct _TIRevisionHistoryTokenIterator { unsigned long long x0; unsigned long long x1; })resetTokenAtIterator:(struct _TIRevisionHistoryTokenIterator { unsigned long long x0; unsigned long long x1; })iterator withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range fromDocumentLocation:(unsigned long long)location;
- (BOOL)validateTokenizationForRevisedDocumentRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range andTokenID:(struct TITokenID { unsigned int x0; unsigned int x1; })id forRevision:(id)revision;
- (void)addRevisedTokenString:(id)string withTokenID:(struct TITokenID { unsigned int x0; unsigned int x1; })id inDocumentRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range toRevision:(id)revision;
- (void)handleRevisedTokenString:(id)string withTokenID:(struct TITokenID { unsigned int x0; unsigned int x1; })id forRevision:(id)revision;
- (void)pushSelectedTextToTokenizerForRevision:(id)revision;
- (void)mergeTokenizationsForRevision:(id)revision;
- (void)replaceSelectionWithText:(id)text negativeLearningHint:(int)hint selectedTokenReplacementHandler:(id /* block */)handler;
- (void)annotateTokensCreatedFromDocumentState;
- (void)resetToDocumentState:(id)state;
- (struct _TIRevisionHistoryTokenIterator { unsigned long long x0; unsigned long long x1; })iteratorUpperBoundForSelectionStart;
- (void)enumerateSentenceStemUsingIteratorBlock:(id /* block */)block;
- (BOOL)isSelectionContainedByToken:(struct _TIRevisionHistoryTokenIterator { unsigned long long x0; unsigned long long x1; })token;
- (BOOL)isWordToken:(struct _TIRevisionHistoryTokenIterator { unsigned long long x0; unsigned long long x1; })token;
- (id)wordTokenContainingSelection;
- (id)documentState;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })deletionRangeToObtainDocumentState:(id)state;
- (void)insertText:(id)text;
- (void)deleteBackward;
- (void)rejectCandidate:(id)candidate forInput:(id)input hint:(int)hint;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })inputRangeForReplacement:(id)replacement;
- (void)acceptText:(id)text isAutocorrection:(BOOL)autocorrection isAutoshifted:(BOOL)autoshifted;
- (void)acceptCurrentSentence;
- (BOOL)matchesContextBeforeSelection:(id)selection;
- (BOOL)matchesSelectedText:(id)text;
- (BOOL)matchesContextAfterSelection:(id)selection;
- (BOOL)matchesDocumentState:(id)state;
- (void)syncToDocumentState:(id)state;
- (void)enumerateSentenceStemUsingBlock:(id /* block */)block;
- (id)currentWord;
- (id)currentUserTyping;
@end

#endif /* TIRevisionHistory_h */