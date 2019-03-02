//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIButton, UILabel;
@protocol WDCheckmarkTableViewCellDelegate;

@interface WDCheckmarkTableViewCell : UITableViewCell
{
    UILabel *_displayLabel;
    UIButton *_button;
    id <WDCheckmarkTableViewCellDelegate> _delegate;
}

+ (id)reuseIdentifier;
@property(nonatomic) __weak id <WDCheckmarkTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)clickToggle:(id)arg1;
@property(nonatomic, getter=isOn) _Bool on;
- (void)setDisplayText:(id)arg1;
- (void)_setupUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
