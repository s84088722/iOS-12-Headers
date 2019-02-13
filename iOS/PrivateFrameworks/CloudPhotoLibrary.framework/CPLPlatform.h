//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, NSString;
@protocol OS_dispatch_queue;

@interface CPLPlatform : NSObject
{
    NSMapTable *_abstractClassToImplementation;
    NSObject<OS_dispatch_queue> *_lock;
    NSString *_suffix;
}

+ (id)currentPlatform;
+ (id)defaultPlatform;
+ (void)setDefaultPlatform:(id)arg1;
+ (void)setProxyImplementationForPlatform:(id)arg1;
@property(copy, nonatomic) NSString *suffix; // @synthesize suffix=_suffix;
- (void).cxx_destruct;
- (id)description;
- (id)newPlatformImplementationForObject:(id)arg1;
- (Class)implementationClassForAbstractClass:(Class)arg1;
- (void)setPlatformImplementation:(Class)arg1 forClass:(Class)arg2;
- (id)init;

@end

