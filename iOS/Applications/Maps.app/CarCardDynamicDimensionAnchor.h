//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLayoutAnchor;

__attribute__((visibility("hidden")))
@interface CarCardDynamicDimensionAnchor : NSObject
{
    NSLayoutAnchor *_anchor;
    long long _equality;
}

+ (id)dynamicDimensionAnchor:(id)arg1 equality:(long long)arg2;
@property(nonatomic) long long equality; // @synthesize equality=_equality;
@property(retain, nonatomic) NSLayoutAnchor *anchor; // @synthesize anchor=_anchor;
- (void).cxx_destruct;
- (id)description;
- (id)constraintFromAnchor:(id)arg1;

@end

