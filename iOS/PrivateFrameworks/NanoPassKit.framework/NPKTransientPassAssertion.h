//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSXPCConnection;

@interface NPKTransientPassAssertion : NSObject
{
    _Bool _requestServiceMode;
    NSXPCConnection *_xpcConnection;
    NSString *_uniqueID;
}

@property(retain, nonatomic) NSString *uniqueID; // @synthesize uniqueID=_uniqueID;
@property(retain, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(nonatomic) _Bool requestServiceMode; // @synthesize requestServiceMode=_requestServiceMode;
- (void).cxx_destruct;
- (id)_remoteObjectProxy;
- (void)_resyncState;
- (void)invalidate;
- (id)initWithPassWithUniqueID:(id)arg1;

@end

