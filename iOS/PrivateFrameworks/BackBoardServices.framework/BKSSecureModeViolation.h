//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <BackBoardServices/BSDescriptionProviding-Protocol.h>

@class NSArray, NSNumber, NSString;

@interface BKSSecureModeViolation : NSObject <BSDescriptionProviding>
{
    NSNumber *_processId;
    NSArray *_contextIds;
}

@property(copy, nonatomic) NSArray *contextIds; // @synthesize contextIds=_contextIds;
@property(retain, nonatomic) NSNumber *processId; // @synthesize processId=_processId;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)initWithProcessId:(id)arg1 contextIds:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

