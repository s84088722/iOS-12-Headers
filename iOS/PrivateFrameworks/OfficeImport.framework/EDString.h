//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <OfficeImport/EDImmutableObject-Protocol.h>
#import <OfficeImport/NSCopying-Protocol.h>

@class EDPhoneticInfo, EDRunsCollection, NSString;

@interface EDString : NSObject <NSCopying, EDImmutableObject>
{
    NSString *mString;
    EDRunsCollection *mRuns;
    EDPhoneticInfo *mPhoneticInfo;
    _Bool mDoNotModify;
}

+ (id)edStringWithString:(id)arg1 runs:(id)arg2;
+ (id)edStringWithString:(id)arg1;
+ (id)string;
@property(readonly, copy) NSString *description;
- (void)setDoNotModify:(_Bool)arg1;
- (void)setRuns:(id)arg1;
- (id)runs;
- (void)setPhoneticInfo:(id)arg1;
- (id)phoneticInfo;
- (void)removeCharactersInSet:(id)arg1;
- (void)removeCharacterAtIndex:(unsigned long long)arg1;
- (void)appendString:(id)arg1;
- (void)prependString:(id)arg1;
- (void)setString:(id)arg1;
- (id)string;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToEDString:(id)arg1;
- (_Bool)isEqualToString:(id)arg1;
- (void)dealloc;
- (id)initWithString:(id)arg1 runs:(id)arg2;
- (id)initWithString:(id)arg1;
- (id)init;
- (_Bool)isEmpty;
- (id)firstRunEffects;
- (id)firstRunFont;
- (_Bool)areThereRuns;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

