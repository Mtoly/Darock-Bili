//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFArchiveEntry_h
#define WFArchiveEntry_h
@import Foundation;

@interface WFArchiveEntry : NSObject

@property (readonly, nonatomic) struct archive_entry * entry;
@property (readonly, nonatomic) id /* block */ dataProvider;

/* class methods */
+ (id)archiveEntriesWithTopLevelFileRepresentation:(id)representation usedFilenames:(id)filenames;

/* instance methods */
- (id)initWithDirectoryName:(id)name;
- (id)initWithFilename:(id)filename fileRepresentation:(id)representation;
- (id)initWithFilename:(id)filename fileType:(unsigned short)type filePermission:(unsigned short)permission fileSize:(long long)size modificationDate:(id)date creationDate:(id)date dataProvider:(id /* block */)provider;
- (void)dealloc;
@end

#endif /* WFArchiveEntry_h */