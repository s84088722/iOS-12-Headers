//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface WKInterfaceDevice : NSObject
{
    _Bool _batteryMonitoringEnabled;
    float _batteryLevel;
    double _screenScale;
    long long _batteryState;
    NSString *_preferredContentSizeCategory;
    long long _layoutDirection;
    long long _wristLocation;
    long long _crownOrientation;
    NSString *_deviceSystemVersion;
    NSString *_deviceName;
    NSString *_deviceModel;
    NSString *_deviceLocalizedModel;
    NSString *_deviceSystemName;
    struct CGRect _screenBounds;
}

+ (id)currentDevice;
@property(copy, nonatomic) NSString *deviceSystemName; // @synthesize deviceSystemName=_deviceSystemName;
@property(copy, nonatomic) NSString *deviceLocalizedModel; // @synthesize deviceLocalizedModel=_deviceLocalizedModel;
@property(copy, nonatomic) NSString *deviceModel; // @synthesize deviceModel=_deviceModel;
@property(copy, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(copy, nonatomic) NSString *deviceSystemVersion; // @synthesize deviceSystemVersion=_deviceSystemVersion;
@property(readonly, nonatomic) long long crownOrientation; // @synthesize crownOrientation=_crownOrientation;
@property(readonly, nonatomic) long long wristLocation; // @synthesize wristLocation=_wristLocation;
@property(readonly, nonatomic) long long layoutDirection; // @synthesize layoutDirection=_layoutDirection;
@property(copy, nonatomic) NSString *preferredContentSizeCategory; // @synthesize preferredContentSizeCategory=_preferredContentSizeCategory;
@property(readonly, nonatomic) long long batteryState; // @synthesize batteryState=_batteryState;
@property(readonly, nonatomic) float batteryLevel; // @synthesize batteryLevel=_batteryLevel;
@property(nonatomic, getter=isBatteryMonitoringEnabled) _Bool batteryMonitoringEnabled; // @synthesize batteryMonitoringEnabled=_batteryMonitoringEnabled;
@property(nonatomic) double screenScale; // @synthesize screenScale=_screenScale;
@property(nonatomic) struct CGRect screenBounds; // @synthesize screenBounds=_screenBounds;
- (void).cxx_destruct;
- (void)playHaptic:(long long)arg1;
@property(readonly, nonatomic) NSDictionary *cachedImages;
- (void)removeAllCachedImages;
- (void)removeCachedImageWithName:(id)arg1;
- (_Bool)addCachedImageWithData:(id)arg1 name:(id)arg2;
- (_Bool)addCachedImage:(id)arg1 name:(id)arg2;
@property(readonly, copy, nonatomic) NSString *systemName;
@property(readonly, copy, nonatomic) NSString *localizedModel;
@property(readonly, copy, nonatomic) NSString *model;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly, copy, nonatomic) NSString *systemVersion;

@end

