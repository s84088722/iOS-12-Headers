//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SBKUniversalPlaybackPositionMediaItem-Protocol.h"

@class NSString, SBCPlaybackPositionEntity;

@interface SBDPlaybackPositionMediaItem : NSObject <SBKUniversalPlaybackPositionMediaItem>
{
    NSString *_identifier;
    SBCPlaybackPositionEntity *_entity;
}

@property(readonly) SBCPlaybackPositionEntity *entity; // @synthesize entity=_entity;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)enumerateValuesForProperties:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)initWithUbiquitousIdentifier:(id)arg1 inLibrary:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

