//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CAMBufferObservance : NSObject
{
    _Bool _removedOnceEnabled;
    _Bool _fulfilled;
    _Bool _enabled;
    CDUnknownBlockType _predicate;
}

@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic, getter=isFulfilled) _Bool fulfilled; // @synthesize fulfilled=_fulfilled;
@property(readonly, copy, nonatomic) CDUnknownBlockType predicate; // @synthesize predicate=_predicate;
@property(readonly, nonatomic, getter=isRemovedOnceEnabled) _Bool removedOnceEnabled; // @synthesize removedOnceEnabled=_removedOnceEnabled;
- (void).cxx_destruct;
- (void)fulfillWithChange:(id)arg1;
- (_Bool)shouldBeFulfilledByChange:(id)arg1;
- (void)teardownObservanceForBuffer:(id)arg1;
- (void)setupObservanceForBuffer:(id)arg1;
- (id)initWithPredicate:(CDUnknownBlockType)arg1 removedOnceEnabled:(_Bool)arg2;

@end
