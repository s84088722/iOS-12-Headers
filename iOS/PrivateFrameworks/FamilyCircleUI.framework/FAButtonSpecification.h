//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FamilyCircleUI/NSCopying-Protocol.h>

@class NSDictionary, NSString;

@interface FAButtonSpecification : NSObject <NSCopying>
{
    NSString *_title;
    long long _action;
    NSDictionary *_parameters;
}

@property(copy, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(nonatomic) long long action; // @synthesize action=_action;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTitle:(id)arg1 action:(long long)arg2 parameters:(id)arg3;

@end

