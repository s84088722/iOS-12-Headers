//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CNContact, IMAccount, IMHandle, NSString, UIImage;

@interface CKEntity : NSObject
{
    _Bool _enlargedContactImage;
    UIImage *_transcriptContactImage;
    UIImage *_transcriptDrawerContactImage;
    IMHandle *_handle;
    IMAccount *_chatAccount;
    CNContact *_cnContact;
}

+ (id)copyEntityForAddressString:(id)arg1;
+ (id)_copyEntityForAddressString:(id)arg1 onAccount:(id)arg2;
@property(retain, nonatomic) CNContact *cnContact; // @synthesize cnContact=_cnContact;
@property(retain, nonatomic) IMAccount *chatAccount; // @synthesize chatAccount=_chatAccount;
@property(retain, nonatomic) IMHandle *handle; // @synthesize handle=_handle;
@property(nonatomic) _Bool enlargedContactImage; // @synthesize enlargedContactImage=_enlargedContactImage;
@property(readonly, nonatomic) UIImage *transcriptDrawerContactImage; // @synthesize transcriptDrawerContactImage=_transcriptDrawerContactImage;
@property(readonly, nonatomic) UIImage *transcriptContactImage; // @synthesize transcriptContactImage=_transcriptContactImage;
- (void).cxx_destruct;
- (id)_croppedImageFromImageData:(id)arg1;
@property(readonly, nonatomic) UIImage *locationShareBalloonContactImage;
@property(readonly, nonatomic) UIImage *locationMapViewContactImage;
- (void)_setBusinessInfoForMutableContact:(id)arg1 enlargedImageData:(id)arg2;
@property(readonly, copy, nonatomic) NSString *textVibrationIdentifier;
@property(readonly, copy, nonatomic) NSString *textToneIdentifier;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly, copy, nonatomic) NSString *fullName;
@property(readonly, copy, nonatomic) NSString *IDSCanonicalAddress;
@property(readonly, copy, nonatomic) NSString *originalAddress;
@property(readonly, copy, nonatomic) NSString *rawAddress;
@property(readonly, nonatomic) int propertyType;
@property(readonly, nonatomic) int identifier;
- (void)contactStoreDidChange:(id)arg1;
@property(readonly, copy, nonatomic) NSString *abbreviatedDisplayName;
@property(readonly, nonatomic) _Bool isMe;
@property(readonly, nonatomic) void *abRecord;
@property(readonly, nonatomic) IMHandle *defaultIMHandle;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithChat:(id)arg1 imHandle:(id)arg2;
- (id)initWithIMHandle:(id)arg1;
- (id)personViewControllerWithDelegate:(id)arg1 isUnknown:(_Bool *)arg2 contactStoreProvider:(id)arg3;
- (id)personViewControllerWithDelegate:(id)arg1 isUnknown:(_Bool *)arg2;

@end

