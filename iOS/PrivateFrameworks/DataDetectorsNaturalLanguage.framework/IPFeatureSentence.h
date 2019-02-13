//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DataDetectorsNaturalLanguage/IPFeature.h>

@class NSArray, NSString, RKText;

@interface IPFeatureSentence : IPFeature
{
    _Bool _hasCheckedEventVocabularyKeyword;
    _Bool _hasCheckedEventVocabularyIgnoreDateKeyword;
    RKText *_responseKitSentence;
    NSArray *_fragments;
    NSString *_languageID;
    unsigned long long _storedPolarity;
    NSString *_storedEventVocabularyRejectionKeyword;
    NSString *_storedEventVocabularyIgnoreDateKeyword;
}

+ (id)humanReadableFeaturePolarity:(unsigned long long)arg1;
+ (unsigned long long)numberOfMatchesForEventVocabularySubjectTitleInString:(id)arg1 languageID:(id)arg2;
+ (id)eventVocabularySubjectTitleInString:(id)arg1 languageID:(id)arg2;
+ (id)eventVocabularyIgnoreDateKeywordInString:(id)arg1 languageID:(id)arg2;
+ (id)eventVocabularyRejectionKeywordInString:(id)arg1 languageID:(id)arg2;
+ (id)bestLanguageIDFromText:(id)arg1;
+ (id)eventVocabularySubjectTitleRegexForLanguageID:(id)arg1;
+ (id)eventVocabularyIgnoreDateRegexForLanguageID:(id)arg1;
+ (id)eventVocabularyRejectionRegexForLanguageID:(id)arg1;
+ (id)eventVocabularyPositiveRegexForLanguageID:(id)arg1;
+ (id)eventVocabularyRegexForType:(id)arg1 languageID:(id)arg2;
+ (id)buildRegexForType:(id)arg1 languageID:(id)arg2;
+ (id)regexSetForType:(id)arg1 languageID:(id)arg2;
@property(copy) NSString *storedEventVocabularyIgnoreDateKeyword; // @synthesize storedEventVocabularyIgnoreDateKeyword=_storedEventVocabularyIgnoreDateKeyword;
@property(copy) NSString *storedEventVocabularyRejectionKeyword; // @synthesize storedEventVocabularyRejectionKeyword=_storedEventVocabularyRejectionKeyword;
@property unsigned long long storedPolarity; // @synthesize storedPolarity=_storedPolarity;
@property(copy) NSString *languageID; // @synthesize languageID=_languageID;
@property(copy) NSArray *fragments; // @synthesize fragments=_fragments;
@property(retain) RKText *responseKitSentence; // @synthesize responseKitSentence=_responseKitSentence;
- (void).cxx_destruct;
- (id)descriptionForFragmentAtIndex:(unsigned long long)arg1;
- (id)descriptionForFragment:(id)arg1;
@property(readonly, getter=isQuoteAttributionLine) _Bool quoteAttributionLine;
- (void)checkEventVocabularyKeywordsIfNeeded;
@property(readonly, copy) NSString *eventVocabularyIgnoreDateKeyword;
@property(readonly, copy) NSString *eventVocabularyRejectionKeyword;
@property(readonly) unsigned long long polarity;
- (unsigned long long)polarityForRange:(struct _NSRange)arg1 confidence:(double *)arg2;
- (unsigned long long)polarityForRange:(struct _NSRange)arg1;
@property(readonly) unsigned long long clusterType;
- (void)addFragment:(id)arg1;
- (id)description;
- (id)initWithLanguageID:(id)arg1 responseKitSentence:(id)arg2;

@end

