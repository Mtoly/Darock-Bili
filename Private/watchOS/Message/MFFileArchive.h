//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef MFFileArchive_h
#define MFFileArchive_h
@import Foundation;

@class NSData, NSMutableData;

@interface MFFileArchive : NSObject

@property (retain, nonatomic) NSData *inputData;
@property (nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } inputRange;
@property (retain, nonatomic) NSMutableData *outputData;
@property (copy, nonatomic) id /* block */ readerBlock;
@property (copy, nonatomic) id /* block */ writerBlock;

/* class methods */
+ (id)archive;

/* instance methods */
- (void)dealloc;
- (id)init;
- (id)description;
- (id)_errorForArchiveStatus:(long long)status;
- (void)registerBlocks:(id /* block */)blocks writer:(id /* block */)writer;
- (void)unregisterBlocks;
- (id)_compressContents:(id)contents error:(id *)error;
- (void)compressContents:(id)contents completion:(id /* block */)completion;
- (id)compressFolder:(id)folder error:(id *)error;
- (struct archive *)_compressionArchive;
- (int)_compressContents:(id)contents withArchive:(struct archive *)archive error:(id *)error;
- (int)_compressWithArchive:(struct archive *)archive error:(id *)error;
- (struct archive_entry *)_compressionArchiveEntryWithName:(id)name length:(unsigned long long)length isDirectory:(BOOL)directory;
- (int)_compressContents:(id)contents fileName:(id)name withArchive:(struct archive *)archive error:(id *)error;
- (int)_archiveDirectoryName:(id)name withArchive:(struct archive *)archive error:(id *)error;
- (int)_compressionCompleteForArchive:(struct archive *)archive error:(id *)error;
- (BOOL)_decompressContents:(id)contents inMemoryWithError:(id *)error mainEntry:(BOOL)entry;
- (void)decompressContents:(id)contents completion:(id /* block */)completion;
- (struct archive *)_decompressionArchive;
- (BOOL)_decompressArchive:(struct archive *)archive intoArchiveDirectory:(id)directory error:(id *)error;
- (int)_decompressionCompleteForArchive:(struct archive *)archive error:(id *)error;
@end

#endif /* MFFileArchive_h */