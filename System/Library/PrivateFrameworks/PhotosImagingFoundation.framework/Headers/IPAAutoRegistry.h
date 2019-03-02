//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface IPAAutoRegistry : NSObject
{
    NSObject<OS_dispatch_queue> *_serializer;
    NSMutableDictionary *_entries;
}

+ (id)sharedRegistry;
+ (void)setSharedRegistry:(id)arg1;
- (void).cxx_destruct;
- (_Bool)isPersistableAutoIdentifier:(id)arg1 forOperationIdentifier:(id)arg2;
- (Class)settingsClassForAutoIdentifier:(id)arg1 operationIdentifier:(id)arg2;
- (Class)calculatorClassForAutoIdentifier:(id)arg1 operationIdentifier:(id)arg2;
- (_Bool)hasMappingForAutoIdentifier:(id)arg1 operationIdentifier:(id)arg2;
- (id)_entryForAutoIdentifier:(id)arg1 operationIdentifier:(id)arg2;
- (void)registerAutoCalculatorClass:(Class)arg1 settingsClass:(Class)arg2 toAutoIdentifier:(id)arg3 operationIdentifier:(id)arg4 persistable:(_Bool)arg5;
- (void)registerAutoCalculatorClass:(Class)arg1 settingsClass:(Class)arg2 toAutoIdentifier:(id)arg3 operationIdentifier:(id)arg4;
- (id)init;

@end
