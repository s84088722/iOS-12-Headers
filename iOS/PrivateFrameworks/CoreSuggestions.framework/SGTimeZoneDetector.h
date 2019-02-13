//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SGTimeZoneDetector : NSObject
{
    NSDictionary *_countryCodeForCountryName;
    NSDictionary *_timeZoneForCountryCode;
    NSDictionary *_timeZoneForCountryCodeDictionarySupplement;
    NSDictionary *_regionAbbreviations;
    NSDictionary *_timeZoneForPostalCode;
    NSDictionary *_timeZoneAbbreviations;
    NSDictionary *_uniquePostalCodeFormats;
    NSDictionary *_postalCodeFormats;
    _Bool _keepData;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_memoryPressureSource;
    unsigned long long _memoryPressureStatus;
}

+ (id)_regularExpressionForPostalCodeFormat:(id)arg1;
+ (id)_normalizedString:(id)arg1;
+ (id)_normalizedCountryString:(id)arg1;
- (void).cxx_destruct;
- (id)timeZoneNameForAddress:(id)arg1 withCountryCode:(id)arg2;
- (id)_timeZoneNameForPostalCode:(id)arg1 withPostalCodeTable:(id)arg2;
- (id)countryCodeForAddress:(id)arg1;
- (id)_countryCodeByCountryNameFromNormalizedAddressWords:(id)arg1;
- (id)_countryCodeByRegionNameFromNormalizedAddress:(id)arg1 withWords:(id)arg2;
- (id)_countryCodeByRegularExpressionFromNormalizedAddress:(id)arg1;
- (id)_countryCodeByRegionAbbreviationFromNormalizedAddress:(id)arg1;
- (id)_postalCodeForAddress:(id)arg1 withCountryCode:(id)arg2;
- (id)_getRegionNames;
- (id)_getPostalCodeFormats;
- (id)_getUniquePostalCodeFormats;
- (id)_getTimeZoneAbbreviations;
- (id)_getTimeZoneForPostalCode;
- (id)_getRegionAbbreviations;
- (id)_getTimeZoneForCountryCodeDictionarySupplement;
- (void)cleanupCache;
- (void)_readPlistRegionAbbreviationsData;
- (id)_getTimeZoneForCountryCode;
- (id)_getCountryCodeForCountryName;
- (void)_handleMemoryPressureStatus;
- (id)init;

@end

