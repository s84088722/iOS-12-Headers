//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol ICDeviceBrowserDelegate;

@interface ICDeviceBrowser : NSObject
{
    id _privateData;
}

- (id)internalDevices;
@property(readonly) NSArray *devices;
- (void)stop;
- (int)start;
@property(readonly, getter=isBrowsing) _Bool browsing;
@property id <ICDeviceBrowserDelegate> delegate;
- (void)dealloc;
- (id)init;

@end

