//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/ODDDataPoint.h>

@class NSMutableArray, ODDTransitionPoint;

__attribute__((visibility("hidden")))
@interface ODDNodePoint : ODDDataPoint
{
    ODDNodePoint *mParent;
    NSMutableArray *mChildren;
    ODDTransitionPoint *mParentTransition;
    ODDTransitionPoint *mSiblingTransition;
}

- (void)setSiblingTransition:(id)arg1;
- (id)siblingTransition;
- (void)setParentTransition:(id)arg1;
- (id)parentTransition;
- (void)addChild:(id)arg1 order:(unsigned long long)arg2;
- (id)children;
- (id)parent;
- (void)setType:(int)arg1;
- (void)dealloc;

@end

