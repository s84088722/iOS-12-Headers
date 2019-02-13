//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (SafariCoreExtras)
+ (void)safari_reverseEnumerateComponents:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)safari_stringByRemovingWwwDotPrefix;
- (long long)safari_localizedCompareSortingEmptyStringAndNumericPrefixToEnd:(id)arg1;
@property(readonly, copy, nonatomic) NSString *safari_domainFromHost;
- (unsigned long long)safari_countOfString:(id)arg1;
- (id)safari_stringByRedactingBookmarkDAVServerID;
- (_Bool)safari_looksLikeEmailAddress;
- (id)safari_stringByRepeatingWithCount:(unsigned long long)arg1 joinedByString:(id)arg2;
- (id)safari_setOfAllSubstringsWithMinimumLength:(unsigned long long)arg1;
- (_Bool)safari_containsAllCharactersInString:(id)arg1;
- (_Bool)safari_isVersionStringBetweenVersionString:(id)arg1 andVersionString:(id)arg2;
- (_Bool)safari_isVersionStringGreaterThanVersionString:(id)arg1;
@property(readonly, copy, nonatomic) NSString *safari_userVisibleSafariBundleVersionFromFullVersion;
@property(readonly, copy, nonatomic) NSString *safari_stringByNormalizingVersionString;
@property(readonly, copy, nonatomic) NSString *safari_stringByReplacingHomoglyphForSpaceWithSpace;
- (_Bool)safari_containsPeriodOrHomoglyphForPeriod;
- (id)safari_stringByReplacingCharactersInSet:(id)arg1 withString:(id)arg2;
- (id)safari_stringByRemovingCharactersInSet:(id)arg1;
- (_Bool)safari_anyComponentSeparatedByString:(id)arg1 hasLocalizedCaseInsensitivePrefix:(id)arg2;
- (_Bool)safari_hasLocalizedCaseInsensitivePrefix:(id)arg1;
- (_Bool)safari_hasCaseInsensitiveSuffix:(id)arg1;
- (_Bool)safari_hasCaseInsensitivePrefix:(id)arg1;
- (_Bool)safari_isCaseAndDiacriticInsensitiveEqualToString:(id)arg1;
- (_Bool)safari_isCaseInsensitiveEqualToString:(id)arg1;
- (_Bool)safari_hasPrefix:(id)arg1;
- (id)safari_simplifiedSiteNameForCredentialLookup;
- (id)safari_simplifiedUserVisibleURLString;
- (id)safari_simplifiedUserVisibleURLStringWithSimplifications:(unsigned long long)arg1 forDisplayOnly:(_Bool)arg2 simplifiedStringOffset:(unsigned long long *)arg3;
- (id)safari_base64DecodedData;
- (id)safari_highLevelDomainFromHost;
- (id)safari_filenameByFixingIllegalCharacters;
- (_Bool)safari_containsInteriorWhitespace;
- (id)safari_stringByTrimmingWhitespace;
- (id)safari_topLevelDomainUsingCFFromComponents:(id)arg1;
@end

