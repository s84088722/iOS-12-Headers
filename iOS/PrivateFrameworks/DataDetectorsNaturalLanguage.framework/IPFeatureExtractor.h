//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface IPFeatureExtractor : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)defaultExtractor;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (id)queueType;
- (id)featuresForTextString:(id)arg1 inMessageUnit:(id)arg2 context:(id)arg3;
- (id)init;

@end

