//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FamilyCircle/FAFamilyCircleRequest.h>

@class NSString;

@interface FAAddFamilyMemberRequest : FAFamilyCircleRequest
{
    _Bool _memberIsUnder13;
    NSString *_memberAppleID;
    NSString *_memberPassword;
}

@property(readonly) _Bool memberIsUnder13; // @synthesize memberIsUnder13=_memberIsUnder13;
@property(readonly, copy) NSString *memberPassword; // @synthesize memberPassword=_memberPassword;
@property(readonly, copy) NSString *memberAppleID; // @synthesize memberAppleID=_memberAppleID;
- (void).cxx_destruct;
- (void)startRequestWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithFamilyMemberAppleID:(id)arg1 password:(id)arg2 isUnder13:(_Bool)arg3;

@end

