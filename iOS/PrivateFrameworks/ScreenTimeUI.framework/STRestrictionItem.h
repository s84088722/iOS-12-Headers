//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ScreenTimeUI/NSCopying-Protocol.h>

@class NSString;

@interface STRestrictionItem : NSObject <NSCopying>
{
    NSString *_rmConfiguration;
    NSString *_payloadKey;
    NSString *_uiLabel;
    unsigned long long _restrictionType;
    id _otherInfo;
}

@property(readonly, copy, nonatomic) id otherInfo; // @synthesize otherInfo=_otherInfo;
@property(readonly, nonatomic) unsigned long long restrictionType; // @synthesize restrictionType=_restrictionType;
@property(readonly, copy, nonatomic) NSString *uiLabel; // @synthesize uiLabel=_uiLabel;
@property(readonly, copy, nonatomic) NSString *payloadKey; // @synthesize payloadKey=_payloadKey;
@property(readonly, copy, nonatomic) NSString *rmConfiguration; // @synthesize rmConfiguration=_rmConfiguration;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithConfiguration:(id)arg1 restrictionKey:(id)arg2 labelName:(id)arg3 type:(unsigned long long)arg4 restrictionValue:(id)arg5;

@end

