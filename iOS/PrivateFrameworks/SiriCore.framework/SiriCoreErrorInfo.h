//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError;

@interface SiriCoreErrorInfo : NSObject
{
    _Bool _isPeerConnectionError;
    _Bool _isPeerNotNearbyError;
    NSError *_error;
}

@property(nonatomic) _Bool isPeerNotNearbyError; // @synthesize isPeerNotNearbyError=_isPeerNotNearbyError;
@property(nonatomic) _Bool isPeerConnectionError; // @synthesize isPeerConnectionError=_isPeerConnectionError;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;

@end

