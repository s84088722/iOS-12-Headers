//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FindMyDevice/FMDAccessory-Protocol.h>
#import <FindMyDevice/FMDAudioAccessory-Protocol.h>
#import <FindMyDevice/NSSecureCoding-Protocol.h>

@class FMDAccessoryIdentifier, NSString, NSURL;

@interface FMDGenericAccessory : NSObject <NSSecureCoding, FMDAudioAccessory, FMDAccessory>
{
    FMDAccessoryIdentifier *_accessoryIdentifier;
    NSString *_audioRoutingIdentifier;
    NSURL *_audioURL;
}

+ (_Bool)supportsSecureCoding;
+ (id)copyAccessory:(id)arg1;
@property(retain, nonatomic) NSURL *audioURL; // @synthesize audioURL=_audioURL;
@property(retain, nonatomic) NSString *audioRoutingIdentifier; // @synthesize audioRoutingIdentifier=_audioRoutingIdentifier;
@property(retain, nonatomic) FMDAccessoryIdentifier *accessoryIdentifier; // @synthesize accessoryIdentifier=_accessoryIdentifier;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool playingSound;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

