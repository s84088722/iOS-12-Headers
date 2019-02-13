//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibraryServices/PLPTPAsset.h>

@class NSData, NSNumber, NSString, PLPTPAssetHandle;

@interface PLMutablePTPAsset : PLPTPAsset
{
}

- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) long long conversionGroup; // @dynamic conversionGroup;
@property(copy, nonatomic) NSString *relatedUUID; // @dynamic relatedUUID;
@property(nonatomic, getter=isTimeLapseVideo) _Bool timeLapseVideo; // @dynamic timeLapseVideo;
@property(nonatomic, getter=isHighFrameRateVideo) _Bool highFrameRateVideo; // @dynamic highFrameRateVideo;
@property(nonatomic, getter=isBurstFirstPicked) _Bool burstFirstPicked; // @dynamic burstFirstPicked;
@property(nonatomic, getter=isBurstFavorite) _Bool burstFavorite; // @dynamic burstFavorite;
@property(nonatomic, getter=isBurstPicked) _Bool burstPicked; // @dynamic burstPicked;
@property(copy, nonatomic) NSString *burstUUID; // @dynamic burstUUID;
@property(copy, nonatomic) NSString *groupUUID; // @dynamic groupUUID;
@property(copy, nonatomic) NSString *locationString; // @dynamic locationString;
@property(copy, nonatomic) NSString *durationString; // @dynamic durationString;
@property(copy, nonatomic) NSString *captureDateString; // @dynamic captureDateString;
@property(copy, nonatomic) NSString *modificationDateString; // @dynamic modificationDateString;
@property(nonatomic) long long desiredOrientation; // @dynamic desiredOrientation;
@property(nonatomic) struct CGSize thumbPixSize; // @dynamic thumbPixSize;
@property(nonatomic) struct CGSize imagePixSize; // @dynamic imagePixSize;
@property(copy, nonatomic) NSNumber *thumbCompressedSize; // @dynamic thumbCompressedSize;
@property(copy, nonatomic) NSNumber *thumbOffset; // @dynamic thumbOffset;
@property(copy, nonatomic) NSString *originatingAssetID; // @dynamic originatingAssetID;
@property(copy, nonatomic) NSNumber *objectCompressedSize; // @dynamic objectCompressedSize;
@property(nonatomic, getter=isExifAvailable) _Bool exifAvailable; // @dynamic exifAvailable;
@property(copy, nonatomic) NSString *fullDirectoryPath; // @dynamic fullDirectoryPath;
@property(copy, nonatomic) NSString *originalFilename; // @dynamic originalFilename;
@property(nonatomic, getter=isDeleted) _Bool deleted; // @dynamic deleted;
@property(copy, nonatomic) NSString *createdFilename; // @dynamic createdFilename;
@property(copy, nonatomic) NSString *filename; // @dynamic filename;
@property(copy, nonatomic) PLPTPAssetHandle *assetHandle; // @dynamic assetHandle;
@property(copy, nonatomic) NSData *event; // @dynamic event;

@end

