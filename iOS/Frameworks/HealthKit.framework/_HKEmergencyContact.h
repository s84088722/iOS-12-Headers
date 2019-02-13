//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class NSNumber, NSString;

@interface _HKEmergencyContact : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_name;
    NSNumber *_nameRecordID;
    NSString *_nameContactIdentifier;
    NSString *_phoneNumber;
    NSNumber *_phoneNumberPropertyID;
    NSString *_phoneNumberContactIdentifier;
    NSString *_phoneNumberLabel;
    NSString *_relationship;
}

+ (id)nameForContact:(id)arg1;
+ (id)emergencyContactWithContact:(id)arg1 property:(id)arg2;
+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *relationship; // @synthesize relationship=_relationship;
@property(copy, nonatomic) NSString *phoneNumberLabel; // @synthesize phoneNumberLabel=_phoneNumberLabel;
@property(copy, nonatomic) NSString *phoneNumberContactIdentifier; // @synthesize phoneNumberContactIdentifier=_phoneNumberContactIdentifier;
@property(retain, nonatomic) NSNumber *phoneNumberPropertyID; // @synthesize phoneNumberPropertyID=_phoneNumberPropertyID;
@property(copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(copy, nonatomic) NSString *nameContactIdentifier; // @synthesize nameContactIdentifier=_nameContactIdentifier;
@property(retain, nonatomic) NSNumber *nameRecordID; // @synthesize nameRecordID=_nameRecordID;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)init;

@end

