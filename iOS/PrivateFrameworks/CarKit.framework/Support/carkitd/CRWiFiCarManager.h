//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CRWiFiCarManager : NSObject
{
    _Bool _power;
}

@property(nonatomic) _Bool power; // @synthesize power=_power;
- (void)setInCar:(_Bool)arg1 carPlayUUID:(id)arg2;
- (_Bool)removeNetworkCredentialsForCarPlayUUID:(id)arg1;
- (_Bool)saveNetworkCredentials:(id)arg1 forCarPlayUUID:(id)arg2;
- (_Bool)hasCredentialsForCarPlayUUID:(id)arg1;

@end

