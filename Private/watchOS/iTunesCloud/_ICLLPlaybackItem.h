//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.5.0.0
//
#ifndef _ICLLPlaybackItem_h
#define _ICLLPlaybackItem_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"
#include "_ICLLMediaInfo.h"
#include "_ICLLPlaybackItemContainer.h"

@class NSString;

@interface _ICLLPlaybackItem : PBCodable<NSCopying> {
  /* instance variables */
  long long _contributingParticipantId;
  _ICLLPlaybackItemContainer *_container;
  NSString *_itemId;
  NSString *_mediaId;
  _ICLLMediaInfo *_mediaInfo;
  int _sectionType;
  BOOL _isExplicit;
  struct { unsigned int x :1 contributingParticipantId; unsigned int x :1 sectionType; unsigned int x :1 isExplicit; } _has;
}

/* instance methods */
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
@end

#endif /* _ICLLPlaybackItem_h */