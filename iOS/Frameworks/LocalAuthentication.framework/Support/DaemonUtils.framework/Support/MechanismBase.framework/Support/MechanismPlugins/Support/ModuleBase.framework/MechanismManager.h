//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MechanismContext, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface MechanismManager : NSObject
{
    NSMutableDictionary *_plugins;
    MechanismContext *_mechanismContext;
    NSObject<OS_dispatch_queue> *_serverQueue;
    long long _evaluatedPolicy;
}

@property(readonly, nonatomic) long long evaluatedPolicy; // @synthesize evaluatedPolicy=_evaluatedPolicy;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serverQueue; // @synthesize serverQueue=_serverQueue;
- (void).cxx_destruct;
- (id)loadMechanism:(long long)arg1 initParams:(id)arg2 className:(id)arg3 error:(id *)arg4;
- (id)_pathForPlugin:(long long)arg1 error:(id *)arg2;
- (_Bool)_preloadForPlugin:(long long)arg1 className:(id)arg2 userId:(id)arg3 error:(id *)arg4;
- (id)loadMechanism:(long long)arg1 initParams:(id)arg2 error:(id *)arg3;
- (id)init;

@end

