//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class REAccessoryDescription, UILabel, UIVisualEffectView;

@interface REUpNextAccessoryView : UIView
{
    REAccessoryDescription *_accessoryDescription;
    UILabel *_label;
    UIVisualEffectView *_labelEffectView;
}

+ (void)initialize;
- (void).cxx_destruct;
- (id)viewForLastBaselineLayout;
- (void)setTextColor:(id)arg1;
- (void)configureWithDescription:(id)arg1;
- (id)secondaryEffectViews;
- (id)primaryEffectViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

