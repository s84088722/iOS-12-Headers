//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface _XCTCompoundExpectationImplementation : NSObject
{
    unsigned long long _compoundExpectationType;
    NSArray *_subexpectations;
}

@property(readonly, copy, nonatomic) NSArray *subexpectations; // @synthesize subexpectations=_subexpectations;
@property(readonly, nonatomic) unsigned long long compoundExpectationType; // @synthesize compoundExpectationType=_compoundExpectationType;
- (void).cxx_destruct;
- (void)dealloc;
- (void)cleanup;
- (id)initWithType:(unsigned long long)arg1 subexpectations:(id)arg2;

@end

