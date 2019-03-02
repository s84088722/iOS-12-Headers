//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/FCSingleTagFeedGroupEmitter.h>

@interface FCTestFeedGroupEmitter : FCSingleTagFeedGroupEmitter
{
    _Bool _disableGroupMerging;
    _Bool _disableFiltering;
    _Bool _enableSingletonGroups;
}

@property(nonatomic) _Bool enableSingletonGroups; // @synthesize enableSingletonGroups=_enableSingletonGroups;
@property(nonatomic) _Bool disableFiltering; // @synthesize disableFiltering=_disableFiltering;
@property(nonatomic) _Bool disableGroupMerging; // @synthesize disableGroupMerging=_disableGroupMerging;
- (Class)classForGroupEmittingOperation;
- (_Bool)emitsSingletonGroups;
- (_Bool)canMergeGroupsUnconditionally;
- (id)operationToEmitGroupWithContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3;

@end
