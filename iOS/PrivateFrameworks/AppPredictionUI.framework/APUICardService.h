//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppPredictionUI/CRSCardServing-Protocol.h>
#import <AppPredictionUI/CRSIdentifiedServing-Protocol.h>

@class NSString;

@interface APUICardService : NSObject <CRSCardServing, CRSIdentifiedServing>
{
}

+ (_Bool)supportsSecureCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)requestCard:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (unsigned long long)servicePriorityForRequest:(id)arg1;
- (_Bool)canSatisfyCardRequest:(id)arg1;
@property(readonly, copy, nonatomic) NSString *serviceIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

