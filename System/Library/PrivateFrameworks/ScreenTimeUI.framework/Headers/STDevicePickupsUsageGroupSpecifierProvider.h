//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ScreenTimeUI/STUsageGroupSpecifierProvider.h>

@class PSSpecifier;

@interface STDevicePickupsUsageGroupSpecifierProvider : STUsageGroupSpecifierProvider
{
    PSSpecifier *_pickupsSummaryGraphSpecifier;
}

@property(retain, nonatomic) PSSpecifier *pickupsSummaryGraphSpecifier; // @synthesize pickupsSummaryGraphSpecifier=_pickupsSummaryGraphSpecifier;
- (void).cxx_destruct;
- (id)mostPickups:(id)arg1;
- (id)totalPickups:(id)arg1;
- (id)getPickupInfo:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setCoordinator:(id)arg1;
- (id)init;

@end

