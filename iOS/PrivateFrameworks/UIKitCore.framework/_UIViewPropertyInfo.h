//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol UIVectorOperatable;

__attribute__((visibility("hidden")))
@interface _UIViewPropertyInfo : NSObject
{
    id <UIVectorOperatable> _previousValue;
    id <UIVectorOperatable> _value;
}

+ (id)viewPropertyInfoWithValue:(id)arg1 previousValue:(id)arg2;
@property(retain, nonatomic) id <UIVectorOperatable> value; // @synthesize value=_value;
@property(retain, nonatomic) id <UIVectorOperatable> previousValue; // @synthesize previousValue=_previousValue;
- (void).cxx_destruct;

@end
