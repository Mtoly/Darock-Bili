//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PFTimeZoneLookup_h
#define PFTimeZoneLookup_h
@import Foundation;

#include "PFCachingArchiveIndex.h"
#include "PFCachingArchiveIndex-Protocol.h"

@class NSString;
@protocol {unique_ptr<boost::interprocess::basic_managed_mapped_file<char, boost::interprocess::rbtree_best_fit<boost::interprocess::null_mutex_family>, boost::interprocess::iset_index>, std::default_delete<boost::interprocess::basic_managed_mapped_file<char, boost::interprocess::rbtree_best_fit<boost::interprocess::null_mutex_family>, boost::interprocess::iset_index>>>="__ptr_"{__compressed_pair<boost::interprocess::basic_managed_mapped_file<char, boost::interprocess::rbtree_best_fit<boost::interprocess::null_mutex_family>, boost::interprocess::iset_index> *, std::default_delete<boost::interprocess::basic_managed_mapped_file<char, boost::interprocess::rbtree_best_fit<boost::interprocess::null_mutex_family>, boost::interprocess::iset_index>>>="__value_"^v}};

@interface PFTimeZoneLookup : PFCachingArchiveIndex<PFCachingArchiveIndex> {
  /* instance variables */
  struct unique_ptr<boost::interprocess::basic_managed_mapped_file<char, boost::interprocess::rbtree_best_fit<boost::interprocess::null_mutex_family>, boost::interprocess::iset_index>, std::default_delete<boost::interprocess::basic_managed_mapped_file<char, boost::interprocess::rbtree_best_fit<boost::interprocess::null_mutex_family>, boost::interprocess::iset_index>>> { struct __compressed_pair<boost::interprocess::basic_managed_mapped_file<char, boost::interprocess::rbtree_best_fit<boost::interprocess::null_mutex_family>, boost::interprocess::iset_index> *, std::default_delete<boost::interprocess::basic_managed_mapped_file<char, boost::interprocess::rbtree_best_fit<boost::interprocess::null_mutex_family>, boost::interprocess::iset_index>>> { void *__value_; } __ptr_; } _backingFile;
  const void * _timezones;
  const void * _rtree;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)timeZoneNameForCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })coordinate;
- (struct CLLocationCoordinate2D { double x0; double x1; })anyCoordinateForTimeZoneName:(id)name;
- (struct unique_ptr<pf::ArchiveLineParser, std::default_delete<pf::ArchiveLineParser>> { struct __compressed_pair<pf::ArchiveLineParser *, std::default_delete<pf::ArchiveLineParser>> { struct ArchiveLineParser * x0; } x0; })archiveLineParserForIndexPath:(id)path;
- (const char *)indexLabel;
- (id)indexName;
- (unsigned long long)indexFileVersion;
- (BOOL)loadIndexFile:(const char *)file fileSize:(long long)size;
- (BOOL)loadOrCreateIndex;
- (BOOL)indexSupported;
@end

#endif /* PFTimeZoneLookup_h */