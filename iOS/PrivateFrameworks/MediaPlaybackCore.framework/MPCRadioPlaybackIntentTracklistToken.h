//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlaybackCore/NSSecureCoding-Protocol.h>

@class MPCModelRadioContentReference, MPCRadioStationPlaybackMetadata, RadioStationMatchContext;

@interface MPCRadioPlaybackIntentTracklistToken : NSObject <NSSecureCoding>
{
    MPCRadioStationPlaybackMetadata *_radioStationPlaybackMetadata;
    MPCModelRadioContentReference *_nowPlayingContentReference;
    RadioStationMatchContext *_nowPlayingContext;
    MPCModelRadioContentReference *_seedContentReference;
    RadioStationMatchContext *_stationMatchContext;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) RadioStationMatchContext *stationMatchContext; // @synthesize stationMatchContext=_stationMatchContext;
@property(copy, nonatomic) MPCModelRadioContentReference *seedContentReference; // @synthesize seedContentReference=_seedContentReference;
@property(retain, nonatomic) RadioStationMatchContext *nowPlayingContext; // @synthesize nowPlayingContext=_nowPlayingContext;
@property(copy, nonatomic) MPCModelRadioContentReference *nowPlayingContentReference; // @synthesize nowPlayingContentReference=_nowPlayingContentReference;
@property(copy, nonatomic) MPCRadioStationPlaybackMetadata *radioStationPlaybackMetadata; // @synthesize radioStationPlaybackMetadata=_radioStationPlaybackMetadata;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

