//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibraryServices/NSObject-Protocol.h>

@class CPLLibraryManager, CPLResource, CPLResourceTransferTask, NSData, NSError;

@protocol CPLResourceProgressDelegate <NSObject>
- (void)libraryManager:(CPLLibraryManager *)arg1 uploadDidFinishForResourceTransferTask:(CPLResourceTransferTask *)arg2 withError:(NSError *)arg3;
- (void)libraryManager:(CPLLibraryManager *)arg1 uploadDidStartForResourceTransferTask:(CPLResourceTransferTask *)arg2;
- (void)libraryManager:(CPLLibraryManager *)arg1 backgroundDownloadDidFinishForResource:(CPLResource *)arg2;
- (void)libraryManager:(CPLLibraryManager *)arg1 inMemoryDownloadDidFinishForResourceTransferTask:(CPLResourceTransferTask *)arg2 data:(NSData *)arg3 withError:(NSError *)arg4;
- (void)libraryManager:(CPLLibraryManager *)arg1 downloadDidFinishForResourceTransferTask:(CPLResourceTransferTask *)arg2 withError:(NSError *)arg3;
- (void)libraryManager:(CPLLibraryManager *)arg1 downloadDidStartForResourceTransferTask:(CPLResourceTransferTask *)arg2;

@optional
- (void)sizeOfResourcesToUploadDidChangeForLibraryManager:(CPLLibraryManager *)arg1;
- (void)libraryManager:(CPLLibraryManager *)arg1 uploadDidProgress:(float)arg2 forResourceTransferTask:(CPLResourceTransferTask *)arg3;
- (void)libraryManager:(CPLLibraryManager *)arg1 downloadDidProgress:(float)arg2 forResourceTransferTask:(CPLResourceTransferTask *)arg3;
- (void)libraryManager:(CPLLibraryManager *)arg1 backgroundDownloadDidFailForResource:(CPLResource *)arg2;
@end

