//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFNetService.h>

@class NSDictionary;

@interface HMFMutableNetService : HMFNetService
{
    unsigned long long _port;
    _Bool _publishing;
    CDUnknownBlockType _publishBlock;
}

@property(copy, nonatomic) CDUnknownBlockType publishBlock; // @synthesize publishBlock=_publishBlock;
- (void).cxx_destruct;
- (void)netServiceDidStop:(id)arg1;
- (void)netService:(id)arg1 didNotPublish:(id)arg2;
- (void)netServiceDidPublish:(id)arg1;
- (void)netServiceWillPublish:(id)arg1;
- (void)stopPublishing;
- (void)startPublishingWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(getter=isPublishing) _Bool publishing; // @synthesize publishing=_publishing;
- (void)setInternal:(id)arg1;
- (id)internal;
- (void)updateTXTRecord;
- (void)updateTXTRecordWithData:(id)arg1;
- (void)removeTXTRecordValueForKey:(id)arg1;
- (void)setTXTRecordValue:(id)arg1 forKey:(id)arg2;
@property(copy, nonatomic) NSDictionary *TXTRecord; // @dynamic TXTRecord;
@property(nonatomic) unsigned long long port; // @synthesize port=_port;
- (id)initWithDomain:(id)arg1 type:(id)arg2 name:(id)arg3 port:(unsigned long long)arg4;
- (id)initWithNetService:(id)arg1;

@end

