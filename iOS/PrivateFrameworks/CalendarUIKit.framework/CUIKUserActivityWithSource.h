//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CalendarUIKit/CUIKUserActivity.h>

@class NSString;

@interface CUIKUserActivityWithSource : CUIKUserActivity
{
    long long _sourceType;
    NSString *_sourceHost;
    NSString *_sourceOwner;
}

- (void).cxx_destruct;
- (_Bool)_isLocalSource;
- (_Bool)_supportsConsistentExternalIDAcrossDevices;
- (_Bool)_supportsConsistentExternalIDAcrossDevices:(long long)arg1;
- (_Bool)_requiresHostAndOwner;
- (unsigned long long)isMatchForSource:(id)arg1;
- (id)dictionary;
- (id)initWithDictionary:(id)arg1;
- (id)initWithSource:(id)arg1 type:(unsigned long long)arg2;

@end

