//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface RESiriActionsDonationsWhitelist : NSObject
{
    struct NSDictionary *_whitelist;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (_Bool)intentIsWhitelistedForBundleID:(id)arg1 andTypeName:(id)arg2;
- (id)intentWhitelistedRelevanceThresholdForBundleID:(id)arg1 andTypeName:(id)arg2;
- (_Bool)userActivityIsWhitelistedForBundleID:(id)arg1 andActivityType:(id)arg2;
- (id)userActivityWhitelistedRelevanceThresholdForBundleID:(id)arg1 andActivityType:(id)arg2;
- (id)init;

@end

