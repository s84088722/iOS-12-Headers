//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppStoreDaemon/NSCopying-Protocol.h>
#import <AppStoreDaemon/NSSecureCoding-Protocol.h>

@class NSArray, NSDate, NSDictionary, NSNumber, NSString;

@interface ASDSoftwareUpdate : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _downloaded;
    _Bool _perDevice;
    _Bool _profileValidated;
    NSArray *_blockedBy;
    NSDate *_installDate;
    NSDictionary *_rawUpdateDictionary;
    NSDate *_timestamp;
    long long _updateState;
    NSDictionary *_metrics;
    long long _rawUpdateState;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) long long rawUpdateState; // @synthesize rawUpdateState=_rawUpdateState;
@property(copy, nonatomic) NSDictionary *metrics; // @synthesize metrics=_metrics;
@property(nonatomic) long long updateState; // @synthesize updateState=_updateState;
@property(copy, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) NSDictionary *rawUpdateDictionary; // @synthesize rawUpdateDictionary=_rawUpdateDictionary;
@property(nonatomic, getter=isProfileValidated) _Bool profileValidated; // @synthesize profileValidated=_profileValidated;
@property(nonatomic, getter=isPerDevice) _Bool perDevice; // @synthesize perDevice=_perDevice;
@property(nonatomic, getter=isDownloaded) _Bool downloaded; // @synthesize downloaded=_downloaded;
@property(copy, nonatomic) NSDate *installDate; // @synthesize installDate=_installDate;
@property(copy, nonatomic) NSArray *blockedBy; // @synthesize blockedBy=_blockedBy;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSDictionary *updateDictionary;
@property(readonly, nonatomic) long long storeItemIdentifier;
- (id)releaseDate;
@property(readonly, nonatomic) long long parentalControlsRank;
@property(readonly, nonatomic) NSNumber *externalVersionIdentifier;
@property(readonly, nonatomic) NSString *buyParams;
@property(readonly, nonatomic) NSString *bundleIdentifier;
- (id)initWithUpdateDictionary:(id)arg1;

@end

