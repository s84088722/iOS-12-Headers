//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IMLocalObject;
@protocol OS_voucher, OS_xpc_object;

@interface IMMessageContext : NSObject
{
    NSObject<OS_xpc_object> *_xpcMessage;
    IMLocalObject *_localObject;
    id _context;
    _Bool _boost;
    NSObject<OS_voucher> *_voucher;
}

@property(retain) NSObject<OS_voucher> *voucher; // @synthesize voucher=_voucher;
@property(retain) id context; // @synthesize context=_context;
@property _Bool shouldBoost; // @synthesize shouldBoost=_boost;
@property(retain) IMLocalObject *localObject; // @synthesize localObject=_localObject;
@property(retain) NSObject<OS_xpc_object> *xpcMessage; // @synthesize xpcMessage=_xpcMessage;
- (void)dealloc;
- (id)init;

@end

