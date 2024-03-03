//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef ENXMLWriterDelegate_Protocol_h
#define ENXMLWriterDelegate_Protocol_h
@import Foundation;

@protocol ENXMLWriterDelegate <NSObject>
/* instance methods */
- (void)xmlWriter:(id)writer didGenerateData:(id)data;
- (void)xmlWriterDidEndWritingDocument:(id)document;
@end

#endif /* ENXMLWriterDelegate_Protocol_h */