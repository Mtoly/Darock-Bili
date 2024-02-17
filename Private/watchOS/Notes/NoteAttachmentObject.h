//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2480.0.0.0.0
//
#ifndef NoteAttachmentObject_h
#define NoteAttachmentObject_h
@import Foundation;

#include "NSManagedObject.h"
#include "NoteObject.h"

@class NSString;

@interface NoteAttachmentObject : NSManagedObject

@property (retain, @dynamic, nonatomic) NSString *contentID;
@property (retain, @dynamic, nonatomic) NSString *filename;
@property (retain, @dynamic, nonatomic) NSString *mimeType;
@property (retain, @dynamic, nonatomic) NoteObject *note;

/* class methods */
+ (id)attachmentDirectoryURLForAttachmentObjectID:(id)id error:(id *)error;
+ (id)attachmentDirectoryPathForAttachmentObjectID:(id)id error:(id *)error;
+ (BOOL)migrateAttachmentRelatedFilesInContext:(id)context error:(id *)error;
+ (BOOL)migrateFileForAttachment:(id)attachment toCurrentAttachmentPathWithError:(id *)error;
+ (BOOL)applyFileAttributesForAttachment:(id)attachment error:(id *)error;

/* instance methods */
- (BOOL)persistAttachmentData:(id)data error:(id *)error;
- (id)attachmentDataFileURLWithError:(id *)error;
- (id)attachmentDataWithError:(id *)error;
- (void)prepareForDeletion;
@end

#endif /* NoteAttachmentObject_h */