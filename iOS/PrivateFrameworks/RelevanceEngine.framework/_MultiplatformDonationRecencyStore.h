//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface _MultiplatformDonationRecencyStore : NSObject
{
    NSMutableArray *_appDateInfo;
    NSMutableDictionary *_infoByLocalID;
    NSMutableDictionary *_infoByRemoteID;
}

- (void).cxx_destruct;
- (id)bundlesFromMostRecentlyProvidingPlatforms;
- (void)updateDataWithRemoteBundleIdentifier:(id)arg1 remoteDate:(id)arg2 localBundleIdentifier:(id)arg3 localDate:(id)arg4;
- (id)init;

@end

