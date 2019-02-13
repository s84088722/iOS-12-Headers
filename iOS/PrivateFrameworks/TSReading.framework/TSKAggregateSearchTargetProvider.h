//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSReading/TSKSearchTargetProvider-Protocol.h>

@class NSArray, NSString;

@interface TSKAggregateSearchTargetProvider : NSObject <TSKSearchTargetProvider>
{
    NSArray *_searchTargetProviders;
}

@property(retain, nonatomic) NSArray *searchTargetProviders; // @synthesize searchTargetProviders=_searchTargetProviders;
- (unsigned long long)p_firstTargetIndexForProvider:(id)arg1;
- (void)p_enumerateTargetProvidersFromTargetIndex:(unsigned long long)arg1 direction:(unsigned long long)arg2 action:(CDUnknownBlockType)arg3;
- (unsigned long long)nextRootSearchTargetIndexFromIndex:(unsigned long long)arg1 forString:(id)arg2 options:(unsigned long long)arg3 inDirection:(unsigned long long)arg4;
- (void)withRootSearchTargetAtIndex:(unsigned long long)arg1 executeBlock:(CDUnknownBlockType)arg2;
- (unsigned long long)rootSearchTargetCountThroughIndex:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithSearchTargetProviders:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

