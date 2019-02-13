//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MMCSController, NSString;

@interface MMCSRequestorContext : NSObject
{
    MMCSController *_controller;
    NSString *_transferID;
}

@property(readonly, retain) NSString *transferID; // @synthesize transferID=_transferID;
@property(readonly, retain) MMCSController *controller; // @synthesize controller=_controller;
- (void)removeFromController;
- (void)dealloc;
- (id)initWithController:(id)arg1 transferID:(id)arg2;

@end

