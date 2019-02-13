//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoardFoundation/NSObject-Protocol.h>

@class NSFileWrapper, NSString, SBFFileCache;

@protocol SBFFileCacheStore <NSObject>
- (void)removeAllFileWrappersForFileCache:(SBFFileCache *)arg1;
- (void)fileCache:(SBFFileCache *)arg1 removeFileWrapperNamed:(NSString *)arg2;
- (NSFileWrapper *)fileCache:(SBFFileCache *)arg1 loadFileWrapperNamed:(NSString *)arg2;
- (void)fileCache:(SBFFileCache *)arg1 storeFileWrapper:(NSFileWrapper *)arg2;
@end

