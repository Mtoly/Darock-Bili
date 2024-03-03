//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2811.42.9.28.8
//
#ifndef MSPSharedTripGroupSession_h
#define MSPSharedTripGroupSession_h
@import Foundation;

#include "MSPSharedTripGroupSessionDelegate-Protocol.h"

@class IDSService, NSArray, NSMutableSet, NSString;
@protocol OS_os_transaction;

@interface MSPSharedTripGroupSession : NSObject {
  /* instance variables */
  BOOL _joined;
  NSString *_joinedFromHandle;
  NSString *_joinedFromAccountIdentifier;
  BOOL _initiator;
  NSString *_groupID;
  unsigned long long _nbClients;
  NSMutableSet *_liveModeParticipantIdentifiers;
  IDSService *_sharingIDSService;
  NSMutableSet *_identifiers;
  NSObject<OS_os_transaction> *_transaction;
}

@property (readonly, nonatomic) BOOL inLiveMode;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *initiatorIdentifier;
@property (copy, nonatomic) NSString *initiatorDisplayName;
@property (readonly, nonatomic) NSArray *accountIdentifiers;
@property (weak, nonatomic) NSObject<MSPSharedTripGroupSessionDelegate> *delegate;

/* instance methods */
- (id)initWithService:(id)service groupID:(id)id initiator:(BOOL)initiator initiatorIdentifier:(id)identifier;
- (void)dealloc;
- (BOOL)joinLiveModeFromHandle:(id)handle fromAccountID:(id)id error:(id *)error;
- (BOOL)leaveLiveModeIfNeeded:(id *)needed;
- (BOOL)leaveLiveModeForced:(id *)forced;
- (BOOL)_joinLiveModeFromHandle:(id)handle fromAccountID:(id)id error:(id *)error;
- (BOOL)_leaveLiveMode:(id *)mode;
- (void)addSharingWith:(id)with;
- (BOOL)sessionIsAliveAfterRemovingSharingIdentifiers:(id)identifiers;
- (void)_sharingEnded;
- (void)_sharingEndedWithError:(id)error;
- (BOOL)sendCommand:(id)command fromHandle:(id)handle fromAccountID:(id)id error:(id *)error;
- (BOOL)sendChunkedMessage:(id)message to:(id)to error:(id *)error;
- (BOOL)sendChunkedMessage:(id)message to:(id)to options:(id)options error:(id *)error;
- (BOOL)_sendChunkMessage:(id)message to:(id)to packet:(id)packet options:(id)options error:(id *)error;
- (id)_currentRoutePath;
- (BOOL)_isValidParticipant:(id)participant;
- (void)participantDidJoin:(id)join;
- (void)participantDidLeave:(id)leave;
@end

#endif /* MSPSharedTripGroupSession_h */