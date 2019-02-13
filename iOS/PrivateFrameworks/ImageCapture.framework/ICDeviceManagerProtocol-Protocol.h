//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ImageCapture/NSObject-Protocol.h>

@class ICCameraDevice, ICCameraFile, ICDevice, NSArray, NSDictionary;

@protocol ICDeviceManagerProtocol <NSObject>
- (void)enumerateContent;
- (long long)getDataOfFile:(ICCameraFile *)arg1 fromDevice:(ICCameraDevice *)arg2 withOptions:(NSDictionary *)arg3 completion:(void (^)(ICCameraFile *, NSMutableDictionary *))arg4;
- (long long)aptpRetrieveDataForFiles:(ICCameraDevice *)arg1 contextInfo:(void *)arg2;
- (long long)aptpRequestDataForFiles:(NSArray *)arg1 fromDevice:(ICCameraDevice *)arg2 contextInfo:(void *)arg3;
- (long long)eject:(ICCameraDevice *)arg1;
- (long long)downloadFile:(ICCameraFile *)arg1 fromDevice:(ICCameraDevice *)arg2 options:(NSDictionary *)arg3 contextInfo:(void *)arg4;
- (long long)deleteFile:(ICCameraFile *)arg1 fromDevice:(ICCameraDevice *)arg2 contextInfo:(void *)arg3;
- (long long)syncClock:(ICDevice *)arg1 contextInfo:(void *)arg2;
- (long long)getMetadataOfFile:(ICCameraFile *)arg1 fromDevice:(ICCameraDevice *)arg2 withOptions:(NSDictionary *)arg3 completion:(void (^)(ICCameraFile *, NSMutableDictionary *))arg4;
- (long long)getThumbnailOfFile:(ICCameraFile *)arg1 fromDevice:(ICCameraDevice *)arg2 withOptions:(NSDictionary *)arg3 completion:(void (^)(ICCameraFile *, NSMutableDictionary *))arg4;
- (long long)closeSession:(ICDevice *)arg1 contextInfo:(void *)arg2;
- (long long)openSession:(ICDevice *)arg1 contextInfo:(void *)arg2;
- (long long)closeDevice:(ICDevice *)arg1 contextInfo:(void *)arg2;
- (long long)openDevice:(NSDictionary *)arg1 contextInfo:(void *)arg2;
@end

