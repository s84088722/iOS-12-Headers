//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PreferencesUI/CoreTelephonyClientSubscriberDelegate-Protocol.h>

@class CoreTelephonyClient, NSMutableDictionary, NSString;

@interface PSUICoreTelephonySubscriberCache : NSObject <CoreTelephonyClientSubscriberDelegate>
{
    CoreTelephonyClient *_client;
    NSMutableDictionary *_mobileEquipmentInfoDict;
    NSMutableDictionary *_isoCountryCodesDict;
}

+ (id)sharedInstance;
@property(retain) NSMutableDictionary *isoCountryCodesDict; // @synthesize isoCountryCodesDict=_isoCountryCodesDict;
@property(retain) NSMutableDictionary *mobileEquipmentInfoDict; // @synthesize mobileEquipmentInfoDict=_mobileEquipmentInfoDict;
@property(retain, nonatomic) CoreTelephonyClient *client; // @synthesize client=_client;
- (void).cxx_destruct;
- (void)simStatusDidChange:(id)arg1 status:(id)arg2;
- (id)shortLabel:(id)arg1;
- (id)isoCountryCode:(id)arg1;
- (void)fetchCountryCodes;
- (unsigned long long)mobileEquipmentInfoLength;
- (id)mobileEquipmentInfo:(id)arg1;
- (void)fetchMobileEquipmentInfo;
- (void)willEnterForeground;
- (id)init;
- (id)initPrivate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

