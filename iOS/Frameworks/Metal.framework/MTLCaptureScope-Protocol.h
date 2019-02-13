//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Metal/NSObject-Protocol.h>

@class NSString;
@protocol MTLCommandQueue, MTLDevice;

@protocol MTLCaptureScope <NSObject>
@property(readonly, nonatomic) id <MTLCommandQueue> commandQueue;
@property(readonly, nonatomic) id <MTLDevice> device;
@property(copy) NSString *label;
- (void)endScope;
- (void)beginScope;
@end
