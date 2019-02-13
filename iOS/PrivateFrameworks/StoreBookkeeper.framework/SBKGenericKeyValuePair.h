//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreBookkeeper/SBKKeyValuePayloadPair-Protocol.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface SBKGenericKeyValuePair : NSObject <SBKKeyValuePayloadPair>
{
    NSString *_kvsKey;
    NSData *_kvsPayload;
}

+ (_Bool)supportsSecureCoding;
+ (id)pairWithKVSKey:(id)arg1 kvsPayload:(id)arg2;
@property(readonly, nonatomic) NSData *kvsPayload; // @synthesize kvsPayload=_kvsPayload;
@property(readonly, nonatomic) NSString *kvsKey; // @synthesize kvsKey=_kvsKey;
- (void).cxx_destruct;
- (double)timestamp;
- (id)kvsValueDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKVSKey:(id)arg1 kvsPayload:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

