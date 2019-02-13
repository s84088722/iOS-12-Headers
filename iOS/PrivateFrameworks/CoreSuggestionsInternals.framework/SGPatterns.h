//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSCache, NSMutableSet, NSString;

@interface SGPatterns : NSObject
{
    NSString *_classKey;
    NSArray *_langResolutionOrder;
    NSCache *_compiledRegexes2;
    NSString *_language;
    NSMutableSet *_regexpKeysSeen;
    int _localLanguageVersion;
}

+ (id)fallbackLanguageCodeForCountryCode:(id)arg1;
+ (id)countryCodeFromLanguageCode:(id)arg1;
+ (id)languagePartOfLanguageCode:(id)arg1;
+ (void)pauseCacheEvictionTemporarily;
+ (void)_reinstateDeath;
+ (void)clearAllRegexCaches;
+ (void)useAllLanguagesAtOnce:(_Bool)arg1;
+ (id)calculateLangResolutionOrder;
+ (void)resetToDefaultPatternsForTesting;
+ (void)setPatternsDictForTesting:(id)arg1;
+ (id)patternsForClass:(Class)arg1;
+ (void)forceLanguagesTo:(id)arg1;
+ (id)calculateCurrentLanguagesFromPreferredLocaleCodes:(id)arg1;
+ (void)changeLanguageOrPatternData;
+ (void)initialize;
- (void).cxx_destruct;
- (void)_becomeImmuneToDeath;
- (void)_clearRegexCache;
- (id)regex2ForKey:(id)arg1;
- (id)stringSetMatcherForKey:(id)arg1;
- (id)rawValueOrDataForKey:(id)arg1;
- (id)rawValueForKey:(id)arg1;
- (id)rawValuesForKey:(id)arg1;
- (void)resetIfNeeded;
- (void)dealloc;
- (id)init;

@end

