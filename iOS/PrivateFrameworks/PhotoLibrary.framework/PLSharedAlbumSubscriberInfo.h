//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, PLCloudSharedAlbumInvitationRecord;

@interface PLSharedAlbumSubscriberInfo : NSObject
{
    _Bool _isOwner;
    PLCloudSharedAlbumInvitationRecord *_invitationRecord;
    NSString *_identifier;
    NSString *_email;
    NSString *_phone;
    NSString *_firstName;
    NSString *_lastName;
    NSString *_displayName;
}

+ (id)_allSubscribersForAlbum:(id)arg1 includeMyself:(_Bool)arg2;
+ (id)allSubscribersForAvatarViewWithAlbumWithObjectID:(id)arg1 managedObjectContext:(id)arg2;
+ (id)allSubscribersForAlbum:(id)arg1;
@property(readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(readonly, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property(readonly, nonatomic) NSString *phone; // @synthesize phone=_phone;
@property(readonly, nonatomic) NSString *email; // @synthesize email=_email;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) _Bool isOwner; // @synthesize isOwner=_isOwner;
@property(readonly, retain, nonatomic) PLCloudSharedAlbumInvitationRecord *invitationRecord; // @synthesize invitationRecord=_invitationRecord;
- (id)matchingContactWithKeysToFetch:(id)arg1 outMatchingKey:(id *)arg2 outMatchingIdentifier:(id *)arg3;
- (void)dealloc;
- (id)initWithInvitationRecord:(id)arg1 identifier:(id)arg2 email:(id)arg3 phone:(id)arg4 firstName:(id)arg5 lastName:(id)arg6 displayName:(id)arg7 isOwner:(_Bool)arg8;
- (id)init;

@end

