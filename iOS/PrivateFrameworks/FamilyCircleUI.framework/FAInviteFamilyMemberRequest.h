//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FamilyCircleUI/FAFamilyRequest.h>

@class NSString;

@interface FAInviteFamilyMemberRequest : FAFamilyRequest
{
    NSString *_inviteeEmail;
    NSString *_inviteeCompositeName;
    NSString *_inviteeShortName;
}

@property(copy, nonatomic) NSString *inviteeShortName; // @synthesize inviteeShortName=_inviteeShortName;
@property(copy, nonatomic) NSString *inviteeCompositeName; // @synthesize inviteeCompositeName=_inviteeCompositeName;
@property(copy, nonatomic) NSString *inviteeEmail; // @synthesize inviteeEmail=_inviteeEmail;
- (void).cxx_destruct;
- (id)urlRequest;
- (id)url;
- (_Bool)isUserInitiated;

@end

