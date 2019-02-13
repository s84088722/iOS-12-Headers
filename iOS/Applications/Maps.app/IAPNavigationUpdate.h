//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IAPNavigationAccessoryComponent, NSDictionary, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface IAPNavigationUpdate : NSObject
{
    NSString *_debugProperties;
    IAPNavigationAccessoryComponent *_component;
}

+ (unsigned short)_IAPNavManeuverStateForGEONavigationAnnouncementStage:(unsigned long long)arg1;
+ (unsigned short)_IAPNavManeuverTypeForGEOManeuverType:(int)arg1;
+ (unsigned short)_IAPNavStateForGEONavigationState:(int)arg1;
+ (id)_integersKeyed;
+ (id)_enumProperties;
+ (void)getStringValue:(id *)arg1 displayUnits:(unsigned short *)arg2 forRemainingDistance:(double)arg3 preciseLongDistances:(_Bool)arg4;
@property(retain, nonatomic) IAPNavigationAccessoryComponent *component; // @synthesize component=_component;
@property(readonly) NSString *debugProperties; // @synthesize debugProperties=_debugProperties;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)_debugDescriptionForProperty:(id)arg1 withValue:(id)arg2;
- (_Bool)_propertyIsEnum:(id)arg1;
@property(readonly) NSNumber *navigationRouteGuidanceDisplayComponentID;
@property(readonly) NSString *logFormat;
@property(copy) NSDictionary *iapFormat;
- (void)resetProperties;

@end

