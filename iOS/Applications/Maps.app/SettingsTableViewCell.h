//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "MapsTheming-Protocol.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface SettingsTableViewCell : UITableViewCell <MapsTheming>
{
}

+ (void)initialize;
- (void)updateTheme;
- (void)updateBeforeDisplayWithTextAlignment:(long long)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)safeAreaInsetsDidChange;
- (void)_setSeparatorInset;
- (id)initWithReuseIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

