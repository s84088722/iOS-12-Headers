//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FCJSONEncodableObjectProviding-Protocol.h"

@class FCKeyValueStore, FCPersonalizationBundleIDMapping, FCPersonalizationFavorabilityScores, FCPersonalizationTodaySectionMapping, FCPersonalizationTreatment, FCPersonalizationURLMapping, FCPersonalizationWhitelist, FRPersonalizationAutoFavorites, NSDate;

@interface FRPersonalizationConfiguration : NSObject <FCJSONEncodableObjectProviding>
{
    FCPersonalizationTreatment *_configurableValues;
    FCPersonalizationURLMapping *_urlMapping;
    FCPersonalizationBundleIDMapping *_bundleIDMapping;
    FCPersonalizationWhitelist *_whitelist;
    FCPersonalizationFavorabilityScores *_favorabilityScores;
    FCPersonalizationTodaySectionMapping *_todaySectionMapping;
    FCKeyValueStore *_keyValueStore;
}

@property(retain, nonatomic) FCKeyValueStore *keyValueStore; // @synthesize keyValueStore=_keyValueStore;
- (void).cxx_destruct;
- (id)jsonEncodableObject;
@property(retain, nonatomic) FRPersonalizationAutoFavorites *autoFavorites;
@property(copy, nonatomic) NSDate *portraitLastQueryDate;
@property(copy, nonatomic) NSDate *coreDuetLastQueryDate;
@property(retain, nonatomic) FCPersonalizationTodaySectionMapping *todaySectionMapping; // @synthesize todaySectionMapping=_todaySectionMapping;
@property(retain, nonatomic) FCPersonalizationFavorabilityScores *favorabilityScores; // @synthesize favorabilityScores=_favorabilityScores;
@property(readonly, nonatomic) _Bool hasWhitelist;
@property(retain, nonatomic) FCPersonalizationWhitelist *whitelist; // @synthesize whitelist=_whitelist;
@property(readonly, nonatomic) _Bool hasBundleIDMapping;
@property(retain, nonatomic) FCPersonalizationBundleIDMapping *bundleIDMapping; // @synthesize bundleIDMapping=_bundleIDMapping;
@property(readonly, nonatomic) _Bool hasUrlMapping;
@property(retain, nonatomic) FCPersonalizationURLMapping *urlMapping; // @synthesize urlMapping=_urlMapping;
@property(retain, nonatomic) FCPersonalizationTreatment *configurableValues; // @synthesize configurableValues=_configurableValues;
- (id)initWithKeyValueStore:(id)arg1;

@end

