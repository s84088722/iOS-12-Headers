//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MCUIProvisioningProfile : NSObject
{
    _Bool _isAppleInternal;
    _Bool _isBeta;
    _Bool _isFreeDeveloperProvisioningProfile;
    _Bool _isUniversalProvisioningProfile;
    NSString *_allowedApplicationIdentifierEntitlement;
    NSString *_UUID;
}

@property(nonatomic) _Bool isUniversalProvisioningProfile; // @synthesize isUniversalProvisioningProfile=_isUniversalProvisioningProfile;
@property(nonatomic) _Bool isFreeDeveloperProvisioningProfile; // @synthesize isFreeDeveloperProvisioningProfile=_isFreeDeveloperProvisioningProfile;
@property(nonatomic) _Bool isBeta; // @synthesize isBeta=_isBeta;
@property(nonatomic) _Bool isAppleInternal; // @synthesize isAppleInternal=_isAppleInternal;
@property(retain, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
@property(retain, nonatomic) NSString *allowedApplicationIdentifierEntitlement; // @synthesize allowedApplicationIdentifierEntitlement=_allowedApplicationIdentifierEntitlement;
- (void).cxx_destruct;
- (_Bool)allowsApplicationIdentifierEntitlement:(id)arg1;
- (id)initWithProfile:(void *)arg1;

@end

