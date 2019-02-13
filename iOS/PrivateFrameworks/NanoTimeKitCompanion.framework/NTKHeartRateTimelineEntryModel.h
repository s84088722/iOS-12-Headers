//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKTimelineEntryModel.h>

@class NSArray, NSDate;

@interface NTKHeartRateTimelineEntryModel : NTKTimelineEntryModel
{
    _Bool _hasBPM;
    _Bool _lessThanMinute;
    _Bool _locked;
    _Bool _hasSummary;
    NSDate *_measurementDate;
    long long _BPM;
    long long _dailyLowBPM;
    long long _dailyHighBPM;
    NSArray *_chartPoints;
}

@property(retain, nonatomic) NSArray *chartPoints; // @synthesize chartPoints=_chartPoints;
@property(nonatomic) long long dailyHighBPM; // @synthesize dailyHighBPM=_dailyHighBPM;
@property(nonatomic) long long dailyLowBPM; // @synthesize dailyLowBPM=_dailyLowBPM;
@property(nonatomic) _Bool hasSummary; // @synthesize hasSummary=_hasSummary;
@property(nonatomic, getter=isLocked) _Bool locked; // @synthesize locked=_locked;
@property(nonatomic) _Bool lessThanMinute; // @synthesize lessThanMinute=_lessThanMinute;
@property(nonatomic) _Bool hasBPM; // @synthesize hasBPM=_hasBPM;
@property(nonatomic) long long BPM; // @synthesize BPM=_BPM;
@property(retain, nonatomic) NSDate *measurementDate; // @synthesize measurementDate=_measurementDate;
- (void).cxx_destruct;
- (id)_bpmString;
- (id)_heartrateString;
- (id)_newSignatureRectangularTemplate;
- (id)_metadataWithCurrentMeasurements;
- (id)_signaturebezelTextProvider;
- (id)_newSignatureBezelTemplate;
- (id)_newSignatureCircularTemplate;
- (id)_newSignatureCornerTemplate;
- (id)_newExtraLargeTemplate;
- (id)_newModularLargeTemplate;
- (id)_newModularSmallTemplate;
- (id)_newCircularTemplateUsingMediumSize:(_Bool)arg1;
- (id)_newUtilitarianLargeTemplate;
- (id)_newUtilitarianSmallTemplate;
- (id)_newUtilitarianSmallFlatTemplate;
- (id)templateForComplicationFamily:(long long)arg1;

@end

