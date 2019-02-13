//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ManagedConfiguration/MCVPNPayloadBase.h>

@class NSArray, NSString;

@interface MCAppLayerVPNPayload : MCVPNPayloadBase
{
    NSString *_VPNUUID;
    NSArray *_SafariDomains;
}

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;
@property(retain, nonatomic) NSArray *SafariDomains; // @synthesize SafariDomains=_SafariDomains;
@property(retain, nonatomic) NSString *VPNUUID; // @synthesize VPNUUID=_VPNUUID;
- (void).cxx_destruct;
- (id)payloadDescriptionKeyValueSections;
- (id)description;
- (id)stubDictionary;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;

@end

