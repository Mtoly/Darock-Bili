//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKFelicaAppletHistory_h
#define PKFelicaAppletHistory_h
@import Foundation;

#include "PKTransitAppletHistory.h"
#include "PKFelicaGreenCarTicket.h"
#include "PKFelicaShinkansenTicket.h"

@class NSNumber, NSSet, NSString;

@interface PKFelicaAppletHistory : PKTransitAppletHistory {
  /* instance variables */
  NSSet *_existingKeys;
}

@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSString *transactionID;
@property (readonly, copy, nonatomic) NSNumber *SPID;
@property (readonly, nonatomic) long long transactionType;
@property (readonly, @dynamic, nonatomic) BOOL inShinkansenStation;
@property (readonly, nonatomic) BOOL shinkansenTicketActive;
@property (readonly, nonatomic) BOOL greenCarTicketUsed;
@property (readonly, nonatomic) BOOL balanceAllowedForCommute;
@property (readonly, nonatomic) BOOL lowBalanceNotificationEnabled;
@property (readonly, copy, nonatomic) PKFelicaShinkansenTicket *shinkansenTicket;
@property (readonly, nonatomic) PKFelicaGreenCarTicket *greenCarTicket;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (long long)appletTypeForDictionary:(id)dictionary;

/* instance methods */
- (id)initWithDictionary:(id)dictionary source:(long long)source;
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (void)encodeWithCoder:(id)coder;
- (void)sanitizeValuesWithState:(id)state;
- (BOOL)isInShinkansenStation;
- (BOOL)isInStation;
- (BOOL)isShinkansenTicketActive;
- (BOOL)isGreenCarTicketUsed;
- (BOOL)isBalanceAllowedForCommute;
- (BOOL)isLowBalanceNotificationEnabled;
@end

#endif /* PKFelicaAppletHistory_h */