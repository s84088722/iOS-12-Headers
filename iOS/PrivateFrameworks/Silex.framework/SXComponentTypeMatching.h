//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface SXComponentTypeMatching : NSObject
{
    NSMutableArray *_descriptions;
}

@property(readonly, nonatomic) NSMutableArray *descriptions; // @synthesize descriptions=_descriptions;
- (void).cxx_destruct;
- (void)removeDescription:(id)arg1;
- (void)addDescription:(id)arg1;
- (id)match:(id)arg1;
- (id)init;

@end

