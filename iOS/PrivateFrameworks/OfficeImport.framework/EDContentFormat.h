//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <OfficeImport/EDKeyedObject-Protocol.h>
#import <OfficeImport/NSCopying-Protocol.h>

@class EDString, NSString;

@interface EDContentFormat : NSObject <EDKeyedObject, NSCopying>
{
    EDString *mFormatString;
    unsigned long long mFormatId;
    _Bool mBuiltIn;
    _Bool mReferenced;
}

+ (id)contentFormatWithFormatString:(id)arg1;
+ (id)contentFormatWithFormatString:(id)arg1 formatId:(unsigned long long)arg2;
+ (id)contentFormatWithNSString:(id)arg1 formatId:(unsigned long long)arg2 builtIn:(_Bool)arg3;
@property(readonly, copy) NSString *description;
- (_Bool)referenced;
- (_Bool)builtIn;
- (unsigned long long)formatId;
- (id)formatString;
- (long long)key;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToContentFormat:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;
- (void)setReferenced:(_Bool)arg1;
- (void)setFormatId:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

