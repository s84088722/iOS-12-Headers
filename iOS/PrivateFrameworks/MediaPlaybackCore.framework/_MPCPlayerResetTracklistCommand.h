//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlaybackCore/_MPCPlayerCommand.h>

#import <MediaPlaybackCore/MPCPlayerResetTracklistCommand-Protocol.h>

@class NSArray, NSDictionary, NSSet, NSString;

@interface _MPCPlayerResetTracklistCommand : _MPCPlayerCommand <MPCPlayerResetTracklistCommand>
{
    _Bool _supportsSetQueueCommand;
    NSArray *_devices;
    NSDictionary *_supportedSpecializedQueues;
    NSSet *_supportedQueueTypes;
    NSSet *_supportedCustomDataQueueIdentifiers;
}

@property(retain, nonatomic) NSSet *supportedCustomDataQueueIdentifiers; // @synthesize supportedCustomDataQueueIdentifiers=_supportedCustomDataQueueIdentifiers;
@property(retain, nonatomic) NSSet *supportedQueueTypes; // @synthesize supportedQueueTypes=_supportedQueueTypes;
@property(nonatomic) _Bool supportsSetQueueCommand; // @synthesize supportsSetQueueCommand=_supportsSetQueueCommand;
@property(retain, nonatomic) NSDictionary *supportedSpecializedQueues; // @synthesize supportedSpecializedQueues=_supportedSpecializedQueues;
@property(copy, nonatomic) NSArray *devices; // @synthesize devices=_devices;
- (void).cxx_destruct;
- (id)replaceWithPlaybackIntent:(id)arg1 replaceIntent:(long long)arg2;
- (id)replaceWithPlaybackIntent:(id)arg1;
- (id)clear;
@property(readonly, nonatomic) NSArray *specializedIntents;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

