//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSupport/NSSecureCoding-Protocol.h>

@class NSData, NSNumber, NSString;

@interface MSPLowFuelDetails : NSObject <NSSecureCoding>
{
    NSString *_title;
    NSString *_subtitle;
    NSNumber *_engineType;
    NSData *_iconData;
    NSData *_iconDataCarPlay;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSData *iconDataCarPlay; // @synthesize iconDataCarPlay=_iconDataCarPlay;
@property(retain, nonatomic) NSData *iconData; // @synthesize iconData=_iconData;
@property(copy, nonatomic) NSNumber *engineType; // @synthesize engineType=_engineType;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 engineType:(id)arg3;

@end

