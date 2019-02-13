//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudPhotoLibrary/NSCopying-Protocol.h>
#import <CloudPhotoLibrary/NSSecureCoding-Protocol.h>

@class CPLResource, NSData, NSString;

@interface CPLAdjustments : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_adjustmentType;
    NSString *_adjustmentCompoundVersion;
    NSString *_adjustmentCreatorCode;
    unsigned long long _adjustmentSourceType;
    NSData *_simpleAdjustmentData;
    NSString *_similarToOriginalAdjustmentsFingerprint;
    NSString *_otherAdjustmentsFingerprint;
    unsigned long long _adjustmentRenderTypes;
    CPLResource *_adjustmentData;
    NSString *_creatorCode;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *creatorCode; // @synthesize creatorCode=_creatorCode;
@property(retain, nonatomic) CPLResource *adjustmentData; // @synthesize adjustmentData=_adjustmentData;
@property(nonatomic) unsigned long long adjustmentRenderTypes; // @synthesize adjustmentRenderTypes=_adjustmentRenderTypes;
@property(copy, nonatomic) NSString *otherAdjustmentsFingerprint; // @synthesize otherAdjustmentsFingerprint=_otherAdjustmentsFingerprint;
@property(copy, nonatomic) NSString *similarToOriginalAdjustmentsFingerprint; // @synthesize similarToOriginalAdjustmentsFingerprint=_similarToOriginalAdjustmentsFingerprint;
@property(retain, nonatomic) NSData *simpleAdjustmentData; // @synthesize simpleAdjustmentData=_simpleAdjustmentData;
@property(nonatomic) unsigned long long adjustmentSourceType; // @synthesize adjustmentSourceType=_adjustmentSourceType;
@property(copy, nonatomic) NSString *adjustmentCreatorCode; // @synthesize adjustmentCreatorCode=_adjustmentCreatorCode;
@property(copy, nonatomic) NSString *adjustmentCompoundVersion; // @synthesize adjustmentCompoundVersion=_adjustmentCompoundVersion;
@property(copy, nonatomic) NSString *adjustmentType; // @synthesize adjustmentType=_adjustmentType;
- (void).cxx_destruct;
- (id)adjustmentSimpleDescription;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

