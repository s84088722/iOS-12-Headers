//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray;

@protocol RouteExtensionRidesList <NSObject>
@property(readonly, nonatomic, getter=isLoading) _Bool loading;
@property(readonly, nonatomic) NSArray *choiceGroups;
@property(readonly, nonatomic) NSArray *preferredChoices;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1 changeHandler:(void (^)(id <RouteExtensionRidesList>, id))arg2;
@end

