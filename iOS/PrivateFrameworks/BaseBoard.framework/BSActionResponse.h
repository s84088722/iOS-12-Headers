//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <BaseBoard/BSDescriptionProviding-Protocol.h>
#import <BaseBoard/BSSettingDescriptionProvider-Protocol.h>
#import <BaseBoard/BSXPCCoding-Protocol.h>
#import <BaseBoard/NSCopying-Protocol.h>

@class BSSettings, NSError, NSString;

@interface BSActionResponse : NSObject <NSCopying, BSXPCCoding, BSSettingDescriptionProvider, BSDescriptionProviding>
{
    BSSettings *_info;
    NSError *_error;
}

+ (id)responseForError:(id)arg1;
+ (id)responseWithInfo:(id)arg1;
+ (id)response;
@property(readonly, retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, copy, nonatomic) BSSettings *info; // @synthesize info=_info;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithInfo:(id)arg1 error:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

