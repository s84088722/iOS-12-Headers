//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVExternalDeviceIconInternal, NSData;

@interface AVExternalDeviceIcon : NSObject
{
    AVExternalDeviceIconInternal *_externalDeviceIcon;
}

@property(readonly, nonatomic, getter=isPrerendered) _Bool prerendered;
@property(readonly, nonatomic) NSData *imageData;
@property(readonly, nonatomic) struct CGSize pixelSize;
- (void)finalize;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1;

@end

