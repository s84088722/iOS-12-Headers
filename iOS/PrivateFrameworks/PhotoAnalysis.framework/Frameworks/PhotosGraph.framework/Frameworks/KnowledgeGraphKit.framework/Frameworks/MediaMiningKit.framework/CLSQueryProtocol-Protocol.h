//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaMiningKit/NSObject-Protocol.h>

@protocol CLSQueryProtocol <NSObject>
- (void)prepareForRetry;
- (_Bool)isCancelled;
- (void)cancel;
- (void)submitWithHandler:(void (^)(id <CLSQueryProtocol>, NSError *))arg1;
@end

