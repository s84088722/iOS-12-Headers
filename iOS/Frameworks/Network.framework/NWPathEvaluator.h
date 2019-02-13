//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NWEndpoint, NWParameters, NWPath;
@protocol OS_nw_path_evaluator;

@interface NWPathEvaluator : NSObject
{
    NWEndpoint *_endpoint;
    NSObject<OS_nw_path_evaluator> *_internalEvaluator;
    NWPath *_internalPath;
    NWParameters *_parameters;
}

+ (id)sharedDefaultEvaluator;
+ (void)savePathEvaluator:(id)arg1;
+ (id)copySavedPathEvaluatorForEndpoint:(id)arg1 parameters:(id)arg2;
+ (void)initialize;
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
@property(readonly) NWParameters *parameters; // @synthesize parameters=_parameters;
@property(retain) NWPath *internalPath; // @synthesize internalPath=_internalPath;
@property(readonly) NSObject<OS_nw_path_evaluator> *internalEvaluator; // @synthesize internalEvaluator=_internalEvaluator;
@property(readonly, nonatomic) NWEndpoint *endpoint; // @synthesize endpoint=_endpoint;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)matchesEndpoint:(id)arg1 parameters:(id)arg2;
- (_Bool)requestNexus;
- (void)triggerVoluntaryPathAgentsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)satisfyPathAgentsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)triggerPathAgentsIncludingVoluntary:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) NWPath *path;
- (id)copyPath;
- (id)init;
- (id)initWithListenParameters:(id)arg1;
- (id)initWithBrowseDescriptor:(id)arg1 parameters:(id)arg2;
- (id)initWithEndpoint:(id)arg1 parameters:(id)arg2;
- (id)initWithEvaluator:(id)arg1 parameters:(id)arg2;
- (void)dealloc;

@end

