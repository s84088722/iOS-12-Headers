//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MPSubscriptionStatusPlaybackInformation : NSObject
{
    id _subscriptionStatusObject;
    _Bool _definitiveInformation;
    _Bool _hasPlaybackCapability;
    _Bool _requiresCarrierManualVerification;
    _Bool _shouldUseLease;
    _Bool _shouldUseAccountLessStreaming;
}

@property(readonly, nonatomic) _Bool shouldUseAccountLessStreaming; // @synthesize shouldUseAccountLessStreaming=_shouldUseAccountLessStreaming;
@property(readonly, nonatomic) _Bool shouldUseLease; // @synthesize shouldUseLease=_shouldUseLease;
@property(readonly, nonatomic) _Bool requiresCarrierManualVerification; // @synthesize requiresCarrierManualVerification=_requiresCarrierManualVerification;
@property(readonly, nonatomic) _Bool hasPlaybackCapability; // @synthesize hasPlaybackCapability=_hasPlaybackCapability;
@property(readonly, nonatomic, getter=isDefinitiveInformation) _Bool definitiveInformation; // @synthesize definitiveInformation=_definitiveInformation;
- (void).cxx_destruct;
- (id)description;
- (id)initWithICSubscriptionStatus:(id)arg1;
- (id)initWithSubscriptionStatus:(id)arg1;

@end

