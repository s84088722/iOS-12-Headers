//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _PXAssetEditOperationPredicateRecord : NSObject
{
    Class _performerClass;
    CDUnknownBlockType _predicate;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType predicate; // @synthesize predicate=_predicate;
@property(readonly, nonatomic) Class performerClass; // @synthesize performerClass=_performerClass;
- (void).cxx_destruct;
- (id)initWithPerformerClass:(Class)arg1 predicate:(CDUnknownBlockType)arg2;

@end
