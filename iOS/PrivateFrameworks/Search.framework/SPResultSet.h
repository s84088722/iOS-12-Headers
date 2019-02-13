//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Search/NSSecureCoding-Protocol.h>

@class NSArray;

@interface SPResultSet : NSObject <NSSecureCoding>
{
    NSArray *_resultSections;
    NSArray *_stableSections;
}

+ (void)initialize;
+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSArray *stableSections; // @synthesize stableSections=_stableSections;
@property(readonly, nonatomic) NSArray *resultSections; // @synthesize resultSections=_resultSections;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSections:(id)arg1 stableSections:(id)arg2;
- (id)initWithSections:(id)arg1;

@end

