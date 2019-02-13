//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface INIntentSummary : NSObject
{
    NSString *_intentIdentifier;
    NSString *_originatingBundleId;
    NSString *_languageCode;
    unsigned long long _containedProperties;
    NSString *_title;
    NSString *_subtitle;
}

@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) unsigned long long containedProperties; // @synthesize containedProperties=_containedProperties;
@property(readonly, copy, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
@property(readonly, copy, nonatomic) NSString *originatingBundleId; // @synthesize originatingBundleId=_originatingBundleId;
@property(readonly, copy, nonatomic) NSString *intentIdentifier; // @synthesize intentIdentifier=_intentIdentifier;
- (void).cxx_destruct;
- (id)initWithIntentIdentifier:(id)arg1 originatingBundleId:(id)arg2 languageCode:(id)arg3;

@end

