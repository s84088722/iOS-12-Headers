//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreCDPInternal/NSObject-Protocol.h>

@class NSData;

@protocol CDPSecureChannelProxy <NSObject>
- (unsigned long long)approveriCloudKeychainState;
- (_Bool)approverBackupRecordsExist;
- (void)sendPayload:(NSData *)arg1 completion:(void (^)(NSData *, NSError *))arg2;
@end

