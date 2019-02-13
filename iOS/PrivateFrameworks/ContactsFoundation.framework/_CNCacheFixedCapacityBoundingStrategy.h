//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsFoundation/CNCacheBoundingStrategy-Protocol.h>

@class CNQueue, NSString;

@interface _CNCacheFixedCapacityBoundingStrategy : NSObject <CNCacheBoundingStrategy>
{
    CNQueue *_keys;
    unsigned long long _capacity;
}

@property(readonly, nonatomic) unsigned long long capacity; // @synthesize capacity=_capacity;
@property(readonly, nonatomic) CNQueue *keys; // @synthesize keys=_keys;
- (void).cxx_destruct;
- (void)willAccessKey:(id)arg1;
- (_Bool)shouldEvictKey:(id)arg1;
- (void)willUpdateCacheBy:(unsigned long long)arg1 forKey:(id)arg2 keysToEvict:(id *)arg3;
@property(readonly, copy) NSString *description;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

