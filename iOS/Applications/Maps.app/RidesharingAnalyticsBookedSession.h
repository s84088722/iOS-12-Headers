//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface RidesharingAnalyticsBookedSession : NSObject
{
    long long _statusIssue;
    NSMutableArray *_intentResponseFailures;
    _Bool _sessionEnded;
    _Bool _bookedUsingMaps;
    _Bool _cancelled;
    _Bool _contactedDriver;
    _Bool _viewedInProactiveTray;
    _Bool _tappedProactiveTrayItem;
    _Bool _viewedDetails;
    _Bool _invalidVehicleLocation;
    _Bool _missingVehicleLocation;
    unsigned long long _numberOfInstalledExtensions;
    unsigned long long _numberOfEnabledExtensions;
    NSString *_sessionId;
    NSString *_appVersion;
    NSString *_appIdentifier;
}

@property(copy, nonatomic) NSString *appIdentifier; // @synthesize appIdentifier=_appIdentifier;
@property(nonatomic) _Bool missingVehicleLocation; // @synthesize missingVehicleLocation=_missingVehicleLocation;
@property(nonatomic) _Bool invalidVehicleLocation; // @synthesize invalidVehicleLocation=_invalidVehicleLocation;
@property(nonatomic) _Bool viewedDetails; // @synthesize viewedDetails=_viewedDetails;
@property(nonatomic) _Bool tappedProactiveTrayItem; // @synthesize tappedProactiveTrayItem=_tappedProactiveTrayItem;
@property(nonatomic) _Bool viewedInProactiveTray; // @synthesize viewedInProactiveTray=_viewedInProactiveTray;
@property(nonatomic) _Bool contactedDriver; // @synthesize contactedDriver=_contactedDriver;
@property(nonatomic) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(nonatomic) _Bool bookedUsingMaps; // @synthesize bookedUsingMaps=_bookedUsingMaps;
@property(copy, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) _Bool sessionEnded; // @synthesize sessionEnded=_sessionEnded;
- (void).cxx_destruct;
- (void)mapsForegrounded;
- (void)mapsBackgrounded;
- (void)endSession;
- (void)captureIntent:(int)arg1 withFailure:(int)arg2;
- (void)captureStatusIssue:(long long)arg1;
@property(nonatomic) unsigned long long numberOfEnabledExtensions; // @synthesize numberOfEnabledExtensions=_numberOfEnabledExtensions;
@property(nonatomic) unsigned long long numberOfInstalledExtensions; // @synthesize numberOfInstalledExtensions=_numberOfInstalledExtensions;
- (id)init;

@end

