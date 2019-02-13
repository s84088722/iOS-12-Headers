//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardServices/NSCopying-Protocol.h>
#import <SpringBoardServices/NSSecureCoding-Protocol.h>

@class NSData, NSDictionary, NSString, UIImage;

@interface SBSCardItem : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _requiresPasscode;
    NSString *_identifier;
    NSString *_categoryIdentifier;
    NSData *_iconData;
    NSString *_title;
    NSString *_subtitle;
    NSString *_body;
    NSString *_bundleName;
    NSDictionary *_userInfo;
    UIImage *_thumbnail;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) UIImage *thumbnail; // @synthesize thumbnail=_thumbnail;
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(copy, nonatomic) NSString *bundleName; // @synthesize bundleName=_bundleName;
@property(nonatomic) _Bool requiresPasscode; // @synthesize requiresPasscode=_requiresPasscode;
@property(copy, nonatomic) NSString *body; // @synthesize body=_body;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSData *iconData; // @synthesize iconData=_iconData;
@property(copy, nonatomic) NSString *categoryIdentifier; // @synthesize categoryIdentifier=_categoryIdentifier;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)sortDate;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 iconData:(id)arg2 title:(id)arg3 body:(id)arg4 requiresPasscode:(_Bool)arg5 bundleName:(id)arg6 userInfo:(id)arg7;
- (id)initWithIdentifier:(id)arg1 categoryIdentifier:(id)arg2 iconData:(id)arg3 title:(id)arg4 subtitle:(id)arg5 body:(id)arg6 requiresPasscode:(_Bool)arg7 bundleName:(id)arg8 userInfo:(id)arg9;

@end

