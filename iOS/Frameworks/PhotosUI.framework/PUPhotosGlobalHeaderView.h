//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class NSString, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface PUPhotosGlobalHeaderView : UICollectionReusableView
{
    UILabel *_titleLabel;
    UIView *_separatorView;
    NSString *_title;
}

+ (struct CGSize)sizeThatFits:(struct CGSize)arg1 forTitle:(id)arg2;
+ (struct CGSize)_instanceLayoutSubviews:(id)arg1 forTitle:(id)arg2 inBounds:(struct CGRect)arg3;
+ (id)_newTitleLabel;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)tintColorDidChange;
- (void)layoutSubviews;
- (void)_updateColors;
- (id)initWithFrame:(struct CGRect)arg1;

@end
