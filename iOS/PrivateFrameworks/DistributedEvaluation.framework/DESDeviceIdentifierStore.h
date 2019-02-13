//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSURL;
@protocol OS_dispatch_queue;

@interface DESDeviceIdentifierStore : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSURL *_storeURL;
    NSMutableDictionary *_deviceIdentifiers;
}

+ (void)initialize;
@property(retain, nonatomic) NSMutableDictionary *deviceIdentifiers; // @synthesize deviceIdentifiers=_deviceIdentifiers;
@property(retain, nonatomic) NSURL *storeURL; // @synthesize storeURL=_storeURL;
- (void).cxx_destruct;
- (void)_writeIdentifierStore;
- (void)_readIdentifierStore;
- (id)identifierForRecordType:(id)arg1;
- (id)initWithStoreURL:(id)arg1;

@end

