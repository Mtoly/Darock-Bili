//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef ENNoteRef_h
#define ENNoteRef_h
@import Foundation;

#include "ENLinkedNotebookRef.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"
#include "WFSerializableContent-Protocol.h"

@class NSString;

@interface ENNoteRef : NSObject<WFSerializableContent, NSCoding, NSCopying>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *guid;
@property (retain, nonatomic) ENLinkedNotebookRef *linkedNotebook;

/* class methods */
+ (id)objectWithWFSerializedRepresentation:(id)representation;
+ (id)noteRefFromData:(id)data;

/* instance methods */
- (id)wfSerializedRepresentation;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)asData;
- (BOOL)isEqual:(id)equal;
@end

#endif /* ENNoteRef_h */