//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudKitDaemon/NSObject-Protocol.h>

@class CKFileOpenInfo, CKOperationResult, NSArray, NSDictionary, NSFileHandle, NSString;

@protocol CKXPCClient <NSObject>
- (void)consumeSandboxExtensions:(NSArray *)arg1 reply:(void (^)(void))arg2;
- (void)getFileMetadataWithFileHandle:(NSFileHandle *)arg1 openInfo:(CKFileOpenInfo *)arg2 reply:(void (^)(CKFileMetadata *, NSError *))arg3;
- (void)openFileWithOpenInfo:(CKFileOpenInfo *)arg1 reply:(void (^)(CKFileOpenResult *, NSError *))arg2;
- (void)handleOperationCheckpoint:(NSDictionary *)arg1 forOperationWithID:(NSString *)arg2;
- (void)handleOperationCompletion:(CKOperationResult *)arg1 forOperationWithID:(NSString *)arg2;
- (void)handleOperationProgress:(NSDictionary *)arg1 forOperationWithID:(NSString *)arg2;
- (void)handleOperationStatistics:(NSDictionary *)arg1 forOperationWithID:(NSString *)arg2;
- (void)handleOperationProgress:(NSDictionary *)arg1 forOperationWithID:(NSString *)arg2 reply:(void (^)(void))arg3;
@end

