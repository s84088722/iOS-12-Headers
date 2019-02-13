//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface _MDIndexExtensionLoader : NSObject
{
    id _matchingContext;
    NSObject<OS_dispatch_queue> *_queue;
    long long _notificationCount;
}

+ (id)_matchDictionary;
@property(nonatomic) long long notificationCount; // @synthesize notificationCount=_notificationCount;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) id matchingContext; // @synthesize matchingContext=_matchingContext;
- (void).cxx_destruct;
- (void)stopLookingForExtensions;
- (void)startLookingForExtensionsWithMatchUpdateHandler:(CDUnknownBlockType)arg1;
- (void)findExtensionsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)_filterIndexExtensions:(id)arg1 outFileProviderBundleMap:(id *)arg2;
- (id)init;

@end

