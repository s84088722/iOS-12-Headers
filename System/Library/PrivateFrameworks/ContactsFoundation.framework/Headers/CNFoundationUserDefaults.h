//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsFoundation/CNFoundationUserDefaults-Protocol.h>

@class CNUserDefaults, NSString;

@interface CNFoundationUserDefaults : NSObject <CNFoundationUserDefaults>
{
    CNUserDefaults *_userDefaults;
}

+ (unsigned long long)_convertNSNameOrderToCNNameOrder:(long long)arg1;
+ (id)sharedDefaults;
+ (id)registeredDefaults;
+ (id)makeRegisteredDefaults;
@property(retain) CNUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(nonatomic, getter=isShortNameFormatEnabled) _Bool shortNameFormatEnabled;
@property unsigned long long shortNameFormat;
@property _Bool preferNickname;
@property unsigned long long nameOrder;
- (id)countryCode;
- (unsigned long long)sortOrder;
- (unsigned long long)newContactNameOrder;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
