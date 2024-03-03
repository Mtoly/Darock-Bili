//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 64562.3.1.1.0
//
#ifndef DTFileTransferServiceDebugInboxAuthorizedAPI_Protocol_h
#define DTFileTransferServiceDebugInboxAuthorizedAPI_Protocol_h
@import Foundation;

@protocol DTFileTransferServiceDebugInboxAuthorizedAPI <DTXAllowedRPC>
/* instance methods */
- (id)transferFile:(id)file toDebugInboxOfApplicationWithBundleIdentifier:(id)identifier destinationFilename:(id)filename;
- (id)openFileInDocumentDebugInbox:(id)inbox forApplicationWithBundleIdentifier:(id)identifier withAnnotation:(id)annotation;
- (id)transferData:(id)data intoAppContainerForBundleIdentifier:(id)identifier filename:(id)filename;
@end

#endif /* DTFileTransferServiceDebugInboxAuthorizedAPI_Protocol_h */