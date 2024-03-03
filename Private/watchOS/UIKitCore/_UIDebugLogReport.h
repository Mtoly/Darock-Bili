//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIDebugLogReport_h
#define _UIDebugLogReport_h
@import Foundation;

@class NSMutableArray;

@interface _UIDebugLogReport : NSObject

@property (retain, nonatomic) NSMutableArray *statements;
@property (retain, nonatomic) NSMutableArray *prefixStack;
@property (readonly, nonatomic) unsigned long long messageCount;
@property (nonatomic) unsigned long long currentIndentLevel;
@property (copy, nonatomic) id /* block */ fallbackMessagePrefixHandler;

/* instance methods */
- (id)init;
- (void)addMessageWithFormat:(id)format;
- (void)addMessage:(id)message;
- (void)addLineBreak;
- (void)incrementIndentLevel;
- (void)decrementIndentLevel;
- (void)resetIndentLevel;
- (void)pushMessagePrefix:(id)prefix;
- (void)pushMessagePrefixHandler:(id /* block */)handler;
- (void)popMessagePrefix;
- (void)clearAllMessagePrefixes;
- (id)_messagePrefixAtIndentLevel:(unsigned long long)level;
- (void)incrementIndentLevelAndPushMessagePrefix:(id)prefix;
- (void)decrementIndentLevelAndPopMessagePrefix;
- (id)_statements;
- (id)_prefixStack;
@end

#endif /* _UIDebugLogReport_h */