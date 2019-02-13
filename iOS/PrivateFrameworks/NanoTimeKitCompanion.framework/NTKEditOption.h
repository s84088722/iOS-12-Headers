//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoTimeKitCompanion/NSSecureCoding-Protocol.h>

@class CLKDevice, NSString;

@interface NTKEditOption : NSObject <NSSecureCoding>
{
    CLKDevice *_device;
}

+ (_Bool)supportsSecureCoding;
+ (id)optionsDescription;
+ (struct CGSize)sizeForSwatchStyle:(long long)arg1;
@property(readonly, nonatomic) CLKDevice *device; // @synthesize device=_device;
- (void).cxx_destruct;
- (_Bool)optionExistsInOSVersion:(unsigned int)arg1;
- (_Bool)isValidOption;
- (id)initWithJSONObjectRepresentation:(id)arg1 forDevice:(id)arg2;
- (id)JSONObjectRepresentation;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
@property(readonly, nonatomic) NSString *localizedNameForAction;
@property(readonly, nonatomic) NSString *localizedName;
@property(readonly, nonatomic) NSString *dailySnapshotKey;
- (id)initWithDevice:(id)arg1;
@property(readonly, nonatomic) long long swatchStyle;

@end

