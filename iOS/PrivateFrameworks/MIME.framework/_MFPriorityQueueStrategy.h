//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MIME/MFQueueingStrategy-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _MFPriorityQueueStrategy : NSObject <MFQueueingStrategy>
{
    CDUnknownBlockType _comparator;
}

@property(readonly, nonatomic) CDUnknownBlockType comparator; // @synthesize comparator=_comparator;
- (unsigned long long)_indexForObject:(id)arg1 buffer:(id)arg2;
- (unsigned long long)_insertionIndexForObject:(id)arg1 buffer:(id)arg2;
- (void)dequeueObject:(id)arg1 buffer:(id)arg2;
- (void)enqueueObject:(id)arg1 buffer:(id)arg2;
@property(readonly, nonatomic) NSString *descriptionType;
- (id)initWithComparator:(CDUnknownBlockType)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

