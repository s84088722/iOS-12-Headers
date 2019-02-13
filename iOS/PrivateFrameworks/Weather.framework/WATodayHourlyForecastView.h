//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSAttributedString, UIImage, UIImageView, UILabel, UIVisualEffectView;

@interface WATodayHourlyForecastView : UIView
{
    UIVisualEffectView *_temperatureLabelVisualEffectView;
    UIVisualEffectView *_timeLabelVisualEffectView;
    UILabel *_temperatureLabel;
    UILabel *_timeLabel;
    UIImageView *_conditionsImageView;
    NSArray *_constraints;
}

@property(retain, nonatomic) NSArray *constraints; // @synthesize constraints=_constraints;
@property(retain, nonatomic) UIImageView *conditionsImageView; // @synthesize conditionsImageView=_conditionsImageView;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *temperatureLabel; // @synthesize temperatureLabel=_temperatureLabel;
@property(retain, nonatomic) UIVisualEffectView *timeLabelVisualEffectView; // @synthesize timeLabelVisualEffectView=_timeLabelVisualEffectView;
@property(retain, nonatomic) UIVisualEffectView *temperatureLabelVisualEffectView; // @synthesize temperatureLabelVisualEffectView=_temperatureLabelVisualEffectView;
- (void).cxx_destruct;
- (void)_setupConstraints;
- (void)applyVibrancyToTimeWithEffect:(id)arg1;
@property(retain, nonatomic) UIImage *conditionsImage;
@property(copy, nonatomic) NSAttributedString *time;
@property(copy, nonatomic) NSAttributedString *temperature;
- (id)initWithFrame:(struct CGRect)arg1;

@end

