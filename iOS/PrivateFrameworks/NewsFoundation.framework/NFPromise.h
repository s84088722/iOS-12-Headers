//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NFPromiseSeal;

@interface NFPromise : NSObject
{
    NFPromiseSeal *_seal;
}

+ (id)firstly:(CDUnknownBlockType)arg1;
+ (id)asVoid:(id)arg1;
+ (id)asVoid;
+ (id)asDelay:(double)arg1 onQueue:(id)arg2 withError:(id)arg3;
+ (id)asDelay:(double)arg1 onQueue:(id)arg2 withValue:(id)arg3;
+ (id)asDelay:(double)arg1 withError:(id)arg2;
+ (id)asDelay:(double)arg1 withValue:(id)arg2;
@property(retain, nonatomic) NFPromiseSeal *seal; // @synthesize seal=_seal;
- (void).cxx_destruct;
- (id)alwaysOn:(id)arg1 always:(CDUnknownBlockType)arg2;
- (id)errorOn:(id)arg1 error:(CDUnknownBlockType)arg2;
- (id)thenOn:(id)arg1 then:(CDUnknownBlockType)arg2;
- (id)always:(CDUnknownBlockType)arg1;
- (id)error:(CDUnknownBlockType)arg1;
- (id)then:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithError:(id)arg1;
- (id)initWithValue:(id)arg1;
- (id)initWithResolver:(CDUnknownBlockType)arg1;
- (id)init;

@end

