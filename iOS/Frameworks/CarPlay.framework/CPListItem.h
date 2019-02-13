//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CarPlay/NSSecureCoding-Protocol.h>

@class NSString, NSUUID, UIImage;

@interface CPListItem : NSObject <NSSecureCoding>
{
    _Bool _showsDisclosureIndicator;
    NSString *_text;
    NSString *_detailText;
    UIImage *_image;
    id _userInfo;
    NSUUID *_identifier;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, nonatomic) _Bool showsDisclosureIndicator; // @synthesize showsDisclosureIndicator=_showsDisclosureIndicator;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
@property(readonly, copy, nonatomic) NSString *detailText; // @synthesize detailText=_detailText;
@property(readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithText:(id)arg1 detailText:(id)arg2 image:(id)arg3 showsDisclosureIndicator:(_Bool)arg4;
- (id)initWithText:(id)arg1 detailText:(id)arg2 image:(id)arg3;
- (id)initWithText:(id)arg1 detailText:(id)arg2;
- (id)init;

@end

