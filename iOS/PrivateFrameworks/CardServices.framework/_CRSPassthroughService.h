//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CardServices/CRSCardServing-Protocol.h>
#import <CardServices/CRSIdentifiedServing-Protocol.h>

@class NSString;

@interface _CRSPassthroughService : NSObject <CRSCardServing, CRSIdentifiedServing>
{
}

@property(readonly, copy, nonatomic) NSString *serviceIdentifier;
- (_Bool)canSatisfyCardRequest:(id)arg1;
- (unsigned long long)servicePriorityForRequest:(id)arg1;
- (void)requestCard:(id)arg1 reply:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

