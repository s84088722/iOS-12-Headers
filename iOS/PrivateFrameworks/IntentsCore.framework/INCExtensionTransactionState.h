//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class INIntent, INIntentResponse, NSSet;

@interface INCExtensionTransactionState : NSObject
{
    long long _type;
    INIntent *_intent;
    INIntentResponse *_intentResponse;
    NSSet *_userActivities;
}

@property(readonly, copy, nonatomic) NSSet *userActivities; // @synthesize userActivities=_userActivities;
@property(readonly, copy, nonatomic) INIntentResponse *intentResponse; // @synthesize intentResponse=_intentResponse;
@property(readonly, copy, nonatomic) INIntent *intent; // @synthesize intent=_intent;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)description;
- (id)initWithType:(long long)arg1 intent:(id)arg2 intentResponse:(id)arg3 userActivities:(id)arg4;

@end

