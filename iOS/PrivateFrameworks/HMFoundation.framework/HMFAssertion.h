//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HMFoundation/HMFLogging-Protocol.h>

@class NSString;

@interface HMFAssertion : HMFObject <HMFLogging>
{
    _Bool _valid;
    NSString *_name;
}

+ (id)logCategory;
+ (id)bundleIdentifier;
@property(getter=isValid) _Bool valid; // @synthesize valid=_valid;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)logIdentifier;
- (void)mark;
- (void)invalidate;
@property(readonly, copy) NSString *uniqueDescription;
- (void)dealloc;
- (id)initWithName:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

