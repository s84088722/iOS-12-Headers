//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WeatherFoundation/NSSecureCoding-Protocol.h>

@class NSArray, NSDate, NSLocale, NSString, WFLocation;

@interface WFAirQualityConditions : NSObject <NSSecureCoding>
{
    WFLocation *_location;
    NSLocale *_locale;
    NSDate *_date;
    NSString *_provider;
    long long _localizedAirQualityIndex;
    NSString *_localizedAirQualityCategory;
    NSArray *_pollutants;
    NSDate *_expirationDate;
    unsigned long long _category;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) unsigned long long category; // @synthesize category=_category;
@property(retain, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(copy, nonatomic) NSArray *pollutants; // @synthesize pollutants=_pollutants;
@property(copy, nonatomic) NSString *localizedAirQualityCategory; // @synthesize localizedAirQualityCategory=_localizedAirQualityCategory;
@property(nonatomic) long long localizedAirQualityIndex; // @synthesize localizedAirQualityIndex=_localizedAirQualityIndex;
@property(copy, nonatomic) NSString *provider; // @synthesize provider=_provider;
@property(copy, nonatomic) NSDate *date; // @synthesize date=_date;
@property(copy, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
@property(retain, nonatomic) WFLocation *location; // @synthesize location=_location;
- (void).cxx_destruct;
- (long long)airQualityIndex;
@property(readonly, nonatomic) _Bool isExpired;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

