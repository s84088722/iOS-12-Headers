//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SearchFoundation/SFActionItem.h>

#import <SearchFoundation/NSCopying-Protocol.h>
#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/SFMediaOffer-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, NSURL, SFImage, SFLatLng, SFPunchout;

@interface SFMediaOffer : SFActionItem <SFMediaOffer, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int isEnabled:1;
    } _has;
    _Bool _isEnabled;
    SFActionItem *_actionItem;
    NSString *_sublabel;
    NSString *_offerIdentifier;
    SFImage *_image;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) SFImage *image; // @synthesize image=_image;
@property(nonatomic) _Bool isEnabled; // @synthesize isEnabled=_isEnabled;
@property(copy, nonatomic) NSString *offerIdentifier; // @synthesize offerIdentifier=_offerIdentifier;
@property(copy, nonatomic) NSString *sublabel; // @synthesize sublabel=_sublabel;
@property(retain, nonatomic) SFActionItem *actionItem; // @synthesize actionItem=_actionItem;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)hasIsEnabled;
- (id)initWithProtobuf:(id)arg1;

// Remaining properties
@property(copy, nonatomic) NSString *applicationBundleIdentifier;
@property(retain, nonatomic) SFImage *baseIcon;
@property(copy, nonatomic) NSString *contactIdentifier;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSString *email;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) SFImage *icon;
@property(nonatomic) _Bool isITunes;
@property(nonatomic) _Bool isOverlay;
@property(copy, nonatomic) NSString *label;
@property(copy, nonatomic) NSString *labelForLocalMedia;
@property(copy, nonatomic) NSString *labelITunes;
@property(nonatomic) double latitude;
@property(copy, nonatomic) NSString *localMediaIdentifier;
@property(retain, nonatomic) SFLatLng *location;
@property(nonatomic) double longitude;
@property(copy, nonatomic) NSData *mapsData;
@property(copy, nonatomic) NSString *messageIdentifier;
@property(copy, nonatomic) NSURL *messageURL;
@property(copy, nonatomic) NSString *offerType;
@property(copy, nonatomic) NSString *phoneNumber;
@property(copy, nonatomic) NSString *provider;
@property(retain, nonatomic) SFPunchout *punchout;
@property(nonatomic) _Bool requiresLocalMedia;
@property(copy, nonatomic) NSArray *storeIdentifiers;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *type;

@end

