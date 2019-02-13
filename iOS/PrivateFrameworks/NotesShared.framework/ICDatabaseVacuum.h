//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer;
@protocol OS_dispatch_queue;

@interface ICDatabaseVacuum : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSTimer *_timer;
}

+ (void)setLastVacuumDate:(id)arg1;
+ (id)lastVacuumDate;
+ (void)startDatabaseVacuumPolicy;
+ (void)setActiveVacuum:(id)arg1;
+ (id)activeVacuum;
+ (id)activeVacuumQueue;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)vacuumHTMLDatabase;
- (void)vacuum;
- (void)timerFired:(id)arg1;
- (void)stopDatabaseVacuumPolicy;
- (void)startDatabaseVacuumPolicy;
- (id)init;

@end

