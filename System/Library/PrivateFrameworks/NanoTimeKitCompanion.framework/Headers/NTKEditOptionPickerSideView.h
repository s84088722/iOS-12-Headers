//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface NTKEditOptionPickerSideView : UIView
{
    double _contentAlpha;
    struct CGAffineTransform _contentTransform;
    UIView *_optionView;
}

@property(retain, nonatomic) UIView *optionView; // @synthesize optionView=_optionView;
- (void).cxx_destruct;
- (void)_applyContentAlpha;
- (void)setRotationFromFront:(double)arg1;
- (void)applyContentTransform:(struct CGAffineTransform)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

