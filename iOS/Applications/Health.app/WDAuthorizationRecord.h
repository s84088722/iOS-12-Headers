//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class _HKAuthorizationRecord;

@interface WDAuthorizationRecord : NSObject
{
    _HKAuthorizationRecord *_internalAuthorizationRecord;
    long long _status;
}

@property long long status; // @synthesize status=_status;
- (void).cxx_destruct;
- (_Bool)requestedReading;
- (_Bool)requestedSharing;
- (id)init;
- (id)initWithInternalAuthorizationRecord:(id)arg1;

@end
