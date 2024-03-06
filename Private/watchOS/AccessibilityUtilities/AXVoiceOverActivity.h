//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3093.2.4.4.10
//
#ifndef AXVoiceOverActivity_h
#define AXVoiceOverActivity_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSNumber, NSSet, NSString, NSUUID;

@interface AXVoiceOverActivity : NSObject<NSSecureCoding, NSCopying>

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSUUID *uuid;
@property (retain, nonatomic) NSSet *textualContexts;
@property (retain, nonatomic) NSSet *appIdentifiers;
@property (retain, nonatomic) NSUUID *punctuationGroup;
@property (retain, nonatomic) NSNumber *tableHeaders;
@property (retain, nonatomic) NSNumber *tableRowAndColumn;
@property (retain, nonatomic) NSNumber *speakEmojis;
@property (retain, nonatomic) NSNumber *containerFeedback;
@property (retain, nonatomic) NSNumber *imageDescriptions;
@property (retain, nonatomic) NSNumber *hints;
@property (retain, nonatomic) NSNumber *numberFeedback;
@property (retain, nonatomic) NSNumber *typingStyle;
@property (retain, nonatomic) NSNumber *navigationStyle;
@property (retain, nonatomic) NSString *voiceIdentifier;
@property (retain, nonatomic) NSNumber *speechRate;
@property (retain, nonatomic) NSNumber *volume;
@property (retain, nonatomic) NSNumber *speechMuted;
@property (retain, nonatomic) NSNumber *soundMuted;
@property (retain, nonatomic) NSNumber *audioDucking;
@property (retain, nonatomic) NSNumber *modifierKeys;
@property (retain, nonatomic) NSNumber *brailleStatusCellGeneral;
@property (retain, nonatomic) NSNumber *brailleStatusCellText;
@property (retain, nonatomic) NSString *brailleTable;
@property (retain, nonatomic) NSNumber *brailleOutput;
@property (retain, nonatomic) NSNumber *brailleInput;
@property (retain, nonatomic) NSNumber *brailleAutoAdvanceDuration;
@property (retain, nonatomic) NSNumber *brailleAlerts;
@property (retain, nonatomic) NSNumber *brailleFormatting;
@property (nonatomic) BOOL builtIn;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)observerKeys;

/* instance methods */
- (id)init;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)identicalProperty:(id)property property2:(id)property2;
- (BOOL)isIdenticalTo:(id)to;
- (BOOL)isEqual:(id)equal;
- (id)description;
@end

#endif /* AXVoiceOverActivity_h */