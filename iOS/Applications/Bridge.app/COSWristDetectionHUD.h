//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer, UILabel;

@interface COSWristDetectionHUD : UIView
{
    CALayer *_none;
    CALayer *_invalid;
    CALayer *_lr;
    CALayer *_ll;
    CALayer *_rr;
    CALayer *_rl;
    CALayer *_p;
    CALayer *_d;
    UILabel *_prediciton;
}

@property(retain, nonatomic) UILabel *prediciton; // @synthesize prediciton=_prediciton;
@property(retain, nonatomic) CALayer *d; // @synthesize d=_d;
@property(retain, nonatomic) CALayer *p; // @synthesize p=_p;
@property(retain, nonatomic) CALayer *rl; // @synthesize rl=_rl;
@property(retain, nonatomic) CALayer *rr; // @synthesize rr=_rr;
@property(retain, nonatomic) CALayer *ll; // @synthesize ll=_ll;
@property(retain, nonatomic) CALayer *lr; // @synthesize lr=_lr;
@property(retain, nonatomic) CALayer *invalid; // @synthesize invalid=_invalid;
@property(retain, nonatomic) CALayer *none; // @synthesize none=_none;
- (void).cxx_destruct;
- (void)updateWithSummary:(id)arg1;
- (void)updateWithConfidences:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

