//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoAnalysis/NSObject-Protocol.h>

@class PHAJobCoalescer, PHAWorkerJob;

@protocol PHAJobCoalescerDelegate <NSObject>
- (void)jobCoalescer:(PHAJobCoalescer *)arg1 didProduceJob:(PHAWorkerJob *)arg2;
@end

