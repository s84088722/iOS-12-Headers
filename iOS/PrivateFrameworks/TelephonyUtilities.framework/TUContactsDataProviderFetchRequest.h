//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface TUContactsDataProviderFetchRequest : NSObject
{
    _Bool _useNetworkCountryCode;
    _Bool _voicemail;
    _Bool _emergency;
    _Bool _blocked;
    _Bool _conversation;
    NSString *_contactIdentifier;
    NSArray *_auxiliaryKeysToFetch;
    NSString *_phoneNumberPrefixHint;
    NSString *_callerNameFromNetwork;
    NSString *_isoCountryCode;
    NSArray *_handles;
}

@property(readonly, copy, nonatomic) NSArray *handles; // @synthesize handles=_handles;
@property(readonly, copy, nonatomic) NSString *isoCountryCode; // @synthesize isoCountryCode=_isoCountryCode;
@property(readonly, copy, nonatomic) NSString *callerNameFromNetwork; // @synthesize callerNameFromNetwork=_callerNameFromNetwork;
@property(readonly, nonatomic, getter=isConversation) _Bool conversation; // @synthesize conversation=_conversation;
@property(readonly, nonatomic, getter=isBlocked) _Bool blocked; // @synthesize blocked=_blocked;
@property(readonly, nonatomic, getter=isEmergency) _Bool emergency; // @synthesize emergency=_emergency;
@property(readonly, nonatomic, getter=isVoicemail) _Bool voicemail; // @synthesize voicemail=_voicemail;
@property(nonatomic) _Bool useNetworkCountryCode; // @synthesize useNetworkCountryCode=_useNetworkCountryCode;
@property(copy, nonatomic) NSString *phoneNumberPrefixHint; // @synthesize phoneNumberPrefixHint=_phoneNumberPrefixHint;
@property(copy, nonatomic) NSArray *auxiliaryKeysToFetch; // @synthesize auxiliaryKeysToFetch=_auxiliaryKeysToFetch;
@property(copy, nonatomic) NSString *contactIdentifier; // @synthesize contactIdentifier=_contactIdentifier;
- (void).cxx_destruct;
- (id)description;
- (id)initWithHandle:(id)arg1;
- (id)initWithHandles:(id)arg1;
- (id)initWithCall:(id)arg1;
- (id)init;

@end

