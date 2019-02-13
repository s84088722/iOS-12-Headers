//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Foundation/NSSecureCoding-Protocol.h>

@class NSString;

@interface _NSCloudSharingDescriptor : NSObject <NSSecureCoding>
{
    long long _operation;
    NSString *_sharedContentType;
    long long _numberOfInvitations;
    _Bool _invitationsSentViaThirdPartyService;
    _Bool _publicShare;
}

+ (_Bool)supportsSecureCoding;
@property(copy) NSString *sharedContentType; // @synthesize sharedContentType=_sharedContentType;
@property long long numberOfInvitations; // @synthesize numberOfInvitations=_numberOfInvitations;
@property _Bool publicShare; // @synthesize publicShare=_publicShare;
@property _Bool invitationsSentViaThirdPartyService; // @synthesize invitationsSentViaThirdPartyService=_invitationsSentViaThirdPartyService;
@property long long operation; // @synthesize operation=_operation;
- (id)_variantSubstrings;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end

