//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDateComponents, NSString;

@interface _TtC8FMClient19ClientConfiguration : NSObject
{
    // Error parsing type: , name: nearbyScanDuration
    // Error parsing type: , name: nearbyScanEnabled
    // Error parsing type: , name: nearbyScanWhileAuthenticated
    // Error parsing type: , name: deviceNameSyncInterval
    // Error parsing type: , name: deviceNameSyncEnabled
}

+ (_Bool)supportsSecureCoding;
- (CDUnknownBlockType).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSString *description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithNearbyScanDuration:(double)arg1 nearbyScanEnabled:(_Bool)arg2 nearbyScanWhileAuthenticated:(_Bool)arg3 deviceNameSyncInterval:(id)arg4 deviceNameSyncEnabled:(_Bool)arg5;
@property(nonatomic, readonly) _Bool deviceNameSyncEnabled; // @synthesize deviceNameSyncEnabled;
@property(nonatomic, readonly) NSDateComponents *deviceNameSyncInterval; // @synthesize deviceNameSyncInterval;
@property(nonatomic, readonly) _Bool nearbyScanWhileAuthenticated; // @synthesize nearbyScanWhileAuthenticated;
@property(nonatomic, readonly) _Bool nearbyScanEnabled; // @synthesize nearbyScanEnabled;
@property(nonatomic, readonly) double nearbyScanDuration; // @synthesize nearbyScanDuration;

@end

