//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NTKLocationManager : NSObject
{
}

+ (id)fallbackLocation;
+ (id)sharedLocationManager;
- (id)anyLocation;
- (id)previousLocation;
- (id)currentLocation;
- (void)stopLocationUpdatesForToken:(struct NSString *)arg1;
- (struct NSString *)startLocationUpdatesWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;

@end
