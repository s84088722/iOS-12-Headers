//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSURL.h>

@interface NSURL (FRTelephonyAdditions)
+ (id)fr_sanitizedURLForWebView:(id)arg1 navigationAction:(id)arg2;
+ (_Bool)fr_canHandleNavigationAction:(id)arg1;
- (_Bool)fr_isHTTPScheme;
- (_Bool)fr_isWebArchiveURL;
- (_Bool)fr_handleExternalURLWithPrompt;
- (id)fr_deepLinkURL;
@end
