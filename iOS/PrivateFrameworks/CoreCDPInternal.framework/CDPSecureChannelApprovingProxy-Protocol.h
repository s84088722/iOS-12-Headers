//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreCDPInternal/NSObject-Protocol.h>

@protocol CDPSecureChannelApprovingProxy <NSObject>
- (void)setApproveriCloudKeychainState:(unsigned long long)arg1;
- (void)setApproverBackupRecordsExist:(_Bool)arg1;
- (void)listenForPayloadsWithHandler:(void (^)(NSData *, id *, id *))arg1;
@end

