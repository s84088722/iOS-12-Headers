//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IMRuntimeTest;

@interface IMRuntimeTestRun : NSObject
{
    _Bool _succeeded;
    IMRuntimeTest *_test;
}

@property(getter=hasSucceeded) _Bool succeeded; // @synthesize succeeded=_succeeded;
@property(readonly) IMRuntimeTest *test; // @synthesize test=_test;
- (void).cxx_destruct;
- (void)stop;
- (void)start;
- (void)recordFailureWithDescription:(id)arg1 inFile:(id)arg2 atLine:(unsigned long long)arg3 expected:(_Bool)arg4;
- (id)initWithTest:(id)arg1;

@end

