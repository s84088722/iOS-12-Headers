//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Preferences/PSSoftwareUpdateTitleCell.h>

@class NRDevice;

@interface COSSoftwareUpdateTitleCell : PSSoftwareUpdateTitleCell
{
    NRDevice *_device;
}

@property(readonly, nonatomic) NRDevice *device; // @synthesize device=_device;
- (void).cxx_destruct;
- (void)updateProgressTintColor;
- (id)newSoftwareUpdateAnimatedIconWithFrame:(struct CGRect)arg1;
- (id)gearBackgroundImage;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 device:(id)arg4;

@end

