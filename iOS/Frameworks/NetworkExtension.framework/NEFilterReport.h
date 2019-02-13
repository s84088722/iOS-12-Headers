//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NSCopying-Protocol.h>
#import <NetworkExtension/NSSecureCoding-Protocol.h>

@class NEFilterFlow;

@interface NEFilterReport : NSObject <NSSecureCoding, NSCopying>
{
    NEFilterFlow *_flow;
    long long _action;
}

+ (_Bool)supportsSecureCoding;
@property long long action; // @synthesize action=_action;
@property(copy) NEFilterFlow *flow; // @synthesize flow=_flow;
- (void).cxx_destruct;
- (id)initWithFlow:(id)arg1 action:(long long)arg2;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
