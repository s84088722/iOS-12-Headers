//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AXEventData : NSObject
{
    struct _AXEventDataStorage _storage;
}

+ (id)dataWithBytes:(char *)arg1 length:(long long)arg2;
+ (id)dataWithSender:(long long)arg1;
@property(readonly, nonatomic) long long dataLength;
@property(readonly, nonatomic) char *dataBytes;
@property(readonly, nonatomic) _Bool wasPostedByAccessibility;
@property(readonly, nonatomic) long long eventSenderIdentifier;
- (id)description;
- (id)init;

@end

