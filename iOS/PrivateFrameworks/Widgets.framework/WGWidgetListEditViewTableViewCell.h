//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIButton, UIImageView;

@interface WGWidgetListEditViewTableViewCell : UITableViewCell
{
    UIImageView *_dotImageView;
    _Bool _widgetEnabled;
    _Bool _showsDot;
    UIButton *_insertWidgetAccessoryButton;
}

@property(readonly, nonatomic) __weak UIButton *insertWidgetAccessoryButton; // @synthesize insertWidgetAccessoryButton=_insertWidgetAccessoryButton;
@property(nonatomic) _Bool showsDot; // @synthesize showsDot=_showsDot;
@property(nonatomic, getter=isWidgetEnabled) _Bool widgetEnabled; // @synthesize widgetEnabled=_widgetEnabled;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

