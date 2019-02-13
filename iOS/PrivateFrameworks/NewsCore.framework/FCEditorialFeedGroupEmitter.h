//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCFeedGroupEmitting-Protocol.h>

@class NSSet, NSString;
@protocol FCFeedGroupInsertionDescriptor;

@interface FCEditorialFeedGroupEmitter : NSObject <FCFeedGroupEmitting>
{
    id <FCFeedGroupInsertionDescriptor> _insertionDescriptor;
}

+ (id)editorialFeedTransformationWithContext:(id)arg1;
@property(readonly, copy, nonatomic) id <FCFeedGroupInsertionDescriptor> insertionDescriptor; // @synthesize insertionDescriptor=_insertionDescriptor;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long requiredForYouContentTypes;
- (id)backingChannelTagIDWithConfiguration:(id)arg1;
@property(readonly, copy, nonatomic) NSString *groupEmitterIdentifier;
@property(readonly, copy, nonatomic) NSSet *emittableGroupTypes;
- (_Bool)wantsToInsertGroup:(id)arg1 withContext:(id)arg2;
- (id)operationToEmitGroupWithContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3;
- (_Bool)wantsToEmitGroupInContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3;
- (id)initWithInsertionDescriptor:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool emitsSingleRefreshSessionGroups;
@property(readonly, nonatomic) _Bool emitsSingletonGroups;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isRequiredByFollowingEmitters;
@property(readonly) Class superclass;

@end

