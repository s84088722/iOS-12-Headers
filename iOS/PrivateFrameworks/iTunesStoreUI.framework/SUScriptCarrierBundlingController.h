//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString;

@interface SUScriptCarrierBundlingController : SUScriptObject
{
}

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
- (void)updateLastKnownStatus:(id)arg1;
@property(readonly) NSString *statusUnlinked;
@property(readonly) NSString *statusUnknown;
@property(readonly) NSString *statusNotEligible;
@property(readonly) NSString *statusNeedsManualVerification;
@property(readonly) NSString *statusEligible;
@property(readonly) NSString *provisioningStyleOnce;
@property(readonly) NSString *provisioningStyleNever;
@property(readonly) NSString *provisioningStyleAlways;
- (id)_className;

@end

