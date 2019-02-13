//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SASettingResponse.h>

#import <SAObjects/SASettingSupplier-Protocol.h>

@class NSString, SASettingEntity;

@interface SASettingSetValueResponse : SASettingResponse <SASettingSupplier>
{
}

+ (id)setValueResponseWithDictionary:(id)arg1 context:(id)arg2;
+ (id)setValueResponse;
- (_Bool)requiresResponse;
@property(retain, nonatomic) SASettingEntity *setting;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

