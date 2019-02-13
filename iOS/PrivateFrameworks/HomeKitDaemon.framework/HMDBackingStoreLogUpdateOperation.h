//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/HMDBackingStoreOperation.h>

@class NSArray;

@interface HMDBackingStoreLogUpdateOperation : HMDBackingStoreOperation
{
    NSArray *_values;
    long long _maskValue;
    long long _setValue;
}

@property(nonatomic) long long setValue; // @synthesize setValue=_setValue;
@property(nonatomic) long long maskValue; // @synthesize maskValue=_maskValue;
@property(retain, nonatomic) NSArray *values; // @synthesize values=_values;
- (void).cxx_destruct;
- (id)mainReturningError;
- (id)initWithRowIDs:(id)arg1 failedPushedTo:(unsigned long long)arg2;
- (id)initWithRowIDs:(id)arg1 successfullyPushedTo:(unsigned long long)arg2;
- (id)initWithRowIDs:(id)arg1 mask:(long long)arg2 set:(long long)arg3;

@end

