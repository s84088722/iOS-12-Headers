//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MPUFoundation/MPUUserActivityContext.h>

@class NSArray, NSMutableArray;

@interface MPUMutableUserActivityContext : MPUUserActivityContext
{
    NSMutableArray *_containerItems;
}

- (void).cxx_destruct;
- (void)removeContainerItem:(id)arg1;
- (void)insertContainerItem:(id)arg1 afterContainerItem:(id)arg2;
- (void)addContainerItem:(id)arg1;
@property(nonatomic) long long originatorVersion; // @dynamic originatorVersion;
@property(nonatomic) long long originatorType; // @dynamic originatorType;
@property(copy, nonatomic) NSArray *containerItems;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

