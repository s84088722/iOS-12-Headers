//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSUUID, UIImage;

@interface TabSnapshotCacheEntry : NSObject
{
    _Bool _group;
    _Bool _updatingState;
    _Bool _stateUpdateCancelled;
    NSUUID *_identifier;
    NSMutableSet *_groupMembers;
    UIImage *_snapshot;
    long long _state;
    unsigned long long _decodedSize;
}

@property(nonatomic) unsigned long long decodedSize; // @synthesize decodedSize=_decodedSize;
@property(nonatomic) _Bool stateUpdateCancelled; // @synthesize stateUpdateCancelled=_stateUpdateCancelled;
@property(nonatomic, getter=isUpdatingState) _Bool updatingState; // @synthesize updatingState=_updatingState;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) UIImage *snapshot; // @synthesize snapshot=_snapshot;
@property(readonly, nonatomic) NSMutableSet *groupMembers; // @synthesize groupMembers=_groupMembers;
@property(readonly, nonatomic, getter=isGroup) _Bool group; // @synthesize group=_group;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithIdentifier:(id)arg1 isGroup:(_Bool)arg2;

@end

