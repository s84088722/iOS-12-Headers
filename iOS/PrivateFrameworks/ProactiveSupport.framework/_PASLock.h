//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _PASLock : NSObject
{
    struct _opaque_pthread_mutex_t _lock;
    struct _opaque_pthread_t {
        long long _field1;
        struct __darwin_pthread_handler_rec *_field2;
        char _field3[8176];
    } *_owner;
    id _guardedData;
}

- (void).cxx_destruct;
- (id)unsafeGuardedData;
- (id)guardedDataAssertingLockContext;
- (void)runWithLockAcquired:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithGuardedData:(id)arg1;

@end

