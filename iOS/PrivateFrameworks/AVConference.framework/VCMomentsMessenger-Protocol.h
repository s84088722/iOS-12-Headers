//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVConference/NSObject-Protocol.h>

@class NSDictionary;
@protocol VCMomentsMessengerDelegate;

@protocol VCMomentsMessenger <NSObject>
@property(readonly, nonatomic) unsigned int capabilities;
- (void)deregisterClient;
- (void)registerClient;
- (void)cleanupActiveRequests;
- (_Bool)processClientRequest:(NSDictionary *)arg1 error:(id *)arg2;
- (void)setMomentsDelegate:(id <VCMomentsMessengerDelegate>)arg1;
@end

