//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSDate, PLManagedAsset;

@interface PLMediaAnalysisAssetAttributes : PLManagedObject
{
}

+ (id)entityName;
+ (id)fetchRequest;
- (CDStruct_5c5366e1)bestVideoTimeRange;
- (void)setBestVideoTimeRange:(CDStruct_5c5366e1)arg1;
- (CDStruct_1b6d18a9)bestKeyFrameTime;
- (void)setBestKeyFrameTime:(CDStruct_1b6d18a9)arg1;

// Remaining properties
@property(nonatomic) float activityScore; // @dynamic activityScore;
@property(retain, nonatomic) PLManagedAsset *asset; // @dynamic asset;
@property(nonatomic) float autoplaySuggestionScore; // @dynamic autoplaySuggestionScore;
@property(nonatomic) int bestKeyFrameTimeScale; // @dynamic bestKeyFrameTimeScale;
@property(nonatomic) long long bestKeyFrameValue; // @dynamic bestKeyFrameValue;
@property(nonatomic) int bestVideoRangeDurationTimeScale; // @dynamic bestVideoRangeDurationTimeScale;
@property(nonatomic) long long bestVideoRangeDurationValue; // @dynamic bestVideoRangeDurationValue;
@property(nonatomic) int bestVideoRangeStartTimeScale; // @dynamic bestVideoRangeStartTimeScale;
@property(nonatomic) long long bestVideoRangeStartValue; // @dynamic bestVideoRangeStartValue;
@property(nonatomic) float blurrinessScore; // @dynamic blurrinessScore;
@property(nonatomic) float exposureScore; // @dynamic exposureScore;
@property(nonatomic) unsigned long long faceCount; // @dynamic faceCount;
@property(retain, nonatomic) NSDate *mediaAnalysisTimeStamp; // @dynamic mediaAnalysisTimeStamp;
@property(nonatomic) unsigned long long mediaAnalysisVersion; // @dynamic mediaAnalysisVersion;
@property(nonatomic) float videoScore; // @dynamic videoScore;

@end

