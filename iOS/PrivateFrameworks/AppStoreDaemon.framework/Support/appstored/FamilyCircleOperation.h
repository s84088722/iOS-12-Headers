//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class FamilyCircle, NSString;

@interface FamilyCircleOperation : ISOperation
{
    _Bool _fetchITunesAccountNames;
    long long _authenticationPromptStyle;
    NSString *_userAgent;
    FamilyCircle *_familyCircle;
}

@property(readonly, nonatomic) FamilyCircle *familyCircle; // @synthesize familyCircle=_familyCircle;
@property(copy, nonatomic) NSString *userAgent; // @synthesize userAgent=_userAgent;
@property(nonatomic) _Bool fetchITunesAccountNames; // @synthesize fetchITunesAccountNames=_fetchITunesAccountNames;
@property(nonatomic) long long authenticationPromptStyle; // @synthesize authenticationPromptStyle=_authenticationPromptStyle;
- (void).cxx_destruct;
- (void)_writeCacheWithFamilyCircle:(id)arg1 accountIdentifier:(id)arg2;
- (id)_familyCircleForDictionary:(id)arg1;
- (id)_cachePath;
- (id)_cachedFamilyCircleWithAccountIdentifier:(id)arg1;
- (void)run;

@end

