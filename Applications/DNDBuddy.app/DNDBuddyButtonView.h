//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIStackView;
@protocol DNDBuddyButtonViewDelegate;

@interface DNDBuddyButtonView : UIView
{
    id <DNDBuddyButtonViewDelegate> _delegate;
    UIStackView *_buttonStackView;
}

+ (double)heightForButtonCount:(unsigned long long)arg1 availableWidth:(double)arg2;
@property(retain, nonatomic) UIStackView *buttonStackView; // @synthesize buttonStackView=_buttonStackView;
@property(nonatomic) __weak id <DNDBuddyButtonViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_forwardButtonTapAtIndex:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1 buttonTitles:(id)arg2;

@end
