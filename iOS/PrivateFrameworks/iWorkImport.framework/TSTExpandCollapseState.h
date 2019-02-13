//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSKSosBase.h>

#import <iWorkImport/NSCopying-Protocol.h>

@class TSUUUIDSet;

__attribute__((visibility("hidden")))
@interface TSTExpandCollapseState : TSKSosBase <NSCopying>
{
    vector_4dc5f307 _collapsedGroupUIDs;
    vector_4dc5f307 _expandedGroupUIDs;
    TSUUUIDSet *_uidsCollapsed;
    TSUUUIDSet *_uidsExpanded;
}

@property(readonly, nonatomic) TSUUUIDSet *uidsExpanded; // @synthesize uidsExpanded=_uidsExpanded;
@property(readonly, nonatomic) TSUUUIDSet *uidsCollapsed; // @synthesize uidsCollapsed=_uidsCollapsed;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)makeInverse;
- (void)saveToArchive:(struct ExpandCollapseStateArchive *)arg1;
- (id)initWithArchive:(const struct ExpandCollapseStateArchive *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCollapsed:(id)arg1 expanded:(id)arg2;

@end

