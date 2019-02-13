//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AbstractPromiseProvider.h"

#import "PromiseProvider-Protocol.h"

@class NSString;

@interface ODRPromiseProvider : AbstractPromiseProvider <PromiseProvider>
{
}

- (id)truncatePromiseID:(id)arg1 withDefinition:(id)arg2;
- (id)resetPromiseID:(id)arg1;
- (id)fetchPromiseID:(id)arg1 orCreateWithDefinition:(id)arg2;
- (id)failPromiseID:(id)arg1 withReason:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

