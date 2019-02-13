//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "OrderedDataSource-Protocol.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface IdenticallyOrderedDataSource : NSObject <OrderedDataSource>
{
    NSArray *_orderedObjects;
}

@property(copy, nonatomic) NSArray *orderedObjects; // @synthesize orderedObjects=_orderedObjects;
- (void).cxx_destruct;
- (id)objectAtIndexPath:(id)arg1;
- (long long)numberOfRowsInSection:(long long)arg1;
- (long long)numberOfSections;
- (id)initWithObjects:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

