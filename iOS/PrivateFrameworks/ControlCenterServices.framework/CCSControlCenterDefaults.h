//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BaseBoard/BSAbstractDefaultDomain.h>

@interface CCSControlCenterDefaults : BSAbstractDefaultDomain
{
}

+ (id)standardDefaults;
@property(nonatomic) _Bool shouldEnableTigrisCarryUI;
- (unsigned long long)_defaultPresentationGesture;
- (void)_bindAndRegisterDefaults;
- (id)init;

// Remaining properties
@property(nonatomic) unsigned long long presentationGesture; // @dynamic presentationGesture;
@property(nonatomic) _Bool shouldEnableInternalModules; // @dynamic shouldEnableInternalModules;
@property(nonatomic) _Bool shouldEnablePrototypeFeatures; // @dynamic shouldEnablePrototypeFeatures;
@property(nonatomic) unsigned long long userInvocationCount; // @dynamic userInvocationCount;

@end
