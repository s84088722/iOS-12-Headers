//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSLayoutConstraint, UILabel;

@interface _VideosExtrasMainMenuItemCollectionViewCell : UICollectionViewCell
{
    NSLayoutConstraint *_textLabelConstraint;
    UILabel *_textLabel;
}

+ (id)_createLabelInCell:(id)arg1;
@property(readonly, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) NSLayoutConstraint *textLabelConstraint; // @synthesize textLabelConstraint=_textLabelConstraint;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1;
- (void)_dynamicTypeChanged;
- (void)safeAreaInsetsDidChange;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

