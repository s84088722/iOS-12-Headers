//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKRichComplicationCircularBaseView.h>

@class NSArray, NSLayoutConstraint, UIImageView, UILabel;

@interface NTKWeatherWindRichComplicationCircularView : NTKRichComplicationCircularBaseView
{
    NSArray *_tickLayers;
    UIImageView *_directionImageView;
    UILabel *_dueNorthLabel;
    UILabel *_noDataLabel;
    UILabel *_windspeedLabel;
    UILabel *_windDirectionLabel;
    NSLayoutConstraint *_windspeedCenterYConstraint;
    NSLayoutConstraint *_windspeedFirstBaselineConstraint;
    NSLayoutConstraint *_windDirectionTopConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *windDirectionTopConstraint; // @synthesize windDirectionTopConstraint=_windDirectionTopConstraint;
@property(retain, nonatomic) NSLayoutConstraint *windspeedFirstBaselineConstraint; // @synthesize windspeedFirstBaselineConstraint=_windspeedFirstBaselineConstraint;
@property(retain, nonatomic) NSLayoutConstraint *windspeedCenterYConstraint; // @synthesize windspeedCenterYConstraint=_windspeedCenterYConstraint;
@property(retain, nonatomic) UILabel *windDirectionLabel; // @synthesize windDirectionLabel=_windDirectionLabel;
@property(retain, nonatomic) UILabel *windspeedLabel; // @synthesize windspeedLabel=_windspeedLabel;
@property(retain, nonatomic) UILabel *noDataLabel; // @synthesize noDataLabel=_noDataLabel;
@property(retain, nonatomic) UILabel *dueNorthLabel; // @synthesize dueNorthLabel=_dueNorthLabel;
@property(retain, nonatomic) UIImageView *directionImageView; // @synthesize directionImageView=_directionImageView;
@property(retain, nonatomic) NSArray *tickLayers; // @synthesize tickLayers=_tickLayers;
- (void).cxx_destruct;
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;
- (void)_addConstraints;
- (void)layoutSubviews;
- (id)init;

@end

