//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlaybackCore/MPCRadioStationPlaybackMetadata.h>

@class NSString, NSURL, RadioArtworkCollection;

@interface MPCMutableRadioStationPlaybackMetadata : MPCRadioStationPlaybackMetadata
{
}

@property(copy, nonatomic) NSURL *stationURL; // @dynamic stationURL;
@property(copy, nonatomic) NSString *stationStringID; // @dynamic stationStringID;
@property(copy, nonatomic) NSString *stationName; // @dynamic stationName;
@property(nonatomic) long long stationID; // @dynamic stationID;
@property(copy, nonatomic) NSString *stationHash; // @dynamic stationHash;
@property(retain, nonatomic) RadioArtworkCollection *artworkCollection; // @dynamic artworkCollection;

@end

