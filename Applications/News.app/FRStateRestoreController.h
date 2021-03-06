//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;

@interface FRStateRestoreController : NSObject
{
    _Bool _isStateRestorationAllowed;
    NSMapTable *_objectStore;
}

@property(retain, nonatomic) NSMapTable *objectStore; // @synthesize objectStore=_objectStore;
@property(readonly, nonatomic) _Bool isStateRestorationAllowed; // @synthesize isStateRestorationAllowed=_isStateRestorationAllowed;
- (void).cxx_destruct;
- (void)applicationDidEnterBackground;
- (void)applicationWillSaveState;
- (void)registerObject:(id)arg1;
- (id)objectForIdentifier:(id)arg1;
- (id)initWithAllowedStateRestorationTimeWindow:(double)arg1;
- (id)init;

@end

