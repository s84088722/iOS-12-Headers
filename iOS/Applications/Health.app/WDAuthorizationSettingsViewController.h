//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthUI/HKAuthorizationSettingsViewController.h>

@class WDProfile;

@interface WDAuthorizationSettingsViewController : HKAuthorizationSettingsViewController
{
    WDProfile *_profile;
}

@property(retain) WDProfile *profile; // @synthesize profile=_profile;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)specialCellWithIdentifier:(id)arg1 textLabelText:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)sectionsForAuthController:(id)arg1;
- (id)initWithProfile:(id)arg1 style:(long long)arg2;

@end

