//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFSaveDropboxFileActionUserInterface_Protocol_h
#define WFSaveDropboxFileActionUserInterface_Protocol_h
@import Foundation;

@protocol WFSaveDropboxFileActionUserInterface <WFActionRemoteUserInterface>
/* instance methods */
- (void)showWithServiceName:(id)name input:(id)input managedLevel:(unsigned long long)level options:(unsigned long long)options completionHandler:(id /* block */)handler;
- (void)cancel;
@end

#endif /* WFSaveDropboxFileActionUserInterface_Protocol_h */