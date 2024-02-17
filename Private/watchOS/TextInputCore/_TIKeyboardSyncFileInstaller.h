//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3431.206.0.0.0
//
#ifndef _TIKeyboardSyncFileInstaller_h
#define _TIKeyboardSyncFileInstaller_h
@import Foundation;

@class _KSFileEntry;

@interface _TIKeyboardSyncFileInstaller : NSObject {
  /* instance variables */
  _KSFileEntry *_entry;
}

/* instance methods */
- (id)initWithEntry:(id)entry;
- (void)execute;
- (void)invalidate;
- (BOOL)valid;
- (void)dealloc;
@end

#endif /* _TIKeyboardSyncFileInstaller_h */