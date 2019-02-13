//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, NSString, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface SLSheetTitleView : UIView
{
    UIImageView *_serviceIconView;
    NSMutableArray *_constraints;
    UILabel *_titleLabel;
    NSString *_title;
}

@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (struct CGSize)intrinsicContentSize;
- (void)sizeToFit;
- (void)setServiceIconImage:(id)arg1;
- (void)_setupTitleLabel;
- (void)layoutSubviews;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

@end

