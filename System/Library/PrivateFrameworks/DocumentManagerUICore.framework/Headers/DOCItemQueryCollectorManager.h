//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;

@interface DOCItemQueryCollectorManager : NSObject
{
    NSMapTable *_collectors;
}

+ (id)sharedInstance;
@property(retain) NSMapTable *collectors; // @synthesize collectors=_collectors;
- (void).cxx_destruct;
- (Class)_descriptorClassForEnumerationIdentifier:(id)arg1;
- (void)unregisterCollection:(id)arg1;
- (id)collectorForEnumerationIdentifier:(id)arg1 properties:(id)arg2;
- (void)enumerationWasResumed:(id)arg1;
- (id)registerCollection:(id)arg1 withEnumerationProperties:(id)arg2;
- (void)collection:(id)arg1 userSearchStringDidChange:(id)arg2;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (id)init;

@end

